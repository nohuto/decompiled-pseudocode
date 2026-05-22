/*
 * XREFs of ??0CAnimationFrameStats@@IEAA@T_LARGE_INTEGER@@@Z @ 0x180003F28
 * Callers:
 *     ?Create@CAnimationFrameStats@@SAJPEAPEAVIDCompositionAnimationStats@@@Z @ 0x180003E78 (-Create@CAnimationFrameStats@@SAJPEAPEAVIDCompositionAnimationStats@@@Z.c)
 * Callees:
 *     ??0CCompFrameStats@@IEAA@T_LARGE_INTEGER@@J@Z @ 0x180003F88 (--0CCompFrameStats@@IEAA@T_LARGE_INTEGER@@J@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 */

CAnimationFrameStats *__fastcall CAnimationFrameStats::CAnimationFrameStats(
        CAnimationFrameStats *this,
        union _LARGE_INTEGER a2)
{
  CCompFrameStats::CCompFrameStats(this, a2, 500);
  *(_QWORD *)this = &CAnimationFrameStats::`vftable'{for `CCompFrameStats'};
  *((_QWORD *)this + 20) = &CAnimationFrameStats::`vftable'{for `IDCompositionAnimationStats'};
  memset_0((char *)this + 168, 0, 0xA44uLL);
  *(_QWORD *)((char *)this + 2796) = 0LL;
  *((_WORD *)this + 1402) = 0;
  return this;
}
