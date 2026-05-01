/*
 * XREFs of ??_EDragData@@UEAAPEAXI@Z @ 0x180522950
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1DragData@@UEAA@XZ @ 0x1805228E8 (--1DragData@@UEAA@XZ.c)
 */

DragData *__fastcall DragData::`vector deleting destructor'(DragData *this, char a2)
{
  DragData::~DragData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
