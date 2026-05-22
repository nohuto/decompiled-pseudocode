/*
 * XREFs of ??_ECCompositorSynchronizedObject@DirectComposition@@UEAAPEAXI@Z @ 0x1800E91A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

DirectComposition::CCompositorSynchronizedObject *__fastcall DirectComposition::CCompositorSynchronizedObject::`vector deleting destructor'(
        DirectComposition::CCompositorSynchronizedObject *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CCompositorSynchronizedObject::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
