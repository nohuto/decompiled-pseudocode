/*
 * XREFs of ??_GTaskViewFrame@@UEAAPEAXI@Z @ 0x180073410
 * Callers:
 *     <none>
 * Callees:
 *     ??1TaskViewFrame@@UEAA@XZ @ 0x18007DCDC (--1TaskViewFrame@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

TaskViewFrame *__fastcall TaskViewFrame::`scalar deleting destructor'(TaskViewFrame *this, char a2)
{
  TaskViewFrame::~TaskViewFrame(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x218uLL);
  return this;
}
