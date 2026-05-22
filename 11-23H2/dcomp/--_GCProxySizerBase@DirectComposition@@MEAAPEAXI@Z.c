/*
 * XREFs of ??_GCProxySizerBase@DirectComposition@@MEAAPEAXI@Z @ 0x1800FABE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

DirectComposition::CProxySizerBase *__fastcall DirectComposition::CProxySizerBase::`scalar deleting destructor'(
        DirectComposition::CProxySizerBase *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CProxySizerBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
