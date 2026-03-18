/*
 * XREFs of ExfAcquirePushLockSharedEx @ 0x1402FD040
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x140212F60 (InsertEventEntryInLookUpTable.c)
 *     ExpSaAllocatorAllocate @ 0x1402236D0 (ExpSaAllocatorAllocate.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x140230340 (FsRtlLookupPerStreamContextInternal.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1402308C0 (ExAcquireAutoExpandPushLockShared.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x140230C40 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     MiObtainReferencedVadEx @ 0x140274CB0 (MiObtainReferencedVadEx.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1402752C0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLockVadShared @ 0x140275530 (MiLockVadShared.c)
 *     MiLockLoaderEntry @ 0x140292164 (MiLockLoaderEntry.c)
 *     MiZeroPage @ 0x1402D09F0 (MiZeroPage.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiLockControlAreaFileObjectShared @ 0x1402F068C (MiLockControlAreaFileObjectShared.c)
 *     ExfAcquirePushLockShared @ 0x1402FD020 (ExfAcquirePushLockShared.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140325150 (MiUpdateImagePfnImportRelocations.c)
 *     FsRtlLookupPerFileObjectContext @ 0x140326610 (FsRtlLookupPerFileObjectContext.c)
 *     MiCoalesceFreeLargePages @ 0x140332DC0 (MiCoalesceFreeLargePages.c)
 *     MiLockDynamicMemoryShared @ 0x1403463D4 (MiLockDynamicMemoryShared.c)
 *     ExpSaAllocatorFree @ 0x14035C974 (ExpSaAllocatorFree.c)
 *     MmSetPfnListInfo @ 0x14038C2D0 (MmSetPfnListInfo.c)
 *     ExpAcquireFannedOutPushLockShared @ 0x1403CDBF4 (ExpAcquireFannedOutPushLockShared.c)
 *     MmCheckProcessShadow @ 0x1403D0240 (MmCheckProcessShadow.c)
 *     DifExfAcquirePushLockSharedWrapper @ 0x1405DA340 (DifExfAcquirePushLockSharedWrapper.c)
 *     MiReferenceRemovePartition @ 0x14061BDAC (MiReferenceRemovePartition.c)
 *     MiAddPartitionHugeRange @ 0x14061F204 (MiAddPartitionHugeRange.c)
 *     MiRemoveBadPages @ 0x14062A440 (MiRemoveBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062B5B0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiLocateSharedPageViews @ 0x1406364E0 (MiLocateSharedPageViews.c)
 *     MiZeroPageMakeHot @ 0x140655C0C (MiZeroPageMakeHot.c)
 *     MiGetSpecialPurposeMemoryPartitionForCaching @ 0x140660224 (MiGetSpecialPurposeMemoryPartitionForCaching.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x14067FD84 (CmFcpManagerProcessUsageDataProviders.c)
 *     ExpWnfInvalidateDataStores @ 0x140682B5C (ExpWnfInvalidateDataStores.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     HvLockHiveFlusherShared @ 0x1406892C8 (HvLockHiveFlusherShared.c)
 *     VrpTranslatePath @ 0x14068D49C (VrpTranslatePath.c)
 *     CmpLockCallbackListShared @ 0x14068F2D8 (CmpLockCallbackListShared.c)
 *     CmpLockContextListShared @ 0x14068F348 (CmpLockContextListShared.c)
 *     CmQueryMultipleValueKey @ 0x1406CFB38 (CmQueryMultipleValueKey.c)
 *     CmpCreateChild @ 0x1406D0F70 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x1406D3240 (CmSetValueKey.c)
 *     CmpCreateKeyControlBlock @ 0x1406D8790 (CmpCreateKeyControlBlock.c)
 *     CmEnumerateKey @ 0x1406DC440 (CmEnumerateKey.c)
 *     CmpVEExecuteOpenLogic @ 0x1406DD4D0 (CmpVEExecuteOpenLogic.c)
 *     CmpWalkOneLevel @ 0x1406DD820 (CmpWalkOneLevel.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7E90 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCallCallBacksEx @ 0x1406E85F0 (CmpCallCallBacksEx.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     MiIsRangeFullyCommitted @ 0x1406F6110 (MiIsRangeFullyCommitted.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140701C08 (CmpVolumeManagerGetContextForFile.c)
 *     CmpCreateHive @ 0x1407023CC (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x140703020 (CmpReorganizeHive.c)
 *     CmpSetKeySecurity @ 0x14070C3BC (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x14070EF24 (CmDeleteValueKey.c)
 *     NtDeleteKey @ 0x14070FCB0 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x14070FFEC (CmDeleteKey.c)
 *     CmpGetKeyNodeForKcb @ 0x140710664 (CmpGetKeyNodeForKcb.c)
 *     ExpWnfNotifySubscription @ 0x140711098 (ExpWnfNotifySubscription.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140711CB0 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140711F74 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpNtUpdateWnfStateData @ 0x14071229C (ExpNtUpdateWnfStateData.c)
 *     ExpWnfLookupNameInstance @ 0x140713190 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140713368 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x1407138D8 (ExpWnfReadStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x1407139F0 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140714428 (ExpWnfNotifyNameSubscribers.c)
 *     MiRelocateImagePfn @ 0x1407442C0 (MiRelocateImagePfn.c)
 *     CmpTrimHive @ 0x14074E884 (CmpTrimHive.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x1407507AC (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     HvHiveConvertLockedPagesToCowByPolicy @ 0x140751234 (HvHiveConvertLockedPagesToCowByPolicy.c)
 *     CmpGetNextActiveHive @ 0x140752060 (CmpGetNextActiveHive.c)
 *     WbRemoveWarbirdProcess @ 0x140760F04 (WbRemoveWarbirdProcess.c)
 *     sub_1407619FC @ 0x1407619FC (sub_1407619FC.c)
 *     WbGetHeapExecutedBlock @ 0x140762918 (WbGetHeapExecutedBlock.c)
 *     WbGetWarbirdThread @ 0x1407631A4 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x140763600 (WbGetWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x140763F68 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x1407642A0 (WbAllocateSlots.c)
 *     CmpLockHashEntryShared @ 0x1407694DC (CmpLockHashEntryShared.c)
 *     CmpGetNextHive @ 0x140769F50 (CmpGetNextHive.c)
 *     CmpLockHashEntrySharedByKcb @ 0x14076A06C (CmpLockHashEntrySharedByKcb.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x14076C91C (ExpWnfAcquireSubscriptionByName.c)
 *     VrpPostEnumerateKey @ 0x14077A9B8 (VrpPostEnumerateKey.c)
 *     VrpFindDiffHiveEntryForMountPoint @ 0x14077C06C (VrpFindDiffHiveEntryForMountPoint.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14077C178 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x1407C6A7C (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1407C9A7C (ExpWnfEnumerateScopeInstances.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1407D2410 (WbGetWarbirdEncryptionSegment.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1407D7F84 (CmpUpdateHiveRootCellFlags.c)
 *     CmpGetLastHive @ 0x1407D8B74 (CmpGetLastHive.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1407DC5B4 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1407E2268 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExpWnfAcquirePermanentDataStoreHandle @ 0x1407E2880 (ExpWnfAcquirePermanentDataStoreHandle.c)
 *     ExRegisterExtension @ 0x1408213F0 (ExRegisterExtension.c)
 *     CmpLoadHiveThread @ 0x140826880 (CmpLoadHiveThread.c)
 *     CmpGlobalLockKeyForWrite @ 0x14084754C (CmpGlobalLockKeyForWrite.c)
 *     CmpLockSiloKeyLockTrackerShared @ 0x1408477C8 (CmpLockSiloKeyLockTrackerShared.c)
 *     ExpKdPullRemoteFileForUser @ 0x14084EE40 (ExpKdPullRemoteFileForUser.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1408541AC (CmpVolumeContextSendDeviceUsageNotification.c)
 *     MiQuerySpecialPurposeMemoryInformation @ 0x140857484 (MiQuerySpecialPurposeMemoryInformation.c)
 *     CmpAssignKeySecurity @ 0x14085838C (CmpAssignKeySecurity.c)
 *     NtAreMappedFilesTheSame @ 0x140871690 (NtAreMappedFilesTheSame.c)
 *     CmpCreateHiveRootCell @ 0x14087448C (CmpCreateHiveRootCell.c)
 *     CmRestoreKey @ 0x140A0AC44 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140A0C890 (CmpRefreshHive.c)
 *     CmSetKeyFlags @ 0x140A159B4 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A15EE8 (CmSetLastWriteTimeKey.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140A1CE84 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmpPromoteKey @ 0x140A265AC (CmpPromoteKey.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A27C54 (CmFcpManagerPublishChangeNotifications.c)
 *     MiIsExtentDangling @ 0x140A33F44 (MiIsExtentDangling.c)
 *     MiFindHotPatchRecord @ 0x140A36B7C (MiFindHotPatchRecord.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A36D0C (MiFindProcessImageHotPatchRecord.c)
 *     MiGetAllRegisteredPatches @ 0x140A36FAC (MiGetAllRegisteredPatches.c)
 *     MiLogHotPatchRundown @ 0x140A396B0 (MiLogHotPatchRundown.c)
 *     MiQueryLoadedPatches @ 0x140A3B2C0 (MiQueryLoadedPatches.c)
 *     MiQueryProcessActivePatches @ 0x140A3B59C (MiQueryProcessActivePatches.c)
 *     MiOpenSpecialPurposeMemory @ 0x140A4768C (MiOpenSpecialPurposeMemory.c)
 *     WheaConfigureErrorSource @ 0x140A90590 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x140AAB8D0 (WheaUnconfigureErrorSource.c)
 *     CmLockHiveSecurityShared @ 0x140AF50A0 (CmLockHiveSecurityShared.c)
 *     CmpLockKcbShared @ 0x140AF5530 (CmpLockKcbShared.c)
 *     CmpDumpKeyToBuffer @ 0x140AF58F4 (CmpDumpKeyToBuffer.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x1402FD270 (KeAbPreWait.c)
 *     RtlBackoff @ 0x1402FD2B0 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x1402FD330 (ExpOptimizePushLockList.c)
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
