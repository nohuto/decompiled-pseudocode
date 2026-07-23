/*
 * XREFs of MiRemovePhysicalMemory @ 0x140A2CCBC
 * Callers:
 *     MiDeleteExtentPfns @ 0x14063CAD0 (MiDeleteExtentPfns.c)
 *     MmRemovePhysicalMemory @ 0x140A2D280 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x140A2E5AC (MiRemoveMdlPages.c)
 *     MiCreateFileOnlyPfns @ 0x140A33CB8 (MiCreateFileOnlyPfns.c)
 *     MiHotRemovePartitionPageRun @ 0x140A4508C (MiHotRemovePartitionPageRun.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x14020B9E4 (MiPartitionIdToPointer.c)
 *     KePulseEvent @ 0x1402206C0 (KePulseEvent.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiReferencePageRuns @ 0x1403570E0 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x1403575C8 (MiDereferencePageRuns.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14036EF4C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiDescribePageRun @ 0x140375ADC (MiDescribePageRun.c)
 *     MiComputeNodeMemory @ 0x1403AC1BC (MiComputeNodeMemory.c)
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140551100 (IoUpdateDumpPhysicalRanges.c)
 *     KeConfigureDynamicMemory @ 0x14056EC1C (KeConfigureDynamicMemory.c)
 *     MiInitializeDynamicPfns @ 0x14061AF68 (MiInitializeDynamicPfns.c)
 *     MiLockDynamicMemoryExclusive @ 0x14061B614 (MiLockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryNestedExclusive @ 0x14061B734 (MiLockDynamicMemoryNestedExclusive.c)
 *     MiPerformMemoryChange @ 0x14061BB34 (MiPerformMemoryChange.c)
 *     MiPhysicalMemoryEverRemoved @ 0x14061BCD0 (MiPhysicalMemoryEverRemoved.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14061C01C (MiUnlockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryNestedExclusive @ 0x14061C080 (MiUnlockDynamicMemoryNestedExclusive.c)
 *     MiGetDanglingExtent @ 0x14063D768 (MiGetDanglingExtent.c)
 *     MiGetPfnRemovalRequested @ 0x14064D954 (MiGetPfnRemovalRequested.c)
 *     MiReduceCommitLimits @ 0x1406565CC (MiReduceCommitLimits.c)
 *     MiPartitionDeleteMemoryNode @ 0x14065B1FC (MiPartitionDeleteMemoryNode.c)
 *     MiFlushCacheRange @ 0x140660F6C (MiFlushCacheRange.c)
 *     MiConfigureMemoryRemoval @ 0x140A2C78C (MiConfigureMemoryRemoval.c)
 *     MiHotAddHugeRange @ 0x140A2DEB8 (MiHotAddHugeRange.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiRemovePhysicalMemory(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 DanglingExtent; // rdi
  __int64 v6; // r15
  ULONG_PTR v7; // rbx
  unsigned __int16 *v8; // r12
  __int64 v9; // rcx
  int v10; // ebx
  unsigned __int16 *v11; // rcx
  ULONG_PTR v13; // rsi
  int v14; // r15d
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int *v18; // rax
  WNF_CHANGE_STAMP *i; // r15
  int v20; // ecx
  int v21; // eax
  unsigned __int16 *v22; // rcx
  WNF_CHANGE_STAMP *v23; // rcx
  __int64 v24; // rax
  unsigned int *v25; // [rsp+40h] [rbp-49h] BYREF
  WNF_CHANGE_STAMP v26[2]; // [rsp+48h] [rbp-41h] BYREF
  WNF_CHANGE_STAMP *v27; // [rsp+50h] [rbp-39h]
  __int64 v28; // [rsp+58h] [rbp-31h]
  char *v29; // [rsp+60h] [rbp-29h] BYREF
  unsigned int *v30; // [rsp+68h] [rbp-21h]
  __int64 v31; // [rsp+70h] [rbp-19h]
  _QWORD v32[13]; // [rsp+78h] [rbp-11h] BYREF
  ULONG_PTR v33; // [rsp+F8h] [rbp+6Fh] BYREF
  int v34; // [rsp+100h] [rbp+77h]
  __int64 v35; // [rsp+108h] [rbp+7Fh]

  v33 = a2;
  v27 = v26;
  v28 = 0LL;
  *(_QWORD *)v26 = v26;
  CurrentThread = KeGetCurrentThread();
  DanglingExtent = BugCheckParameter2;
  v32[1] = 0LL;
  v6 = 0LL;
  v32[4] = 0LL;
  v7 = 6 * BugCheckParameter2;
  v25 = 0LL;
  v29 = 0LL;
  v35 = 0LL;
  v8 = (unsigned __int16 *)MiPartitionIdToPointer((*(_QWORD *)(48 * BugCheckParameter2 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FF);
  if ( v8 == MiSystemPartition )
  {
    MiLockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
  }
  else
  {
    MiLockDynamicMemoryExclusive((__int64)v8, (__int64)CurrentThread);
    MiLockDynamicMemoryNestedExclusive(v9);
  }
  if ( (a3 & 2) != 0 )
  {
    v10 = 0;
    if ( (a3 & 0x40) != 0 )
    {
      DanglingExtent = MiGetDanglingExtent(&v33);
      if ( DanglingExtent == -1LL )
      {
        if ( v8 == MiSystemPartition )
        {
          v11 = MiSystemPartition;
        }
        else
        {
          MiUnlockDynamicMemoryNestedExclusive();
          v11 = v8;
        }
        MiUnlockDynamicMemoryExclusive((__int64)v11, (__int64)CurrentThread);
        return 0LL;
      }
    }
    v13 = v33;
    v14 = a3 & 0x10000;
  }
  else
  {
    v32[0] = 0LL;
    v13 = v33;
    v34 = a3 & 0x10000;
    v32[2] = DanglingExtent;
    v32[3] = v33;
    if ( (a3 & 0x10000) != 0 )
    {
      v15 = 8 * v7 - 0x220000000000LL;
      v16 = v15 + 48 * v33;
      while ( v15 < v16 )
      {
        if ( MiGetPfnRemovalRequested(v15) )
        {
          v10 = -1073740023;
          goto LABEL_52;
        }
        v15 = v17 + 48;
      }
    }
    v10 = MiConfigureMemoryRemoval(&v29, (unsigned int *)MmPhysicalMemoryBlock, v32);
    if ( v10 < 0 )
      goto LABEL_52;
    v31 = DanglingExtent + v13 - 1;
    v10 = KeConfigureDynamicMemory(DanglingExtent, v31, 2LL);
    if ( v10 < 0 )
      goto LABEL_52;
    v35 = MiReferencePageRuns((__int64)MiSystemPartition, 1u);
    v6 = v35;
    if ( !(unsigned int)MiDescribePageRun((__int64)v26, DanglingExtent, v13) )
    {
      v10 = -1073741670;
LABEL_37:
      KeConfigureDynamicMemory(DanglingExtent, v31, 8LL);
      goto LABEL_52;
    }
    v18 = (unsigned int *)v6;
    for ( i = *(WNF_CHANGE_STAMP **)v26; ; i = *(WNF_CHANGE_STAMP **)i )
    {
      v30 = v18;
      if ( i == v26 )
        break;
      v10 = MiConfigureMemoryRemoval(&v25, v18, i);
      if ( v30 != (unsigned int *)v35 )
        ExFreePoolWithTag(v30 - 4, 0);
      if ( v10 < 0 )
      {
        v6 = v35;
        goto LABEL_37;
      }
      v18 = v25;
    }
    if ( (a3 & 0x100000) == 0 )
    {
      MiReduceCommitLimits(MiSystemPartition, v13, v13);
      MiReturnCommit((__int64)MiSystemPartition, v13);
    }
    MiPerformMemoryChange(DanglingExtent, v13, (void **)&v29, (__int64 *)&v25, a3, (__int64 ***)v26);
    MiComputeNodeMemory((__int16 *)MiSystemPartition, 1);
    if ( (a3 & 0x100000) == 0 )
    {
      v20 = -1;
      if ( qword_140C6F790 <= 0xFFFFFFFF )
        v20 = qword_140C6F790;
      *(_DWORD *)(MmWriteableSharedUserData + 744) = v20;
    }
    v21 = KeConfigureDynamicMemory(DanglingExtent, DanglingExtent + v13 - 1, 4LL);
    v10 = v21;
    if ( v21 < 0 )
      KeBugCheckEx(0x1Au, 0x61A02uLL, DanglingExtent, DanglingExtent + v13, v21);
    v14 = v34;
  }
  MiInitializeDynamicPfns(DanglingExtent, v13, MiSystemPartition, a3, 0LL, 0LL);
  MiPhysicalMemoryEverRemoved(DanglingExtent, v13, 0);
  if ( (a3 & 0x20) != 0 )
  {
    qword_140C6B550 += v13;
    if ( (unsigned __int64)qword_140C6B550 >= 0x5555 && !byte_140C6B5E4 )
    {
      stru_140C6B530.List.Flink = 0LL;
      stru_140C6B530.WorkerRoutine = (void (__fastcall *)(void *))MiFreeUnusedPfnPages;
      stru_140C6B530.Parameter = MiSystemPartition;
      ExQueueWorkItem(&stru_140C6B530, DelayedWorkQueue);
      byte_140C6B5E4 = 1;
    }
  }
  if ( (a3 & 2) == 0 )
  {
    if ( stru_140C673E8.Header.SignalState && ((unsigned __int8)MiFlags & 0x30u) >= 0x20 )
      ZwUpdateWnfStateData(&WNF_MM_PHYSICAL_MEMORY_CHANGE, 0LL, 0, 0LL, 0LL, 0, 0);
    KePulseEvent(qword_140C6B660, 0, 0);
    if ( v14 )
    {
      MiPartitionDeleteMemoryNode((__int64)v8, DanglingExtent, v13);
      MiHotAddHugeRange((_DWORD)v8, DanglingExtent, v13, 0, 2 - ((a3 & 0x200) != 0), 1);
    }
    if ( (a3 & 0x200000) == 0 )
    {
      MiFlushEntireTbDueToAttributeChange();
      MiFlushCacheRange(DanglingExtent, v13);
    }
  }
  v6 = v35;
LABEL_52:
  if ( v8 == MiSystemPartition )
  {
    v22 = MiSystemPartition;
  }
  else
  {
    MiUnlockDynamicMemoryNestedExclusive();
    v22 = v8;
  }
  MiUnlockDynamicMemoryExclusive((__int64)v22, (__int64)CurrentThread);
  if ( v29 )
    ExFreePoolWithTag(v29 - 16, 0);
  if ( !v25 )
    goto LABEL_60;
  v23 = v25 - 4;
  while ( 1 )
  {
    ExFreePoolWithTag(v23, 0);
LABEL_60:
    v23 = *(WNF_CHANGE_STAMP **)v26;
    if ( *(WNF_CHANGE_STAMP **)v26 == v26 )
      break;
    if ( *(WNF_CHANGE_STAMP **)(*(_QWORD *)v26 + 8LL) != v26
      || (v24 = **(_QWORD **)v26, *(_QWORD *)(**(_QWORD **)v26 + 8LL) != *(_QWORD *)v26) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v26 = **(_QWORD **)v26;
    *(_QWORD *)(v24 + 8) = v26;
  }
  if ( v6 )
    MiDereferencePageRuns(v6);
  if ( v10 >= 0 && (a3 & 0x10) == 0 && (a3 & 0x200002) == 0 )
    IoUpdateDumpPhysicalRanges();
  return (unsigned int)v10;
}
