/*
 * XREFs of ??_GTaskbarLayoutItem@@UEAAPEAXI@Z @ 0x1803EB720
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1TaskbarLayoutItem@@UEAA@XZ @ 0x1803EB6DC (--1TaskbarLayoutItem@@UEAA@XZ.c)
 */

TaskbarLayoutItem *__fastcall TaskbarLayoutItem::`scalar deleting destructor'(TaskbarLayoutItem *this, char a2)
{
  TaskbarLayoutItem::~TaskbarLayoutItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
