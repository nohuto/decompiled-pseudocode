/*
 * XREFs of ??_GTaskViewFrame@@UEAAPEAXI@Z @ 0x1800102B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1TaskViewFrame@@UEAA@XZ @ 0x180010AF8 (--1TaskViewFrame@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

TaskViewFrame *__fastcall TaskViewFrame::`scalar deleting destructor'(TaskViewFrame *this, char a2)
{
  TaskViewFrame::~TaskViewFrame(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x1E8uLL);
  return this;
}
