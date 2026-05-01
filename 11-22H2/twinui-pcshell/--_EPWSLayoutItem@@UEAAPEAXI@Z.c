/*
 * XREFs of ??_EPWSLayoutItem@@UEAAPEAXI@Z @ 0x1804976D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1PWSLayoutItem@@UEAA@XZ @ 0x180497690 (--1PWSLayoutItem@@UEAA@XZ.c)
 */

PWSLayoutItem *__fastcall PWSLayoutItem::`vector deleting destructor'(PWSLayoutItem *this, char a2)
{
  PWSLayoutItem::~PWSLayoutItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
