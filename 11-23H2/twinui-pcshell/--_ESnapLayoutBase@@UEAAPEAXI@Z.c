/*
 * XREFs of ??_ESnapLayoutBase@@UEAAPEAXI@Z @ 0x18067EC10
 * Callers:
 *     ??1?$unique_ptr@VColumnSnapLayout@@U?$default_delete@VColumnSnapLayout@@@std@@@std@@QEAA@XZ @ 0x18067EBE0 (--1-$unique_ptr@VColumnSnapLayout@@U-$default_delete@VColumnSnapLayout@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

SnapLayoutBase *__fastcall SnapLayoutBase::`vector deleting destructor'(SnapLayoutBase *this, char a2)
{
  *(_QWORD *)this = &SnapLayoutBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
