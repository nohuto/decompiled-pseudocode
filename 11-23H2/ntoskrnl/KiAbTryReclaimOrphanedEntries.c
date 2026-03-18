/*
 * XREFs of KiAbTryReclaimOrphanedEntries @ 0x14032FA68
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
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14022F760 (ExAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x140230340 (FsRtlLookupPerStreamContextInternal.c)
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1402308C0 (ExAcquireAutoExpandPushLockShared.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x140230C40 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     CcUnpinFileDataEx @ 0x14025D810 (CcUnpinFileDataEx.c)
 *     CcPinFileData @ 0x140263890 (CcPinFileData.c)
 *     MiObtainReferencedVadEx @ 0x140274CB0 (MiObtainReferencedVadEx.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1402752C0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLockVadShared @ 0x140275530 (MiLockVadShared.c)
 *     MiCommitExistingVad @ 0x140276A30 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140277C80 (MiSetProtectionOnSection.c)
 *     MiInsertVad @ 0x140287C90 (MiInsertVad.c)
 *     MiAddViewsForSection @ 0x140288770 (MiAddViewsForSection.c)
 *     MiLockAddressSpaceToo @ 0x14028952C (MiLockAddressSpaceToo.c)
 *     MiSetVadDeleted @ 0x140289884 (MiSetVadDeleted.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14028A040 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiRemoveVad @ 0x14028A470 (MiRemoveVad.c)
 *     MiMakeDriverPagesPrivate @ 0x140291A50 (MiMakeDriverPagesPrivate.c)
 *     MiLockLoaderEntry @ 0x140292164 (MiLockLoaderEntry.c)
 *     MiLockVad @ 0x14029C7D0 (MiLockVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14029C94C (LOCK_ADDRESS_SPACE.c)
 *     MiManageSubsectionView @ 0x1402A0500 (MiManageSubsectionView.c)
 *     MmResourcesAvailable @ 0x1402AEED0 (MmResourcesAvailable.c)
 *     CcSetDirtyInMask @ 0x1402C8FF0 (CcSetDirtyInMask.c)
 *     MiZeroPage @ 0x1402D09F0 (MiZeroPage.c)
 *     MiCoalesceFreePages @ 0x1402D4970 (MiCoalesceFreePages.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiLockControlAreaFileObjectShared @ 0x1402F068C (MiLockControlAreaFileObjectShared.c)
 *     MiGetChannelInformation @ 0x1402F9C74 (MiGetChannelInformation.c)
 *     PfLockSharedTryAcquire @ 0x1402FA288 (PfLockSharedTryAcquire.c)
 *     CcSetDirtyPinnedData @ 0x1402FC580 (CcSetDirtyPinnedData.c)
 *     FsRtlCheckOplockEx2 @ 0x1402FD950 (FsRtlCheckOplockEx2.c)
 *     ExAcquireFastMutexUnsafe @ 0x140302660 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlAcquireEofLock @ 0x140304790 (FsRtlAcquireEofLock.c)
 *     MiPerformVadSplitting @ 0x14030B5F4 (MiPerformVadSplitting.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140325150 (MiUpdateImagePfnImportRelocations.c)
 *     FsRtlLookupPerFileObjectContext @ 0x140326610 (FsRtlLookupPerFileObjectContext.c)
 *     FsRtlReleaseEofLock @ 0x1403287E0 (FsRtlReleaseEofLock.c)
 *     NtCancelTimer @ 0x14032E230 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x14032E824 (ExpSetTimerObject.c)
 *     ExTryAcquirePushLockSharedEx @ 0x14032F7E0 (ExTryAcquirePushLockSharedEx.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x14032F930 (ExTryAcquirePushLockExclusiveEx.c)
 *     MiCoalesceFreeLargePages @ 0x140332DC0 (MiCoalesceFreeLargePages.c)
 *     FsRtlInsertPerStreamContext @ 0x140333DC0 (FsRtlInsertPerStreamContext.c)
 *     MmOutSwapWorkingSet @ 0x140342000 (MmOutSwapWorkingSet.c)
 *     MiLockDynamicMemoryShared @ 0x1403463D4 (MiLockDynamicMemoryShared.c)
 *     MmDecodeExportSection @ 0x14034BACC (MmDecodeExportSection.c)
 *     MmEncodeExportSection @ 0x14034BC68 (MmEncodeExportSection.c)
 *     MiDeleteEmptyPageTables @ 0x1403577A0 (MiDeleteEmptyPageTables.c)
 *     ExpSaAllocatorFree @ 0x14035C974 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x14035CB94 (ExpSaPageGroupFreeMemory.c)
 *     ExpDeleteTimer @ 0x1403610C0 (ExpDeleteTimer.c)
 *     MiDereferenceExtendInfo @ 0x140366764 (MiDereferenceExtendInfo.c)
 *     CmpNotifyMachineHiveLoaded @ 0x1403743E4 (CmpNotifyMachineHiveLoaded.c)
 *     MmSetPfnListInfo @ 0x14038C2D0 (MmSetPfnListInfo.c)
 *     MiLateInitializeSystemCache @ 0x1403ADE78 (MiLateInitializeSystemCache.c)
 *     MiFreeUnusedPfnPages @ 0x1403B24B0 (MiFreeUnusedPfnPages.c)
 *     MiLockPartitionSystemThreads @ 0x1403B5820 (MiLockPartitionSystemThreads.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403C5DDC (ExpSaPageGroupDescriptorAllocate.c)
 *     MiTryLockVad @ 0x1403C6F18 (MiTryLockVad.c)
 *     ExAcquireFastResourceShared @ 0x1403C9180 (ExAcquireFastResourceShared.c)
 *     MmCheckProcessShadow @ 0x1403D0240 (MmCheckProcessShadow.c)
 *     FlushLookUpTableBucket @ 0x1403D0418 (FlushLookUpTableBucket.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1403D5B44 (ExpSaPageGroupDescriptorFree.c)
 *     IopProcessIoTracking @ 0x14045FB88 (IopProcessIoTracking.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x1405C8A48 (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ExGetWakeTimerList @ 0x14060B628 (ExGetWakeTimerList.c)
 *     ExInitializeDeviceAts @ 0x14060C270 (ExInitializeDeviceAts.c)
 *     ExUninitializeDeviceAts @ 0x14060C50C (ExUninitializeDeviceAts.c)
 *     ExSvmBeginDeviceReset @ 0x14060D0A0 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x14060D270 (ExSvmFinalizeDeviceReset.c)
 *     ExpShareAddressSpaceWithDevice @ 0x14060DBA0 (ExpShareAddressSpaceWithDevice.c)
 *     ExpSvmDereferenceDevice @ 0x14060E5B8 (ExpSvmDereferenceDevice.c)
 *     WheaSelLogSetNtSchedulerAvailability @ 0x14061019C (WheaSelLogSetNtSchedulerAvailability.c)
 *     WheaRegisterErrorSourceOverride @ 0x1406134D0 (WheaRegisterErrorSourceOverride.c)
 *     WheaUnregisterErrorSourceOverride @ 0x1406137C0 (WheaUnregisterErrorSourceOverride.c)
 *     MiLockDynamicMemoryExclusive @ 0x14061B5A4 (MiLockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryNestedExclusive @ 0x14061B6C4 (MiLockDynamicMemoryNestedExclusive.c)
 *     MiLockDynamicMemoryNestedParentExclusive @ 0x14061B7E4 (MiLockDynamicMemoryNestedParentExclusive.c)
 *     MiReferenceRemovePartition @ 0x14061BDAC (MiReferenceRemovePartition.c)
 *     MiSplitReducedCommitClonePage @ 0x14061CA64 (MiSplitReducedCommitClonePage.c)
 *     MiAddPartitionHugeRange @ 0x14061F204 (MiAddPartitionHugeRange.c)
 *     MiMarkHugePfnBad @ 0x140621618 (MiMarkHugePfnBad.c)
 *     MiUpControlAreaRefs @ 0x140625EFC (MiUpControlAreaRefs.c)
 *     MiFinishResume @ 0x1406268D0 (MiFinishResume.c)
 *     MiSetPagesModified @ 0x1406288FC (MiSetPagesModified.c)
 *     MiRemoveBadPages @ 0x14062A440 (MiRemoveBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062B5B0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiLocateSharedPageViews @ 0x1406364E0 (MiLocateSharedPageViews.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14063B6F0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiPersistMdl @ 0x14063E614 (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x14063F86C (MiTransferFileExtent.c)
 *     MiCommitPageTableRangesForVad @ 0x1406437A4 (MiCommitPageTableRangesForVad.c)
 *     MiDecommitHardwareEnclavePages @ 0x1406474E0 (MiDecommitHardwareEnclavePages.c)
 *     MiContractWsSwapPageFileWorker @ 0x140652840 (MiContractWsSwapPageFileWorker.c)
 *     MmOutSwapVirtualAddresses @ 0x140652C4C (MmOutSwapVirtualAddresses.c)
 *     MiProcessTransitionHeatBatch @ 0x140654634 (MiProcessTransitionHeatBatch.c)
 *     MiSendParkedCoreUpdateToAllChildPartitions @ 0x140655310 (MiSendParkedCoreUpdateToAllChildPartitions.c)
 *     MiZeroPageMakeHot @ 0x140655C0C (MiZeroPageMakeHot.c)
 *     MiClearPartitionPageBitMap @ 0x140658FC0 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x140659488 (MiDeletePartitionResources.c)
 *     MiGetPartitionNodeInformation @ 0x14065A0A8 (MiGetPartitionNodeInformation.c)
 *     MiInsertPartitionPages @ 0x14065A480 (MiInsertPartitionPages.c)
 *     MiGetSpecialPurposeMemoryPartitionForCaching @ 0x140660224 (MiGetSpecialPurposeMemoryPartitionForCaching.c)
 *     WheaInitialize @ 0x140B490E8 (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140B6610C (ExpWorkerInitialization.c)
 *     MiInitializePagedPoolEvents @ 0x140B72FB0 (MiInitializePagedPoolEvents.c)
 *     KiForceSymbolReferences @ 0x140B95628 (KiForceSymbolReferences.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
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
