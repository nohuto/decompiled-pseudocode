/*
 * XREFs of ??_ESnapLayoutBase@@UEAAPEAXI@Z @ 0x1805ABD40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

SnapLayoutBase *__fastcall SnapLayoutBase::`vector deleting destructor'(SnapLayoutBase *this, char a2)
{
  *(_QWORD *)this = &SnapLayoutBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
