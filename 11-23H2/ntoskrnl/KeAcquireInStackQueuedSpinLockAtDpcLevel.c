/*
 * XREFs of KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14029CE60
 * Callers:
 *     MmEnforceWorkingSetLimit @ 0x14020C03C (MmEnforceWorkingSetLimit.c)
 *     KiAbEntryRemoveFromTree @ 0x14024B620 (KiAbEntryRemoveFromTree.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14024C820 (KiAbEntryGetLockedHeadEntry.c)
 *     CcInitializeCacheMapInternal @ 0x14025EB60 (CcInitializeCacheMapInternal.c)
 *     MiInsertPageInList @ 0x14026EE90 (MiInsertPageInList.c)
 *     MiSetVaAgeList @ 0x140270C70 (MiSetVaAgeList.c)
 *     MiRemoveWsle @ 0x14027B6E0 (MiRemoveWsle.c)
 *     MiDeleteProcessShadow @ 0x1402919BC (MiDeleteProcessShadow.c)
 *     CcUninitializeCacheMap @ 0x14029BED0 (CcUninitializeCacheMap.c)
 *     CcFlushCachePreProcess @ 0x14029E110 (CcFlushCachePreProcess.c)
 *     MiRemoveWsleList @ 0x1402A8060 (MiRemoveWsleList.c)
 *     KeStartThread @ 0x1402BE368 (KeStartThread.c)
 *     CcMapAndCopyInToCache @ 0x1402CCB80 (CcMapAndCopyInToCache.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertLargePageInNodeList @ 0x1402D6E70 (MiInsertLargePageInNodeList.c)
 *     MiIncreaseAvailablePages @ 0x1402DDC38 (MiIncreaseAvailablePages.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1402E9F08 (MmAdjustWorkingSetSizeEx.c)
 *     KeTerminateThread @ 0x14030A7F8 (KeTerminateThread.c)
 *     MiRestoreTransitionPte @ 0x14033544C (MiRestoreTransitionPte.c)
 *     CcIsThereDirtyLoggedPages @ 0x140340640 (CcIsThereDirtyLoggedPages.c)
 *     CcWaitForUninitializeCacheMap @ 0x14034E154 (CcWaitForUninitializeCacheMap.c)
 *     CcSetLogHandleForFileEx @ 0x140353170 (CcSetLogHandleForFileEx.c)
 *     CcUpdateTimeOnLogHandles @ 0x140358B70 (CcUpdateTimeOnLogHandles.c)
 *     IvtIommuWaitCommand @ 0x140360454 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x140360584 (IvtIommuSendCommand.c)
 *     WmipNotificationIrpCancel @ 0x14036A360 (WmipNotificationIrpCancel.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14036EBB0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     CcSetLoggedDataThreshold @ 0x1403C6B50 (CcSetLoggedDataThreshold.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x1403C9AC0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x1403C9FA0 (ExAcquireFastResourceExclusive.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x1403CAC30 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x1403CB160 (ExpReleaseFastResourceShared.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x1403CB498 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x1403CB594 (ExpReleaseFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x1403CC5E0 (ExDisownFastResource.c)
 *     CcNotifyExternalCachesInternal @ 0x1403D33D8 (CcNotifyExternalCachesInternal.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x140414B20 (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140414EA4 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpConvertFastResourceExclusiveToShared2 @ 0x1404156C0 (ExpConvertFastResourceExclusiveToShared2.c)
 *     ExpReleaseDisownedFastResourceExclusive2 @ 0x1404163AC (ExpReleaseDisownedFastResourceExclusive2.c)
 *     ExpReleaseDisownedFastResourceShared2 @ 0x14041655C (ExpReleaseDisownedFastResourceShared2.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x1404167A8 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ExpReleaseFastResourceShared2 @ 0x140416910 (ExpReleaseFastResourceShared2.c)
 *     HalpDmaAcquireBufferMappings @ 0x14045C164 (HalpDmaAcquireBufferMappings.c)
 *     IvtAllocateContextTable @ 0x14052B770 (IvtAllocateContextTable.c)
 *     IvtAllocateScalableModePasidTables @ 0x14052B9D0 (IvtAllocateScalableModePasidTables.c)
 *     IvtAttachDeviceDomainInternal @ 0x14052BD58 (IvtAttachDeviceDomainInternal.c)
 *     IvtConfigureAts @ 0x14052C540 (IvtConfigureAts.c)
 *     IvtDrainSvmPageRequests @ 0x14052C7B0 (IvtDrainSvmPageRequests.c)
 *     IvtFreeScalableModePasidTables @ 0x14052CD28 (IvtFreeScalableModePasidTables.c)
 *     IvtSetDevicePasidTable @ 0x14052DAD0 (IvtSetDevicePasidTable.c)
 *     HsaAttachDeviceDomainInternal @ 0x14052F5E8 (HsaAttachDeviceDomainInternal.c)
 *     HsaIommuSendCommand @ 0x140530B18 (HsaIommuSendCommand.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x14053199C (HsaUpdateRemappingTableInDeviceTableEntry.c)
 *     CcIncrementWriteBehindPriority @ 0x140536324 (CcIncrementWriteBehindPriority.c)
 *     CcIsThereDirtyDataEx @ 0x140537FC0 (CcIsThereDirtyDataEx.c)
 *     CcUnmapInactiveViewsInternal @ 0x140538930 (CcUnmapInactiveViewsInternal.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140571B50 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     DifKeAcquireInStackQueuedSpinLockAtDpcLevelWrapper @ 0x1405E28A0 (DifKeAcquireInStackQueuedSpinLockAtDpcLevelWrapper.c)
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x14060A7D0 (ExTryToConvertFastResourceSharedToExclusive.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14060AC14 (ExpReleaseDisownedFastResourceExclusive.c)
 *     ExpShareAddressSpaceWithDevice @ 0x14060E0F0 (ExpShareAddressSpaceWithDevice.c)
 *     PnprMirrorMarkedPages @ 0x140A9CF9C (PnprMirrorMarkedPages.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402611B0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14046058E (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  signed __int64 *v3; // rdx

  LockHandle->LockQueue.Lock = SpinLock;
  LockHandle->LockQueue.Next = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(LockHandle, SpinLock);
  }
  else
  {
    v3 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)SpinLock, (__int64)LockHandle);
    if ( v3 )
      KxWaitForLockOwnerShip((signed __int64)LockHandle, v3);
  }
}
