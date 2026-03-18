/*
 * XREFs of ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007DD20
 * Callers:
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007D414 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C007F2D8 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C007F7CC (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C007F900 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007FA70 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C00801C0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0081254 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C008130C (-CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00E64FC (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00E6644 (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 *     ?CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z @ 0x1C00E679C (-CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(VIDMM_RECYCLE_HEAP_MGR *this, struct _SLIST_ENTRY *a2)
{
  struct _SLIST_ENTRY *Next; // rcx
  struct _SLIST_ENTRY *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rcx

  Next = a2[6].Next;
  if ( Next )
  {
    ExFreePoolWithTag(Next, 0);
    a2[6].Next = 0LL;
  }
  --*((_QWORD *)&a2[5].Next->Next + 1);
  a2[14].Next = 0LL;
  v5 = a2[5].Next;
  *((_BYTE *)&a2[14].Next + 8) = 1;
  v6 = *((_QWORD *)&v5[8].Next + 1);
  if ( v6 )
  {
    v9 = *(_QWORD *)(v6 + 24) + 144LL * *(_QWORD *)(v6 + 32);
    *(_DWORD *)v9 = 1;
    *(_QWORD *)(v9 + 8) = a2;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v9 + 16), 0LL);
    ++*(_QWORD *)(*((_QWORD *)&v5[8].Next + 1) + 32LL);
    v10 = *((_QWORD *)&v5[8].Next + 1);
    if ( *(_QWORD *)(v10 + 32) == *(_QWORD *)(v10 + 48) )
    {
      *(_QWORD *)(v10 + 32) = 0LL;
      *(_BYTE *)(*((_QWORD *)&v5[8].Next + 1) + 40LL) = 1;
    }
  }
  v7 = *((unsigned int *)this + 405);
  v8 = *((_QWORD *)this + 165);
  if ( (unsigned int)v7 < 4 )
  {
    *((_QWORD *)this + v7 + 207) = a2;
    ++*((_DWORD *)this + 405);
  }
  else
  {
    ++*(_DWORD *)(v8 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v8) < *(_WORD *)(v8 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v8, a2);
    }
    else
    {
      ++*(_DWORD *)(v8 + 32);
      (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v8 + 56))(a2, v8);
    }
  }
}
