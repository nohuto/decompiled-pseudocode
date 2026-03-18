/*
 * XREFs of ExReleasePushLockEx @ 0x1402AD0A0
 * Callers:
 *     CcCompleteAsyncReadWorker @ 0x140242F10 (CcCompleteAsyncReadWorker.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x140247800 (CcReleaseBcbLockAndVacbLock.c)
 *     ExpUnlockCallbackListExclusive @ 0x140257E3C (ExpUnlockCallbackListExclusive.c)
 *     CcGetVirtualAddressIfMapped @ 0x140282C5C (CcGetVirtualAddressIfMapped.c)
 *     CcUnmapVacbArray @ 0x1402853B0 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x1402858A0 (CcGetVacbMiss.c)
 *     CcUnpinFileDataEx @ 0x14028A370 (CcUnpinFileDataEx.c)
 *     CcAllocateInitializeBcb @ 0x14028D948 (CcAllocateInitializeBcb.c)
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402AC890 (ExReleaseAutoExpandPushLockExclusive.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x1402AE630 (FsRtlLookupPerStreamContextInternal.c)
 *     PnpDeviceActionWorker @ 0x1402DD320 (PnpDeviceActionWorker.c)
 *     EtwpUnlockBufferList @ 0x1402E1B84 (EtwpUnlockBufferList.c)
 *     CcPostWorkQueueAsyncRead @ 0x1402F5AEC (CcPostWorkQueueAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x1402F5D4C (CcShouldSpinAsyncReadWorkerThread.c)
 *     FsRtlInsertPerStreamContext @ 0x1402F8CF0 (FsRtlInsertPerStreamContext.c)
 *     NtTraceEvent @ 0x1402FE320 (NtTraceEvent.c)
 *     CcGetVirtualAddress @ 0x140328180 (CcGetVirtualAddress.c)
 *     CcGetNumberOfMappedPages @ 0x1403A0A10 (CcGetNumberOfMappedPages.c)
 *     CcAsyncReadWorker @ 0x1403C4AE0 (CcAsyncReadWorker.c)
 *     CmpNotifyMachineHiveLoaded @ 0x1403C7A8C (CmpNotifyMachineHiveLoaded.c)
 *     IopCleanupNotifications @ 0x1403D87A8 (IopCleanupNotifications.c)
 *     CcAsyncReadWorkerThread @ 0x14053E700 (CcAsyncReadWorkerThread.c)
 *     FsRtlRemovePerStreamContext @ 0x1405418D0 (FsRtlRemovePerStreamContext.c)
 *     PnpCancelDeviceActionRequest @ 0x140562004 (PnpCancelDeviceActionRequest.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1405CBFFC (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     EtwpGetTraceGuidInfo @ 0x14065F10C (EtwpGetTraceGuidInfo.c)
 *     ObpUnlockDirectory @ 0x14066960C (ObpUnlockDirectory.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x14067EC64 (CmpUnlockDeletedHashEntryByKcb.c)
 *     UNLOCK_HIVE_LOAD @ 0x14068934C (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140689388 (CmpLockRegistryFreezeAware.c)
 *     CmpCreateHive @ 0x14068A7FC (CmpCreateHive.c)
 *     VrpDereferenceDiffHiveEntry @ 0x140691330 (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x140691444 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     CmpUnlockContextList @ 0x1406930B0 (CmpUnlockContextList.c)
 *     CmpUnlockCallbackList @ 0x1406930D4 (CmpUnlockCallbackList.c)
 *     ObDestroyHandleRevocationBlock @ 0x14069BF4C (ObDestroyHandleRevocationBlock.c)
 *     ObRevokeHandles @ 0x14069D254 (ObRevokeHandles.c)
 *     ExpWatchProductTypeWork @ 0x1406A5770 (ExpWatchProductTypeWork.c)
 *     CmpGetLastHive @ 0x1406A5F34 (CmpGetLastHive.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1406B94DC (ObpMarkDirectoryObjectsTemporary.c)
 *     CmpDeleteHive @ 0x1406BBAD8 (CmpDeleteHive.c)
 *     ObpRemoveNamespaceFromTable @ 0x1406BF4AC (ObpRemoveNamespaceFromTable.c)
 *     NtOpenPrivateNamespace @ 0x1406C0720 (NtOpenPrivateNamespace.c)
 *     NtCreatePrivateNamespace @ 0x1406C08F0 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x1406C1234 (ObpRegisterPrivateNamespace.c)
 *     EtwpFreeLoggerContext @ 0x1406D1830 (EtwpFreeLoggerContext.c)
 *     EtwpRegisterKMProvider @ 0x1406D2394 (EtwpRegisterKMProvider.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1406D3020 (PiDmObjectGetCachedObjectReference.c)
 *     CmpUnlockAppHiveLoadList @ 0x1406D5E5C (CmpUnlockAppHiveLoadList.c)
 *     ObCheckActiveHandles @ 0x1406D6D50 (ObCheckActiveHandles.c)
 *     EtwpFreeGuidEntry @ 0x1406D708C (EtwpFreeGuidEntry.c)
 *     WdipTimeoutCheckRoutine @ 0x1406D9E90 (WdipTimeoutCheckRoutine.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x1406D9F40 (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406D9FC8 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     CmpUnlockHiveList @ 0x1406DEFDC (CmpUnlockHiveList.c)
 *     ObMakeTemporaryObject @ 0x1406E1700 (ObMakeTemporaryObject.c)
 *     PiDmListAddList @ 0x1406E4980 (PiDmListAddList.c)
 *     WdipSemEnableScenario @ 0x1406E6B08 (WdipSemEnableScenario.c)
 *     CmpUnlockNameHashEntry @ 0x1406E717C (CmpUnlockNameHashEntry.c)
 *     EtwpTrackProviderBinary @ 0x1406E80C4 (EtwpTrackProviderBinary.c)
 *     NtMakePermanentObject @ 0x1406EA8F0 (NtMakePermanentObject.c)
 *     EtwpRealtimeConnect @ 0x1406EC524 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406EC954 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpStopLoggerInstance @ 0x1406EDB48 (EtwpStopLoggerInstance.c)
 *     EtwpNotifyGuid @ 0x1406EF64C (EtwpNotifyGuid.c)
 *     CmpGetNextActiveHive @ 0x14071B350 (CmpGetNextActiveHive.c)
 *     CmpUnlockHashEntry @ 0x14071B8C0 (CmpUnlockHashEntry.c)
 *     CmpGetNextHive @ 0x14071BA34 (CmpGetNextHive.c)
 *     CmpUnlockHashEntryByKcb @ 0x14071C050 (CmpUnlockHashEntryByKcb.c)
 *     ObSetSecurityDescriptorInfo @ 0x1407255D0 (ObSetSecurityDescriptorInfo.c)
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 *     ObpIncrementHandleCountEx @ 0x140733B40 (ObpIncrementHandleCountEx.c)
 *     ObpCloseHandle @ 0x140734160 (ObpCloseHandle.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1407350A0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCallCallBacksEx @ 0x140735760 (CmpCallCallBacksEx.c)
 *     CmpCallbackFillObjectContext @ 0x140735E30 (CmpCallbackFillObjectContext.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     IopProcessSetInterfaceState @ 0x140769170 (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x140769C24 (IopRegisterDeviceInterface.c)
 *     PiDmListAddObject @ 0x14076A134 (PiDmListAddObject.c)
 *     PiDqIrpQueryGetResult @ 0x1407735A0 (PiDqIrpQueryGetResult.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x140775990 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x140775D50 (PiDqQueryApplyObjectEvent.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407762E4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqDispatch @ 0x140776650 (PiDqDispatch.c)
 *     PiDqIrpQueryCreate @ 0x1407768EC (PiDqIrpQueryCreate.c)
 *     PiDqQuerySerializeActionQueue @ 0x140777D40 (PiDqQuerySerializeActionQueue.c)
 *     PiDmObjectProcessPropertyChange @ 0x1407783C4 (PiDmObjectProcessPropertyChange.c)
 *     PiPnpRtlObjectEventWorker @ 0x140778830 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectIsEnumerable @ 0x140779800 (PiDmObjectIsEnumerable.c)
 *     PiPnpRtlCmActionCallback @ 0x140779F10 (PiPnpRtlCmActionCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x14077A8E0 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x14077AD94 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x14077B3D4 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14077B6F4 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14077BB00 (PiControlGetDeviceInterfaceEnabled.c)
 *     EtwpReceiveNotification @ 0x14078EF08 (EtwpReceiveNotification.c)
 *     EtwpEnableGuid @ 0x14079028C (EtwpEnableGuid.c)
 *     EtwpQueueNotification @ 0x140790EEC (EtwpQueueNotification.c)
 *     EtwpAddGuidEntry @ 0x140792A4C (EtwpAddGuidEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x140794F30 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMProvider @ 0x140796040 (EtwpRegisterUMProvider.c)
 *     EtwpDeleteRegistrationObject @ 0x140796530 (EtwpDeleteRegistrationObject.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140797054 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpRundownNotifications @ 0x140797468 (EtwpRundownNotifications.c)
 *     EtwpRealtimeUpdateConsumers @ 0x14079A984 (EtwpRealtimeUpdateConsumers.c)
 *     ObpDecrementHandleCount @ 0x1407A2FA0 (ObpDecrementHandleCount.c)
 *     ObpDeleteNameCheck @ 0x1407A3190 (ObpDeleteNameCheck.c)
 *     NtQuerySymbolicLinkObject @ 0x1407B0FE0 (NtQuerySymbolicLinkObject.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1407B1200 (FsRtlTeardownPerStreamContexts.c)
 *     ObpCallPreOperationCallbacks @ 0x1407BC580 (ObpCallPreOperationCallbacks.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1407C09E0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDelayCloseWorker @ 0x1407C0D40 (CmpDelayCloseWorker.c)
 *     CmpDeleteKeyObject @ 0x1407C2680 (CmpDeleteKeyObject.c)
 *     CmpGetNameControlBlock @ 0x1407C3E50 (CmpGetNameControlBlock.c)
 *     CmpWalkOneLevel @ 0x1407C8AE0 (CmpWalkOneLevel.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 *     ObpFreeObject @ 0x1407CDBA0 (ObpFreeObject.c)
 *     PopUmpoProcessMessage @ 0x1407EFC00 (PopUmpoProcessMessage.c)
 *     PopReleaseUmpoPushLock @ 0x1407F02A8 (PopReleaseUmpoPushLock.c)
 *     VrpUnloadDifferencingHive @ 0x1407F6200 (VrpUnloadDifferencingHive.c)
 *     CmpStopSiloKeyLockTracker @ 0x1407F85CC (CmpStopSiloKeyLockTracker.c)
 *     ExpGetNextCallback @ 0x1407FAD60 (ExpGetNextCallback.c)
 *     CmLockKeyForWrite @ 0x14080F9EC (CmLockKeyForWrite.c)
 *     CmpUnlockGlobalKeyLockTracker @ 0x14080FCA4 (CmpUnlockGlobalKeyLockTracker.c)
 *     WdipSemReserveInstanceTableEntry @ 0x140814FBC (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemDeleteTransitionalInstance @ 0x1408150FC (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemAllocatePool @ 0x1408153C8 (WdipSemAllocatePool.c)
 *     WdipSemDisableScenario @ 0x140815DC8 (WdipSemDisableScenario.c)
 *     WdipSemMarkInstanceForDeletion @ 0x140815F0C (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemDisableContextProvider @ 0x140816040 (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x140816190 (WdipSemEnableContextProvider.c)
 *     WdipSemActivateInstance @ 0x14081CB98 (WdipSemActivateInstance.c)
 *     ObCreateObjectTypeEx @ 0x140824B30 (ObCreateObjectTypeEx.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x1408335F0 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmpFinishSystemHivesLoad @ 0x140833B80 (CmpFinishSystemHivesLoad.c)
 *     WdipSemInitialize @ 0x14083F51C (WdipSemInitialize.c)
 *     EtwpInitializeSiloState @ 0x140851114 (EtwpInitializeSiloState.c)
 *     ObRegisterCallbacks @ 0x14085AE70 (ObRegisterCallbacks.c)
 *     ObpInsertCallbackByAltitude @ 0x14085B02C (ObpInsertCallbackByAltitude.c)
 *     CmInitServerSiloState @ 0x140861E8C (CmInitServerSiloState.c)
 *     EtwpTracingProvEnableCallback @ 0x140865450 (EtwpTracingProvEnableCallback.c)
 *     ObpSetObjectAuditInfo @ 0x140881DF2 (ObpSetObjectAuditInfo.c)
 *     EtwpGetTraceGroupInfo @ 0x140883164 (EtwpGetTraceGroupInfo.c)
 *     CmpLoadHiveVolatile @ 0x14090D4E8 (CmpLoadHiveVolatile.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x140910120 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmThawRegistry @ 0x140918E48 (CmThawRegistry.c)
 *     CmpUnlockHashEntryByIndex @ 0x14091C9E8 (CmpUnlockHashEntryByIndex.c)
 *     IoRegisterContainerNotification @ 0x140937220 (IoRegisterContainerNotification.c)
 *     IoUnregisterContainerNotification @ 0x140937460 (IoUnregisterContainerNotification.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1409483EC (PiPnpRtlEnsureObjectCached.c)
 *     PiDmListRemoveList @ 0x140948FB8 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140949104 (PiDmListRemoveObject.c)
 *     PiDqQueryUnlock @ 0x14094A6E4 (PiDqQueryUnlock.c)
 *     ObShutdownSystem @ 0x140983EF0 (ObShutdownSystem.c)
 *     ObHandleRevocationBlockAddObject @ 0x1409843A0 (ObHandleRevocationBlockAddObject.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x140984460 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 *     ObpCreateTypeArray @ 0x14098501C (ObpCreateTypeArray.c)
 *     ObUnRegisterCallbacks @ 0x140985310 (ObUnRegisterCallbacks.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x14098D024 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PsRegisterAltSystemCallHandler @ 0x1409B2180 (PsRegisterAltSystemCallHandler.c)
 *     WdipSemUpdate @ 0x1409DA758 (WdipSemUpdate.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x1409DAACC (WdipSemUpdateFrequentScenarioTable.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409E448C (EtwpNotifyDisallowedGuidChange.c)
 *     EtwpBufferingModeFlush @ 0x1409E971C (EtwpBufferingModeFlush.c)
 *     EtwpDeleteSessionDemuxObject @ 0x1409EB970 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x1409EBA3C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1409EBB58 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x1409EBDD0 (EtwpRegisterPrivateSession.c)
 *     SendCaptureStateNotificationsWorker @ 0x1409EC340 (SendCaptureStateNotificationsWorker.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409F5570 (EtwpTrackGuidEntryRegistrations.c)
 *     PopReleaseAwaymodeLock @ 0x140A48C5C (PopReleaseAwaymodeLock.c)
 *     ExShutdownSystem @ 0x140A6C7A8 (ExShutdownSystem.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 *     CmUnlockHiveSecurity @ 0x140AB4484 (CmUnlockHiveSecurity.c)
 *     CmpDumpKeyToBuffer @ 0x140AB48B4 (CmpDumpKeyToBuffer.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfReleasePushLock @ 0x140359E10 (ExfReleasePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleasePushLockEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  signed __int64 v4; // rax
  signed __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rtt
  struct _KTHREAD *CurrentThread; // rbp
  __int64 SessionId; // r8
  char *p_Process; // rdi
  __int64 v11; // rdx
  int v12; // r9d

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  _m_prefetchw((const void *)BugCheckParameter2);
  v4 = *(_QWORD *)BugCheckParameter2;
  v5 = *(_QWORD *)BugCheckParameter2 - 16LL;
  if ( (*(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (v4 & 2) != 0
    || (v7 = *(_QWORD *)BugCheckParameter2,
        result = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v5, v4),
        v7 != result) )
  {
    result = ExfReleasePushLock(BugCheckParameter2, v5);
  }
  if ( (v2 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    _disable();
    p_Process = (char *)&CurrentThread[1].Process;
    v11 = 0LL;
    do
    {
      if ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && p_Process[18]
        && (*(_DWORD *)p_Process & 1) == 0
        && *((_DWORD *)p_Process + 2) == (_DWORD)SessionId )
      {
        p_Process[18] = 0;
        if ( *(__int64 *)p_Process < 0 )
        {
          *p_Process |= 2u;
          _enable();
          KiAbEntryRemoveFromTree(p_Process, v11, SessionId);
          _disable();
        }
        v12 = *((_DWORD *)p_Process + 22);
        *((_DWORD *)p_Process + 22) = 0;
        p_Process[17] = 0;
        *(_QWORD *)p_Process = 0LL;
        result = (unsigned __int8)p_Process[16];
        CurrentThread->AbEntrySummary |= 1 << result;
        _enable();
        if ( v12 )
          return KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, BugCheckParameter2, v12);
        return result;
      }
      v11 = (unsigned int)(v11 + 1);
      p_Process += 96;
    }
    while ( (unsigned int)v11 < 6 );
    result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, (unsigned int)SessionId, 0LL);
    _enable();
  }
  return result;
}
