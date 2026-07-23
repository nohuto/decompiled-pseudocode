/*
 * XREFs of ExfAcquirePushLockSharedEx @ 0x1402FD2D0
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x140212F60 (InsertEventEntryInLookUpTable.c)
 *     ExpSaAllocatorAllocate @ 0x1402236D0 (ExpSaAllocatorAllocate.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x140230430 (FsRtlLookupPerStreamContextInternal.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1402309B0 (ExAcquireAutoExpandPushLockShared.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x140230D30 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     MiObtainReferencedVadEx @ 0x140274F40 (MiObtainReferencedVadEx.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140275550 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLockVadShared @ 0x1402757C0 (MiLockVadShared.c)
 *     MiLockLoaderEntry @ 0x1402923F4 (MiLockLoaderEntry.c)
 *     MiZeroPage @ 0x1402D0C80 (MiZeroPage.c)
 *     MiWalkEntireImage @ 0x1402DB270 (MiWalkEntireImage.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFEEC (MiTrimSharedPageFromViews.c)
 *     MiLockControlAreaFileObjectShared @ 0x1402F091C (MiLockControlAreaFileObjectShared.c)
 *     ExfAcquirePushLockShared @ 0x1402FD2B0 (ExfAcquirePushLockShared.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1403253E0 (MiUpdateImagePfnImportRelocations.c)
 *     FsRtlLookupPerFileObjectContext @ 0x1403268A0 (FsRtlLookupPerFileObjectContext.c)
 *     MiCoalesceFreeLargePages @ 0x140333050 (MiCoalesceFreeLargePages.c)
 *     MiLockDynamicMemoryShared @ 0x140346664 (MiLockDynamicMemoryShared.c)
 *     ExpSaAllocatorFree @ 0x14035CB14 (ExpSaAllocatorFree.c)
 *     MmSetPfnListInfo @ 0x14038C4B0 (MmSetPfnListInfo.c)
 *     ExpAcquireFannedOutPushLockShared @ 0x1403CDDD4 (ExpAcquireFannedOutPushLockShared.c)
 *     MmCheckProcessShadow @ 0x1403D0420 (MmCheckProcessShadow.c)
 *     DifExfAcquirePushLockSharedWrapper @ 0x1405DA8B0 (DifExfAcquirePushLockSharedWrapper.c)
 *     MiReferenceRemovePartition @ 0x14061C2FC (MiReferenceRemovePartition.c)
 *     MiAddPartitionHugeRange @ 0x14061F754 (MiAddPartitionHugeRange.c)
 *     MiRemoveBadPages @ 0x14062A990 (MiRemoveBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062BB00 (MmMarkPhysicalMemoryAsBad.c)
 *     MiLocateSharedPageViews @ 0x140636A30 (MiLocateSharedPageViews.c)
 *     MiZeroPageMakeHot @ 0x14065615C (MiZeroPageMakeHot.c)
 *     MiGetSpecialPurposeMemoryPartitionForCaching @ 0x140660774 (MiGetSpecialPurposeMemoryPartitionForCaching.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x14067FD84 (CmFcpManagerProcessUsageDataProviders.c)
 *     ExpWnfInvalidateDataStores @ 0x140682B5C (ExpWnfInvalidateDataStores.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     HvLockHiveFlusherShared @ 0x1406892C8 (HvLockHiveFlusherShared.c)
 *     VrpTranslatePath @ 0x14068D49C (VrpTranslatePath.c)
 *     CmpLockCallbackListShared @ 0x14068F2D8 (CmpLockCallbackListShared.c)
 *     CmpLockContextListShared @ 0x14068F348 (CmpLockContextListShared.c)
 *     CmQueryMultipleValueKey @ 0x1406CFB68 (CmQueryMultipleValueKey.c)
 *     CmpCreateChild @ 0x1406D0FA0 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x1406D3270 (CmSetValueKey.c)
 *     CmpCreateKeyControlBlock @ 0x1406D87C0 (CmpCreateKeyControlBlock.c)
 *     CmEnumerateKey @ 0x1406DC470 (CmEnumerateKey.c)
 *     CmpVEExecuteOpenLogic @ 0x1406DD500 (CmpVEExecuteOpenLogic.c)
 *     CmpWalkOneLevel @ 0x1406DD850 (CmpWalkOneLevel.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7EC0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCallCallBacksEx @ 0x1406E8620 (CmpCallCallBacksEx.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     MiIsRangeFullyCommitted @ 0x1406F6320 (MiIsRangeFullyCommitted.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140701E18 (CmpVolumeManagerGetContextForFile.c)
 *     CmpCreateHive @ 0x1407025DC (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x140703230 (CmpReorganizeHive.c)
 *     CmpSetKeySecurity @ 0x14070C5CC (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x14070F134 (CmDeleteValueKey.c)
 *     NtDeleteKey @ 0x14070FEC0 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x1407101FC (CmDeleteKey.c)
 *     CmpGetKeyNodeForKcb @ 0x140710874 (CmpGetKeyNodeForKcb.c)
 *     ExpWnfNotifySubscription @ 0x1407112A8 (ExpWnfNotifySubscription.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140711EC0 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140712184 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpNtUpdateWnfStateData @ 0x1407124AC (ExpNtUpdateWnfStateData.c)
 *     ExpWnfLookupNameInstance @ 0x1407133A0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140713578 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x140713AE8 (ExpWnfReadStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x140713C00 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140714638 (ExpWnfNotifyNameSubscribers.c)
 *     MiRelocateImagePfn @ 0x1407444B0 (MiRelocateImagePfn.c)
 *     CmpTrimHive @ 0x14074EA74 (CmpTrimHive.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x14075099C (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     HvHiveConvertLockedPagesToCowByPolicy @ 0x140751424 (HvHiveConvertLockedPagesToCowByPolicy.c)
 *     CmpGetNextActiveHive @ 0x140752250 (CmpGetNextActiveHive.c)
 *     WbRemoveWarbirdProcess @ 0x1407610F4 (WbRemoveWarbirdProcess.c)
 *     sub_140761BEC @ 0x140761BEC (sub_140761BEC.c)
 *     WbGetHeapExecutedBlock @ 0x140762B08 (WbGetHeapExecutedBlock.c)
 *     WbGetWarbirdThread @ 0x140763394 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x1407637F0 (WbGetWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x140764158 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x140764490 (WbAllocateSlots.c)
 *     CmpLockHashEntryShared @ 0x1407696CC (CmpLockHashEntryShared.c)
 *     CmpGetNextHive @ 0x14076A140 (CmpGetNextHive.c)
 *     CmpLockHashEntrySharedByKcb @ 0x14076A25C (CmpLockHashEntrySharedByKcb.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x14076CB0C (ExpWnfAcquireSubscriptionByName.c)
 *     VrpPostEnumerateKey @ 0x14077ABA8 (VrpPostEnumerateKey.c)
 *     VrpFindDiffHiveEntryForMountPoint @ 0x14077C25C (VrpFindDiffHiveEntryForMountPoint.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14077C368 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x1407C6D4C (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1407C9D4C (ExpWnfEnumerateScopeInstances.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1407D26E0 (WbGetWarbirdEncryptionSegment.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1407D8254 (CmpUpdateHiveRootCellFlags.c)
 *     CmpGetLastHive @ 0x1407D8E44 (CmpGetLastHive.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1407DC884 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1407E2538 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExpWnfAcquirePermanentDataStoreHandle @ 0x1407E2B50 (ExpWnfAcquirePermanentDataStoreHandle.c)
 *     ExRegisterExtension @ 0x1408216F0 (ExRegisterExtension.c)
 *     CmpLoadHiveThread @ 0x140826B80 (CmpLoadHiveThread.c)
 *     CmpGlobalLockKeyForWrite @ 0x14084784C (CmpGlobalLockKeyForWrite.c)
 *     CmpLockSiloKeyLockTrackerShared @ 0x140847AC8 (CmpLockSiloKeyLockTrackerShared.c)
 *     ExpKdPullRemoteFileForUser @ 0x14084F140 (ExpKdPullRemoteFileForUser.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1408544AC (CmpVolumeContextSendDeviceUsageNotification.c)
 *     MiQuerySpecialPurposeMemoryInformation @ 0x1408576C4 (MiQuerySpecialPurposeMemoryInformation.c)
 *     CmpAssignKeySecurity @ 0x1408585CC (CmpAssignKeySecurity.c)
 *     NtAreMappedFilesTheSame @ 0x1408718D0 (NtAreMappedFilesTheSame.c)
 *     CmpCreateHiveRootCell @ 0x1408746CC (CmpCreateHiveRootCell.c)
 *     CmRestoreKey @ 0x140A0AEF4 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140A0CB40 (CmpRefreshHive.c)
 *     CmSetKeyFlags @ 0x140A15C64 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A16198 (CmSetLastWriteTimeKey.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140A1D134 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmpPromoteKey @ 0x140A2685C (CmpPromoteKey.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A27F04 (CmFcpManagerPublishChangeNotifications.c)
 *     MiIsExtentDangling @ 0x140A341F4 (MiIsExtentDangling.c)
 *     MiFindHotPatchRecord @ 0x140A36E2C (MiFindHotPatchRecord.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A36FBC (MiFindProcessImageHotPatchRecord.c)
 *     MiGetAllRegisteredPatches @ 0x140A3725C (MiGetAllRegisteredPatches.c)
 *     MiLogHotPatchRundown @ 0x140A39960 (MiLogHotPatchRundown.c)
 *     MiQueryLoadedPatches @ 0x140A3B570 (MiQueryLoadedPatches.c)
 *     MiQueryProcessActivePatches @ 0x140A3B84C (MiQueryProcessActivePatches.c)
 *     MiOpenSpecialPurposeMemory @ 0x140A4793C (MiOpenSpecialPurposeMemory.c)
 *     WheaConfigureErrorSource @ 0x140A90410 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x140AAB740 (WheaUnconfigureErrorSource.c)
 *     CmLockHiveSecurityShared @ 0x140AF50A0 (CmLockHiveSecurityShared.c)
 *     CmpLockKcbShared @ 0x140AF5530 (CmpLockKcbShared.c)
 *     CmpDumpKeyToBuffer @ 0x140AF58F4 (CmpDumpKeyToBuffer.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x1402FD500 (KeAbPreWait.c)
 *     RtlBackoff @ 0x1402FD540 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x1402FD5C0 (ExpOptimizePushLockList.c)
 */

signed __int64 __fastcall ExfAcquirePushLockSharedEx(
        signed __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4)
{
  int v4; // r15d
  __int64 v6; // r14
  signed __int64 v8; // rdi
  signed __int64 v9; // rcx
  signed __int64 result; // rax
  bool v11; // cl
  bool v12; // zf
  signed __int64 v13; // rax
  int i; // ecx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int128 Object; // [rsp+30h] [rbp-40h] BYREF
  __int128 v20; // [rsp+40h] [rbp-30h]
  __int128 v21; // [rsp+50h] [rbp-20h]
  __int128 v22; // [rsp+60h] [rbp-10h] BYREF
  int v23; // [rsp+B8h] [rbp+48h] BYREF

  v23 = 0;
  Object = 0LL;
  v4 = a2 & 4;
  v20 = 0LL;
  v6 = a3;
  v21 = 0LL;
  v22 = 0LL;
  _m_prefetchw(a1);
  v8 = *a1;
  while ( (v8 & 3) != 0 && ((v8 & 1) != 0 || v4) && ((v8 & 3) != 1 || (v8 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
  {
    if ( v6 )
      KeAbPreWait(v6, a2, a3);
    v11 = 0;
    *((_QWORD *)&v22 + 1) = v6;
    DWORD1(v22) = 2;
    *((_QWORD *)&v21 + 1) = 0LL;
    if ( (v8 & 2) != 0 )
    {
      *(_QWORD *)&v21 = 0LL;
      LODWORD(v22) = -1;
      *((_QWORD *)&v20 + 1) = v8 & 0xFFFFFFFFFFFFFFF0uLL;
      a2 = (unsigned __int64)&Object | v8 & 9 | 6;
      v11 = (v8 & 4) == 0;
    }
    else
    {
      LODWORD(v22) = -2;
      *(_QWORD *)&v21 = &Object;
      a2 = (unsigned __int64)&Object + 3;
    }
    v13 = _InterlockedCompareExchange64(a1, a2, v8);
    v12 = v8 == v13;
    v8 = v13;
    if ( !v12 )
      goto LABEL_15;
    if ( v11 )
      ExpOptimizePushLockList(a1);
    *(_QWORD *)&v20 = (char *)&Object + 8;
    *((_QWORD *)&Object + 1) = (char *)&Object + 8;
    LOWORD(Object) = 1;
    BYTE2(Object) = 6;
    DWORD1(Object) = 0;
    if ( MEMORY[0xFFFFF7800000036A] > 1u )
    {
      if ( MEMORY[0xFFFFF78000000297] )
      {
        a3 = __rdtsc();
        v16 = a3 + (unsigned int)ExpSpinCycleCount;
        while ( 1 )
        {
          a2 = 0LL;
          __asm { monitorx rax, rcx, rdx }
          if ( (BYTE4(v22) & 2) == 0 )
            break;
          v17 = a3;
          v18 = __rdtsc();
          a2 = (unsigned __int64)HIDWORD(v18) << 32;
          a3 = v18;
          if ( v18 <= v17 || v18 >= v16 )
            break;
          __asm { mwaitx  rax, rcx, rbx }
        }
      }
      else
      {
        for ( i = 0; ; ++i )
        {
          a2 = DWORD1(v22);
          if ( (BYTE4(v22) & 2) == 0 || i == ExpSpinCycleCount / (unsigned int)MEMORY[0xFFFFF780000002D6] )
            break;
          _mm_pause();
        }
      }
    }
    if ( _interlockedbittestandreset((volatile signed __int32 *)&v22 + 1, 1u) )
      KeWaitForSingleObject(&Object, WrPushLock, 0, 0, 0LL);
LABEL_16:
    if ( v6 )
      v6 = KeAbPreAcquire(a4, v6);
  }
  v9 = (v8 | 1) + 16;
  if ( (v8 & 2) != 0 )
    v9 = v8 | 1;
  result = _InterlockedCompareExchange64(a1, v9, v8);
  if ( v8 != result )
  {
    if ( v6 )
      KeAbPreWait(v6, a2, a3);
LABEL_15:
    RtlBackoff(&v23);
    v8 = *a1;
    _m_prefetchw(a1);
    goto LABEL_16;
  }
  return result;
}
