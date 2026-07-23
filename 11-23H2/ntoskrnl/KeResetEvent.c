/*
 * XREFs of KeResetEvent @ 0x1402AFE30
 * Callers:
 *     IopValidateAndGetWriteParameters @ 0x140223D30 (IopValidateAndGetWriteParameters.c)
 *     PopPepUpdateConstraints @ 0x14028D4C4 (PopPepUpdateConstraints.c)
 *     PopFxAllocatePowerIrp @ 0x14028F0BC (PopFxAllocatePowerIrp.c)
 *     CcUnmapVacbArray @ 0x14029F050 (CcUnmapVacbArray.c)
 *     IopResetEvent @ 0x1402AFBA0 (IopResetEvent.c)
 *     MiRetryNonPagedAllocation @ 0x1402E3798 (MiRetryNonPagedAllocation.c)
 *     PopFxIdleWorker @ 0x140312E2C (PopFxIdleWorker.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14032CFA4 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403455A0 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PnpRequestDeviceAction @ 0x1403591E4 (PnpRequestDeviceAction.c)
 *     MiQueueWorkingSetRequest @ 0x14035F068 (MiQueueWorkingSetRequest.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140368BF0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x14036B770 (SmKmStoreHelperWorker.c)
 *     ExUnregisterCallback @ 0x14036E840 (ExUnregisterCallback.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x140370590 (PopUpdateWatchdogNoWorkersEvent.c)
 *     MiSyncCommitSignals @ 0x1403963C0 (MiSyncCommitSignals.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1403989E8 (MiSignalNonPagedPoolWatchers.c)
 *     MiDereferenceSegmentThread @ 0x1403A7E70 (MiDereferenceSegmentThread.c)
 *     MiStoreEvictThread @ 0x1403A8830 (MiStoreEvictThread.c)
 *     MiUpdateAvailableEvents @ 0x1403AE900 (MiUpdateAvailableEvents.c)
 *     MiModifiedPageWriter @ 0x1403B2940 (MiModifiedPageWriter.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403B3470 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     HvlPhase2Initialize @ 0x1403B4E80 (HvlPhase2Initialize.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403B5CD0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcInsertPrivateVolumeCacheMap @ 0x1403C3E18 (CcInsertPrivateVolumeCacheMap.c)
 *     PnpLockDeviceActionQueue @ 0x1403C407C (PnpLockDeviceActionQueue.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14058B0A8 (PopFxIssueComponentPerfStateChanges.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x14059088C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopIdleWakeAssignAccountingToSource @ 0x14059DA4C (PopIdleWakeAssignAccountingToSource.c)
 *     PdcResetEvent @ 0x1405B7A9C (PdcResetEvent.c)
 *     SmTerminateStoreProcess @ 0x1405CA158 (SmTerminateStoreProcess.c)
 *     SmKmStoreHelperWaitForCommand @ 0x1405CBFF8 (SmKmStoreHelperWaitForCommand.c)
 *     DifKeClearEventWrapper @ 0x1405E3260 (DifKeClearEventWrapper.c)
 *     DifKeResetEventWrapper @ 0x1405E5BC0 (DifKeResetEventWrapper.c)
 *     EtwpCovSampCaptureContextStop @ 0x1406035E8 (EtwpCovSampCaptureContextStop.c)
 *     MiProcessDereferenceList @ 0x140625604 (MiProcessDereferenceList.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14063BC40 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiWaitForAvailablePages @ 0x140653E3C (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x140653F98 (MiWaitForFreePage.c)
 *     MiDrainCrossPartitionUsage @ 0x140659F74 (MiDrainCrossPartitionUsage.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14065D584 (MmStoreFlushOutstandingEvictions.c)
 *     sub_14066D060 @ 0x14066D060 (sub_14066D060.c)
 *     WdtpTimerCallback @ 0x1406746E0 (WdtpTimerCallback.c)
 *     IopFlushBuffersFile @ 0x140686004 (IopFlushBuffersFile.c)
 *     NtQueryVolumeInformationFile @ 0x140686AF0 (NtQueryVolumeInformationFile.c)
 *     CmpLinkHiveToMaster @ 0x14068F84C (CmpLinkHiveToMaster.c)
 *     CmUnloadKey @ 0x140698DD8 (CmUnloadKey.c)
 *     IopGetSetSecurityObject @ 0x14069C1D0 (IopGetSetSecurityObject.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     IopXxxControlFile @ 0x1406E5510 (IopXxxControlFile.c)
 *     sub_1406F24D0 @ 0x1406F24D0 (sub_1406F24D0.c)
 *     IopMountVolume @ 0x1407016F8 (IopMountVolume.c)
 *     NtQueryInformationFile @ 0x140725270 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x140730680 (IopDeleteFile.c)
 *     NtCopyFileChunk @ 0x140749A80 (NtCopyFileChunk.c)
 *     IopReadFile @ 0x14074C3B0 (IopReadFile.c)
 *     CmpLockRegistryFreezeAware @ 0x1407539D8 (CmpLockRegistryFreezeAware.c)
 *     IopQueryXxxInformation @ 0x14075D47C (IopQueryXxxInformation.c)
 *     NtLockFile @ 0x140765680 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x140765A90 (BuildQueryDirectoryIrp.c)
 *     NtNotifyChangeMultipleKeys @ 0x140766D20 (NtNotifyChangeMultipleKeys.c)
 *     EtwpLogger @ 0x1407732F0 (EtwpLogger.c)
 *     PnpInsertEventInQueue @ 0x140786520 (PnpInsertEventInQueue.c)
 *     NtClearEvent @ 0x1407B3B30 (NtClearEvent.c)
 *     NtUnlockFile @ 0x1407B4DB0 (NtUnlockFile.c)
 *     IopCancelIrpsInThreadList @ 0x1407C1DB8 (IopCancelIrpsInThreadList.c)
 *     NtQueryEaFile @ 0x1407CA290 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1407CBE60 (NtNotifyChangeDirectoryFileEx.c)
 *     PfGenerateTrace @ 0x1407D3ED0 (PfGenerateTrace.c)
 *     NtResetEvent @ 0x1407D81A0 (NtResetEvent.c)
 *     NtReadFileScatter @ 0x1407E7340 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1407E85C0 (NtWriteFileGather.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x1407E86A4 (SPCallServerHandleWaitForDisplayWindow.c)
 *     EtwpSynchronizeWithLogger @ 0x1407F5C40 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopTrace @ 0x1407F8554 (EtwpStopTrace.c)
 *     PfTLoggingWorker @ 0x140838ED0 (PfTLoggingWorker.c)
 *     PfTInitialize @ 0x14084722C (PfTInitialize.c)
 *     ArbArbiterHandler @ 0x14084C130 (ArbArbiterHandler.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140856B20 (IoRegisterFsRegistrationChangeMountAware.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x14086465C (PopCancelIgnoreBatteryStatusChange.c)
 *     IopCreateArcName @ 0x14086FA68 (IopCreateArcName.c)
 *     SshpSessionManagerSendControlEvent @ 0x1408743E8 (SshpSessionManagerSendControlEvent.c)
 *     NtSetVolumeInformationFile @ 0x140881B10 (NtSetVolumeInformationFile.c)
 *     IopInvalidateVolumesForDevice @ 0x1408820A8 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x140883430 (IoSetInformation.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1408A8A90 (EtwpCovSampCaptureWorkerThread.c)
 *     NtWaitForDebugEvent @ 0x140938FE0 (NtWaitForDebugEvent.c)
 *     DbgkpRemoveErrorPort @ 0x14093A170 (DbgkpRemoveErrorPort.c)
 *     IopSendMessageToTrackService @ 0x1409459E4 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140945CC0 (IopSetEaOrQuotaInformationFile.c)
 *     IoCancelFileOpen @ 0x140946F00 (IoCancelFileOpen.c)
 *     NtSetEaFile @ 0x14094AE60 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14094B470 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x140951B2C (IopFreeBandwidthContract.c)
 *     PopFxUpdateVetoMaskWork @ 0x140986150 (PopFxUpdateVetoMaskWork.c)
 *     PoUnregisterPowerSettingCallback @ 0x140987270 (PoUnregisterPowerSettingCallback.c)
 *     PopSetSystemAwayMode @ 0x14098AA90 (PopSetSystemAwayMode.c)
 *     PopThermalReadCounters @ 0x14098B0B4 (PopThermalReadCounters.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140994290 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     TtmiRetrieveEventFromQueue @ 0x1409AC340 (TtmiRetrieveEventFromQueue.c)
 *     RawQueryFsSizeInfo @ 0x1409B8628 (RawQueryFsSizeInfo.c)
 *     WmipCopyFromEventQueues @ 0x1409E059C (WmipCopyFromEventQueues.c)
 *     sub_140A4C958 @ 0x140A4C958 (sub_140A4C958.c)
 *     IoShutdownSystem @ 0x140A999A4 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140A99D54 (IopShutdownBaseFileSystems.c)
 *     PfpScenCtxPrefetchWait @ 0x140AA01C4 (PfpScenCtxPrefetchWait.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x140AA03CC (PfpScenCtxQueryScenarioInformation.c)
 *     PopNewWakeInfo @ 0x140AA0F18 (PopNewWakeInfo.c)
 *     AnFwDisplayFade @ 0x140AEC9E8 (AnFwDisplayFade.c)
 *     MiInitializePagedPoolEvents @ 0x140B72FB0 (MiInitializePagedPoolEvents.c)
 *     IopGetBootDiskInformation @ 0x140B93A0C (IopGetBootDiskInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __stdcall KeResetEvent(PRKEVENT Event)
{
  unsigned __int8 CurrentIrql; // di
  LONG SignalState; // esi
  _DWORD *SchedulerAssist; // r8
  __int64 v6; // r9
  unsigned __int8 v7; // cl
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *v9; // r9
  int v10; // edx
  bool v11; // zf
  int v12; // [rsp+40h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v6) = 4;
    else
      v6 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v6;
  }
  v12 = 0;
  while ( _interlockedbittestandset(&Event->Header.Lock, 7u) )
  {
    do
      KeYieldProcessorEx(&v12);
    while ( (Event->Header.LockNV & 0x80u) != 0 );
  }
  SignalState = Event->Header.SignalState;
  Event->Header.SignalState = 0;
  _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
  if ( (_DWORD)KiIrqlFlags )
  {
    v7 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v11 = (v10 & v9[5]) == 0;
      v9[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return SignalState;
}
