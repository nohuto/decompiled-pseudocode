/*
 * XREFs of KeResetEvent @ 0x1402AF940
 * Callers:
 *     IopValidateAndGetWriteParameters @ 0x140223D30 (IopValidateAndGetWriteParameters.c)
 *     PopPepUpdateConstraints @ 0x14028D234 (PopPepUpdateConstraints.c)
 *     PopFxAllocatePowerIrp @ 0x14028EE2C (PopFxAllocatePowerIrp.c)
 *     CcUnmapVacbArray @ 0x14029EDC0 (CcUnmapVacbArray.c)
 *     IopResetEvent @ 0x1402AF910 (IopResetEvent.c)
 *     MiRetryNonPagedAllocation @ 0x1402E3508 (MiRetryNonPagedAllocation.c)
 *     PopFxIdleWorker @ 0x140312B9C (PopFxIdleWorker.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14032CD14 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140345310 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PnpRequestDeviceAction @ 0x140359044 (PnpRequestDeviceAction.c)
 *     MiQueueWorkingSetRequest @ 0x14035EEC8 (MiQueueWorkingSetRequest.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140368A50 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x14036B5D0 (SmKmStoreHelperWorker.c)
 *     ExUnregisterCallback @ 0x14036E6A0 (ExUnregisterCallback.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1403703F0 (PopUpdateWatchdogNoWorkersEvent.c)
 *     MiSyncCommitSignals @ 0x1403961E0 (MiSyncCommitSignals.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140398808 (MiSignalNonPagedPoolWatchers.c)
 *     MiDereferenceSegmentThread @ 0x1403A7C90 (MiDereferenceSegmentThread.c)
 *     MiStoreEvictThread @ 0x1403A8650 (MiStoreEvictThread.c)
 *     MiUpdateAvailableEvents @ 0x1403AE720 (MiUpdateAvailableEvents.c)
 *     MiModifiedPageWriter @ 0x1403B2760 (MiModifiedPageWriter.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403B3290 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     HvlPhase2Initialize @ 0x1403B4CA0 (HvlPhase2Initialize.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403B5AF0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcInsertPrivateVolumeCacheMap @ 0x1403C3C38 (CcInsertPrivateVolumeCacheMap.c)
 *     PnpLockDeviceActionQueue @ 0x1403C3E9C (PnpLockDeviceActionQueue.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14058ABB8 (PopFxIssueComponentPerfStateChanges.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x14059039C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopIdleWakeAssignAccountingToSource @ 0x14059D55C (PopIdleWakeAssignAccountingToSource.c)
 *     PdcResetEvent @ 0x1405B752C (PdcResetEvent.c)
 *     SmTerminateStoreProcess @ 0x1405C9BE8 (SmTerminateStoreProcess.c)
 *     SmKmStoreHelperWaitForCommand @ 0x1405CBA88 (SmKmStoreHelperWaitForCommand.c)
 *     DifKeClearEventWrapper @ 0x1405E2CF0 (DifKeClearEventWrapper.c)
 *     DifKeResetEventWrapper @ 0x1405E5650 (DifKeResetEventWrapper.c)
 *     EtwpCovSampCaptureContextStop @ 0x140603098 (EtwpCovSampCaptureContextStop.c)
 *     MiProcessDereferenceList @ 0x1406250B4 (MiProcessDereferenceList.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14063B6F0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiWaitForAvailablePages @ 0x1406538EC (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x140653A48 (MiWaitForFreePage.c)
 *     MiDrainCrossPartitionUsage @ 0x140659A24 (MiDrainCrossPartitionUsage.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14065D034 (MmStoreFlushOutstandingEvictions.c)
 *     sub_14066CB10 @ 0x14066CB10 (sub_14066CB10.c)
 *     WdtpTimerCallback @ 0x140674190 (WdtpTimerCallback.c)
 *     IopFlushBuffersFile @ 0x140686004 (IopFlushBuffersFile.c)
 *     NtQueryVolumeInformationFile @ 0x140686AF0 (NtQueryVolumeInformationFile.c)
 *     CmpLinkHiveToMaster @ 0x14068F84C (CmpLinkHiveToMaster.c)
 *     CmUnloadKey @ 0x140698DD8 (CmUnloadKey.c)
 *     IopGetSetSecurityObject @ 0x14069C1D0 (IopGetSetSecurityObject.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     IopXxxControlFile @ 0x1406E54E0 (IopXxxControlFile.c)
 *     sub_1406F24A0 @ 0x1406F24A0 (sub_1406F24A0.c)
 *     IopMountVolume @ 0x1407014E8 (IopMountVolume.c)
 *     NtQueryInformationFile @ 0x140725070 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x140730490 (IopDeleteFile.c)
 *     NtCopyFileChunk @ 0x140749890 (NtCopyFileChunk.c)
 *     IopReadFile @ 0x14074C1C0 (IopReadFile.c)
 *     CmpLockRegistryFreezeAware @ 0x1407537E8 (CmpLockRegistryFreezeAware.c)
 *     IopQueryXxxInformation @ 0x14075D28C (IopQueryXxxInformation.c)
 *     NtLockFile @ 0x140765490 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x1407658A0 (BuildQueryDirectoryIrp.c)
 *     NtNotifyChangeMultipleKeys @ 0x140766B30 (NtNotifyChangeMultipleKeys.c)
 *     EtwpLogger @ 0x140773100 (EtwpLogger.c)
 *     PnpInsertEventInQueue @ 0x140786330 (PnpInsertEventInQueue.c)
 *     NtClearEvent @ 0x1407B3940 (NtClearEvent.c)
 *     NtUnlockFile @ 0x1407B4AD0 (NtUnlockFile.c)
 *     IopCancelIrpsInThreadList @ 0x1407C1AE8 (IopCancelIrpsInThreadList.c)
 *     NtQueryEaFile @ 0x1407C9FC0 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1407CBB90 (NtNotifyChangeDirectoryFileEx.c)
 *     PfGenerateTrace @ 0x1407D3C00 (PfGenerateTrace.c)
 *     NtResetEvent @ 0x1407D7ED0 (NtResetEvent.c)
 *     NtReadFileScatter @ 0x1407E7070 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1407E82F0 (NtWriteFileGather.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x1407E83D4 (SPCallServerHandleWaitForDisplayWindow.c)
 *     EtwpSynchronizeWithLogger @ 0x1407F5970 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopTrace @ 0x1407F8284 (EtwpStopTrace.c)
 *     PfTLoggingWorker @ 0x140838BD0 (PfTLoggingWorker.c)
 *     PfTInitialize @ 0x140846F2C (PfTInitialize.c)
 *     ArbArbiterHandler @ 0x14084BE30 (ArbArbiterHandler.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1408568E0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x14086441C (PopCancelIgnoreBatteryStatusChange.c)
 *     IopCreateArcName @ 0x14086F828 (IopCreateArcName.c)
 *     SshpSessionManagerSendControlEvent @ 0x1408741A8 (SshpSessionManagerSendControlEvent.c)
 *     NtSetVolumeInformationFile @ 0x1408818D0 (NtSetVolumeInformationFile.c)
 *     IopInvalidateVolumesForDevice @ 0x140881E68 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x1408831F0 (IoSetInformation.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1408A8840 (EtwpCovSampCaptureWorkerThread.c)
 *     NtWaitForDebugEvent @ 0x140938DE0 (NtWaitForDebugEvent.c)
 *     DbgkpRemoveErrorPort @ 0x140939F70 (DbgkpRemoveErrorPort.c)
 *     IopSendMessageToTrackService @ 0x1409457E4 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140945AC0 (IopSetEaOrQuotaInformationFile.c)
 *     IoCancelFileOpen @ 0x140946D00 (IoCancelFileOpen.c)
 *     NtSetEaFile @ 0x14094AC60 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14094B270 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x14095192C (IopFreeBandwidthContract.c)
 *     PopFxUpdateVetoMaskWork @ 0x140985F50 (PopFxUpdateVetoMaskWork.c)
 *     PoUnregisterPowerSettingCallback @ 0x140987070 (PoUnregisterPowerSettingCallback.c)
 *     PopSetSystemAwayMode @ 0x14098A890 (PopSetSystemAwayMode.c)
 *     PopThermalReadCounters @ 0x14098AEB4 (PopThermalReadCounters.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140994090 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     TtmiRetrieveEventFromQueue @ 0x1409AC140 (TtmiRetrieveEventFromQueue.c)
 *     RawQueryFsSizeInfo @ 0x1409B8428 (RawQueryFsSizeInfo.c)
 *     WmipCopyFromEventQueues @ 0x1409E039C (WmipCopyFromEventQueues.c)
 *     sub_140A4C6A8 @ 0x140A4C6A8 (sub_140A4C6A8.c)
 *     IoShutdownSystem @ 0x140A99B34 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140A99EE4 (IopShutdownBaseFileSystems.c)
 *     PfpScenCtxPrefetchWait @ 0x140AA0354 (PfpScenCtxPrefetchWait.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x140AA055C (PfpScenCtxQueryScenarioInformation.c)
 *     PopNewWakeInfo @ 0x140AA10A8 (PopNewWakeInfo.c)
 *     AnFwDisplayFade @ 0x140AEC9E8 (AnFwDisplayFade.c)
 *     MiInitializePagedPoolEvents @ 0x140B72FB0 (MiInitializePagedPoolEvents.c)
 *     IopGetBootDiskInformation @ 0x140B93A0C (IopGetBootDiskInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E40 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
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
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
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
  if ( KiIrqlFlags )
  {
    v7 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
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
