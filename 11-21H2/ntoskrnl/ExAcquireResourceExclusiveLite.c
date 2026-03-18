/*
 * XREFs of ExAcquireResourceExclusiveLite @ 0x1402AE340
 * Callers:
 *     SepRmCallLsa @ 0x140203950 (SepRmCallLsa.c)
 *     SepDesktopAppxSubProcessToken @ 0x140203EE0 (SepDesktopAppxSubProcessToken.c)
 *     SepQueueWorkItem @ 0x140223644 (SepQueueWorkItem.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x1402557A4 (SeTokenSetRedirectionTrustPolicy.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x14025A33C (SeTokenSetNoChildProcessRestricted.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14025AA04 (PnpUnregisterPlugPlayNotification.c)
 *     CcAcquireByteRangeForWrite @ 0x140289260 (CcAcquireByteRangeForWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14028B12C (FsRtlAcquireFileForModWriteEx.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1402D1E10 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     MiProcessLoaderEntry @ 0x1402D8C20 (MiProcessLoaderEntry.c)
 *     CcPinFileData @ 0x14032AD00 (CcPinFileData.c)
 *     CcUnpinRepinnedBcb @ 0x14053A6C0 (CcUnpinRepinnedBcb.c)
 *     IoConfigureCrashDump @ 0x140551D58 (IoConfigureCrashDump.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1405531C0 (IoUpdateDumpPhysicalRanges.c)
 *     PiSwIrpCancelStartCreate @ 0x140564310 (PiSwIrpCancelStartCreate.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x140564DE8 (PiDmaGuardQueueRemoveEntry.c)
 *     MiAcquireResourceExclusiveLite @ 0x140581D30 (MiAcquireResourceExclusiveLite.c)
 *     RtlpAllocateHeap @ 0x1405E80B0 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x1405EA0E4 (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x1405EAF08 (RtlpSetupExtendedBlock.c)
 *     SepInternalSetSecurityAttributesToken @ 0x1405F3E6C (SepInternalSetSecurityAttributesToken.c)
 *     SeSetSecurityAttributesTokenEx @ 0x1405F5440 (SeSetSecurityAttributesTokenEx.c)
 *     DifExAcquireResourceExclusiveLiteWrapper @ 0x140606A70 (DifExAcquireResourceExclusiveLiteWrapper.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14063D1F0 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     PiSwDeviceFree @ 0x140661C4C (PiSwDeviceFree.c)
 *     NtAdjustGroupsToken @ 0x140662780 (NtAdjustGroupsToken.c)
 *     SepReferenceLogonSessionSilo @ 0x14066B900 (SepReferenceLogonSessionSilo.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140678C4C (PspAllocateAndQueryNotificationChannel.c)
 *     PspLockRootJobExclusive @ 0x140678FCC (PspLockRootJobExclusive.c)
 *     PspFreezeJobTree @ 0x140679034 (PspFreezeJobTree.c)
 *     PspLockJobsAndProcessExclusive @ 0x1406820CC (PspLockJobsAndProcessExclusive.c)
 *     PspLockJobChain @ 0x140682C34 (PspLockJobChain.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140682EA4 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspLockJobConditionally @ 0x14068565C (PspLockJobConditionally.c)
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x1406954C8 (PspSetEnergyTrackingStateJobTree.c)
 *     SepDeReferenceLogonSession @ 0x14069BBC0 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x14069BDD0 (SepDeleteLogonSessionTrack.c)
 *     CmpStopRMLog @ 0x14069FF64 (CmpStopRMLog.c)
 *     NtCreateTimer @ 0x1406B4B90 (NtCreateTimer.c)
 *     SepCreateLogonSessionTrack @ 0x1406BBC4C (SepCreateLogonSessionTrack.c)
 *     NtGetMUIRegistryInfo @ 0x1406BE9A0 (NtGetMUIRegistryInfo.c)
 *     SepUpdateLogonSessionTrack @ 0x1406C5B04 (SepUpdateLogonSessionTrack.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406C7604 (_CmGetDeviceSoftwareKey.c)
 *     IopGetRootDevices @ 0x1406CF708 (IopGetRootDevices.c)
 *     IopSetDeviceSecurityDescriptor @ 0x1406DB04C (IopSetDeviceSecurityDescriptor.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406DB590 (IoGetDeviceInterfaceAlias.c)
 *     IoEnumerateRegisteredFiltersList @ 0x1406DFB70 (IoEnumerateRegisteredFiltersList.c)
 *     PspSetBackgroundJobTree @ 0x1406E0138 (PspSetBackgroundJobTree.c)
 *     PspGetMemoryPartitionFromJobList @ 0x1406E2D00 (PspGetMemoryPartitionFromJobList.c)
 *     PiSwProcessParentStartIrp @ 0x1406E4E14 (PiSwProcessParentStartIrp.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1406E5574 (PiPnpRtlSetDeviceRegProperty.c)
 *     SeSetVirtualizationToken @ 0x1406E6FE8 (SeSetVirtualizationToken.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x1406E8720 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     SepBlockAccessForLogonSession @ 0x1406EB0AC (SepBlockAccessForLogonSession.c)
 *     MmChangeImageProtection @ 0x1406F5800 (MmChangeImageProtection.c)
 *     MmLockPagableDataSection @ 0x1406F5E50 (MmLockPagableDataSection.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1406FE4F0 (FsRtlAcquireFileExclusiveCommon.c)
 *     PspLockJobExclusive @ 0x1406FFED4 (PspLockJobExclusive.c)
 *     CmpTransWriteLog @ 0x140717EE4 (CmpTransWriteLog.c)
 *     CmpLockRegistryExclusive @ 0x14071B6EC (CmpLockRegistryExclusive.c)
 *     IopGetSetSecurityObject @ 0x14071E8F0 (IopGetSetSecurityObject.c)
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 *     CmpCleanupTransactionState @ 0x140742300 (CmpCleanupTransactionState.c)
 *     CmpAccountForLogReservation @ 0x14074244C (CmpAccountForLogReservation.c)
 *     IopBootLog @ 0x140748300 (IopBootLog.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140748E80 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     IopLoadDriver @ 0x14074A178 (IopLoadDriver.c)
 *     SeSetSessionIdToken @ 0x1407530D0 (SeSetSessionIdToken.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 *     SeSetMandatoryPolicyToken @ 0x14075563C (SeSetMandatoryPolicyToken.c)
 *     PpCheckInDriverDatabase @ 0x14075EA10 (PpCheckInDriverDatabase.c)
 *     MiCancelPhase0Locking @ 0x1407610B4 (MiCancelPhase0Locking.c)
 *     PiSwIrpPropertySet @ 0x140762C04 (PiSwIrpPropertySet.c)
 *     PiSwIrpSetLifetime @ 0x140762F18 (PiSwIrpSetLifetime.c)
 *     PiSwIrpInterfaceRegister @ 0x14076308C (PiSwIrpInterfaceRegister.c)
 *     PiSwPdoPnPDispatch @ 0x140763800 (PiSwPdoPnPDispatch.c)
 *     PiSwCompleteCreate @ 0x14076426C (PiSwCompleteCreate.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140766258 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiSwStopDestroy @ 0x140766F84 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x140767040 (PiSwProcessParentRemoveIrp.c)
 *     PiSwLock @ 0x1407677F0 (PiSwLock.c)
 *     IopDoDeferredSetInterfaceState @ 0x140768F5C (IopDoDeferredSetInterfaceState.c)
 *     IoSetDeviceInterfaceState @ 0x140769100 (IoSetDeviceInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x140769C24 (IopRegisterDeviceInterface.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x14076A0A8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddObjectWorker @ 0x14076A1F0 (PiDmListAddObjectWorker.c)
 *     PiDmAddCacheReferenceForObject @ 0x14076A3C4 (PiDmAddCacheReferenceForObject.c)
 *     PpDeviceRegistration @ 0x14076B554 (PpDeviceRegistration.c)
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x14076F8AC (PipEnumerateCompleted.c)
 *     PiPnpRtlSetObjectProperty @ 0x140771524 (PiPnpRtlSetObjectProperty.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1407756F4 (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x14077572C (PpDevNodeLockTree.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x140775990 (PiDqObjectManagerServiceActionQueue.c)
 *     PiPnpRtlObjectEventWorker @ 0x140778830 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEndOperation @ 0x140779A50 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140779DC4 (PiPnpRtlBeginOperation.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1407829F8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x140782BB0 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     IopGetDeviceInterfaces @ 0x1407879A8 (IopGetDeviceInterfaces.c)
 *     PnpNotifyTargetDeviceChange @ 0x14078B7C4 (PnpNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14078C2F8 (PiDcHandleCustomDeviceEvent.c)
 *     PnpNotifyDeviceClassChange @ 0x14078D5D8 (PnpNotifyDeviceClassChange.c)
 *     NtCreateLowBoxToken @ 0x14078DDF0 (NtCreateLowBoxToken.c)
 *     NtAdjustPrivilegesToken @ 0x14079DC50 (NtAdjustPrivilegesToken.c)
 *     PiDrvDbLoadNode @ 0x1407D4E34 (PiDrvDbLoadNode.c)
 *     PiDrvDbUnloadNode @ 0x1407D4F98 (PiDrvDbUnloadNode.c)
 *     ExAcquireTimeRefreshLock @ 0x1407D6F54 (ExAcquireTimeRefreshLock.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1407D79B4 (PfSnPrefetchCacheEntryUpdate.c)
 *     PfSnCheckActionsNeeded @ 0x1407DD3D0 (PfSnCheckActionsNeeded.c)
 *     PopAcquireAdaptiveLock @ 0x1407EF098 (PopAcquireAdaptiveLock.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1407F099C (FsRtlAcquireFileForCcFlushEx.c)
 *     PspSetQuotaLimits @ 0x1407F2DBC (PspSetQuotaLimits.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x140808994 (WmiAcquireSmbiosLockExclusive.c)
 *     IoUnregisterFileSystem @ 0x14080C290 (IoUnregisterFileSystem.c)
 *     CmpStartRMLog @ 0x14080C884 (CmpStartRMLog.c)
 *     PnpChainDereferenceComplete @ 0x14080EA40 (PnpChainDereferenceComplete.c)
 *     PnpDelayedRemoveWorker @ 0x14080EBD0 (PnpDelayedRemoveWorker.c)
 *     IoRegisterFileSystem @ 0x14080F4B0 (IoRegisterFileSystem.c)
 *     PnpDisableDeviceInterfaces @ 0x140810788 (PnpDisableDeviceInterfaces.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140810CB4 (PnpQueuePendingSurpriseRemoval.c)
 *     MiRememberUnloadedDriver @ 0x14081BBF8 (MiRememberUnloadedDriver.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14081D0F0 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14081F220 (IoReportRootDevice.c)
 *     PpDevCfgProcessDevices @ 0x140827F54 (PpDevCfgProcessDevices.c)
 *     IopCopyBootLogRegistryToFile @ 0x14082848C (IopCopyBootLogRegistryToFile.c)
 *     MiWriteProtectSystemImages @ 0x14082B668 (MiWriteProtectSystemImages.c)
 *     SepRmCommandServerThread @ 0x14083B300 (SepRmCommandServerThread.c)
 *     SeExchangePrimaryToken @ 0x140847260 (SeExchangePrimaryToken.c)
 *     IoInitializeCrashDump @ 0x14084BDD8 (IoInitializeCrashDump.c)
 *     MmFreeBootDriverInitializationCode @ 0x14084C1C8 (MmFreeBootDriverInitializationCode.c)
 *     PpReleaseBootDDB @ 0x14084DC6C (PpReleaseBootDDB.c)
 *     PiSwIrpInterfacePropertySet @ 0x14084F808 (PiSwIrpInterfacePropertySet.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1408545B0 (SepRmGlobalSaclSetWrkr.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1408549A0 (IoOpenDeviceInterfaceRegistryKey.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140859460 (DrvDbOpenDriverDatabaseRegKey.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140859F30 (IoRegisterFsRegistrationChangeMountAware.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x14085B59C (ExpRegisterFirmwareTableInformationHandler.c)
 *     NtFlushInstallUILanguage @ 0x14085F580 (NtFlushInstallUILanguage.c)
 *     PiSwIrpInterfaceSetState @ 0x140860758 (PiSwIrpInterfaceSetState.c)
 *     FsRtlCopyWrite @ 0x14092D2C0 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14092DCF0 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlpHeatRegisterVolume @ 0x14092FB38 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x14092FCDC (FsRtlpHeatUnregisterVolume.c)
 *     IopBootLogToFile @ 0x140933C14 (IopBootLogToFile.c)
 *     IopInitializeBootLogging @ 0x1409346B0 (IopInitializeBootLogging.c)
 *     IoUnregisterFsRegistrationChange @ 0x140936710 (IoUnregisterFsRegistrationChange.c)
 *     IoCaptureLiveDump @ 0x14093A0B8 (IoCaptureLiveDump.c)
 *     PiGetDeviceRegistryProperty @ 0x140943248 (PiGetDeviceRegistryProperty.c)
 *     PnpDeleteDeviceInterfaces @ 0x140944640 (PnpDeleteDeviceInterfaces.c)
 *     PnpNotifyHwProfileChange @ 0x14094488C (PnpNotifyHwProfileChange.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x140944ADC (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140945E70 (PnpGetDeviceInstanceRegistryValue.c)
 *     PiDmListRemoveObjectWorker @ 0x1409491C0 (PiDmListRemoveObjectWorker.c)
 *     PiSwIrpCleanup @ 0x140953700 (PiSwIrpCleanup.c)
 *     PiSwIrpGetLifetime @ 0x140953894 (PiSwIrpGetLifetime.c)
 *     PiCMCreateDevice @ 0x140954434 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140954E2C (PiCMDeleteDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140955848 (PiCMGenerateDeviceInstance.c)
 *     PiCMUnregisterDeviceInterface @ 0x14095644C (PiCMUnregisterDeviceInterface.c)
 *     PipKsrNotifyDrivers @ 0x140958B94 (PipKsrNotifyDrivers.c)
 *     PiInitializeDevice @ 0x14095975C (PiInitializeDevice.c)
 *     PiDmaGuardQueueFlush @ 0x14095EB04 (PiDmaGuardQueueFlush.c)
 *     PipDgqInsertEntry @ 0x14095EC4C (PipDgqInsertEntry.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x1409959F8 (PopPowerAggregatorEngageModernStandby.c)
 *     PopDripsWatchdogCallbackWorker @ 0x1409962E0 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x1409965B0 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogStartWatchdog @ 0x140996854 (PopDripsWatchdogStartWatchdog.c)
 *     PopDripsWatchdogStopWatchdog @ 0x1409969C4 (PopDripsWatchdogStopWatchdog.c)
 *     TtmpStopCallout @ 0x1409A2E54 (TtmpStopCallout.c)
 *     TtmiResetInactivityTimer @ 0x1409A332C (TtmiResetInactivityTimer.c)
 *     TtmpCloseTerminalHandle @ 0x1409A3930 (TtmpCloseTerminalHandle.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x1409A4000 (TtmpWnfInactivityTimeoutCallback.c)
 *     TtmCleanupCurrentSession @ 0x1409A40F8 (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x1409A4208 (TtmInitCurrentSession.c)
 *     TtmiAcquireTerminalSession @ 0x1409A4BF0 (TtmiAcquireTerminalSession.c)
 *     TtmpAcquireSessionById @ 0x1409A5200 (TtmpAcquireSessionById.c)
 *     TtmpInitiateModernStandbyTransition @ 0x1409A56A4 (TtmpInitiateModernStandbyTransition.c)
 *     TtmpSessionPowerControl @ 0x1409A5B64 (TtmpSessionPowerControl.c)
 *     TtmpSessionWorker @ 0x1409A5C10 (TtmpSessionWorker.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x1409A5F60 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1409A651C (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiCloseEventQueue @ 0x1409AB08C (TtmiCloseEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x1409AB284 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1409AB3EC (TtmiWriteEventToSingleQueue.c)
 *     TtmpDeleteQueue @ 0x1409AB5A0 (TtmpDeleteQueue.c)
 *     PspSetJobMemoryPartition @ 0x1409B08E8 (PspSetJobMemoryPartition.c)
 *     RtlZeroHeap @ 0x1409BAF80 (RtlZeroHeap.c)
 *     SeSetPrivateNameSpaceToken @ 0x1409C6248 (SeSetPrivateNameSpaceToken.c)
 *     SepSetServerSiloToken @ 0x1409C664C (SepSetServerSiloToken.c)
 *     SepAddTokenLogonSession @ 0x1409CD320 (SepAddTokenLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1409CD41C (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x1409CD544 (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x1409CD6CC (SepRemoveTokenLogonSession.c)
 *     ExpQuerySingleModuleInformation @ 0x1409F75A0 (ExpQuerySingleModuleInformation.c)
 *     NtMapCMFModule @ 0x140A05860 (NtMapCMFModule.c)
 *     AdtpBuildAccessesString @ 0x140A1C148 (AdtpBuildAccessesString.c)
 *     _PnpCtxCloseMachine @ 0x140A2296C (_PnpCtxCloseMachine.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 *     IoShutdownSystem @ 0x140A651B8 (IoShutdownSystem.c)
 *     MiUnlockBootPageSections @ 0x140B0856C (MiUnlockBootPageSections.c)
 *     PipResetDevices @ 0x140B105C4 (PipResetDevices.c)
 *     IopInitCrashDumpRegCallback @ 0x140B219F0 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     ExpBoostIoAfterAcquire @ 0x14021CA70 (ExpBoostIoAfterAcquire.c)
 *     ExpWaitForResource @ 0x140231990 (ExpWaitForResource.c)
 *     ExpPrepareToWaitForResourceExclusive @ 0x14023CBE0 (ExpPrepareToWaitForResourceExclusive.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpTryAcquireResourceExclusive @ 0x1402AE310 (ExpTryAcquireResourceExclusive.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpApplyPrewaitBoost @ 0x14033B6F0 (ExpApplyPrewaitBoost.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x14039BA38 (ExpFastResourceLegacyAcquireExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1406325F8 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x140632AC8 (PerfLogExecutiveResourceWait.c)
 */

BOOLEAN __stdcall ExAcquireResourceExclusiveLite(PERESOURCE Resource, BOOLEAN Wait)
{
  USHORT Flag; // cx
  unsigned __int8 v5; // r8
  struct _KTHREAD *CurrentThread; // rbp
  bool v7; // si
  __int64 v8; // rcx
  BOOLEAN v9; // di
  ULONG v10; // ecx
  unsigned __int64 OldIrql; // rbp
  unsigned __int64 v13; // rdi
  ULONG v14; // edi
  ULONG v15; // edi
  unsigned __int64 v16; // rbp
  unsigned __int8 v17; // cl
  struct _KTHREAD *v18; // rdx
  unsigned __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v25; // eax
  bool v26; // zf
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r8
  int v30; // eax
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r8
  int v34; // eax
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r8
  int v38; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v40[4]; // [rsp+48h] [rbp-40h] BYREF

  Flag = Resource->Flag;
  v5 = (Wait == 0) + 1;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) == 0 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    memset(v40, 0, 48);
    CurrentThread = KeGetCurrentThread();
    v7 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
    __incgsdword(0x8A78u);
    KeAcquireInStackQueuedSpinLock(&Resource->SpinLock, &LockHandle);
    v9 = ExpTryAcquireResourceExclusive((__int64)Resource);
    if ( v9 )
    {
      v10 = Resource->OwnerEntry.TableSize & 7;
      Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)CurrentThread;
      Resource->OwnerEntry.TableSize = v10 | 8;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v26 = (v25 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v25;
            if ( v26 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      __incgsdword(0x8A7Cu);
      __incgsdword(0x8A64u);
      if ( v7 )
        PerfLogExecutiveResourceAcquire(65569LL, Resource, 1LL, Resource->ContentionCount);
      return v9;
    }
    if ( (Resource->ReservedLowFlags & 0x80u) != 0
      && (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
    {
      v14 = Resource->OwnerEntry.TableSize + 8;
      Resource->OwnerEntry.TableSize = v14;
      v15 = v14 >> 3;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v16 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v27 = KeGetCurrentIrql();
          if ( v27 <= 0xFu && LockHandle.OldIrql <= 0xFu && v27 >= 2u )
          {
            v28 = KeGetCurrentPrcb();
            v29 = v28->SchedulerAssist;
            v30 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v26 = (v30 & v29[5]) == 0;
            v29[5] &= v30;
            if ( v26 )
              KiRemoveSystemWorkPriorityKick(v28);
          }
        }
      }
      __writecr8(v16);
      __incgsdword(0x8A80u);
      __incgsdword(0x8A64u);
      if ( !v7 )
        return 1;
      v20 = v15;
      v21 = 65585LL;
    }
    else
    {
      if ( !Wait )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v19 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v31 = KeGetCurrentIrql();
            if ( v31 <= 0xFu && LockHandle.OldIrql <= 0xFu && v31 >= 2u )
            {
              v32 = KeGetCurrentPrcb();
              v33 = v32->SchedulerAssist;
              v34 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v26 = (v34 & v33[5]) == 0;
              v33[5] &= v34;
              if ( v26 )
                KiRemoveSystemWorkPriorityKick(v32);
            }
          }
        }
        __writecr8(v19);
        __incgsdword(0x8A88u);
        return 0;
      }
      ExpPrepareToWaitForResourceExclusive(v8, (__int64)CurrentThread, (__int64)v40);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v13 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v35 = KeGetCurrentIrql();
          if ( v35 <= 0xFu && LockHandle.OldIrql <= 0xFu && v35 >= 2u )
          {
            v36 = KeGetCurrentPrcb();
            v37 = v36->SchedulerAssist;
            v38 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v26 = (v38 & v37[5]) == 0;
            v37[5] &= v38;
            if ( v26 )
              KiRemoveSystemWorkPriorityKick(v36);
          }
        }
      }
      __writecr8(v13);
      __incgsdword(0x8A84u);
      if ( v7 )
        PerfLogExecutiveResourceWait(65572LL, Resource, 0LL);
      ExpApplyPrewaitBoost(Resource);
      ExpWaitForResource(
        &Resource->SystemResourcesList,
        (__int64)v40,
        0x10224u,
        (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
      ExpBoostIoAfterAcquire((__int64)Resource, (__int64)CurrentThread, 0);
      __incgsdword(0x8A7Cu);
      __incgsdword(0x8A64u);
      if ( !v7 )
        return 1;
      v20 = 1LL;
      v21 = 65569LL;
    }
    PerfLogExecutiveResourceAcquire(v21, Resource, v20, Resource->ContentionCount);
    return 1;
  }
  v17 = KeGetCurrentIrql();
  v18 = KeGetCurrentThread();
  if ( v17 > v5 )
    KeBugCheckEx(0x1C6u, 0LL, v17, v5, 0LL);
  if ( v17 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (v18->ApcState.InProgressFlags & 2) != 0 )
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !v17 && (v18->MiscFlags & 0x400) == 0 && !v18->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  return ExpFastResourceLegacyAcquireExclusive((ULONG_PTR)Resource);
}
