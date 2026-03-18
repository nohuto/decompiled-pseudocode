/*
 * XREFs of ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00A0280
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyMultirangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z @ 0x1C0005B40 (-NotifyMultirangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006770 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0017578 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199AC (DxgkLogInternalTriageEvent.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00853FC (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C00A0510 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C00A3758 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C00B4A10 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::Free(VIDMM_RECYCLE_HEAP_MGR *this, struct _VIDMM_LOCAL_ALLOC *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdx
  VIDMM_RECYCLE_RANGE *i; // rbx
  __int64 v8; // rbx
  void *v9; // rcx
  VIDMM_RECYCLE_BLOCK *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  DXGFASTMUTEX *v13; // rbx
  __int64 v14; // rcx
  DXGFASTMUTEX *v16; // [rsp+50h] [rbp-18h]
  char v17; // [rsp+58h] [rbp-10h]

  v16 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328);
  v17 = 0;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry1(1LL, 592LL);
    DxgkLogInternalTriageEvent(v4, 262146LL);
  }
  DXGFASTMUTEX::Acquire(v16);
  v5 = *((_QWORD *)a2 + 3);
  v6 = *((_QWORD *)this + 1);
  v17 = 1;
  *(_QWORD *)(v6 + 136) += *(_QWORD *)(v5 + 32) - *(_QWORD *)(v5 + 40);
  for ( i = *(VIDMM_RECYCLE_RANGE **)(v5 + 64); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    VIDMM_RECYCLE_RANGE::Decommit(i);
    if ( i == *(VIDMM_RECYCLE_RANGE **)(v5 + 72) )
      break;
  }
  VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees(
    *(VIDMM_RECYCLE_HEAP **)(*(_QWORD *)(v5 + 80) + 32LL),
    (struct VIDMM_RECYCLE_MULTIRANGE *)v5);
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 80) + 32LL) + 8LL);
  v9 = *(void **)(v5 + 96);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(v5 + 96) = 0LL;
  }
  VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent(*(_QWORD *)(v5 + 80), 1, v5);
  v10 = *(VIDMM_RECYCLE_BLOCK **)(v5 + 80);
  v11 = *((_QWORD *)v10 + 1) - 1LL;
  *((_QWORD *)v10 + 1) = v11;
  if ( !*(_QWORD *)v10 && !v11 )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v10);
  *(_BYTE *)(v5 + 232) = 1;
  *(_QWORD *)(v5 + 224) = 0LL;
  v12 = *(unsigned int *)(v8 + 1620);
  if ( (unsigned int)v12 >= 4 )
  {
    ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v8 + 1320), (PVOID)v5);
  }
  else
  {
    *(_QWORD *)(v8 + 8 * v12 + 1656) = v5;
    ++*(_DWORD *)(v8 + 1620);
  }
  --*(_DWORD *)(v8 + 1688);
  if ( v17 )
  {
    v13 = v16;
    v17 = 0;
    if ( *((struct _KTHREAD **)v16 + 3) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v16, 0LL, 0LL);
    if ( *((int *)v13 + 8) <= 0 )
    {
      WdLogSingleEntry1(1LL, 535LL);
      DxgkLogInternalTriageEvent(v14, 262146LL);
    }
    if ( (*((_DWORD *)v13 + 8))-- == 1 )
    {
      *((_QWORD *)v13 + 3) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v13 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  if ( (__int64)VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit >= (__int64)((unsigned __int64)(unsigned int)dword_1C00764A0 << 20)
    || VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock >= (__int64)((unsigned __int64)(unsigned int)dword_1C00764A4 << 20) )
  {
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(1);
  }
}
