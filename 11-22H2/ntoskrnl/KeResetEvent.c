/*
 * XREFs of KeResetEvent @ 0x1402AFB70
 * Callers:
 *     IopValidateAndGetWriteParameters @ 0x140223D50 (IopValidateAndGetWriteParameters.c)
 *     PopPepUpdateConstraints @ 0x14028D114 (PopPepUpdateConstraints.c)
 *     PopFxAllocatePowerIrp @ 0x14028ED0C (PopFxAllocatePowerIrp.c)
 *     CcUnmapVacbArray @ 0x14029ECA0 (CcUnmapVacbArray.c)
 *     IopResetEvent @ 0x1402AF8E0 (IopResetEvent.c)
 *     MiRetryNonPagedAllocation @ 0x1402E3508 (MiRetryNonPagedAllocation.c)
 *     PopFxIdleWorker @ 0x1403129BC (PopFxIdleWorker.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14032CB34 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140344E20 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PnpRequestDeviceAction @ 0x140358A44 (PnpRequestDeviceAction.c)
 *     MiQueueWorkingSetRequest @ 0x14035E878 (MiQueueWorkingSetRequest.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140368400 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x14036AF80 (SmKmStoreHelperWorker.c)
 *     ExUnregisterCallback @ 0x14036E050 (ExUnregisterCallback.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x14036FDA0 (PopUpdateWatchdogNoWorkersEvent.c)
 *     MiSyncCommitSignals @ 0x140394660 (MiSyncCommitSignals.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140396C88 (MiSignalNonPagedPoolWatchers.c)
 *     MiDereferenceSegmentThread @ 0x1403A7500 (MiDereferenceSegmentThread.c)
 *     MiStoreEvictThread @ 0x1403A7F20 (MiStoreEvictThread.c)
 *     MiUpdateAvailableEvents @ 0x1403AE090 (MiUpdateAvailableEvents.c)
 *     MiModifiedPageWriter @ 0x1403B20D0 (MiModifiedPageWriter.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403B2C00 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     HvlPhase2Initialize @ 0x1403B4610 (HvlPhase2Initialize.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403B5460 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcInsertPrivateVolumeCacheMap @ 0x1403C35D8 (CcInsertPrivateVolumeCacheMap.c)
 *     PnpLockDeviceActionQueue @ 0x1403C383C (PnpLockDeviceActionQueue.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14058AC48 (PopFxIssueComponentPerfStateChanges.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x14059042C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopIdleWakeAssignAccountingToSource @ 0x14059D5EC (PopIdleWakeAssignAccountingToSource.c)
 *     PdcResetEvent @ 0x1405B75BC (PdcResetEvent.c)
 *     SmTerminateStoreProcess @ 0x1405C9C78 (SmTerminateStoreProcess.c)
 *     SmKmStoreHelperWaitForCommand @ 0x1405CBB18 (SmKmStoreHelperWaitForCommand.c)
 *     DifKeClearEventWrapper @ 0x1405E2D80 (DifKeClearEventWrapper.c)
 *     DifKeResetEventWrapper @ 0x1405E56E0 (DifKeResetEventWrapper.c)
 *     EtwpCovSampCaptureContextStop @ 0x140603108 (EtwpCovSampCaptureContextStop.c)
 *     MiProcessDereferenceList @ 0x140625124 (MiProcessDereferenceList.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14063B760 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiWaitForAvailablePages @ 0x14065395C (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x140653AB8 (MiWaitForFreePage.c)
 *     MiDrainCrossPartitionUsage @ 0x140659A94 (MiDrainCrossPartitionUsage.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14065D0A4 (MmStoreFlushOutstandingEvictions.c)
 *     sub_14066CB80 @ 0x14066CB80 (sub_14066CB80.c)
 *     WdtpTimerCallback @ 0x140674200 (WdtpTimerCallback.c)
 *     IopFlushBuffersFile @ 0x140686004 (IopFlushBuffersFile.c)
 *     NtQueryVolumeInformationFile @ 0x140686AF0 (NtQueryVolumeInformationFile.c)
 *     CmpLinkHiveToMaster @ 0x14068F84C (CmpLinkHiveToMaster.c)
 *     CmUnloadKey @ 0x140698DD8 (CmUnloadKey.c)
 *     IopGetSetSecurityObject @ 0x14069C1D0 (IopGetSetSecurityObject.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     IopXxxControlFile @ 0x1406E5590 (IopXxxControlFile.c)
 *     sub_1406F2550 @ 0x1406F2550 (sub_1406F2550.c)
 *     IopMountVolume @ 0x140701598 (IopMountVolume.c)
 *     NtQueryInformationFile @ 0x1407250E0 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x140730450 (IopDeleteFile.c)
 *     NtCopyFileChunk @ 0x140749DA0 (NtCopyFileChunk.c)
 *     IopReadFile @ 0x14074C6D0 (IopReadFile.c)
 *     CmpLockRegistryFreezeAware @ 0x140753CF8 (CmpLockRegistryFreezeAware.c)
 *     IopQueryXxxInformation @ 0x14075D79C (IopQueryXxxInformation.c)
 *     NtLockFile @ 0x1407659A0 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x140765DB0 (BuildQueryDirectoryIrp.c)
 *     NtNotifyChangeMultipleKeys @ 0x140767040 (NtNotifyChangeMultipleKeys.c)
 *     EtwpLogger @ 0x140773610 (EtwpLogger.c)
 *     PnpInsertEventInQueue @ 0x140786840 (PnpInsertEventInQueue.c)
 *     NtClearEvent @ 0x1407B3EF0 (NtClearEvent.c)
 *     NtUnlockFile @ 0x1407B5080 (NtUnlockFile.c)
 *     IopCancelIrpsInThreadList @ 0x1407C2078 (IopCancelIrpsInThreadList.c)
 *     NtQueryEaFile @ 0x1407CA550 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1407CC120 (NtNotifyChangeDirectoryFileEx.c)
 *     PfGenerateTrace @ 0x1407D4180 (PfGenerateTrace.c)
 *     NtResetEvent @ 0x1407D8450 (NtResetEvent.c)
 *     NtReadFileScatter @ 0x1407E75F0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1407E8870 (NtWriteFileGather.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x1407E8954 (SPCallServerHandleWaitForDisplayWindow.c)
 *     EtwpSynchronizeWithLogger @ 0x1407F5FE0 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopTrace @ 0x1407F8938 (EtwpStopTrace.c)
 *     PfTLoggingWorker @ 0x14083A720 (PfTLoggingWorker.c)
 *     PfTInitialize @ 0x140848CBC (PfTInitialize.c)
 *     ArbArbiterHandler @ 0x14084D090 (ArbArbiterHandler.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1408577F0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x1408647DC (PopCancelIgnoreBatteryStatusChange.c)
 *     IopCreateArcName @ 0x14086FCF8 (IopCreateArcName.c)
 *     SshpSessionManagerSendControlEvent @ 0x140874678 (SshpSessionManagerSendControlEvent.c)
 *     NtSetVolumeInformationFile @ 0x140881DA0 (NtSetVolumeInformationFile.c)
 *     IopInvalidateVolumesForDevice @ 0x140882338 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x1408836C0 (IoSetInformation.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1408A8D20 (EtwpCovSampCaptureWorkerThread.c)
 *     NtWaitForDebugEvent @ 0x140938E90 (NtWaitForDebugEvent.c)
 *     DbgkpRemoveErrorPort @ 0x14093A020 (DbgkpRemoveErrorPort.c)
 *     IopSendMessageToTrackService @ 0x140945894 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140945B70 (IopSetEaOrQuotaInformationFile.c)
 *     IoCancelFileOpen @ 0x140946DB0 (IoCancelFileOpen.c)
 *     NtSetEaFile @ 0x14094AD10 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14094B320 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x1409519DC (IopFreeBandwidthContract.c)
 *     PopFxUpdateVetoMaskWork @ 0x140986000 (PopFxUpdateVetoMaskWork.c)
 *     PoUnregisterPowerSettingCallback @ 0x140987120 (PoUnregisterPowerSettingCallback.c)
 *     PopSetSystemAwayMode @ 0x14098A940 (PopSetSystemAwayMode.c)
 *     PopThermalReadCounters @ 0x14098AF64 (PopThermalReadCounters.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140994140 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     TtmiRetrieveEventFromQueue @ 0x1409AC1F0 (TtmiRetrieveEventFromQueue.c)
 *     RawQueryFsSizeInfo @ 0x1409B84D8 (RawQueryFsSizeInfo.c)
 *     WmipCopyFromEventQueues @ 0x1409E044C (WmipCopyFromEventQueues.c)
 *     sub_140A4C718 @ 0x140A4C718 (sub_140A4C718.c)
 *     IoShutdownSystem @ 0x140A99BF4 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140A99FA4 (IopShutdownBaseFileSystems.c)
 *     PfpScenCtxPrefetchWait @ 0x140AA0414 (PfpScenCtxPrefetchWait.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x140AA061C (PfpScenCtxQueryScenarioInformation.c)
 *     PopNewWakeInfo @ 0x140AA1168 (PopNewWakeInfo.c)
 *     AnFwDisplayFade @ 0x140AED9AC (AnFwDisplayFade.c)
 *     MiInitializePagedPoolEvents @ 0x140B73D5C (MiInitializePagedPoolEvents.c)
 *     IopGetBootDiskInformation @ 0x140B94A0C (IopGetBootDiskInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
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
