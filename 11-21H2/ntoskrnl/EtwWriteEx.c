/*
 * XREFs of EtwWriteEx @ 0x140300C00
 * Callers:
 *     PopDiagTraceRegisterSystemState @ 0x140201D94 (PopDiagTraceRegisterSystemState.c)
 *     PoTraceSystemTimerResolutionIgnore @ 0x140202064 (PoTraceSystemTimerResolutionIgnore.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IoReuseIrp @ 0x14020BE20 (IoReuseIrp.c)
 *     EtwTraceContFreeEvent @ 0x140213F3C (EtwTraceContFreeEvent.c)
 *     MiAllocateContiguousMemory @ 0x140214244 (MiAllocateContiguousMemory.c)
 *     PpmPerfRecordUtility @ 0x14021BD70 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x14021C050 (PpmParkRecordNodeStatistics.c)
 *     PpmPerfSelectProcessorState @ 0x14021FD60 (PpmPerfSelectProcessorState.c)
 *     PpmCheckComputeEnergy @ 0x140222C20 (PpmCheckComputeEnergy.c)
 *     PoLatencySensitivityHint @ 0x1402244A0 (PoLatencySensitivityHint.c)
 *     PpmMediaBufferingWorker @ 0x140224810 (PpmMediaBufferingWorker.c)
 *     PpmCheckStart @ 0x140224A24 (PpmCheckStart.c)
 *     PpmCheckRun @ 0x140224B50 (PpmCheckRun.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x140224DF0 (PopDiagTraceSystemLatencyUpdate.c)
 *     PpmEventDomainPerfStateChange @ 0x140225CB4 (PpmEventDomainPerfStateChange.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x14022F440 (PoTraceSystemTimerResolutionKernel.c)
 *     PpmEventProcessorPerfStateChange @ 0x14023BABC (PpmEventProcessorPerfStateChange.c)
 *     PpmEventTraceExpectedUtility @ 0x14023BB5C (PpmEventTraceExpectedUtility.c)
 *     EtwWriteTransfer @ 0x1402418C0 (EtwWriteTransfer.c)
 *     SeLogAccessFailure @ 0x14024429C (SeLogAccessFailure.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x14024A824 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14024A9B0 (_tlgWriteEx_EtwWriteEx.c)
 *     EtwpTiFillVadEventWrite @ 0x1402519E4 (EtwpTiFillVadEventWrite.c)
 *     PopDiagTraceEventNoPayload @ 0x140256CA0 (PopDiagTraceEventNoPayload.c)
 *     MiAllocatePagesForMdl @ 0x140265428 (MiAllocatePagesForMdl.c)
 *     EtwpTraceFileName @ 0x140280F60 (EtwpTraceFileName.c)
 *     _tlgWriteAgg @ 0x1402A1A20 (_tlgWriteAgg.c)
 *     PspRevertContainerImpersonation @ 0x1402A86B0 (PspRevertContainerImpersonation.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1402D1760 (McGenEventWrite_EtwWriteTransfer.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1402D1EB4 (PnpDiagnosticTraceObjectWithStatus.c)
 *     PnpDiagnosticTrace @ 0x1402D21B8 (PnpDiagnosticTrace.c)
 *     PnpDiagnosticTraceObject @ 0x1402D2774 (PnpDiagnosticTraceObject.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x1402D6128 (PopDiagTraceClearDeepSleepConstraint.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x1402D6184 (PopDiagTraceSetDeepSleepConstraint.c)
 *     PopScanIdleList @ 0x1402D6330 (PopScanIdleList.c)
 *     EtwTraceMemoryAcg @ 0x1402EDDF8 (EtwTraceMemoryAcg.c)
 *     KeIntSteerPeriodic @ 0x140300190 (KeIntSteerPeriodic.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x140304CE0 (PpmPerfSnapDeliveredPerformance.c)
 *     PsImpersonateContainerOfThread @ 0x14030F330 (PsImpersonateContainerOfThread.c)
 *     PopDiagTraceFxDevicePowered @ 0x140354C50 (PopDiagTraceFxDevicePowered.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140354FB4 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x1403556F4 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopPepWork @ 0x140355EE8 (PopPepWork.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x14035F21C (PoTraceSystemTimerResolutionUpdate.c)
 *     KsepLogEtwMessage @ 0x140368CB8 (KsepLogEtwMessage.c)
 *     PopDiagTraceSetSystemState @ 0x140369030 (PopDiagTraceSetSystemState.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x140369AC4 (PopBatteryTraceSystemBatteryStatus.c)
 *     PopDiagTracePowerRequestChange @ 0x14036A410 (PopDiagTracePowerRequestChange.c)
 *     IoTransferActivityId @ 0x140386330 (IoTransferActivityId.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x140389CEC (PpmEventTraceFailedPerfCheckStart.c)
 *     PopDiagTraceRtcWakeInfo @ 0x140396640 (PopDiagTraceRtcWakeInfo.c)
 *     SshpWriteBlocker @ 0x140399BC4 (SshpWriteBlocker.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14039A0B4 (PopDiagTraceSessionDisplayStateChange.c)
 *     PopDiagTraceDeviceReleaseIrp @ 0x1403A38F8 (PopDiagTraceDeviceReleaseIrp.c)
 *     PopDiagTraceDeviceAcquireIrp @ 0x1403A39F4 (PopDiagTraceDeviceAcquireIrp.c)
 *     PopDiagTraceIrpStart @ 0x1403A4500 (PopDiagTraceIrpStart.c)
 *     PopDiagTraceIrpFinish @ 0x1403A5020 (PopDiagTraceIrpFinish.c)
 *     HalpTscAdvSynchLeader @ 0x1403AC640 (HalpTscAdvSynchLeader.c)
 *     HalpTscAdvSynchCalculateRemoteDeltas @ 0x1403AC9F8 (HalpTscAdvSynchCalculateRemoteDeltas.c)
 *     HalpTscTraceProcessorSynchronization @ 0x1403ACEA4 (HalpTscTraceProcessorSynchronization.c)
 *     KiIntSteerLogState @ 0x1403AFE08 (KiIntSteerLogState.c)
 *     PopDiagTraceFxDevicePowerState @ 0x1403B11B0 (PopDiagTraceFxDevicePowerState.c)
 *     SSHSupportEtwWrite @ 0x1403B5B68 (SSHSupportEtwWrite.c)
 *     BapdWriteEtwEvents @ 0x1403B6E4C (BapdWriteEtwEvents.c)
 *     HalpIommuLogEarlyFault @ 0x1403BB6AC (HalpIommuLogEarlyFault.c)
 *     PnpDiagnosticTraceElamDecision @ 0x1403C5AEC (PnpDiagnosticTraceElamDecision.c)
 *     PnpDiagnosticTraceElamStatus @ 0x1403C5BB8 (PnpDiagnosticTraceElamStatus.c)
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1403D3464 (PopDiagTraceThermalZoneEnumeration.c)
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403D683C (EtwTraceJobServerSiloMonitorCallback.c)
 *     KsepEvntLogFlagsApplied @ 0x1403D857C (KsepEvntLogFlagsApplied.c)
 *     EtwpTraceLostEventOld @ 0x14041A410 (EtwpTraceLostEventOld.c)
 *     EtwpTraceLostSystemEventOld @ 0x14041A750 (EtwpTraceLostSystemEventOld.c)
 *     PopDiagTraceFxComponentIdleState @ 0x14045E1D6 (PopDiagTraceFxComponentIdleState.c)
 *     PopDiagTraceFxComponentLatency @ 0x14045E2C4 (PopDiagTraceFxComponentLatency.c)
 *     EtwpFileProvTrace @ 0x14045FCE4 (EtwpFileProvTrace.c)
 *     EtwpNetProvTraceNetwork @ 0x14045FEE2 (EtwpNetProvTraceNetwork.c)
 *     HalpTscTraceStatus @ 0x14050DD30 (HalpTscTraceStatus.c)
 *     HalpIommuTraceFault @ 0x14051B8BC (HalpIommuTraceFault.c)
 *     CmpThreadInfoLogStack @ 0x14053E958 (CmpThreadInfoLogStack.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x1405406E8 (DbgkpLkmdSqmIncrementDword.c)
 *     HvlpWriteEventLog @ 0x14054BF10 (HvlpWriteEventLog.c)
 *     IopInitActivityIdIrp @ 0x140556BE4 (IopInitActivityIdIrp.c)
 *     IopLiveDumpTrace @ 0x14055A870 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure @ 0x14055A8B4 (IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x14055A93C (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x14055AA68 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceCaptureDumpDataBufferingDuration @ 0x14055ABF4 (IopLiveDumpTraceCaptureDumpDataBufferingDuration.c)
 *     IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration @ 0x14055AD48 (IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration.c)
 *     IopLiveDumpTraceCaptureHvlCollectLiveDumpDuration @ 0x14055AE94 (IopLiveDumpTraceCaptureHvlCollectLiveDumpDuration.c)
 *     IopLiveDumpTraceCaptureMemoryPages @ 0x14055AFE8 (IopLiveDumpTraceCaptureMemoryPages.c)
 *     IopLiveDumpTraceCaptureProcessorContextDuration @ 0x14055B0E8 (IopLiveDumpTraceCaptureProcessorContextDuration.c)
 *     IopLiveDumpTraceCorralProcessorsDuration @ 0x14055B244 (IopLiveDumpTraceCorralProcessorsDuration.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x14055B428 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x14055B568 (IopLiveDumpTraceEstimatedAndAllocatedPageCount.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x14055B654 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x14055B7B0 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x14055B814 (IopLiveDumpTraceMarkImportantDumpDataDuration.c)
 *     IopLiveDumpTraceMarkRequiredDumpDataDuration @ 0x14055B970 (IopLiveDumpTraceMarkRequiredDumpDataDuration.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x14055BACC (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x14055BB24 (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x14055BB7C (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x14055BBDC (IopLiveDumpTraceMmDuplicateMemoryFailure.c)
 *     IopLiveDumpTraceOpenVMMemoryPartitionFailure @ 0x14055BC94 (IopLiveDumpTraceOpenVMMemoryPartitionFailure.c)
 *     IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x14055BD18 (IopLiveDumpTracePopulateBitmapForDumpDuration.c)
 *     IopLiveDumpTraceQueryHvlDumpSizeFailure @ 0x14055BE90 (IopLiveDumpTraceQueryHvlDumpSizeFailure.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x14055BF14 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x14055BFA8 (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x14055C000 (IopLiveDumpTraceSystemQuiesceStart.c)
 *     IopLiveDumpTraceUncorralProcessorsDuration @ 0x14055C058 (IopLiveDumpTraceUncorralProcessorsDuration.c)
 *     KiIntSteerLogStatus @ 0x140578454 (KiIntSteerLogStatus.c)
 *     KsepEvntLogShimsApplied @ 0x14057D77C (KsepEvntLogShimsApplied.c)
 *     KsepDsEventAddDevice @ 0x14057E268 (KsepDsEventAddDevice.c)
 *     KsepDsEventDataIrp @ 0x14057E394 (KsepDsEventDataIrp.c)
 *     KsepDsEventDevicePowerCompleted @ 0x14057E490 (KsepDsEventDevicePowerCompleted.c)
 *     KsepDsEventDevicePowerIrp @ 0x14057E574 (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventDriverLoad @ 0x14057E68C (KsepDsEventDriverLoad.c)
 *     KsepDsEventDriverStartIo @ 0x14057E78C (KsepDsEventDriverStartIo.c)
 *     KsepDsEventDriverUnload @ 0x14057E860 (KsepDsEventDriverUnload.c)
 *     KsepDsEventIoCreateDevice @ 0x14057E91C (KsepDsEventIoCreateDevice.c)
 *     KsepDsEventPnpIrp @ 0x14057EA2C (KsepDsEventPnpIrp.c)
 *     KsepDsEventPnpStartDevice @ 0x14057EB28 (KsepDsEventPnpStartDevice.c)
 *     KsepDsEventPnpStopDevice @ 0x14057EC0C (KsepDsEventPnpStopDevice.c)
 *     KsepDsEventPoolAllocate @ 0x14057ECF0 (KsepDsEventPoolAllocate.c)
 *     KsepDsEventPoolFree @ 0x14057EDEC (KsepDsEventPoolFree.c)
 *     KsepDsEventRequestPowerIrp @ 0x14057EEC4 (KsepDsEventRequestPowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x14057EFCC (KsepDsEventSystemPowerIrp.c)
 *     KsepSkipDriverUnloadEventDriverLoad @ 0x14057F2EC (KsepSkipDriverUnloadEventDriverLoad.c)
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x14057F3EC (KsepSkipDriverUnloadEventDriverUnload.c)
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x1405D09BC (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     PoTraceDynamicTickDisabled @ 0x1405D0AB4 (PoTraceDynamicTickDisabled.c)
 *     PoTraceForceIdleReset @ 0x1405D0B58 (PoTraceForceIdleReset.c)
 *     PoTraceForceIdleStateChange @ 0x1405D0C70 (PoTraceForceIdleStateChange.c)
 *     PopDiagTraceAbnormalReset @ 0x1405D0D30 (PopDiagTraceAbnormalReset.c)
 *     PopDiagTraceCsDeepSleepWatchdog @ 0x1405D0DD0 (PopDiagTraceCsDeepSleepWatchdog.c)
 *     PopDiagTraceCsDripsDivergence @ 0x1405D0EE4 (PopDiagTraceCsDripsDivergence.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x1405D0FDC (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x1405D11D8 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDiagTraceCsFanPerfTrack @ 0x1405D1330 (PopDiagTraceCsFanPerfTrack.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x1405D17F0 (PopDiagTraceDebuggerTransitionRequirements.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x1405D18CC (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopDiagTraceDeviceComplianceUpdate @ 0x1405D1AD0 (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopDiagTraceDiskIdleCheck @ 0x1405D1B90 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceEsState @ 0x1405D1EE8 (PopDiagTraceEsState.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x1405D1FA4 (PopDiagTraceFxComponentIdleConstraints.c)
 *     PopDiagTraceFxComponentResidency @ 0x1405D209C (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x1405D218C (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x1405D2284 (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1405D25F0 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1405D26F4 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x1405D27D4 (PopDiagTraceFxDeviceIdleConstraints.c)
 *     PopDiagTraceFxPerfNominalChange @ 0x1405D28BC (PopDiagTraceFxPerfNominalChange.c)
 *     PopDiagTraceFxPerfRequest @ 0x1405D29FC (PopDiagTraceFxPerfRequest.c)
 *     PopDiagTraceFxPerfRequestComplete @ 0x1405D2B0C (PopDiagTraceFxPerfRequestComplete.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x1405D2C00 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopDiagTraceIdleCheck @ 0x1405D2CE8 (PopDiagTraceIdleCheck.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x1405D2E34 (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x1405D2EE4 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x1405D2FA0 (PopDiagTraceIllegalProcessorThrottle.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x1405D3148 (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopDiagTraceIrpPended @ 0x1405D31E8 (PopDiagTraceIrpPended.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x1405D3288 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x1405D33D8 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PopDiagTraceShutdownAction @ 0x1405D3540 (PopDiagTraceShutdownAction.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x1405D3634 (PopDiagTraceSleepStudyBlocker.c)
 *     PopDiagTraceThermalStateChange @ 0x1405D36DC (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneRundown @ 0x1405D3804 (PopDiagTraceThermalZoneRundown.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x1405D39FC (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1405D3B30 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x1405D9020 (PpmHeteroDispatchHgsInterrupt.c)
 *     PpmEventAutonomousModeChange @ 0x1405D9370 (PpmEventAutonomousModeChange.c)
 *     PpmEventBiosCapChange @ 0x1405D9440 (PpmEventBiosCapChange.c)
 *     PpmEventCoreParkingSoftParkedStateChange @ 0x1405D9510 (PpmEventCoreParkingSoftParkedStateChange.c)
 *     PpmEventCoreParkingStateChange @ 0x1405D9630 (PpmEventCoreParkingStateChange.c)
 *     PpmEventCoreParkingStateChangeEx @ 0x1405D9724 (PpmEventCoreParkingStateChangeEx.c)
 *     PpmEventHeteroFavoredCoreRotationChange @ 0x1405D98BC (PpmEventHeteroFavoredCoreRotationChange.c)
 *     PpmEventHgsHardwareTable @ 0x1405D997C (PpmEventHgsHardwareTable.c)
 *     PpmEventHgsNormalizedTable @ 0x1405D9B84 (PpmEventHgsNormalizedTable.c)
 *     PpmEventHiddenProcessorBiosCapChange @ 0x1405D9D50 (PpmEventHiddenProcessorBiosCapChange.c)
 *     PpmEventHiddenProcessorThermalCapChange @ 0x1405D9E58 (PpmEventHiddenProcessorThermalCapChange.c)
 *     PpmEventIdleDurationExpiration @ 0x1405D9F60 (PpmEventIdleDurationExpiration.c)
 *     PpmEventLPICoreParking @ 0x1405DA0C4 (PpmEventLPICoreParking.c)
 *     PpmEventParkNodeCapChange @ 0x1405DA184 (PpmEventParkNodeCapChange.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x1405DA274 (PpmEventParkNodeClassRecordedStats.c)
 *     PpmEventParkNodeParkHintChanged @ 0x1405DA3B4 (PpmEventParkNodeParkHintChanged.c)
 *     PpmEventParkNodePreference @ 0x1405DA494 (PpmEventParkNodePreference.c)
 *     PpmEventPlatformVetoRequest @ 0x1405DA5B4 (PpmEventPlatformVetoRequest.c)
 *     PpmEventPlatformVetoRundown @ 0x1405DA68C (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRequest @ 0x1405DA898 (PpmEventProcessorVetoRequest.c)
 *     PpmEventProcessorVetoRundown @ 0x1405DA9A8 (PpmEventProcessorVetoRundown.c)
 *     PpmEventThermalCapChange @ 0x1405DAC04 (PpmEventThermalCapChange.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x1405DAD64 (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmEventTraceHeteroResponse @ 0x1405DAE60 (PpmEventTraceHeteroResponse.c)
 *     PpmEventTraceLPIState @ 0x1405DB010 (PpmEventTraceLPIState.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x1405DB0D8 (PpmEventTraceMakeupPerfCheck.c)
 *     PpmEventTracePreVetoAccounting @ 0x1405DB13C (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x1405DB370 (PpmEventTraceProcessorIdleAccounting.c)
 *     PpmEventTraceSoftCoreParkingSelection @ 0x1405DB5F4 (PpmEventTraceSoftCoreParkingSelection.c)
 *     PpmEventVetoReasonRundown @ 0x1405DB7EC (PpmEventVetoReasonRundown.c)
 *     PpmEventVpQosChange @ 0x1405DB8E0 (PpmEventVpQosChange.c)
 *     PopDirectedDripsDiagTraceDfxPowerStateFailure @ 0x1405DD7DC (PopDirectedDripsDiagTraceDfxPowerStateFailure.c)
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x1405DD8E4 (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     PopSqmAddToStream @ 0x1405DF088 (PopSqmAddToStream.c)
 *     PsDispatchIumService @ 0x1405E1764 (PsDispatchIumService.c)
 *     SmEtwLogRegionOp @ 0x1405FB2F0 (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x1405FB3BC (SmEtwLogStoreCorruption.c)
 *     SmEtwLogStoreOp @ 0x1405FB4F4 (SmEtwLogStoreOp.c)
 *     SmEtwLogStoreStateChange @ 0x1405FB5C0 (SmEtwLogStoreStateChange.c)
 *     SmKmStoreTerminateWorker @ 0x1405FBC00 (SmKmStoreTerminateWorker.c)
 *     SmKmSqmAddToStream @ 0x1405FD958 (SmKmSqmAddToStream.c)
 *     EtwpTraceLostEvent @ 0x14062CE84 (EtwpTraceLostEvent.c)
 *     EtwpTraceLostSystemEvent @ 0x14062D1C8 (EtwpTraceLostSystemEvent.c)
 *     EtwpTraceLostWppEvent @ 0x14062D2A0 (EtwpTraceLostWppEvent.c)
 *     EtwTraceCumulativeDpcSoftTimeout @ 0x14062D678 (EtwTraceCumulativeDpcSoftTimeout.c)
 *     EtwTraceDpcProfilingStack @ 0x14062D8E4 (EtwTraceDpcProfilingStack.c)
 *     EtwTraceDpcProfilingStackBegin @ 0x14062D974 (EtwTraceDpcProfilingStackBegin.c)
 *     EtwTraceProcessSetInPrivateMode @ 0x14062E19C (EtwTraceProcessSetInPrivateMode.c)
 *     EtwTraceSingleDpcSoftTimeout @ 0x14062E4B8 (EtwTraceSingleDpcSoftTimeout.c)
 *     EtwpLogMemInfo @ 0x14062EED8 (EtwpLogMemInfo.c)
 *     EtwpLogMemNodeInfo @ 0x14062F0B8 (EtwpLogMemNodeInfo.c)
 *     EtwpPsProvTracePriority @ 0x14062F4BC (EtwpPsProvTracePriority.c)
 *     SeEtwWriteKMCveEvent @ 0x1406304F0 (SeEtwWriteKMCveEvent.c)
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x140631D34 (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 *     KitLogFeatureUsage @ 0x140641A10 (KitLogFeatureUsage.c)
 *     WheapGenerateETWEvents @ 0x140645F80 (WheapGenerateETWEvents.c)
 *     WheapLogProcessTerminateEvent @ 0x1406461D0 (WheapLogProcessTerminateEvent.c)
 *     EtwpPsProvTraceImage @ 0x1406F7C44 (EtwpPsProvTraceImage.c)
 *     SmKmEtwLogStoreChange @ 0x1409D55B0 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x1409D56C0 (SmKmEtwLogStoreStats.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140A6B91C (PopDiagTraceFirmwareS3Stats.c)
 *     EtwpTraceSystemInitialization @ 0x140AFAD4C (EtwpTraceSystemInitialization.c)
 *     BapdpRecordIumStatus @ 0x140B1CB28 (BapdpRecordIumStatus.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140B2FF24 (PopTriggerDiagTraceAoAcCapability.c)
 *     PopDiagTraceAdaptiveBootOverride @ 0x140B52CBC (PopDiagTraceAdaptiveBootOverride.c)
 *     PopDiagTraceDirtyTransition @ 0x140B52D94 (PopDiagTraceDirtyTransition.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x140300E50 (EtwpEventWriteFull.c)
 *     EtwpLevelKeywordEnabled @ 0x1403031F0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __stdcall EtwWriteEx(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG64 Filter,
        ULONG Flags,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  int v10; // r14d
  NTSTATUS v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int8 v17; // r10
  int v18; // r11d
  unsigned __int64 Keyword; // r8
  __int64 Level; // rdx
  unsigned __int8 v21; // r10
  __int64 v22; // r11
  char v23; // r10
  unsigned __int8 v24; // r10
  int v25; // r11d
  PEVENT_DATA_DESCRIPTOR v26; // r14
  unsigned __int8 v27; // r10
  __int64 v28; // r11
  __int64 v29; // [rsp+98h] [rbp-80h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-78h]
  __int128 v31; // [rsp+A8h] [rbp-70h] BYREF
  __int128 v32; // [rsp+B8h] [rbp-60h]

  v29 = 0LL;
  v10 = Filter;
  v12 = 0;
  v31 = 0LL;
  v32 = 0LL;
  if ( !RegHandle )
    return -1073741816;
  v13 = *(_QWORD *)(RegHandle + 104);
  v14 = v13 + 28;
  if ( !v13 )
    v14 = 0LL;
  if ( *(_BYTE *)(RegHandle + 100)
    && (unsigned __int8)EtwpLevelKeywordEnabled(
                          *(_QWORD *)(RegHandle + 32) + 96LL,
                          EventDescriptor->Level,
                          EventDescriptor->Keyword) )
  {
    v12 = EtwpEventWriteFull(
            v18,
            v17,
            v10,
            Flags,
            (__int64)EventDescriptor,
            0,
            0,
            (__int64)ActivityId,
            (__int64)RelatedActivityId,
            UserDataCount,
            (__int64)UserData,
            0LL,
            (__int64)&v31,
            0LL,
            *(_WORD *)(RegHandle + 98),
            v14,
            (__int64)&v29);
  }
  if ( *(_BYTE *)(RegHandle + 101) )
  {
    Keyword = EventDescriptor->Keyword;
    Level = EventDescriptor->Level;
    v30 = *(_QWORD *)(RegHandle + 40);
    if ( (unsigned __int8)EtwpLevelKeywordEnabled(v30 + 96, Level, Keyword) )
      v12 = EtwpEventWriteFull(
              *(_QWORD *)(RegHandle + 32),
              v21,
              v10,
              Flags,
              (__int64)EventDescriptor,
              0,
              0,
              (__int64)ActivityId,
              (__int64)RelatedActivityId,
              UserDataCount,
              v22,
              0LL,
              (__int64)&v31,
              v30,
              *(_WORD *)(RegHandle + 98),
              v14,
              (__int64)&v29);
  }
  v15 = *(_QWORD *)(RegHandle + 32);
  if ( *(_QWORD *)(v15 + 400) )
  {
    v23 = *(_BYTE *)(RegHandle + 102);
    v31 = 0LL;
    v32 = 0LL;
    if ( v23 )
    {
      v26 = UserData;
      if ( (unsigned __int8)EtwpLevelKeywordEnabled(
                              *(_QWORD *)(v15 + 400) + 96LL,
                              EventDescriptor->Level,
                              EventDescriptor->Keyword) )
        v12 = EtwpEventWriteFull(
                v25,
                v24,
                0,
                Flags,
                (__int64)EventDescriptor,
                0,
                0,
                (__int64)ActivityId,
                (__int64)RelatedActivityId,
                UserDataCount,
                (__int64)UserData,
                0LL,
                (__int64)&v31,
                0LL,
                *(_WORD *)(RegHandle + 98),
                v14,
                (__int64)&v29);
    }
    else
    {
      v26 = UserData;
    }
    if ( *(_BYTE *)(RegHandle + 103) )
    {
      if ( (unsigned __int8)EtwpLevelKeywordEnabled(
                              *(_QWORD *)(*(_QWORD *)(RegHandle + 40) + 400LL) + 96LL,
                              EventDescriptor->Level,
                              EventDescriptor->Keyword) )
        return EtwpEventWriteFull(
                 *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 400LL),
                 v27,
                 0,
                 Flags,
                 (__int64)EventDescriptor,
                 0,
                 0,
                 (__int64)ActivityId,
                 (__int64)RelatedActivityId,
                 UserDataCount,
                 (__int64)v26,
                 0LL,
                 (__int64)&v31,
                 v28,
                 *(_WORD *)(RegHandle + 98),
                 v14,
                 (__int64)&v29);
    }
  }
  return v12;
}
