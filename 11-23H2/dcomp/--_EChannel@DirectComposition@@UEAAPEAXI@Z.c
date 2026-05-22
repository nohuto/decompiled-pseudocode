/*
 * XREFs of ??_EChannel@DirectComposition@@UEAAPEAXI@Z @ 0x180100330
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

DirectComposition::Channel *__fastcall DirectComposition::Channel::`vector deleting destructor'(
        DirectComposition::Channel *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::Channel::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
