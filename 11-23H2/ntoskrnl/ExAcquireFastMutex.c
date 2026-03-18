/*
 * XREFs of ExAcquireFastMutex @ 0x140230720
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x1402010B8 (FsRtlpWaitOnIrp.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x140230340 (FsRtlLookupPerStreamContextInternal.c)
 *     CcPinFileData @ 0x140263890 (CcPinFileData.c)
 *     PopIrpWorker @ 0x14028D350 (PopIrpWorker.c)
 *     CcWriteBehindPostProcess @ 0x14029B038 (CcWriteBehindPostProcess.c)
 *     CcWriteBehindPreProcess @ 0x14029B860 (CcWriteBehindPreProcess.c)
 *     CcAcquireByteRangeForWrite @ 0x14029D030 (CcAcquireByteRangeForWrite.c)
 *     CcGetVacbMiss @ 0x14029F110 (CcGetVacbMiss.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1402A1070 (CcAcquireBcbLockAndVacbLock.c)
 *     CcZeroEndOfLastPage @ 0x1402A22E8 (CcZeroEndOfLastPage.c)
 *     CcSetDirtyInMask @ 0x1402C8FF0 (CcSetDirtyInMask.c)
 *     CcGetFlushedValidData @ 0x1402F0A50 (CcGetFlushedValidData.c)
 *     CcDeleteMbcb @ 0x1402F3E04 (CcDeleteMbcb.c)
 *     PoRunDownDeviceObject @ 0x140304F58 (PoRunDownDeviceObject.c)
 *     PnpUnregisterPlugPlayNotification @ 0x1403205FC (PnpUnregisterPlugPlayNotification.c)
 *     RawInitiateDeleteVolume @ 0x140321E48 (RawInitiateDeleteVolume.c)
 *     RawCompletionRoutine @ 0x1403220E0 (RawCompletionRoutine.c)
 *     FsRtlPrivateInitializeFileLock @ 0x140328630 (FsRtlPrivateInitializeFileLock.c)
 *     PopGetPowerSettingValue @ 0x14032CC40 (PopGetPowerSettingValue.c)
 *     FsRtlInsertPerStreamContext @ 0x140333DC0 (FsRtlInsertPerStreamContext.c)
 *     HalpAcpiGetTable @ 0x140336FF0 (HalpAcpiGetTable.c)
 *     CcGetDirtyPagesHelper @ 0x140338840 (CcGetDirtyPagesHelper.c)
 *     FsRtlAddLargeMcbEntry @ 0x140339F00 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlTruncateLargeMcb @ 0x140339F70 (FsRtlTruncateLargeMcb.c)
 *     PopCreateDynamicIrpWorker @ 0x140341DA8 (PopCreateDynamicIrpWorker.c)
 *     FsRtlpCancelOplockRHIrp @ 0x140360BC0 (FsRtlpCancelOplockRHIrp.c)
 *     CcPrepareMdlWrite @ 0x140369190 (CcPrepareMdlWrite.c)
 *     HalpAcpiGetAllTables @ 0x14037D718 (HalpAcpiGetAllTables.c)
 *     PopInitilizeAcDcSettings @ 0x140384854 (PopInitilizeAcDcSettings.c)
 *     HalpAcpiGetFacsMapping @ 0x140396838 (HalpAcpiGetFacsMapping.c)
 *     FsRtlLookupLargeMcbEntry @ 0x1403A2420 (FsRtlLookupLargeMcbEntry.c)
 *     FsRtlGetNextLargeMcbEntry @ 0x1403A6710 (FsRtlGetNextLargeMcbEntry.c)
 *     CcRepinBcb @ 0x1403A9090 (CcRepinBcb.c)
 *     FsRtlRemoveLargeMcbEntry @ 0x1403ABE60 (FsRtlRemoveLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntryAndIndex @ 0x1403AC790 (FsRtlLookupLastLargeMcbEntryAndIndex.c)
 *     FsRtlNumberOfRunsInLargeMcb @ 0x1403B0350 (FsRtlNumberOfRunsInLargeMcb.c)
 *     PopIrpWorkerControl @ 0x1403B14E0 (PopIrpWorkerControl.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1403B23B0 (FsRtlpCancelExclusiveIrp.c)
 *     CcGetLsnForFileObject @ 0x1405379B0 (CcGetLsnForFileObject.c)
 *     CcUnmapInactiveViewsInternal @ 0x1405383E0 (CcUnmapInactiveViewsInternal.c)
 *     FsRtlLookupLastLargeMcbEntry @ 0x14053CB20 (FsRtlLookupLastLargeMcbEntry.c)
 *     FsRtlResetLargeMcb @ 0x14053CCD0 (FsRtlResetLargeMcb.c)
 *     FsRtlSplitLargeMcb @ 0x14053CE80 (FsRtlSplitLargeMcb.c)
 *     FsRtlRemovePerStreamContext @ 0x14053D0B0 (FsRtlRemovePerStreamContext.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x14053E1A0 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x14053E284 (FsRtlpCancelWaitingIrp.c)
 *     PnpDisableUserModeNotifications @ 0x1405614F8 (PnpDisableUserModeNotifications.c)
 *     KiOpPatchCode @ 0x14057F400 (KiOpPatchCode.c)
 *     PopRunMaximumIrpWorkers @ 0x140598AD4 (PopRunMaximumIrpWorkers.c)
 *     PopRunNormalIrpWorkers @ 0x140598BAC (PopRunNormalIrpWorkers.c)
 *     RawVerifyVolume @ 0x1405A6C5C (RawVerifyVolume.c)
 *     RtlpTraceDatabaseAcquireLock @ 0x1405B15D8 (RtlpTraceDatabaseAcquireLock.c)
 *     DifExAcquireFastMutexWrapper @ 0x1405D6FB0 (DifExAcquireFastMutexWrapper.c)
 *     DifKeAcquireGuardedMutexWrapper @ 0x1405E2230 (DifKeAcquireGuardedMutexWrapper.c)
 *     DbgkClearProcessDebugObject @ 0x14068277C (DbgkClearProcessDebugObject.c)
 *     PopFreeSessionState @ 0x140682954 (PopFreeSessionState.c)
 *     IoRegisterPlugPlayNotification @ 0x140687F00 (IoRegisterPlugPlayNotification.c)
 *     PnpDeferNotification @ 0x140688310 (PnpDeferNotification.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x1406891D8 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpDelayFreeCmRm @ 0x140698BDC (CmpDelayFreeCmRm.c)
 *     DbgkCopyProcessDebugPort @ 0x1406BA2B0 (DbgkCopyProcessDebugPort.c)
 *     EtwpSetProviderTraitsCommon @ 0x1406BE544 (EtwpSetProviderTraitsCommon.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1406C01C0 (EtwpReleaseProviderTraitsReference.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CBEA4 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x14072380C (FsRtlAcquireToCreateMappedSection.c)
 *     CmpAddToDelayedClose @ 0x14073E5C8 (CmpAddToDelayedClose.c)
 *     PfSnEndTrace @ 0x14074A848 (PfSnEndTrace.c)
 *     PfGetCompletedTrace @ 0x14075EA38 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x14075ECD8 (PfTTraceListAdd.c)
 *     CmpDelayCloseWorker @ 0x14076A130 (CmpDelayCloseWorker.c)
 *     CmpRemoveFromDelayedClose @ 0x14076BDB8 (CmpRemoveFromDelayedClose.c)
 *     PiUEventHandleUnregisterClient @ 0x14077E3A8 (PiUEventHandleUnregisterClient.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x14077E3F0 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyClient @ 0x14077E5DC (PiUEventNotifyClient.c)
 *     PiUEventReferenceEventEntry @ 0x14077E724 (PiUEventReferenceEventEntry.c)
 *     PiUEventNotifyClientPendingEvent @ 0x14077E760 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14077EC88 (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventHandleGetEvent @ 0x14077F328 (PiUEventHandleGetEvent.c)
 *     PiUEventHandleRegistration @ 0x14077F69C (PiUEventHandleRegistration.c)
 *     PiUEventProcessEventWorker @ 0x1407820E0 (PiUEventProcessEventWorker.c)
 *     PiUEventDereferenceEventEntry @ 0x140782218 (PiUEventDereferenceEventEntry.c)
 *     PopDispatchPowerSettingCallbacks @ 0x140782750 (PopDispatchPowerSettingCallbacks.c)
 *     PopCallPowerSettingCallback @ 0x140782874 (PopCallPowerSettingCallback.c)
 *     PopSetPowerSettingValue @ 0x1407829F8 (PopSetPowerSettingValue.c)
 *     PopGetSettingNotificationName @ 0x140783080 (PopGetSettingNotificationName.c)
 *     PnpNotifyTargetDeviceChange @ 0x14078335C (PnpNotifyTargetDeviceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x140783544 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyUserMode @ 0x1407839EC (PiUEventNotifyUserMode.c)
 *     PnpInsertEventInQueue @ 0x140786330 (PnpInsertEventInQueue.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x140786490 (PiDqObjectManagerServiceActionQueue.c)
 *     PnpDeviceEventWorker @ 0x140786860 (PnpDeviceEventWorker.c)
 *     PnpProcessDeferredRegistrations @ 0x140786B44 (PnpProcessDeferredRegistrations.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x140787F20 (PiDqObjectManagerHandleObjectEvent.c)
 *     IopDestroyDeviceNode @ 0x14078E4D0 (IopDestroyDeviceNode.c)
 *     PnpFreeDeviceInstancePath @ 0x14078E708 (PnpFreeDeviceInstancePath.c)
 *     PnpNotifyDeviceClassChange @ 0x14078F280 (PnpNotifyDeviceClassChange.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14078F864 (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryResourceRequirements @ 0x140790344 (PiQueryResourceRequirements.c)
 *     PnpProcessAssignResources @ 0x140790A9C (PnpProcessAssignResources.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x140791288 (PiUEventNotifyDeviceInterfaceChange.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1407913C0 (FsRtlTeardownPerStreamContexts.c)
 *     RawScanDeletedList @ 0x14079169C (RawScanDeletedList.c)
 *     RawDispatch @ 0x140791730 (RawDispatch.c)
 *     RawReadWriteDeviceControl @ 0x140791954 (RawReadWriteDeviceControl.c)
 *     RawCreate @ 0x140791A14 (RawCreate.c)
 *     RawClose @ 0x140791B98 (RawClose.c)
 *     RawCleanup @ 0x140791C18 (RawCleanup.c)
 *     RawMountVolume @ 0x14079236C (RawMountVolume.c)
 *     IoGetDeviceProperty @ 0x1407929A0 (IoGetDeviceProperty.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14079C344 (PipProcessRebuildPowerRelationsQueue.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x14079E720 (FsRtlDeleteKeyFromTunnelCache.c)
 *     FsRtlAddToTunnelCacheEx @ 0x14079ECC0 (FsRtlAddToTunnelCacheEx.c)
 *     FsRtlFindInTunnelCacheEx @ 0x14079EFF0 (FsRtlFindInTunnelCacheEx.c)
 *     PoRegisterPowerSettingCallback @ 0x1407A7060 (PoRegisterPowerSettingCallback.c)
 *     PopLogDisabledSleepReason @ 0x1407A8980 (PopLogDisabledSleepReason.c)
 *     PiUEventBroadcastEventWorker @ 0x1407AA0B0 (PiUEventBroadcastEventWorker.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1407D5C8C (KeSynchronizeWithDynamicProcessors.c)
 *     PfSnGetCompletedTrace @ 0x1407D6F3C (PfSnGetCompletedTrace.c)
 *     PnpBusTypeGuidGetIndex @ 0x1407DB9EC (PnpBusTypeGuidGetIndex.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1407DDE64 (PiUEventQueueBroadcastEventEntry.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1407E1D48 (PnpMapDeviceObjectToDeviceInstance.c)
 *     CmpAddStringToMapping @ 0x1407E3EF0 (CmpAddStringToMapping.c)
 *     CmpDelayFreeRMWorker @ 0x1407E8EB0 (CmpDelayFreeRMWorker.c)
 *     PnpBusTypeGuidGet @ 0x1407E9644 (PnpBusTypeGuidGet.c)
 *     PopDispatchNotificationsToList @ 0x1407EC048 (PopDispatchNotificationsToList.c)
 *     PopGetSettingValue @ 0x1407EC1A0 (PopGetSettingValue.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407F9F68 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x1407FB0EC (PiDqObjectManagerUnregisterQuery.c)
 *     IopLegacyResourceAllocation @ 0x140815844 (IopLegacyResourceAllocation.c)
 *     IopReleaseResources @ 0x1408159AC (IopReleaseResources.c)
 *     PnpBuildCmResourceLists @ 0x140816054 (PnpBuildCmResourceLists.c)
 *     HalpIrtAllocateIndex @ 0x14081E298 (HalpIrtAllocateIndex.c)
 *     KeRegisterProcessorChangeCallback @ 0x140822690 (KeRegisterProcessorChangeCallback.c)
 *     PopRequestShutdownWait @ 0x14082B944 (PopRequestShutdownWait.c)
 *     PfTStart @ 0x140845ED0 (PfTStart.c)
 *     PfTInitialize @ 0x140846F2C (PfTInitialize.c)
 *     HalpIrtExtendRemappingRange @ 0x14085DF6C (HalpIrtExtendRemappingRange.c)
 *     PopDiagTraceControlCallback @ 0x1408629E0 (PopDiagTraceControlCallback.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x140863C0C (PiRegisterKernelSoftRestartNotification.c)
 *     WheaCrashDumpInitializationComplete @ 0x140864A5C (WheaCrashDumpInitializationComplete.c)
 *     PoVolumeDevice @ 0x1408721CC (PoVolumeDevice.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140872360 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     RawUserFsCtrl @ 0x140882194 (RawUserFsCtrl.c)
 *     PiUEventHandleVetoEvent @ 0x140882948 (PiUEventHandleVetoEvent.c)
 *     PnpOrphanNotification @ 0x140882DE4 (PnpOrphanNotification.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140884BAC (PnpCleanupDeviceRegistryValues.c)
 *     HalpIrtAllocateDeviceAperture @ 0x1409346A0 (HalpIrtAllocateDeviceAperture.c)
 *     HalpIrtExtendApertureRange @ 0x1409347F0 (HalpIrtExtendApertureRange.c)
 *     HalpIrtFreeIndex @ 0x140934914 (HalpIrtFreeIndex.c)
 *     HalpIrtReleaseDeviceAperture @ 0x140934A50 (HalpIrtReleaseDeviceAperture.c)
 *     DbgkOpenProcessDebugPort @ 0x140936CE0 (DbgkOpenProcessDebugPort.c)
 *     DbgkpCloseObject @ 0x140937110 (DbgkpCloseObject.c)
 *     DbgkpMarkProcessPeb @ 0x14093740C (DbgkpMarkProcessPeb.c)
 *     DbgkpQueueMessage @ 0x140937E4C (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x140938148 (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x1409388E0 (NtDebugContinue.c)
 *     NtSetInformationDebugObject @ 0x140938C50 (NtSetInformationDebugObject.c)
 *     NtWaitForDebugEvent @ 0x140938DE0 (NtWaitForDebugEvent.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409446E0 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140945F38 (IopSetFileObjectIosbRange.c)
 *     PnpNotifyHwProfileChange @ 0x14095669C (PnpNotifyHwProfileChange.c)
 *     PnpRestartDeviceNode @ 0x140958CBC (PnpRestartDeviceNode.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x14095C488 (PiDqObjectManagerMakeInconsistent.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14096385C (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x140963A90 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x140963B18 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x140963BC4 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x140963D14 (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileMarkAllTransitioningDocksEjected @ 0x140963DD4 (PpProfileMarkAllTransitioningDocksEjected.c)
 *     PpProfileQueryHardwareProfileChange @ 0x140963E24 (PpProfileQueryHardwareProfileChange.c)
 *     PnpRemoveEventFromQueue @ 0x1409645A8 (PnpRemoveEventFromQueue.c)
 *     PipKsrNotifyDrivers @ 0x14096D340 (PipKsrNotifyDrivers.c)
 *     PiUpdateDeviceResourceLists @ 0x14096F20C (PiUpdateDeviceResourceLists.c)
 *     PfTCleanup @ 0x14097F168 (PfTCleanup.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x14097FF90 (PfSnTracingStateExWorkerRoutine.c)
 *     PoDisableSleepStates @ 0x140983FB0 (PoDisableSleepStates.c)
 *     PoReenableSleepStates @ 0x140984070 (PoReenableSleepStates.c)
 *     PoQueueShutdownWorkItem @ 0x140986DC0 (PoQueueShutdownWorkItem.c)
 *     PoUnregisterPowerSettingCallback @ 0x140987070 (PoUnregisterPowerSettingCallback.c)
 *     PopQueryPowerSettingUlong @ 0x14098BACC (PopQueryPowerSettingUlong.c)
 *     ExpUpdateDebugInfo @ 0x1409F9258 (ExpUpdateDebugInfo.c)
 *     ExSwapinWorkerThreads @ 0x140A005C8 (ExSwapinWorkerThreads.c)
 *     WheapReportDeferredLiveDumps @ 0x140A09174 (WheapReportDeferredLiveDumps.c)
 *     CmpGetMappingHiveForString @ 0x140A19B68 (CmpGetMappingHiveForString.c)
 *     PopGracefulShutdown @ 0x140AA0A60 (PopGracefulShutdown.c)
 *     PopFlushVolumeWorker @ 0x140AA62B0 (PopFlushVolumeWorker.c)
 *     PopFlushVolumes @ 0x140AA64E8 (PopFlushVolumes.c)
 *     WheapCreateLiveDumpFromPreviousSession @ 0x140AAB9F4 (WheapCreateLiveDumpFromPreviousSession.c)
 *     WheapSaveRecordForLiveDump @ 0x140AABAA4 (WheapSaveRecordForLiveDump.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1402A1720 (MmGetSessionIdEx.c)
 *     ExpAcquireFastMutexContended @ 0x1402FCD4C (ExpAcquireFastMutexContended.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FA68 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall ExAcquireFastMutex(PFAST_MUTEX FastMutex)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v2; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v5; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  unsigned __int8 CurrentIrql; // si
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  unsigned int v12; // [rsp+30h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(FastMutex, CurrentThread)) != 0 )
  {
    _BitScanForward(&v5, AbEntrySummary);
    v12 = v5;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v5);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v10 = *SchedulerAssist;
      do
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange(SchedulerAssist, v10 & 0xFFDFFFFF, v10);
      }
      while ( v11 != v10 );
      if ( (v10 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v2 = (__int64)(&CurrentThread[1].Process + 12 * v12);
    if ( (unsigned __int64)FastMutex - qword_140C659E8 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v2 + 8) = SessionId;
    *(_QWORD *)v2 = (unsigned __int64)FastMutex & 0x7FFFFFFFFFFFFFFCLL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    ExpAcquireFastMutexContended(FastMutex, v2);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  FastMutex->Owner = KeGetCurrentThread();
  FastMutex->OldIrql = CurrentIrql;
}
