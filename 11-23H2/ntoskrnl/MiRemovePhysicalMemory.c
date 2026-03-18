/*
 * XREFs of MiRemovePhysicalMemory @ 0x140A2CC4C
 * Callers:
 *     MiDeleteExtentPfns @ 0x14063CA60 (MiDeleteExtentPfns.c)
 *     MmRemovePhysicalMemory @ 0x140A2D210 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x140A2E53C (MiRemoveMdlPages.c)
 *     MiCreateFileOnlyPfns @ 0x140A33C48 (MiCreateFileOnlyPfns.c)
 *     MiHotRemovePartitionPageRun @ 0x140A4501C (MiHotRemovePartitionPageRun.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x14020B9C4 (MiPartitionIdToPointer.c)
 *     KePulseEvent @ 0x1402206A0 (KePulseEvent.c)
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiReferencePageRuns @ 0x1403576E0 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x140357BC8 (MiDereferencePageRuns.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14036F59C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiDescribePageRun @ 0x14037548C (MiDescribePageRun.c)
 *     MiComputeNodeMemory @ 0x1403AC99C (MiComputeNodeMemory.c)
 *     ZwUpdateWnfStateData @ 0x14041E920 (ZwUpdateWnfStateData.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140551060 (IoUpdateDumpPhysicalRanges.c)
 *     KeConfigureDynamicMemory @ 0x14056EB7C (KeConfigureDynamicMemory.c)
 *     MiInitializeDynamicPfns @ 0x14061AEF8 (MiInitializeDynamicPfns.c)
 *     MiLockDynamicMemoryExclusive @ 0x14061B5A4 (MiLockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryNestedExclusive @ 0x14061B6C4 (MiLockDynamicMemoryNestedExclusive.c)
 *     MiPerformMemoryChange @ 0x14061BAC4 (MiPerformMemoryChange.c)
 *     MiPhysicalMemoryEverRemoved @ 0x14061BC60 (MiPhysicalMemoryEverRemoved.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14061BFAC (MiUnlockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryNestedExclusive @ 0x14061C010 (MiUnlockDynamicMemoryNestedExclusive.c)
 *     MiGetDanglingExtent @ 0x14063D6F8 (MiGetDanglingExtent.c)
 *     MiGetPfnRemovalRequested @ 0x14064D8E4 (MiGetPfnRemovalRequested.c)
 *     MiReduceCommitLimits @ 0x14065655C (MiReduceCommitLimits.c)
 *     MiPartitionDeleteMemoryNode @ 0x14065B18C (MiPartitionDeleteMemoryNode.c)
 *     MiFlushCacheRange @ 0x140660EFC (MiFlushCacheRange.c)
 *     MiConfigureMemoryRemoval @ 0x140A2C71C (MiConfigureMemoryRemoval.c)
 *     MiHotAddHugeRange @ 0x140A2DE48 (MiHotAddHugeRange.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
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
  __int64 *i; // r15
  int v20; // ecx
  int v21; // eax
  unsigned __int16 *v22; // rcx
  unsigned int *v23; // rcx
  __int64 v24; // rax
  unsigned int *v25; // [rsp+40h] [rbp-49h] BYREF
  __int64 v26[3]; // [rsp+48h] [rbp-41h] BYREF
  char *v27; // [rsp+60h] [rbp-29h] BYREF
  unsigned int *v28; // [rsp+68h] [rbp-21h]
  __int64 v29; // [rsp+70h] [rbp-19h]
  _QWORD v30[13]; // [rsp+78h] [rbp-11h] BYREF
  ULONG_PTR v31; // [rsp+F8h] [rbp+6Fh] BYREF
  int v32; // [rsp+100h] [rbp+77h]
  __int64 v33; // [rsp+108h] [rbp+7Fh]

  v31 = a2;
  v26[1] = (__int64)v26;
  v26[2] = 0LL;
  v26[0] = (__int64)v26;
  CurrentThread = KeGetCurrentThread();
  DanglingExtent = BugCheckParameter2;
  v30[1] = 0LL;
  v6 = 0LL;
  v30[4] = 0LL;
  v7 = 6 * BugCheckParameter2;
  v25 = 0LL;
  v27 = 0LL;
  v33 = 0LL;
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
      DanglingExtent = MiGetDanglingExtent(&v31);
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
    v13 = v31;
    v14 = a3 & 0x10000;
  }
  else
  {
    v30[0] = 0LL;
    v13 = v31;
    v32 = a3 & 0x10000;
    v30[2] = DanglingExtent;
    v30[3] = v31;
    if ( (a3 & 0x10000) != 0 )
    {
      v15 = 8 * v7 - 0x220000000000LL;
      v16 = v15 + 48 * v31;
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
    v10 = MiConfigureMemoryRemoval(&v27, (unsigned int *)MmPhysicalMemoryBlock, v30);
    if ( v10 < 0 )
      goto LABEL_52;
    v29 = DanglingExtent + v13 - 1;
    v10 = KeConfigureDynamicMemory(DanglingExtent, v29, 2LL);
    if ( v10 < 0 )
      goto LABEL_52;
    v33 = MiReferencePageRuns((__int64)MiSystemPartition, 1u);
    v6 = v33;
    if ( !(unsigned int)MiDescribePageRun((__int64)v26, DanglingExtent, v13) )
    {
      v10 = -1073741670;
LABEL_37:
      KeConfigureDynamicMemory(DanglingExtent, v29, 8LL);
      goto LABEL_52;
    }
    v18 = (unsigned int *)v6;
    for ( i = (__int64 *)v26[0]; ; i = (__int64 *)*i )
    {
      v28 = v18;
      if ( i == v26 )
        break;
      v10 = MiConfigureMemoryRemoval(&v25, v18, i);
      if ( v28 != (unsigned int *)v33 )
        ExFreePoolWithTag(v28 - 4, 0);
      if ( v10 < 0 )
      {
        v6 = v33;
        goto LABEL_37;
      }
      v18 = v25;
    }
    if ( (a3 & 0x100000) == 0 )
    {
      MiReduceCommitLimits(MiSystemPartition, v13, v13);
      MiReturnCommit((__int64)MiSystemPartition, v13);
    }
    MiPerformMemoryChange(DanglingExtent, v13, (void **)&v27, (__int64 *)&v25, a3, (__int64 ***)v26);
    MiComputeNodeMemory((__int16 *)MiSystemPartition, 1);
    if ( (a3 & 0x100000) == 0 )
    {
      v20 = -1;
      if ( qword_140C6F6D0 <= 0xFFFFFFFF )
        v20 = qword_140C6F6D0;
      *(_DWORD *)(MmWriteableSharedUserData + 744) = v20;
    }
    v21 = KeConfigureDynamicMemory(DanglingExtent, DanglingExtent + v13 - 1, 4LL);
    v10 = v21;
    if ( v21 < 0 )
      KeBugCheckEx(0x1Au, 0x61A02uLL, DanglingExtent, DanglingExtent + v13, v21);
    v14 = v32;
  }
  MiInitializeDynamicPfns(DanglingExtent, v13, MiSystemPartition, a3, 0LL, 0LL);
  MiPhysicalMemoryEverRemoved(DanglingExtent, v13, 0);
  if ( (a3 & 0x20) != 0 )
  {
    qword_140C6B490 += v13;
    if ( (unsigned __int64)qword_140C6B490 >= 0x5555 && !byte_140C6B524 )
    {
      stru_140C6B470.List.Flink = 0LL;
      stru_140C6B470.WorkerRoutine = (void (__fastcall *)(void *))MiFreeUnusedPfnPages;
      stru_140C6B470.Parameter = MiSystemPartition;
      ExQueueWorkItem(&stru_140C6B470, DelayedWorkQueue);
      byte_140C6B524 = 1;
    }
  }
  if ( (a3 & 2) == 0 )
  {
    if ( stru_140C672E8.Header.SignalState && ((unsigned __int8)MiFlags & 0x30u) >= 0x20 )
      ZwUpdateWnfStateData((__int64)&WNF_MM_PHYSICAL_MEMORY_CHANGE, 0LL);
    KePulseEvent(qword_140C6B5A0, 0, 0);
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
  v6 = v33;
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
  if ( v27 )
    ExFreePoolWithTag(v27 - 16, 0);
  if ( !v25 )
    goto LABEL_60;
  v23 = v25 - 4;
  while ( 1 )
  {
    ExFreePoolWithTag(v23, 0);
LABEL_60:
    v23 = (unsigned int *)v26[0];
    if ( (__int64 *)v26[0] == v26 )
      break;
    if ( *(__int64 **)(v26[0] + 8) != v26 || (v24 = *(_QWORD *)v26[0], *(_QWORD *)(*(_QWORD *)v26[0] + 8LL) != v26[0]) )
      __fastfail(3u);
    v26[0] = *(_QWORD *)v26[0];
    *(_QWORD *)(v24 + 8) = v26;
  }
  if ( v6 )
    MiDereferencePageRuns(v6);
  if ( v10 >= 0 && (a3 & 0x10) == 0 && (a3 & 0x200002) == 0 )
    IoUpdateDumpPhysicalRanges();
  return (unsigned int)v10;
}
