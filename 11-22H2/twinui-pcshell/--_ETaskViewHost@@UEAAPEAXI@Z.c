/*
 * XREFs of ??_ETaskViewHost@@UEAAPEAXI@Z @ 0x1800733D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1TaskViewHost@@UEAA@XZ @ 0x18007F830 (--1TaskViewHost@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

TaskViewHost *__fastcall TaskViewHost::`vector deleting destructor'(TaskViewHost *this, char a2)
{
  TaskViewHost::~TaskViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x2F0uLL);
  return this;
}
