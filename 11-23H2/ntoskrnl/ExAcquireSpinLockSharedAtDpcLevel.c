/*
 * XREFs of ExAcquireSpinLockSharedAtDpcLevel @ 0x14025AFA0
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14020A4C8 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     InsertEventEntryInLookUpTable @ 0x140212F60 (InsertEventEntryInLookUpTable.c)
 *     MiCreateCombineAnchor @ 0x14021503C (MiCreateCombineAnchor.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402170B0 (MiCaptureWriteWatchDirtyBit.c)
 *     MiVadSupportsCombine @ 0x1402171A0 (MiVadSupportsCombine.c)
 *     MiAbortCombineScan @ 0x14021AAAC (MiAbortCombineScan.c)
 *     MiUnparkedCoreCount @ 0x140220E6C (MiUnparkedCoreCount.c)
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     KiAbEntryRemoveFromTree @ 0x14024B620 (KiAbEntryRemoveFromTree.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14024C820 (KiAbEntryGetLockedHeadEntry.c)
 *     MiLockPagableImageSection @ 0x14025AA70 (MiLockPagableImageSection.c)
 *     MiCheckVirtualAddress @ 0x14025AD90 (MiCheckVirtualAddress.c)
 *     MiEmptyDecayClusterTimers @ 0x14025B1B0 (MiEmptyDecayClusterTimers.c)
 *     MiInsertPageInList @ 0x14026EE90 (MiInsertPageInList.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MiLockPageListAndLastPage @ 0x140279230 (MiLockPageListAndLastPage.c)
 *     MiLockVadTree @ 0x14028AB50 (MiLockVadTree.c)
 *     MmIsSessionExecutionValid @ 0x1402A6910 (MmIsSessionExecutionValid.c)
 *     MiRemoveWsleList @ 0x1402A8060 (MiRemoveWsleList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertSlabEntry @ 0x1402E7310 (MiInsertSlabEntry.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1402ED5E4 (MiUpdateWorkingSetPrivateSize.c)
 *     KiRundownMutants @ 0x14030B32C (KiRundownMutants.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14030B6D8 (KiActivateWaiterQueueWithNoLocks.c)
 *     KeQueryBasePriorityThread @ 0x14032A168 (KeQueryBasePriorityThread.c)
 *     KeQueryPrimaryGroupAffinityProcess @ 0x14032A438 (KeQueryPrimaryGroupAffinityProcess.c)
 *     vDbgPrintExWithPrefixInternal @ 0x14032AA40 (vDbgPrintExWithPrefixInternal.c)
 *     MiLockIoPfnTree @ 0x140336EE0 (MiLockIoPfnTree.c)
 *     MiFreePageToSlabAllocator @ 0x1403391E0 (MiFreePageToSlabAllocator.c)
 *     MmLockLoadedModuleListShared @ 0x140339C30 (MmLockLoadedModuleListShared.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403483F8 (MiZeroCfgSystemWideBitmapWorker.c)
 *     KeQueryAffinityProcess @ 0x14034C2B0 (KeQueryAffinityProcess.c)
 *     MiReassessZeroThreads @ 0x14035179C (MiReassessZeroThreads.c)
 *     KeQueryPrimaryGroupProcess @ 0x140365EB8 (KeQueryPrimaryGroupProcess.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x140369FBC (MiGetSharedProtosAtDpcLevel.c)
 *     MiPurgeSlabEntries @ 0x14036B810 (MiPurgeSlabEntries.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AAF8C (KeSetUserGroupAffinityThread.c)
 *     DbgEnumerateCallback @ 0x1403D70F0 (DbgEnumerateCallback.c)
 *     KiSelectCandidateProcessor @ 0x140462FB4 (KiSelectCandidateProcessor.c)
 *     VmpProcessContextLockShared @ 0x140467194 (VmpProcessContextLockShared.c)
 *     KeQueryCpuSetsProcess @ 0x140575504 (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140576070 (KeSetSelectedCpuSetsThread.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1405A7F18 (DbgpRemoveDebugPrintCallback.c)
 *     RtlpAcquirePropStoreLockShared @ 0x1405AB294 (RtlpAcquirePropStoreLockShared.c)
 *     ViPtAcquireTreeLockAtDpcLevelSafe @ 0x1405D2870 (ViPtAcquireTreeLockAtDpcLevelSafe.c)
 *     VmpInvalidateOutstandingFaults @ 0x1405F9C18 (VmpInvalidateOutstandingFaults.c)
 *     MiGetPageInHugePageBadStatus @ 0x14062045C (MiGetPageInHugePageBadStatus.c)
 *     MiLocatePageCollisionNodeByPfn @ 0x14064F8D4 (MiLocatePageCollisionNodeByPfn.c)
 *     MiLockPageListAndFirstPage @ 0x140651124 (MiLockPageListAndFirstPage.c)
 *     MiMoveBackgroundZeroThreads @ 0x140655500 (MiMoveBackgroundZeroThreads.c)
 *     MiGetSlabStandbyListWorker @ 0x1406572B0 (MiGetSlabStandbyListWorker.c)
 *     ViDeadlockDetectionLock @ 0x140AD8DF8 (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140317000 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14046B8F2 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockSharedAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // rdx
  char v2; // dl
  signed __int32 v3; // [rsp+38h] [rbp+10h]
  signed __int32 v4; // [rsp+38h] [rbp+10h]
  signed __int32 v5; // [rsp+40h] [rbp+18h]

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v2 = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, v2);
  }
  else
  {
    _m_prefetchw((const void *)SpinLock);
    v3 = *SpinLock & 0x7FFFFFFF;
    v5 = _InterlockedCompareExchange(SpinLock, v3 + 1, v3);
    v1 = (unsigned int)v5;
    if ( v5 != v3 )
    {
      while ( v5 >= 0 )
      {
        v4 = v5;
        v5 = _InterlockedCompareExchange(SpinLock, v5 + 1, v5);
        v1 = (unsigned int)v5;
        if ( v5 == v4 )
          return;
      }
      LOBYTE(v1) = -1;
      ExpWaitForSpinLockSharedAndAcquire(SpinLock, v1);
    }
  }
}
