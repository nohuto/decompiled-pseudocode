/*
 * XREFs of ??_EPriorityBoostHelper@@UEAAPEAXI@Z @ 0x18017AD60
 * Callers:
 *     <none>
 * Callees:
 *     ??1PriorityBoostHelper@@UEAA@XZ @ 0x18017AD9C (--1PriorityBoostHelper@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

PriorityBoostHelper *__fastcall PriorityBoostHelper::`vector deleting destructor'(PriorityBoostHelper *this, char a2)
{
  PriorityBoostHelper::~PriorityBoostHelper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x78uLL);
  return this;
}
