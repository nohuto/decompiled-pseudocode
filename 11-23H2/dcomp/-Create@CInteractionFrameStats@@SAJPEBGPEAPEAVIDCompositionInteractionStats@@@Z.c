/*
 * XREFs of ?Create@CInteractionFrameStats@@SAJPEBGPEAPEAVIDCompositionInteractionStats@@@Z @ 0x1801A55D4
 * Callers:
 *     DCompositionCreateInteractionStats @ 0x1801A6270 (DCompositionCreateInteractionStats.c)
 * Callees:
 *     ?Release@CCompFrameStats@@UEAAKXZ @ 0x180003D50 (-Release@CCompFrameStats@@UEAAKXZ.c)
 *     ?Initialize@CCompFrameStats@@IEAAJXZ @ 0x180004074 (-Initialize@CCompFrameStats@@IEAAJXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CInteractionFrameStats@@IEAA@PEBGT_LARGE_INTEGER@@@Z @ 0x1801A5108 (--0CInteractionFrameStats@@IEAA@PEBGT_LARGE_INTEGER@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CInteractionFrameStats::Create(size_t *a1, struct IDCompositionInteractionStats **a2)
{
  CInteractionFrameStats *v4; // rax
  CInteractionFrameStats *v5; // rdi
  CCompFrameStats *v6; // rbx
  int v7; // esi
  LARGE_INTEGER Frequency; // [rsp+50h] [rbp+18h] BYREF
  CInteractionFrameStats *v10; // [rsp+58h] [rbp+20h]

  *a2 = 0LL;
  QueryPerformanceFrequency(&Frequency);
  v4 = (CInteractionFrameStats *)DefaultHeap::Alloc(0x2B8uLL);
  v10 = v4;
  if ( v4 )
    v5 = CInteractionFrameStats::CInteractionFrameStats(v4, a1, Frequency);
  else
    v5 = 0LL;
  v6 = v5;
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
    v6 = v5;
    v7 = CCompFrameStats::Initialize((HMODULE *)v5);
    if ( v7 >= 0 )
    {
      v6 = 0LL;
      *a2 = (CInteractionFrameStats *)((char *)v5 + 352);
    }
  }
  else
  {
    v7 = -2147024882;
  }
  if ( v6 )
    CCompFrameStats::Release(v6);
  return (unsigned int)v7;
}
