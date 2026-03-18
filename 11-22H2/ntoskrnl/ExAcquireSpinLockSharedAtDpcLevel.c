/*
 * XREFs of ExAcquireSpinLockSharedAtDpcLevel @ 0x14025ABF0
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14020A4F0 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     InsertEventEntryInLookUpTable @ 0x140212F80 (InsertEventEntryInLookUpTable.c)
 *     MiCreateCombineAnchor @ 0x14021505C (MiCreateCombineAnchor.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402170D0 (MiCaptureWriteWatchDirtyBit.c)
 *     MiVadSupportsCombine @ 0x1402171C0 (MiVadSupportsCombine.c)
 *     MiAbortCombineScan @ 0x14021AACC (MiAbortCombineScan.c)
 *     MiUnparkedCoreCount @ 0x140220E8C (MiUnparkedCoreCount.c)
 *     MiLockPageTableInternal @ 0x1402376E0 (MiLockPageTableInternal.c)
 *     KiAbEntryRemoveFromTree @ 0x14024B530 (KiAbEntryRemoveFromTree.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14024C730 (KiAbEntryGetLockedHeadEntry.c)
 *     MiLockPagableImageSection @ 0x14025A6C0 (MiLockPagableImageSection.c)
 *     MiCheckVirtualAddress @ 0x14025A9E0 (MiCheckVirtualAddress.c)
 *     MiEmptyDecayClusterTimers @ 0x14025AE00 (MiEmptyDecayClusterTimers.c)
 *     MiInsertPageInList @ 0x14026EAE0 (MiInsertPageInList.c)
 *     MiCopyOnWrite @ 0x14026FC80 (MiCopyOnWrite.c)
 *     MiLockPageListAndLastPage @ 0x140278E80 (MiLockPageListAndLastPage.c)
 *     MiLockVadTree @ 0x14028A7A0 (MiLockVadTree.c)
 *     MmIsSessionExecutionValid @ 0x1402A6560 (MmIsSessionExecutionValid.c)
 *     MiRemoveWsleList @ 0x1402A7CB0 (MiRemoveWsleList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertSlabEntry @ 0x1402E7080 (MiInsertSlabEntry.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1402ED354 (MiUpdateWorkingSetPrivateSize.c)
 *     KiRundownMutants @ 0x14030AF6C (KiRundownMutants.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14030B318 (KiActivateWaiterQueueWithNoLocks.c)
 *     KeQueryBasePriorityThread @ 0x140329CF8 (KeQueryBasePriorityThread.c)
 *     KeQueryPrimaryGroupAffinityProcess @ 0x140329FC8 (KeQueryPrimaryGroupAffinityProcess.c)
 *     vDbgPrintExWithPrefixInternal @ 0x14032A5D0 (vDbgPrintExWithPrefixInternal.c)
 *     MiLockIoPfnTree @ 0x140336AB0 (MiLockIoPfnTree.c)
 *     MiFreePageToSlabAllocator @ 0x140338DB0 (MiFreePageToSlabAllocator.c)
 *     MmLockLoadedModuleListShared @ 0x140339800 (MmLockLoadedModuleListShared.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140347C78 (MiZeroCfgSystemWideBitmapWorker.c)
 *     KeQueryAffinityProcess @ 0x14034BB10 (KeQueryAffinityProcess.c)
 *     MiReassessZeroThreads @ 0x140350FFC (MiReassessZeroThreads.c)
 *     KeQueryPrimaryGroupProcess @ 0x1403656C8 (KeQueryPrimaryGroupProcess.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x1403697CC (MiGetSharedProtosAtDpcLevel.c)
 *     MiPurgeSlabEntries @ 0x14036B020 (MiPurgeSlabEntries.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AA6BC (KeSetUserGroupAffinityThread.c)
 *     DbgEnumerateCallback @ 0x1403D68B0 (DbgEnumerateCallback.c)
 *     KiSelectCandidateProcessor @ 0x140462554 (KiSelectCandidateProcessor.c)
 *     VmpProcessContextLockShared @ 0x140466734 (VmpProcessContextLockShared.c)
 *     KeQueryCpuSetsProcess @ 0x140575064 (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140575BD0 (KeSetSelectedCpuSetsThread.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1405A7A38 (DbgpRemoveDebugPrintCallback.c)
 *     RtlpAcquirePropStoreLockShared @ 0x1405AADB4 (RtlpAcquirePropStoreLockShared.c)
 *     ViPtAcquireTreeLockAtDpcLevelSafe @ 0x1405D2390 (ViPtAcquireTreeLockAtDpcLevelSafe.c)
 *     VmpInvalidateOutstandingFaults @ 0x1405F9738 (VmpInvalidateOutstandingFaults.c)
 *     MiGetPageInHugePageBadStatus @ 0x14061FF7C (MiGetPageInHugePageBadStatus.c)
 *     MiLocatePageCollisionNodeByPfn @ 0x14064F3F4 (MiLocatePageCollisionNodeByPfn.c)
 *     MiLockPageListAndFirstPage @ 0x140650C44 (MiLockPageListAndFirstPage.c)
 *     MiMoveBackgroundZeroThreads @ 0x140655020 (MiMoveBackgroundZeroThreads.c)
 *     MiGetSlabStandbyListWorker @ 0x140656DD0 (MiGetSlabStandbyListWorker.c)
 *     ViDeadlockDetectionLock @ 0x140AD9DD8 (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140316B90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14046AE92 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
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
