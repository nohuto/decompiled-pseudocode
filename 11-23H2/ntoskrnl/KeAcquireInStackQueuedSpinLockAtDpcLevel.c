/*
 * XREFs of KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14029CBD0
 * Callers:
 *     MmEnforceWorkingSetLimit @ 0x14020C03C (MmEnforceWorkingSetLimit.c)
 *     KiAbEntryRemoveFromTree @ 0x14024B550 (KiAbEntryRemoveFromTree.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14024C750 (KiAbEntryGetLockedHeadEntry.c)
 *     CcInitializeCacheMapInternal @ 0x14025E8D0 (CcInitializeCacheMapInternal.c)
 *     MiInsertPageInList @ 0x14026EC00 (MiInsertPageInList.c)
 *     MiSetVaAgeList @ 0x1402709E0 (MiSetVaAgeList.c)
 *     MiRemoveWsle @ 0x14027B450 (MiRemoveWsle.c)
 *     MiDeleteProcessShadow @ 0x14029172C (MiDeleteProcessShadow.c)
 *     CcUninitializeCacheMap @ 0x14029BC40 (CcUninitializeCacheMap.c)
 *     CcFlushCachePreProcess @ 0x14029DE80 (CcFlushCachePreProcess.c)
 *     MiRemoveWsleList @ 0x1402A7DD0 (MiRemoveWsleList.c)
 *     KeStartThread @ 0x1402BE0D8 (KeStartThread.c)
 *     CcMapAndCopyInToCache @ 0x1402CC8F0 (CcMapAndCopyInToCache.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertLargePageInNodeList @ 0x1402D6BE0 (MiInsertLargePageInNodeList.c)
 *     MiIncreaseAvailablePages @ 0x1402DD9A8 (MiIncreaseAvailablePages.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1402E9C78 (MmAdjustWorkingSetSizeEx.c)
 *     KeTerminateThread @ 0x14030A568 (KeTerminateThread.c)
 *     MiRestoreTransitionPte @ 0x1403351BC (MiRestoreTransitionPte.c)
 *     CcIsThereDirtyLoggedPages @ 0x1403403B0 (CcIsThereDirtyLoggedPages.c)
 *     CcWaitForUninitializeCacheMap @ 0x14034DFB4 (CcWaitForUninitializeCacheMap.c)
 *     CcSetLogHandleForFileEx @ 0x140352FD0 (CcSetLogHandleForFileEx.c)
 *     CcUpdateTimeOnLogHandles @ 0x1403589D0 (CcUpdateTimeOnLogHandles.c)
 *     IvtIommuWaitCommand @ 0x1403602B4 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x1403603E4 (IvtIommuSendCommand.c)
 *     WmipNotificationIrpCancel @ 0x14036A1C0 (WmipNotificationIrpCancel.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14036EA10 (MiAllocatePfnRepurposeLogDispatch.c)
 *     CcSetLoggedDataThreshold @ 0x1403C6970 (CcSetLoggedDataThreshold.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x1403C98E0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x1403C9DC0 (ExAcquireFastResourceExclusive.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x1403CAA50 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x1403CAF80 (ExpReleaseFastResourceShared.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x1403CB2B8 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x1403CB3B4 (ExpReleaseFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x1403CC400 (ExDisownFastResource.c)
 *     CcNotifyExternalCachesInternal @ 0x1403D31F8 (CcNotifyExternalCachesInternal.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x14041478C (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140414B10 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpConvertFastResourceExclusiveToShared2 @ 0x14041532C (ExpConvertFastResourceExclusiveToShared2.c)
 *     ExpReleaseDisownedFastResourceExclusive2 @ 0x140416018 (ExpReleaseDisownedFastResourceExclusive2.c)
 *     ExpReleaseDisownedFastResourceShared2 @ 0x1404161C8 (ExpReleaseDisownedFastResourceShared2.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140416414 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ExpReleaseFastResourceShared2 @ 0x14041657C (ExpReleaseFastResourceShared2.c)
 *     HalpDmaAcquireBufferMappings @ 0x14045BD64 (HalpDmaAcquireBufferMappings.c)
 *     IvtAllocateContextTable @ 0x14052B220 (IvtAllocateContextTable.c)
 *     IvtAllocateScalableModePasidTables @ 0x14052B480 (IvtAllocateScalableModePasidTables.c)
 *     IvtAttachDeviceDomainInternal @ 0x14052B808 (IvtAttachDeviceDomainInternal.c)
 *     IvtConfigureAts @ 0x14052BFF0 (IvtConfigureAts.c)
 *     IvtDrainSvmPageRequests @ 0x14052C260 (IvtDrainSvmPageRequests.c)
 *     IvtFreeScalableModePasidTables @ 0x14052C7D8 (IvtFreeScalableModePasidTables.c)
 *     IvtSetDevicePasidTable @ 0x14052D580 (IvtSetDevicePasidTable.c)
 *     HsaAttachDeviceDomainInternal @ 0x14052F098 (HsaAttachDeviceDomainInternal.c)
 *     HsaIommuSendCommand @ 0x1405305C8 (HsaIommuSendCommand.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x14053144C (HsaUpdateRemappingTableInDeviceTableEntry.c)
 *     CcIncrementWriteBehindPriority @ 0x140535DD4 (CcIncrementWriteBehindPriority.c)
 *     CcIsThereDirtyDataEx @ 0x140537A70 (CcIsThereDirtyDataEx.c)
 *     CcUnmapInactiveViewsInternal @ 0x1405383E0 (CcUnmapInactiveViewsInternal.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140571610 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     DifKeAcquireInStackQueuedSpinLockAtDpcLevelWrapper @ 0x1405E2330 (DifKeAcquireInStackQueuedSpinLockAtDpcLevelWrapper.c)
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x14060A280 (ExTryToConvertFastResourceSharedToExclusive.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14060A6C4 (ExpReleaseDisownedFastResourceExclusive.c)
 *     ExpShareAddressSpaceWithDevice @ 0x14060DBA0 (ExpShareAddressSpaceWithDevice.c)
 *     PnprMirrorMarkedPages @ 0x140A9D12C (PnprMirrorMarkedPages.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140260F20 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14046018E (KiAcquireQueuedSpinLockInstrumented.c)
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
