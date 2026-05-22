/*
 * XREFs of ?Release@CHwndTarget@DirectComposition@@UEAAKXZ @ 0x18006A380
 * Callers:
 *     ?CreateTargetHelper@CDevice@DirectComposition@@AEAAJPEAUHWND__@@KPEAPEAUIDCompositionTarget@@@Z @ 0x18006A448 (-CreateTargetHelper@CDevice@DirectComposition@@AEAAJPEAUHWND__@@KPEAPEAUIDCompositionTarget@@@Z.c)
 * Callees:
 *     ??1CHwndTarget@DirectComposition@@IEAA@XZ @ 0x18006A3C8 (--1CHwndTarget@DirectComposition@@IEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CHwndTarget::Release(DirectComposition::CHwndTarget *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    DirectComposition::CHwndTarget::~CHwndTarget(this);
    operator delete(this, 0x28uLL);
  }
  return v2;
}
