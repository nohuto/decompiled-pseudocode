/*
 * XREFs of ??_GCProxySizer@DirectComposition@@UEAAPEAXI@Z @ 0x1800FABA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

DirectComposition::CProxySizer *__fastcall DirectComposition::CProxySizer::`scalar deleting destructor'(
        DirectComposition::CProxySizer *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CProxySizerBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
