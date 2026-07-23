/*
 * XREFs of EtwWriteEx @ 0x1402582A0
 * Callers:
 *     _tlgWriteAgg @ 0x140212E94 (_tlgWriteAgg.c)
 *     EtwpTraceFileName @ 0x140213550 (EtwpTraceFileName.c)
 *     MiLogPeriodicTelemetry @ 0x14021F654 (MiLogPeriodicTelemetry.c)
 *     KiIntSteerLogStatus @ 0x14022183C (KiIntSteerLogStatus.c)
 *     PpmEventPerfSelectProcessorState @ 0x140255A48 (PpmEventPerfSelectProcessorState.c)
 *     PpmEventTraceDeliveredPerfChange @ 0x140255B30 (PpmEventTraceDeliveredPerfChange.c)
 *     PpmEventTraceRecordedUtility @ 0x1402576F0 (PpmEventTraceRecordedUtility.c)
 *     EtwWrite @ 0x140257960 (EtwWrite.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x140258570 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14028DF54 (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceIrpFinish @ 0x14028E7A4 (PopDiagTraceIrpFinish.c)
 *     IoReuseIrp @ 0x140290660 (IoReuseIrp.c)
 *     KiSetNextClockTickDueTime @ 0x1402C87A0 (KiSetNextClockTickDueTime.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     MiAllocatePagesForMdl @ 0x1402F8F6C (MiAllocatePagesForMdl.c)
 *     EtwTraceMemoryAcg @ 0x1403043C8 (EtwTraceMemoryAcg.c)
 *     PopDiagTraceFxDevicePowered @ 0x140310E00 (PopDiagTraceFxDevicePowered.c)
 *     PopPepWork @ 0x1403120EC (PopPepWork.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140312CE0 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x14031310C (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x140315078 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     KiIntSteerLogState @ 0x140321658 (KiIntSteerLogState.c)
 *     PpmParkRecordNodeStatistics @ 0x14033C930 (PpmParkRecordNodeStatistics.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140340E84 (PoTraceSystemTimerResolutionKernel.c)
 *     EtwWriteTransfer @ 0x14034E3B0 (EtwWriteTransfer.c)
 *     PpmEventProcessorPerfStateChange @ 0x14034F570 (PpmEventProcessorPerfStateChange.c)
 *     PpmEventTraceExpectedUtility @ 0x14034F610 (PpmEventTraceExpectedUtility.c)
 *     PpmEventDomainPerfStateChange @ 0x140352FCC (PpmEventDomainPerfStateChange.c)
 *     PoFxSetComponentLatency @ 0x14035B660 (PoFxSetComponentLatency.c)
 *     PopDiagTraceFxComponentIdleState @ 0x14035C84C (PopDiagTraceFxComponentIdleState.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140368110 (_tlgWriteEx_EtwWriteEx.c)
 *     EtwpTiFillVadEventWrite @ 0x1403681B8 (EtwpTiFillVadEventWrite.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x140373D18 (PpmEventTraceFailedPerfCheckStart.c)
 *     KsepEvntLogFlagsApplied @ 0x14037427C (KsepEvntLogFlagsApplied.c)
 *     PnpDiagnosticTraceElamStatus @ 0x140374ECC (PnpDiagnosticTraceElamStatus.c)
 *     WheaLogInternalEvent @ 0x140380BF0 (WheaLogInternalEvent.c)
 *     BapdWriteEtwEvents @ 0x140383EC0 (BapdWriteEtwEvents.c)
 *     HalpTscAdvSynchLeader @ 0x14038D4E0 (HalpTscAdvSynchLeader.c)
 *     HalpTscAdvSynchCalculateRemoteDeltas @ 0x14038D7F8 (HalpTscAdvSynchCalculateRemoteDeltas.c)
 *     HalpTscTraceProcessorSynchronization @ 0x14038DC94 (HalpTscTraceProcessorSynchronization.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1403A1B5C (PopDiagTraceThermalZoneEnumeration.c)
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403A6040 (EtwTraceJobServerSiloMonitorCallback.c)
 *     PpmMediaBufferingWorker @ 0x1403ACDD0 (PpmMediaBufferingWorker.c)
 *     SSHSupportEtwWrite @ 0x1403ADB88 (SSHSupportEtwWrite.c)
 *     PoFxSetComponentResidency @ 0x1403B3E90 (PoFxSetComponentResidency.c)
 *     HalpIommuLogEarlyFault @ 0x1403B4A88 (HalpIommuLogEarlyFault.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x1403B6540 (PoTraceSystemTimerResolutionUpdate.c)
 *     MiAllocateContiguousMemory @ 0x1403B9EB4 (MiAllocateContiguousMemory.c)
 *     IoTransferActivityId @ 0x1403C3220 (IoTransferActivityId.c)
 *     EtwTraceContFreeEvent @ 0x1403C3980 (EtwTraceContFreeEvent.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403C44A0 (McGenEventWrite_EtwWriteTransfer.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x1403C456C (PopBatteryTraceSystemBatteryStatus.c)
 *     MiLogPeriodicTelemetryForSlabAllocator @ 0x1403D0C80 (MiLogPeriodicTelemetryForSlabAllocator.c)
 *     MiLogSlabEntriesDemote @ 0x1403D6D40 (MiLogSlabEntriesDemote.c)
 *     PpmEventHgsCoresUnparkedCount @ 0x14046372E (PpmEventHgsCoresUnparkedCount.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x14046383C (PpmEventTraceMakeupPerfCheck.c)
 *     PpmEventTraceSoftCoreParkingSelection @ 0x14046389E (PpmEventTraceSoftCoreParkingSelection.c)
 *     EtwpFileProvTrace @ 0x140467B90 (EtwpFileProvTrace.c)
 *     EtwpLogMemNodeInfo @ 0x140467E86 (EtwpLogMemNodeInfo.c)
 *     EtwpNetProvTraceNetwork @ 0x140468092 (EtwpNetProvTraceNetwork.c)
 *     HalpTscTraceStatus @ 0x14050AD80 (HalpTscTraceStatus.c)
 *     HalpIommuTraceFault @ 0x140518BAC (HalpIommuTraceFault.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x14053C5A8 (DbgkpLkmdSqmIncrementDword.c)
 *     HvlpWriteEventLog @ 0x1405492C8 (HvlpWriteEventLog.c)
 *     IopDumpTraceCrashDumpDisabled @ 0x140552F2C (IopDumpTraceCrashDumpDisabled.c)
 *     IopDumpTraceCrashDumpReconfiguration @ 0x140553008 (IopDumpTraceCrashDumpReconfiguration.c)
 *     IopDumpTraceDisableCrashDumpFailure @ 0x140553118 (IopDumpTraceDisableCrashDumpFailure.c)
 *     IopDumpTraceFreeDumpStackFailure @ 0x140553228 (IopDumpTraceFreeDumpStackFailure.c)
 *     IopDumpTraceInitializeCrashDumpFailure @ 0x140553338 (IopDumpTraceInitializeCrashDumpFailure.c)
 *     IopDumpTraceInitializeDumpStackFailure @ 0x140553448 (IopDumpTraceInitializeDumpStackFailure.c)
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x140553558 (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     IopDumpTraceLoadDumpStackFailure @ 0x140553668 (IopDumpTraceLoadDumpStackFailure.c)
 *     IopInitActivityIdIrp @ 0x140555DE4 (IopInitActivityIdIrp.c)
 *     IopLiveDumpTrace @ 0x14055A74C (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure @ 0x14055A790 (IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x14055A818 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x14055A944 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration @ 0x14055AAD0 (IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration.c)
 *     IopLiveDumpTraceCaptureMemoryPages @ 0x14055AC1C (IopLiveDumpTraceCaptureMemoryPages.c)
 *     IopLiveDumpTraceCaptureProcessorContextDuration @ 0x14055AD1C (IopLiveDumpTraceCaptureProcessorContextDuration.c)
 *     IopLiveDumpTraceCorralProcessorsDuration @ 0x14055AE78 (IopLiveDumpTraceCorralProcessorsDuration.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x14055B05C (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x14055B19C (IopLiveDumpTraceEstimatedAndAllocatedPageCount.c)
 *     IopLiveDumpTraceHvlPrepareLivedumpDescriptorFailure @ 0x14055B2EC (IopLiveDumpTraceHvlPrepareLivedumpDescriptorFailure.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x14055B370 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x14055B574 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x14055B5D8 (IopLiveDumpTraceMarkImportantDumpDataDuration.c)
 *     IopLiveDumpTraceMarkRequiredDumpDataDuration @ 0x14055B734 (IopLiveDumpTraceMarkRequiredDumpDataDuration.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x14055B890 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x14055B8E8 (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x14055B940 (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x14055B9A0 (IopLiveDumpTraceMmDuplicateMemoryFailure.c)
 *     IopLiveDumpTraceOpenVMMemoryPartitionFailure @ 0x14055BA58 (IopLiveDumpTraceOpenVMMemoryPartitionFailure.c)
 *     IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x14055BADC (IopLiveDumpTracePopulateBitmapForDumpDuration.c)
 *     IopLiveDumpTraceQueryHvlDumpSizeFailure @ 0x14055BC54 (IopLiveDumpTraceQueryHvlDumpSizeFailure.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x14055BCD8 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x14055BD6C (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x14055BDC4 (IopLiveDumpTraceSystemQuiesceStart.c)
 *     IopLiveDumpTraceUncorralProcessorsDuration @ 0x14055BE1C (IopLiveDumpTraceUncorralProcessorsDuration.c)
 *     KsepDsEventAddDevice @ 0x140581A48 (KsepDsEventAddDevice.c)
 *     KsepDsEventDataIrp @ 0x140581B74 (KsepDsEventDataIrp.c)
 *     KsepDsEventDevicePowerCompleted @ 0x140581C70 (KsepDsEventDevicePowerCompleted.c)
 *     KsepDsEventDevicePowerIrp @ 0x140581D54 (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventDriverLoad @ 0x140581E6C (KsepDsEventDriverLoad.c)
 *     KsepDsEventDriverStartIo @ 0x140581F6C (KsepDsEventDriverStartIo.c)
 *     KsepDsEventDriverUnload @ 0x140582040 (KsepDsEventDriverUnload.c)
 *     KsepDsEventIoCreateDevice @ 0x1405820FC (KsepDsEventIoCreateDevice.c)
 *     KsepDsEventPnpIrp @ 0x14058220C (KsepDsEventPnpIrp.c)
 *     KsepDsEventPnpStartDevice @ 0x140582308 (KsepDsEventPnpStartDevice.c)
 *     KsepDsEventPnpStopDevice @ 0x1405823EC (KsepDsEventPnpStopDevice.c)
 *     KsepDsEventPoolAllocate @ 0x1405824D0 (KsepDsEventPoolAllocate.c)
 *     KsepDsEventPoolFree @ 0x1405825CC (KsepDsEventPoolFree.c)
 *     KsepDsEventRequestPowerIrp @ 0x1405826A4 (KsepDsEventRequestPowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x1405827AC (KsepDsEventSystemPowerIrp.c)
 *     KsepSkipDriverUnloadEventDriverLoad @ 0x140582ADC (KsepSkipDriverUnloadEventDriverLoad.c)
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x140582BDC (KsepSkipDriverUnloadEventDriverUnload.c)
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x1405913F4 (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     PoTraceDynamicTickDisabled @ 0x1405914EC (PoTraceDynamicTickDisabled.c)
 *     PoTraceSystemTimerResolutionIgnore @ 0x140591758 (PoTraceSystemTimerResolutionIgnore.c)
 *     PopDiagTraceAbnormalReset @ 0x140591F2C (PopDiagTraceAbnormalReset.c)
 *     PopDiagTraceCsDeepSleepWatchdog @ 0x140591FCC (PopDiagTraceCsDeepSleepWatchdog.c)
 *     PopDiagTraceCsDripsDivergence @ 0x1405920E0 (PopDiagTraceCsDripsDivergence.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x1405921D8 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x1405923D4 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDiagTraceCsFanPerfTrack @ 0x14059252C (PopDiagTraceCsFanPerfTrack.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x140592AD8 (PopDiagTraceDebuggerTransitionRequirements.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x140592BB4 (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x140592E5C (PopDiagTraceDeviceIdleCheck.c)
 *     PopDiagTraceDiskIdleCheck @ 0x14059303C (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceEsState @ 0x140593394 (PopDiagTraceEsState.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x140593450 (PopDiagTraceFxComponentIdleConstraints.c)
 *     PopDiagTraceFxComponentWake @ 0x140593548 (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x140593640 (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1405939AC (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x140593AB0 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x140593B90 (PopDiagTraceFxDeviceIdleConstraints.c)
 *     PopDiagTraceFxPerfNominalChange @ 0x140593D98 (PopDiagTraceFxPerfNominalChange.c)
 *     PopDiagTraceFxPerfRequest @ 0x140593ED8 (PopDiagTraceFxPerfRequest.c)
 *     PopDiagTraceIdleCheck @ 0x14059418C (PopDiagTraceIdleCheck.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x1405942D8 (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x140594388 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x140594444 (PopDiagTraceIllegalProcessorThrottle.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x1405945EC (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopDiagTraceIrpPended @ 0x14059468C (PopDiagTraceIrpPended.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x14059472C (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x14059487C (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PopDiagTraceRegisterSystemState @ 0x1405949E4 (PopDiagTraceRegisterSystemState.c)
 *     PopDiagTraceRtcWakeInfo @ 0x140594AAC (PopDiagTraceRtcWakeInfo.c)
 *     PopDiagTraceSetSystemState @ 0x140594ED8 (PopDiagTraceSetSystemState.c)
 *     PopDiagTraceShutdownAction @ 0x140594F78 (PopDiagTraceShutdownAction.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x14059506C (PopDiagTraceSleepStudyBlocker.c)
 *     PopDiagTraceThermalStateChange @ 0x140595114 (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneRundown @ 0x14059523C (PopDiagTraceThermalZoneRundown.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x140595434 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x140595568 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x14059A14C (PpmEventBiosCapChange.c)
 *     PpmEventCoreParkingSoftParkedStateChange @ 0x14059A21C (PpmEventCoreParkingSoftParkedStateChange.c)
 *     PpmEventCoreParkingStateChange @ 0x14059A33C (PpmEventCoreParkingStateChange.c)
 *     PpmEventCoreParkingStateChangeEx @ 0x14059A430 (PpmEventCoreParkingStateChangeEx.c)
 *     PpmEventHeteroFavoredCoreRotationChange @ 0x14059A5C8 (PpmEventHeteroFavoredCoreRotationChange.c)
 *     PpmEventHgsActiveWorkloadClass @ 0x14059A688 (PpmEventHgsActiveWorkloadClass.c)
 *     PpmEventHgsNormalizedTable @ 0x14059A9D4 (PpmEventHgsNormalizedTable.c)
 *     PpmEventHiddenProcessorBiosCapChange @ 0x14059AB98 (PpmEventHiddenProcessorBiosCapChange.c)
 *     PpmEventHiddenProcessorThermalCapChange @ 0x14059ACA0 (PpmEventHiddenProcessorThermalCapChange.c)
 *     PpmEventIdleDurationExpiration @ 0x14059ADA8 (PpmEventIdleDurationExpiration.c)
 *     PpmEventLPICoreParking @ 0x14059AF0C (PpmEventLPICoreParking.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x14059B0A8 (PpmEventParkNodeClassRecordedStats.c)
 *     PpmEventParkNodePreference @ 0x14059B2AC (PpmEventParkNodePreference.c)
 *     PpmEventParkingCountSelection @ 0x14059B3CC (PpmEventParkingCountSelection.c)
 *     PpmEventPlatformVetoRequest @ 0x14059B52C (PpmEventPlatformVetoRequest.c)
 *     PpmEventPlatformVetoRundown @ 0x14059B604 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRequest @ 0x14059B810 (PpmEventProcessorVetoRequest.c)
 *     PpmEventProcessorVetoRundown @ 0x14059B920 (PpmEventProcessorVetoRundown.c)
 *     PpmEventThermalCapChange @ 0x14059BB80 (PpmEventThermalCapChange.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x14059BCE0 (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmEventTraceHeteroResponse @ 0x14059BDDC (PpmEventTraceHeteroResponse.c)
 *     PpmEventTraceLPIState @ 0x14059BFC8 (PpmEventTraceLPIState.c)
 *     PpmEventTraceMultiClassHeteroResponse @ 0x14059C090 (PpmEventTraceMultiClassHeteroResponse.c)
 *     PpmEventTraceMultiClassHeteroResponseUpdate @ 0x14059C288 (PpmEventTraceMultiClassHeteroResponseUpdate.c)
 *     PpmEventTracePreVetoAccounting @ 0x14059C390 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x14059C5C0 (PpmEventTraceProcessorIdleAccounting.c)
 *     PpmEventVetoReasonRundown @ 0x14059C854 (PpmEventVetoReasonRundown.c)
 *     PpmEventVpQosChange @ 0x14059C948 (PpmEventVpQosChange.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x14059EC60 (PpmHeteroDispatchHgsInterrupt.c)
 *     PopDirectedDripsDiagTraceDfxPowerStateFailure @ 0x1405A0C7C (PopDirectedDripsDiagTraceDfxPowerStateFailure.c)
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x1405A0D84 (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     PopSqmAddToStream @ 0x1405A2660 (PopSqmAddToStream.c)
 *     SshpWriteBlocker @ 0x1405A32B0 (SshpWriteBlocker.c)
 *     PsDispatchIumService @ 0x1405A53D4 (PsDispatchIumService.c)
 *     SmEtwLogRegionOp @ 0x1405CB42C (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x1405CB4F8 (SmEtwLogStoreCorruption.c)
 *     SmEtwLogStoreOp @ 0x1405CB630 (SmEtwLogStoreOp.c)
 *     SmEtwLogStoreStateChange @ 0x1405CB6FC (SmEtwLogStoreStateChange.c)
 *     SmKmStoreTerminateWorker @ 0x1405CC0D0 (SmKmStoreTerminateWorker.c)
 *     SmKmSqmAddToStream @ 0x1405CE218 (SmKmSqmAddToStream.c)
 *     EtwpTraceLostEvent @ 0x1405FC914 (EtwpTraceLostEvent.c)
 *     EtwpTraceLostSystemEvent @ 0x1405FCC60 (EtwpTraceLostSystemEvent.c)
 *     EtwpTraceLostWppEvent @ 0x1405FCD38 (EtwpTraceLostWppEvent.c)
 *     EtwTraceCumulativeDpcSoftTimeout @ 0x1405FCE94 (EtwTraceCumulativeDpcSoftTimeout.c)
 *     EtwTraceDpcProfilingStack @ 0x1405FD100 (EtwTraceDpcProfilingStack.c)
 *     EtwTraceDpcProfilingStackBegin @ 0x1405FD190 (EtwTraceDpcProfilingStackBegin.c)
 *     EtwTraceProcessSetInPrivateMode @ 0x1405FD8EC (EtwTraceProcessSetInPrivateMode.c)
 *     EtwTraceSingleDpcSoftTimeout @ 0x1405FDAC8 (EtwTraceSingleDpcSoftTimeout.c)
 *     EtwpPsProvTracePriority @ 0x1405FE6DC (EtwpPsProvTracePriority.c)
 *     SeEtwWriteKMCveEvent @ 0x1405FF2C0 (SeEtwWriteKMCveEvent.c)
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x14060034C (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 *     KitLogFeatureUsage @ 0x14060F0C0 (KitLogFeatureUsage.c)
 *     WheapGenerateETWErrorRecord @ 0x140613680 (WheapGenerateETWErrorRecord.c)
 *     WheapGenerateETWErrorRecordLarge @ 0x140613700 (WheapGenerateETWErrorRecordLarge.c)
 *     WheapLogProcessTerminateEvent @ 0x140613980 (WheapLogProcessTerminateEvent.c)
 *     CmpThreadInfoLogStack @ 0x14061655C (CmpThreadInfoLogStack.c)
 *     MiLogBadMapper @ 0x140631348 (MiLogBadMapper.c)
 *     MiLogSlabEntryAllocateFailure @ 0x14065763C (MiLogSlabEntryAllocateFailure.c)
 *     SmKmEtwLogStoreChange @ 0x1409D8974 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x1409D8A84 (SmKmEtwLogStoreStats.c)
 *     EtwpPsProvTraceImage @ 0x1409E65B4 (EtwpPsProvTraceImage.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140AA7A20 (PopDiagTraceFirmwareS3Stats.c)
 *     PopDiagTraceDirtyTransition @ 0x140B35190 (PopDiagTraceDirtyTransition.c)
 *     EtwpTraceSystemInitialization @ 0x140B4C830 (EtwpTraceSystemInitialization.c)
 *     BapdpRecordIumStatus @ 0x140B4F34C (BapdpRecordIumStatus.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140B749C4 (PopTriggerDiagTraceAoAcCapability.c)
 *     PopDiagTraceAdaptiveBootOverride @ 0x140B96394 (PopDiagTraceAdaptiveBootOverride.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1402585E0 (EtwpLevelKeywordEnabled.c)
 *     EtwpEventWriteFull @ 0x140258630 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
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
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int8 v15; // r10
  int v16; // r11d
  __int64 v17; // rax
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
  v12 = 0LL;
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
                          EventDescriptor->Keyword,
                          0LL) )
  {
    v12 = (unsigned int)EtwpEventWriteFull(
                          v16,
                          v15,
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
    if ( (unsigned __int8)EtwpLevelKeywordEnabled(v30 + 96, Level, Keyword, v12) )
      v12 = (unsigned int)EtwpEventWriteFull(
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
  v17 = *(_QWORD *)(RegHandle + 32);
  if ( *(_QWORD *)(v17 + 400) )
  {
    v23 = *(_BYTE *)(RegHandle + 102);
    v31 = 0LL;
    v32 = 0LL;
    if ( v23 )
    {
      v26 = UserData;
      if ( (unsigned __int8)EtwpLevelKeywordEnabled(
                              *(_QWORD *)(v17 + 400) + 96LL,
                              EventDescriptor->Level,
                              EventDescriptor->Keyword,
                              v12) )
        v12 = (unsigned int)EtwpEventWriteFull(
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
                              EventDescriptor->Keyword,
                              v12) )
        LODWORD(v12) = EtwpEventWriteFull(
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
