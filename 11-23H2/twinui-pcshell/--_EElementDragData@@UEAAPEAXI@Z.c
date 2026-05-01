/*
 * XREFs of ??_EElementDragData@@UEAAPEAXI@Z @ 0x18058F490
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1ElementDragData@@UEAA@XZ @ 0x18058F150 (--1ElementDragData@@UEAA@XZ.c)
 */

ElementDragData *__fastcall ElementDragData::`vector deleting destructor'(ElementDragData *this, char a2)
{
  ElementDragData::~ElementDragData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
