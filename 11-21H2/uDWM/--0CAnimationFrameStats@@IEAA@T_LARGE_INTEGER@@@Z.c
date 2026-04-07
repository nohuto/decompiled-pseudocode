/*
 * XREFs of ??0CAnimationFrameStats@@IEAA@T_LARGE_INTEGER@@@Z @ 0x18000596C
 * Callers:
 *     ?Create@CAnimationFrameStats@@SAJPEAPEAVIAnimationFrameStats@@@Z @ 0x180005754 (-Create@CAnimationFrameStats@@SAJPEAPEAVIAnimationFrameStats@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180060F40 (memset_0.c)
 */

CAnimationFrameStats *__fastcall CAnimationFrameStats::CAnimationFrameStats(
        CAnimationFrameStats *this,
        union _LARGE_INTEGER a2)
{
  CAnimationFrameStats *result; // rax

  *((_WORD *)this + 6) = 1;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CCompFrameStats::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  *((union _LARGE_INTEGER *)this + 2) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  *((_BYTE *)this + 144) = 0;
  *(_QWORD *)this = &CAnimationFrameStats::`vftable'{for `CCompFrameStats'};
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 17) = &CAnimationFrameStats::`vftable'{for `IAnimationFrameStats'};
  memset_0((char *)this + 160, 0, 0xA44uLL);
  result = this;
  *((_DWORD *)this + 697) = 0;
  return result;
}
