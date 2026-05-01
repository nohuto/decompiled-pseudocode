/*
 * XREFs of ??_ETaskbarSearchAppPositioner@@UEAAPEAXI@Z @ 0x1803A05F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1TaskbarSearchAppPositioner@@UEAA@XZ @ 0x1803A059C (--1TaskbarSearchAppPositioner@@UEAA@XZ.c)
 */

TaskbarSearchAppPositioner *__fastcall TaskbarSearchAppPositioner::`vector deleting destructor'(
        TaskbarSearchAppPositioner *this,
        char a2)
{
  TaskbarSearchAppPositioner::~TaskbarSearchAppPositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
