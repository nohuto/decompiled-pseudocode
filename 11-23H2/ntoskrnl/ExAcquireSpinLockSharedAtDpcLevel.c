/*
 * XREFs of ExAcquireSpinLockSharedAtDpcLevel @ 0x14025AD10
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14020A4C8 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     InsertEventEntryInLookUpTable @ 0x140212F60 (InsertEventEntryInLookUpTable.c)
 *     MiCreateCombineAnchor @ 0x14021503C (MiCreateCombineAnchor.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402170B0 (MiCaptureWriteWatchDirtyBit.c)
 *     MiVadSupportsCombine @ 0x1402171A0 (MiVadSupportsCombine.c)
 *     MiAbortCombineScan @ 0x14021AAAC (MiAbortCombineScan.c)
 *     MiUnparkedCoreCount @ 0x140220E6C (MiUnparkedCoreCount.c)
 *     MiLockPageTableInternal @ 0x140237700 (MiLockPageTableInternal.c)
 *     KiAbEntryRemoveFromTree @ 0x14024B550 (KiAbEntryRemoveFromTree.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14024C750 (KiAbEntryGetLockedHeadEntry.c)
 *     MiLockPagableImageSection @ 0x14025A7E0 (MiLockPagableImageSection.c)
 *     MiCheckVirtualAddress @ 0x14025AB00 (MiCheckVirtualAddress.c)
 *     MiEmptyDecayClusterTimers @ 0x14025AF20 (MiEmptyDecayClusterTimers.c)
 *     MiInsertPageInList @ 0x14026EC00 (MiInsertPageInList.c)
 *     MiCopyOnWrite @ 0x14026FDA0 (MiCopyOnWrite.c)
 *     MiLockPageListAndLastPage @ 0x140278FA0 (MiLockPageListAndLastPage.c)
 *     MiLockVadTree @ 0x14028A8C0 (MiLockVadTree.c)
 *     MmIsSessionExecutionValid @ 0x1402A6680 (MmIsSessionExecutionValid.c)
 *     MiRemoveWsleList @ 0x1402A7DD0 (MiRemoveWsleList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertSlabEntry @ 0x1402E7080 (MiInsertSlabEntry.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1402ED354 (MiUpdateWorkingSetPrivateSize.c)
 *     KiRundownMutants @ 0x14030B09C (KiRundownMutants.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14030B448 (KiActivateWaiterQueueWithNoLocks.c)
 *     KeQueryBasePriorityThread @ 0x140329ED8 (KeQueryBasePriorityThread.c)
 *     KeQueryPrimaryGroupAffinityProcess @ 0x14032A1A8 (KeQueryPrimaryGroupAffinityProcess.c)
 *     vDbgPrintExWithPrefixInternal @ 0x14032A7B0 (vDbgPrintExWithPrefixInternal.c)
 *     MiLockIoPfnTree @ 0x140336C50 (MiLockIoPfnTree.c)
 *     MiFreePageToSlabAllocator @ 0x140338F50 (MiFreePageToSlabAllocator.c)
 *     MmLockLoadedModuleListShared @ 0x1403399A0 (MmLockLoadedModuleListShared.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140348168 (MiZeroCfgSystemWideBitmapWorker.c)
 *     KeQueryAffinityProcess @ 0x14034C110 (KeQueryAffinityProcess.c)
 *     MiReassessZeroThreads @ 0x1403515FC (MiReassessZeroThreads.c)
 *     KeQueryPrimaryGroupProcess @ 0x140365D18 (KeQueryPrimaryGroupProcess.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x140369E1C (MiGetSharedProtosAtDpcLevel.c)
 *     MiPurgeSlabEntries @ 0x14036B670 (MiPurgeSlabEntries.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AADAC (KeSetUserGroupAffinityThread.c)
 *     DbgEnumerateCallback @ 0x1403D6F10 (DbgEnumerateCallback.c)
 *     KiSelectCandidateProcessor @ 0x140462BB4 (KiSelectCandidateProcessor.c)
 *     VmpProcessContextLockShared @ 0x140466D94 (VmpProcessContextLockShared.c)
 *     KeQueryCpuSetsProcess @ 0x140574FC4 (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140575B30 (KeSetSelectedCpuSetsThread.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1405A79A8 (DbgpRemoveDebugPrintCallback.c)
 *     RtlpAcquirePropStoreLockShared @ 0x1405AAD24 (RtlpAcquirePropStoreLockShared.c)
 *     ViPtAcquireTreeLockAtDpcLevelSafe @ 0x1405D2300 (ViPtAcquireTreeLockAtDpcLevelSafe.c)
 *     VmpInvalidateOutstandingFaults @ 0x1405F96A8 (VmpInvalidateOutstandingFaults.c)
 *     MiGetPageInHugePageBadStatus @ 0x14061FF0C (MiGetPageInHugePageBadStatus.c)
 *     MiLocatePageCollisionNodeByPfn @ 0x14064F384 (MiLocatePageCollisionNodeByPfn.c)
 *     MiLockPageListAndFirstPage @ 0x140650BD4 (MiLockPageListAndFirstPage.c)
 *     MiMoveBackgroundZeroThreads @ 0x140654FB0 (MiMoveBackgroundZeroThreads.c)
 *     MiGetSlabStandbyListWorker @ 0x140656D60 (MiGetSlabStandbyListWorker.c)
 *     ViDeadlockDetectionLock @ 0x140AD8E08 (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140316D70 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14046B4F2 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
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
