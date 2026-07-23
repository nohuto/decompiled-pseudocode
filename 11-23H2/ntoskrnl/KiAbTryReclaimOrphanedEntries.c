/*
 * XREFs of KiAbTryReclaimOrphanedEntries @ 0x14032FCF8
 * Callers:
 *     MiLockDriverMappings @ 0x14020B4D8 (MiLockDriverMappings.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14021020C (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     InsertEventEntryInLookUpTable @ 0x140212F60 (InsertEventEntryInLookUpTable.c)
 *     MiRemoveFromSystemSpace @ 0x140213780 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x140213D10 (MiInsertInSystemSpace.c)
 *     MiCreatePrototypePtes @ 0x14021BA80 (MiCreatePrototypePtes.c)
 *     MiSplitPrivatePage @ 0x14021CE44 (MiSplitPrivatePage.c)
 *     ExpSaAllocatorAllocate @ 0x1402236D0 (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14022395C (ExpSaPageGroupAllocateMemory.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14022F850 (ExAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x140230430 (FsRtlLookupPerStreamContextInternal.c)
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1402309B0 (ExAcquireAutoExpandPushLockShared.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x140230D30 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     CcUnpinFileDataEx @ 0x14025DAA0 (CcUnpinFileDataEx.c)
 *     CcPinFileData @ 0x140263B20 (CcPinFileData.c)
 *     MiObtainReferencedVadEx @ 0x140274F40 (MiObtainReferencedVadEx.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140275550 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLockVadShared @ 0x1402757C0 (MiLockVadShared.c)
 *     MiCommitExistingVad @ 0x140276CC0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     MiInsertVad @ 0x140287F20 (MiInsertVad.c)
 *     MiAddViewsForSection @ 0x140288A00 (MiAddViewsForSection.c)
 *     MiLockAddressSpaceToo @ 0x1402897BC (MiLockAddressSpaceToo.c)
 *     MiSetVadDeleted @ 0x140289B14 (MiSetVadDeleted.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14028A2D0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiRemoveVad @ 0x14028A700 (MiRemoveVad.c)
 *     MiMakeDriverPagesPrivate @ 0x140291CE0 (MiMakeDriverPagesPrivate.c)
 *     MiLockLoaderEntry @ 0x1402923F4 (MiLockLoaderEntry.c)
 *     MiLockVad @ 0x14029CA60 (MiLockVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14029CBDC (LOCK_ADDRESS_SPACE.c)
 *     MiManageSubsectionView @ 0x1402A0790 (MiManageSubsectionView.c)
 *     MmResourcesAvailable @ 0x1402AF160 (MmResourcesAvailable.c)
 *     CcSetDirtyInMask @ 0x1402C9280 (CcSetDirtyInMask.c)
 *     MiZeroPage @ 0x1402D0C80 (MiZeroPage.c)
 *     MiCoalesceFreePages @ 0x1402D4C00 (MiCoalesceFreePages.c)
 *     MiWalkEntireImage @ 0x1402DB270 (MiWalkEntireImage.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFEEC (MiTrimSharedPageFromViews.c)
 *     MiLockControlAreaFileObjectShared @ 0x1402F091C (MiLockControlAreaFileObjectShared.c)
 *     MiGetChannelInformation @ 0x1402F9F04 (MiGetChannelInformation.c)
 *     PfLockSharedTryAcquire @ 0x1402FA518 (PfLockSharedTryAcquire.c)
 *     CcSetDirtyPinnedData @ 0x1402FC810 (CcSetDirtyPinnedData.c)
 *     FsRtlCheckOplockEx2 @ 0x1402FDBE0 (FsRtlCheckOplockEx2.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403028F0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlAcquireEofLock @ 0x140304A20 (FsRtlAcquireEofLock.c)
 *     MiPerformVadSplitting @ 0x14030B884 (MiPerformVadSplitting.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1403253E0 (MiUpdateImagePfnImportRelocations.c)
 *     FsRtlLookupPerFileObjectContext @ 0x1403268A0 (FsRtlLookupPerFileObjectContext.c)
 *     FsRtlReleaseEofLock @ 0x140328A70 (FsRtlReleaseEofLock.c)
 *     NtCancelTimer @ 0x14032E4C0 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x14032EAB4 (ExpSetTimerObject.c)
 *     ExTryAcquirePushLockSharedEx @ 0x14032FA70 (ExTryAcquirePushLockSharedEx.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x14032FBC0 (ExTryAcquirePushLockExclusiveEx.c)
 *     MiCoalesceFreeLargePages @ 0x140333050 (MiCoalesceFreeLargePages.c)
 *     FsRtlInsertPerStreamContext @ 0x140334050 (FsRtlInsertPerStreamContext.c)
 *     MmOutSwapWorkingSet @ 0x140342290 (MmOutSwapWorkingSet.c)
 *     MiLockDynamicMemoryShared @ 0x140346664 (MiLockDynamicMemoryShared.c)
 *     MmDecodeExportSection @ 0x14034BC6C (MmDecodeExportSection.c)
 *     MmEncodeExportSection @ 0x14034BE08 (MmEncodeExportSection.c)
 *     MiDeleteEmptyPageTables @ 0x140357940 (MiDeleteEmptyPageTables.c)
 *     ExpSaAllocatorFree @ 0x14035CB14 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x14035CD34 (ExpSaPageGroupFreeMemory.c)
 *     ExpDeleteTimer @ 0x140361260 (ExpDeleteTimer.c)
 *     MiDereferenceExtendInfo @ 0x140366904 (MiDereferenceExtendInfo.c)
 *     CmpNotifyMachineHiveLoaded @ 0x140374584 (CmpNotifyMachineHiveLoaded.c)
 *     MmSetPfnListInfo @ 0x14038C4B0 (MmSetPfnListInfo.c)
 *     MiLateInitializeSystemCache @ 0x1403AE058 (MiLateInitializeSystemCache.c)
 *     MiFreeUnusedPfnPages @ 0x1403B2690 (MiFreeUnusedPfnPages.c)
 *     MiLockPartitionSystemThreads @ 0x1403B5A00 (MiLockPartitionSystemThreads.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403C5FBC (ExpSaPageGroupDescriptorAllocate.c)
 *     MiTryLockVad @ 0x1403C70F8 (MiTryLockVad.c)
 *     ExAcquireFastResourceShared @ 0x1403C9360 (ExAcquireFastResourceShared.c)
 *     MmCheckProcessShadow @ 0x1403D0420 (MmCheckProcessShadow.c)
 *     FlushLookUpTableBucket @ 0x1403D05F8 (FlushLookUpTableBucket.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1403D5D24 (ExpSaPageGroupDescriptorFree.c)
 *     IopProcessIoTracking @ 0x14045FF88 (IopProcessIoTracking.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x1405C8FB8 (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ExGetWakeTimerList @ 0x14060BB78 (ExGetWakeTimerList.c)
 *     ExInitializeDeviceAts @ 0x14060C7C0 (ExInitializeDeviceAts.c)
 *     ExUninitializeDeviceAts @ 0x14060CA5C (ExUninitializeDeviceAts.c)
 *     ExSvmBeginDeviceReset @ 0x14060D5F0 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x14060D7C0 (ExSvmFinalizeDeviceReset.c)
 *     ExpShareAddressSpaceWithDevice @ 0x14060E0F0 (ExpShareAddressSpaceWithDevice.c)
 *     ExpSvmDereferenceDevice @ 0x14060EB08 (ExpSvmDereferenceDevice.c)
 *     WheaSelLogSetNtSchedulerAvailability @ 0x1406106EC (WheaSelLogSetNtSchedulerAvailability.c)
 *     WheaRegisterErrorSourceOverride @ 0x140613A20 (WheaRegisterErrorSourceOverride.c)
 *     WheaUnregisterErrorSourceOverride @ 0x140613D10 (WheaUnregisterErrorSourceOverride.c)
 *     MiLockDynamicMemoryExclusive @ 0x14061BAF4 (MiLockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryNestedExclusive @ 0x14061BC14 (MiLockDynamicMemoryNestedExclusive.c)
 *     MiLockDynamicMemoryNestedParentExclusive @ 0x14061BD34 (MiLockDynamicMemoryNestedParentExclusive.c)
 *     MiReferenceRemovePartition @ 0x14061C2FC (MiReferenceRemovePartition.c)
 *     MiSplitReducedCommitClonePage @ 0x14061CFB4 (MiSplitReducedCommitClonePage.c)
 *     MiAddPartitionHugeRange @ 0x14061F754 (MiAddPartitionHugeRange.c)
 *     MiMarkHugePfnBad @ 0x140621B68 (MiMarkHugePfnBad.c)
 *     MiUpControlAreaRefs @ 0x14062644C (MiUpControlAreaRefs.c)
 *     MiFinishResume @ 0x140626E20 (MiFinishResume.c)
 *     MiSetPagesModified @ 0x140628E4C (MiSetPagesModified.c)
 *     MiRemoveBadPages @ 0x14062A990 (MiRemoveBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062BB00 (MmMarkPhysicalMemoryAsBad.c)
 *     MiLocateSharedPageViews @ 0x140636A30 (MiLocateSharedPageViews.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14063BC40 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiPersistMdl @ 0x14063EB64 (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x14063FDBC (MiTransferFileExtent.c)
 *     MiCommitPageTableRangesForVad @ 0x140643CF4 (MiCommitPageTableRangesForVad.c)
 *     MiDecommitHardwareEnclavePages @ 0x140647A30 (MiDecommitHardwareEnclavePages.c)
 *     MiContractWsSwapPageFileWorker @ 0x140652D90 (MiContractWsSwapPageFileWorker.c)
 *     MmOutSwapVirtualAddresses @ 0x14065319C (MmOutSwapVirtualAddresses.c)
 *     MiProcessTransitionHeatBatch @ 0x140654B84 (MiProcessTransitionHeatBatch.c)
 *     MiSendParkedCoreUpdateToAllChildPartitions @ 0x140655860 (MiSendParkedCoreUpdateToAllChildPartitions.c)
 *     MiZeroPageMakeHot @ 0x14065615C (MiZeroPageMakeHot.c)
 *     MiClearPartitionPageBitMap @ 0x140659510 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x1406599D8 (MiDeletePartitionResources.c)
 *     MiGetPartitionNodeInformation @ 0x14065A5F8 (MiGetPartitionNodeInformation.c)
 *     MiInsertPartitionPages @ 0x14065A9D0 (MiInsertPartitionPages.c)
 *     MiGetSpecialPurposeMemoryPartitionForCaching @ 0x140660774 (MiGetSpecialPurposeMemoryPartitionForCaching.c)
 *     WheaInitialize @ 0x140B490E8 (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140B6610C (ExpWorkerInitialization.c)
 *     MiInitializePagedPoolEvents @ 0x140B72FB0 (MiInitializePagedPoolEvents.c)
 *     KiForceSymbolReferences @ 0x140B95628 (KiForceSymbolReferences.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiAbTryReclaimOrphanedEntries(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // r9
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  char v7; // cl

  if ( *(_BYTE *)(a2 + 870) )
  {
    v7 = *(_BYTE *)(a2 + 870);
    *(_BYTE *)(a2 + 870) = 0;
    return (unsigned int)v7;
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 120) & 0x10000) == 0 )
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0x10u);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v5 = *SchedulerAssist;
      do
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange(SchedulerAssist, v5 & 0xFFDFFFFF, v5);
      }
      while ( v6 != v5 );
      if ( (v5 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    return 0LL;
  }
}
