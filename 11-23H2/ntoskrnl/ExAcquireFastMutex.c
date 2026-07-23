/*
 * XREFs of ExAcquireFastMutex @ 0x140230810
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x1402010B8 (FsRtlpWaitOnIrp.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x140230430 (FsRtlLookupPerStreamContextInternal.c)
 *     CcPinFileData @ 0x140263B20 (CcPinFileData.c)
 *     PopIrpWorker @ 0x14028D5E0 (PopIrpWorker.c)
 *     CcWriteBehindPostProcess @ 0x14029B2C8 (CcWriteBehindPostProcess.c)
 *     CcWriteBehindPreProcess @ 0x14029BAF0 (CcWriteBehindPreProcess.c)
 *     CcAcquireByteRangeForWrite @ 0x14029D2C0 (CcAcquireByteRangeForWrite.c)
 *     CcGetVacbMiss @ 0x14029F3A0 (CcGetVacbMiss.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1402A1300 (CcAcquireBcbLockAndVacbLock.c)
 *     CcZeroEndOfLastPage @ 0x1402A2578 (CcZeroEndOfLastPage.c)
 *     CcSetDirtyInMask @ 0x1402C9280 (CcSetDirtyInMask.c)
 *     CcGetFlushedValidData @ 0x1402F0CE0 (CcGetFlushedValidData.c)
 *     CcDeleteMbcb @ 0x1402F4094 (CcDeleteMbcb.c)
 *     PoRunDownDeviceObject @ 0x1403051E8 (PoRunDownDeviceObject.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14032088C (PnpUnregisterPlugPlayNotification.c)
 *     RawInitiateDeleteVolume @ 0x1403220D8 (RawInitiateDeleteVolume.c)
 *     RawCompletionRoutine @ 0x140322370 (RawCompletionRoutine.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1403288C0 (FsRtlPrivateInitializeFileLock.c)
 *     PopGetPowerSettingValue @ 0x14032CED0 (PopGetPowerSettingValue.c)
 *     FsRtlInsertPerStreamContext @ 0x140334050 (FsRtlInsertPerStreamContext.c)
 *     HalpAcpiGetTable @ 0x140337280 (HalpAcpiGetTable.c)
 *     CcGetDirtyPagesHelper @ 0x140338AD0 (CcGetDirtyPagesHelper.c)
 *     FsRtlAddLargeMcbEntry @ 0x14033A190 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlTruncateLargeMcb @ 0x14033A200 (FsRtlTruncateLargeMcb.c)
 *     PopCreateDynamicIrpWorker @ 0x140342038 (PopCreateDynamicIrpWorker.c)
 *     FsRtlpCancelOplockRHIrp @ 0x140360D60 (FsRtlpCancelOplockRHIrp.c)
 *     CcPrepareMdlWrite @ 0x140369330 (CcPrepareMdlWrite.c)
 *     HalpAcpiGetAllTables @ 0x14037D8B8 (HalpAcpiGetAllTables.c)
 *     PopInitilizeAcDcSettings @ 0x140384A34 (PopInitilizeAcDcSettings.c)
 *     HalpAcpiGetFacsMapping @ 0x140396A18 (HalpAcpiGetFacsMapping.c)
 *     FsRtlLookupLargeMcbEntry @ 0x1403A2600 (FsRtlLookupLargeMcbEntry.c)
 *     FsRtlGetNextLargeMcbEntry @ 0x1403A68F0 (FsRtlGetNextLargeMcbEntry.c)
 *     CcRepinBcb @ 0x1403A9270 (CcRepinBcb.c)
 *     FsRtlRemoveLargeMcbEntry @ 0x1403AC040 (FsRtlRemoveLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntryAndIndex @ 0x1403AC970 (FsRtlLookupLastLargeMcbEntryAndIndex.c)
 *     FsRtlNumberOfRunsInLargeMcb @ 0x1403B0530 (FsRtlNumberOfRunsInLargeMcb.c)
 *     PopIrpWorkerControl @ 0x1403B16C0 (PopIrpWorkerControl.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1403B2590 (FsRtlpCancelExclusiveIrp.c)
 *     CcGetLsnForFileObject @ 0x140537F00 (CcGetLsnForFileObject.c)
 *     CcUnmapInactiveViewsInternal @ 0x140538930 (CcUnmapInactiveViewsInternal.c)
 *     FsRtlLookupLastLargeMcbEntry @ 0x14053D070 (FsRtlLookupLastLargeMcbEntry.c)
 *     FsRtlResetLargeMcb @ 0x14053D220 (FsRtlResetLargeMcb.c)
 *     FsRtlSplitLargeMcb @ 0x14053D3D0 (FsRtlSplitLargeMcb.c)
 *     FsRtlRemovePerStreamContext @ 0x14053D600 (FsRtlRemovePerStreamContext.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x14053E6F0 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x14053E7D4 (FsRtlpCancelWaitingIrp.c)
 *     PnpDisableUserModeNotifications @ 0x140561BB8 (PnpDisableUserModeNotifications.c)
 *     KiOpPatchCode @ 0x14057F8F0 (KiOpPatchCode.c)
 *     PopRunMaximumIrpWorkers @ 0x140598FC4 (PopRunMaximumIrpWorkers.c)
 *     PopRunNormalIrpWorkers @ 0x14059909C (PopRunNormalIrpWorkers.c)
 *     RawVerifyVolume @ 0x1405A71CC (RawVerifyVolume.c)
 *     RtlpTraceDatabaseAcquireLock @ 0x1405B1B48 (RtlpTraceDatabaseAcquireLock.c)
 *     DifExAcquireFastMutexWrapper @ 0x1405D7520 (DifExAcquireFastMutexWrapper.c)
 *     DifKeAcquireGuardedMutexWrapper @ 0x1405E27A0 (DifKeAcquireGuardedMutexWrapper.c)
 *     DbgkClearProcessDebugObject @ 0x14068277C (DbgkClearProcessDebugObject.c)
 *     PopFreeSessionState @ 0x140682954 (PopFreeSessionState.c)
 *     IoRegisterPlugPlayNotification @ 0x140687F00 (IoRegisterPlugPlayNotification.c)
 *     PnpDeferNotification @ 0x140688310 (PnpDeferNotification.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x1406891D8 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpDelayFreeCmRm @ 0x140698BDC (CmpDelayFreeCmRm.c)
 *     DbgkCopyProcessDebugPort @ 0x1406BA2E0 (DbgkCopyProcessDebugPort.c)
 *     EtwpSetProviderTraitsCommon @ 0x1406BE574 (EtwpSetProviderTraitsCommon.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1406C01F0 (EtwpReleaseProviderTraitsReference.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CBED4 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x140723A0C (FsRtlAcquireToCreateMappedSection.c)
 *     CmpAddToDelayedClose @ 0x14073E7B8 (CmpAddToDelayedClose.c)
 *     PfSnEndTrace @ 0x14074AA38 (PfSnEndTrace.c)
 *     PfGetCompletedTrace @ 0x14075EC28 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x14075EEC8 (PfTTraceListAdd.c)
 *     CmpDelayCloseWorker @ 0x14076A320 (CmpDelayCloseWorker.c)
 *     CmpRemoveFromDelayedClose @ 0x14076BFA8 (CmpRemoveFromDelayedClose.c)
 *     PiUEventHandleUnregisterClient @ 0x14077E598 (PiUEventHandleUnregisterClient.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x14077E5E0 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyClient @ 0x14077E7CC (PiUEventNotifyClient.c)
 *     PiUEventReferenceEventEntry @ 0x14077E914 (PiUEventReferenceEventEntry.c)
 *     PiUEventNotifyClientPendingEvent @ 0x14077E950 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14077EE78 (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventHandleGetEvent @ 0x14077F518 (PiUEventHandleGetEvent.c)
 *     PiUEventHandleRegistration @ 0x14077F88C (PiUEventHandleRegistration.c)
 *     PiUEventProcessEventWorker @ 0x1407822D0 (PiUEventProcessEventWorker.c)
 *     PiUEventDereferenceEventEntry @ 0x140782408 (PiUEventDereferenceEventEntry.c)
 *     PopDispatchPowerSettingCallbacks @ 0x140782940 (PopDispatchPowerSettingCallbacks.c)
 *     PopCallPowerSettingCallback @ 0x140782A64 (PopCallPowerSettingCallback.c)
 *     PopSetPowerSettingValue @ 0x140782BE8 (PopSetPowerSettingValue.c)
 *     PopGetSettingNotificationName @ 0x140783270 (PopGetSettingNotificationName.c)
 *     PnpNotifyTargetDeviceChange @ 0x14078354C (PnpNotifyTargetDeviceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x140783734 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyUserMode @ 0x140783BDC (PiUEventNotifyUserMode.c)
 *     PnpInsertEventInQueue @ 0x140786520 (PnpInsertEventInQueue.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x140786680 (PiDqObjectManagerServiceActionQueue.c)
 *     PnpDeviceEventWorker @ 0x140786A50 (PnpDeviceEventWorker.c)
 *     PnpProcessDeferredRegistrations @ 0x140786D34 (PnpProcessDeferredRegistrations.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x140788110 (PiDqObjectManagerHandleObjectEvent.c)
 *     IopDestroyDeviceNode @ 0x14078E6C0 (IopDestroyDeviceNode.c)
 *     PnpFreeDeviceInstancePath @ 0x14078E8F8 (PnpFreeDeviceInstancePath.c)
 *     PnpNotifyDeviceClassChange @ 0x14078F470 (PnpNotifyDeviceClassChange.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14078FA54 (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryResourceRequirements @ 0x140790534 (PiQueryResourceRequirements.c)
 *     PnpProcessAssignResources @ 0x140790C8C (PnpProcessAssignResources.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x140791478 (PiUEventNotifyDeviceInterfaceChange.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1407915B0 (FsRtlTeardownPerStreamContexts.c)
 *     RawScanDeletedList @ 0x14079188C (RawScanDeletedList.c)
 *     RawDispatch @ 0x140791920 (RawDispatch.c)
 *     RawReadWriteDeviceControl @ 0x140791B44 (RawReadWriteDeviceControl.c)
 *     RawCreate @ 0x140791C04 (RawCreate.c)
 *     RawClose @ 0x140791D88 (RawClose.c)
 *     RawCleanup @ 0x140791E08 (RawCleanup.c)
 *     RawMountVolume @ 0x14079255C (RawMountVolume.c)
 *     IoGetDeviceProperty @ 0x140792B90 (IoGetDeviceProperty.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14079C534 (PipProcessRebuildPowerRelationsQueue.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x14079E910 (FsRtlDeleteKeyFromTunnelCache.c)
 *     FsRtlAddToTunnelCacheEx @ 0x14079EEB0 (FsRtlAddToTunnelCacheEx.c)
 *     FsRtlFindInTunnelCacheEx @ 0x14079F1E0 (FsRtlFindInTunnelCacheEx.c)
 *     PoRegisterPowerSettingCallback @ 0x1407A7250 (PoRegisterPowerSettingCallback.c)
 *     PopLogDisabledSleepReason @ 0x1407A8B70 (PopLogDisabledSleepReason.c)
 *     PiUEventBroadcastEventWorker @ 0x1407AA2A0 (PiUEventBroadcastEventWorker.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1407D5F5C (KeSynchronizeWithDynamicProcessors.c)
 *     PfSnGetCompletedTrace @ 0x1407D720C (PfSnGetCompletedTrace.c)
 *     PnpBusTypeGuidGetIndex @ 0x1407DBCBC (PnpBusTypeGuidGetIndex.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1407DE134 (PiUEventQueueBroadcastEventEntry.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1407E2018 (PnpMapDeviceObjectToDeviceInstance.c)
 *     CmpAddStringToMapping @ 0x1407E41C0 (CmpAddStringToMapping.c)
 *     CmpDelayFreeRMWorker @ 0x1407E9180 (CmpDelayFreeRMWorker.c)
 *     PnpBusTypeGuidGet @ 0x1407E9914 (PnpBusTypeGuidGet.c)
 *     PopDispatchNotificationsToList @ 0x1407EC318 (PopDispatchNotificationsToList.c)
 *     PopGetSettingValue @ 0x1407EC470 (PopGetSettingValue.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407FA238 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x1407FB3BC (PiDqObjectManagerUnregisterQuery.c)
 *     IopLegacyResourceAllocation @ 0x140815B14 (IopLegacyResourceAllocation.c)
 *     IopReleaseResources @ 0x140815C7C (IopReleaseResources.c)
 *     PnpBuildCmResourceLists @ 0x140816324 (PnpBuildCmResourceLists.c)
 *     HalpIrtAllocateIndex @ 0x14081E568 (HalpIrtAllocateIndex.c)
 *     KeRegisterProcessorChangeCallback @ 0x140822990 (KeRegisterProcessorChangeCallback.c)
 *     PopRequestShutdownWait @ 0x14082BC44 (PopRequestShutdownWait.c)
 *     PfTStart @ 0x1408461D0 (PfTStart.c)
 *     PfTInitialize @ 0x14084722C (PfTInitialize.c)
 *     HalpIrtExtendRemappingRange @ 0x14085E1AC (HalpIrtExtendRemappingRange.c)
 *     PopDiagTraceControlCallback @ 0x140862C20 (PopDiagTraceControlCallback.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x140863E4C (PiRegisterKernelSoftRestartNotification.c)
 *     WheaCrashDumpInitializationComplete @ 0x140864C9C (WheaCrashDumpInitializationComplete.c)
 *     PoVolumeDevice @ 0x14087240C (PoVolumeDevice.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x1408725A0 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     RawUserFsCtrl @ 0x1408823D4 (RawUserFsCtrl.c)
 *     PiUEventHandleVetoEvent @ 0x140882B88 (PiUEventHandleVetoEvent.c)
 *     PnpOrphanNotification @ 0x140883024 (PnpOrphanNotification.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140884DEC (PnpCleanupDeviceRegistryValues.c)
 *     HalpIrtAllocateDeviceAperture @ 0x1409348A0 (HalpIrtAllocateDeviceAperture.c)
 *     HalpIrtExtendApertureRange @ 0x1409349F0 (HalpIrtExtendApertureRange.c)
 *     HalpIrtFreeIndex @ 0x140934B14 (HalpIrtFreeIndex.c)
 *     HalpIrtReleaseDeviceAperture @ 0x140934C50 (HalpIrtReleaseDeviceAperture.c)
 *     DbgkOpenProcessDebugPort @ 0x140936EE0 (DbgkOpenProcessDebugPort.c)
 *     DbgkpCloseObject @ 0x140937310 (DbgkpCloseObject.c)
 *     DbgkpMarkProcessPeb @ 0x14093760C (DbgkpMarkProcessPeb.c)
 *     DbgkpQueueMessage @ 0x14093804C (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x140938348 (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x140938AE0 (NtDebugContinue.c)
 *     NtSetInformationDebugObject @ 0x140938E50 (NtSetInformationDebugObject.c)
 *     NtWaitForDebugEvent @ 0x140938FE0 (NtWaitForDebugEvent.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409448E0 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140946138 (IopSetFileObjectIosbRange.c)
 *     PnpNotifyHwProfileChange @ 0x14095689C (PnpNotifyHwProfileChange.c)
 *     PnpRestartDeviceNode @ 0x140958EBC (PnpRestartDeviceNode.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x14095C688 (PiDqObjectManagerMakeInconsistent.c)
 *     PnpProfileUpdateHardwareProfile @ 0x140963A5C (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x140963C90 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x140963D18 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x140963DC4 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x140963F14 (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileMarkAllTransitioningDocksEjected @ 0x140963FD4 (PpProfileMarkAllTransitioningDocksEjected.c)
 *     PpProfileQueryHardwareProfileChange @ 0x140964024 (PpProfileQueryHardwareProfileChange.c)
 *     PnpRemoveEventFromQueue @ 0x1409647A8 (PnpRemoveEventFromQueue.c)
 *     PipKsrNotifyDrivers @ 0x14096D540 (PipKsrNotifyDrivers.c)
 *     PiUpdateDeviceResourceLists @ 0x14096F40C (PiUpdateDeviceResourceLists.c)
 *     PfTCleanup @ 0x14097F368 (PfTCleanup.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x140980190 (PfSnTracingStateExWorkerRoutine.c)
 *     PoDisableSleepStates @ 0x1409841B0 (PoDisableSleepStates.c)
 *     PoReenableSleepStates @ 0x140984270 (PoReenableSleepStates.c)
 *     PoQueueShutdownWorkItem @ 0x140986FC0 (PoQueueShutdownWorkItem.c)
 *     PoUnregisterPowerSettingCallback @ 0x140987270 (PoUnregisterPowerSettingCallback.c)
 *     PopQueryPowerSettingUlong @ 0x14098BCCC (PopQueryPowerSettingUlong.c)
 *     ExpUpdateDebugInfo @ 0x1409F94E8 (ExpUpdateDebugInfo.c)
 *     ExSwapinWorkerThreads @ 0x140A00858 (ExSwapinWorkerThreads.c)
 *     WheapReportDeferredLiveDumps @ 0x140A09424 (WheapReportDeferredLiveDumps.c)
 *     CmpGetMappingHiveForString @ 0x140A19E18 (CmpGetMappingHiveForString.c)
 *     PopGracefulShutdown @ 0x140AA08D0 (PopGracefulShutdown.c)
 *     PopFlushVolumeWorker @ 0x140AA6120 (PopFlushVolumeWorker.c)
 *     PopFlushVolumes @ 0x140AA6358 (PopFlushVolumes.c)
 *     WheapCreateLiveDumpFromPreviousSession @ 0x140AAB864 (WheapCreateLiveDumpFromPreviousSession.c)
 *     WheapSaveRecordForLiveDump @ 0x140AAB914 (WheapSaveRecordForLiveDump.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExpAcquireFastMutexContended @ 0x1402FCFDC (ExpAcquireFastMutexContended.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
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
