/*
 * XREFs of ?EvictAllMemoryAllocationInList@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00E24E0
 * Callers:
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00E25B8 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@PEAIPEA_K@Z @ 0x1C00E23EC (-EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@PEAIPEA_K@Z.c)
 *     GetBucketIdForAllocationSizePow2 @ 0x1C00F3D30 (GetBucketIdForAllocationSizePow2.c)
 */

void __fastcall VIDMM_GLOBAL::EvictAllMemoryAllocationInList(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  struct _LIST_ENTRY *v2; // rsi
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v5; // rdi
  LARGE_INTEGER v6; // rax
  __int64 v7; // r9
  __int64 BucketIdForAllocationSizePow2; // rdx
  unsigned __int64 v9; // r8
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v2 = (struct _LIST_ENTRY *)((char *)this + 3752);
  if ( v2->Flink != v2 )
  {
    PerformanceCounter.QuadPart = 0LL;
    v5 = 0LL;
    v10 = 0;
    v11 = 0LL;
    if ( a2 )
    {
      v5 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 16LL);
      if ( v5 )
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
    }
    VIDMM_GLOBAL::EvictAllAllocationInList(this, v2, &v10, &v11);
    if ( v5 )
    {
      v6 = KeQueryPerformanceCounter(0LL);
      BucketIdForAllocationSizePow2 = (unsigned int)GetBucketIdForAllocationSizePow2(
                                                      *(unsigned int *)(**(_QWORD **)a2 + 16LL),
                                                      **(_QWORD **)a2,
                                                      v6.QuadPart - PerformanceCounter.QuadPart,
                                                      v7);
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 4 * BucketIdForAllocationSizePow2 + 1216));
      _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 4 * BucketIdForAllocationSizePow2 + 1304), v10);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 8 * BucketIdForAllocationSizePow2 + 1392), v11);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 8 * BucketIdForAllocationSizePow2 + 1568), v9);
      *(_BYTE *)(v5 + 1744) = 1;
    }
  }
}
