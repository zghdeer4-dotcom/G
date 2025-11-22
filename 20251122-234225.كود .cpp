#include <iostream>
using namespace std;

// Parent Class

class Worker
{
private:
    string name;
    int code;
    double salary;

public:
    void setInfo(string n, int c, double s)
    {
        name = n;
        code = c;
        salary = s;
    }

    void showInfo()
    {
        cout << "----- Worker Information -----" << endl;
        cout << "Name       : " << name << endl;
        cout << "Code       : " << code << endl;
        cout << "Salary     : $" << salary << endl;
    }
};


// Child Class

class Engineer : public Worker
{
private:
    string department;
    string level;
    string specialty;

public:
    void setEngineerInfo(string dept, string lvl, string spec)
    {
        department = dept;
        level = lvl;
        specialty = spec;
    }

    void showEngineerInfo()
    {
        cout << "----- Engineer Details -----" << endl;
        cout << "Department : " << department << endl;
        cout << "Level      : " << level << endl;
        cout << "Specialty  : " << specialty << endl;
    }
};

int main()
{
    Engineer e1;

    e1.setInfo("Ghdeer Hadi", 2244, 750.0);
    e1.setEngineerInfo("Computer Engineering", "Senior", "Embedded Systems");

    e1.showInfo();
    e1.showEngineerInfo();

    return 0;
}
