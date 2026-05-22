/*
 * XREFs of ??_ECMergedRect@@UEAAPEAXI@Z @ 0x1800F9980
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

CMergedRect *__fastcall CMergedRect::`vector deleting destructor'(CMergedRect *this, char a2)
{
  *(_QWORD *)this = &CMergedRect::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
