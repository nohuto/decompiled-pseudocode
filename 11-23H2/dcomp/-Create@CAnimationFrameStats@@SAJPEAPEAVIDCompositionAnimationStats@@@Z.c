/*
 * XREFs of ?Create@CAnimationFrameStats@@SAJPEAPEAVIDCompositionAnimationStats@@@Z @ 0x180003E78
 * Callers:
 *     DCompositionCreateAnimationStats @ 0x180064410 (DCompositionCreateAnimationStats.c)
 * Callees:
 *     ?Release@CAnimationFrameStats@@UEAAKXZ @ 0x180003D10 (-Release@CAnimationFrameStats@@UEAAKXZ.c)
 *     ??0CAnimationFrameStats@@IEAA@T_LARGE_INTEGER@@@Z @ 0x180003F28 (--0CAnimationFrameStats@@IEAA@T_LARGE_INTEGER@@@Z.c)
 *     ?Initialize@CCompFrameStats@@IEAAJXZ @ 0x180004074 (-Initialize@CCompFrameStats@@IEAAJXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAnimationFrameStats::Create(struct IDCompositionAnimationStats **a1)
{
  CAnimationFrameStats *v2; // rax
  CAnimationFrameStats *v3; // rdi
  CAnimationFrameStats *v4; // rbx
  int v5; // esi
  LARGE_INTEGER Frequency; // [rsp+48h] [rbp+10h] BYREF
  CAnimationFrameStats *v8; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  QueryPerformanceFrequency(&Frequency);
  v2 = (CAnimationFrameStats *)DefaultHeap::Alloc(0xAF8uLL);
  v8 = v2;
  if ( v2 )
    v3 = CAnimationFrameStats::CAnimationFrameStats(v2, Frequency);
  else
    v3 = 0LL;
  v4 = v3;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v3 + 2);
    v4 = v3;
    v5 = CCompFrameStats::Initialize(v3);
    if ( v5 >= 0 )
    {
      v4 = 0LL;
      *a1 = (CAnimationFrameStats *)((char *)v3 + 160);
    }
  }
  else
  {
    v5 = -2147024882;
  }
  if ( v4 )
    CAnimationFrameStats::Release(v4);
  return (unsigned int)v5;
}
