/*
 * XREFs of EtwWriteEx @ 0x1402581E0
 * Callers:
 *     _tlgWriteAgg @ 0x140212E94 (_tlgWriteAgg.c)
 *     EtwpTraceFileName @ 0x140213550 (EtwpTraceFileName.c)
 *     MiLogPeriodicTelemetry @ 0x14021F654 (MiLogPeriodicTelemetry.c)
 *     KiIntSteerLogStatus @ 0x14022183C (KiIntSteerLogStatus.c)
 *     PpmEventPerfSelectProcessorState @ 0x140255988 (PpmEventPerfSelectProcessorState.c)
 *     PpmEventTraceDeliveredPerfChange @ 0x140255A70 (PpmEventTraceDeliveredPerfChange.c)
 *     PpmEventTraceRecordedUtility @ 0x140257630 (PpmEventTraceRecordedUtility.c)
 *     EtwWrite @ 0x1402578A0 (EtwWrite.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x1402584B0 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14028DCC4 (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceIrpFinish @ 0x14028E514 (PopDiagTraceIrpFinish.c)
 *     IoReuseIrp @ 0x1402903D0 (IoReuseIrp.c)
 *     KiSetNextClockTickDueTime @ 0x1402C8510 (KiSetNextClockTickDueTime.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     MiAllocatePagesForMdl @ 0x1402F8CDC (MiAllocatePagesForMdl.c)
 *     EtwTraceMemoryAcg @ 0x140304138 (EtwTraceMemoryAcg.c)
 *     PopDiagTraceFxDevicePowered @ 0x140310B70 (PopDiagTraceFxDevicePowered.c)
 *     PopPepWork @ 0x140311E5C (PopPepWork.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140312A50 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x140312E7C (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x140314DE8 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     KiIntSteerLogState @ 0x1403213C8 (KiIntSteerLogState.c)
 *     PpmParkRecordNodeStatistics @ 0x14033C6A0 (PpmParkRecordNodeStatistics.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140340BF4 (PoTraceSystemTimerResolutionKernel.c)
 *     EtwWriteTransfer @ 0x14034E210 (EtwWriteTransfer.c)
 *     PpmEventProcessorPerfStateChange @ 0x14034F3D0 (PpmEventProcessorPerfStateChange.c)
 *     PpmEventTraceExpectedUtility @ 0x14034F470 (PpmEventTraceExpectedUtility.c)
 *     PpmEventDomainPerfStateChange @ 0x140352E2C (PpmEventDomainPerfStateChange.c)
 *     PoFxSetComponentLatency @ 0x14035B4C0 (PoFxSetComponentLatency.c)
 *     PopDiagTraceFxComponentIdleState @ 0x14035C6AC (PopDiagTraceFxComponentIdleState.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140367F70 (_tlgWriteEx_EtwWriteEx.c)
 *     EtwpTiFillVadEventWrite @ 0x140368018 (EtwpTiFillVadEventWrite.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x140373B78 (PpmEventTraceFailedPerfCheckStart.c)
 *     KsepEvntLogFlagsApplied @ 0x1403740DC (KsepEvntLogFlagsApplied.c)
 *     PnpDiagnosticTraceElamStatus @ 0x140374D2C (PnpDiagnosticTraceElamStatus.c)
 *     WheaLogInternalEvent @ 0x140380A50 (WheaLogInternalEvent.c)
 *     BapdWriteEtwEvents @ 0x140383CE0 (BapdWriteEtwEvents.c)
 *     HalpTscAdvSynchLeader @ 0x14038D300 (HalpTscAdvSynchLeader.c)
 *     HalpTscAdvSynchCalculateRemoteDeltas @ 0x14038D618 (HalpTscAdvSynchCalculateRemoteDeltas.c)
 *     HalpTscTraceProcessorSynchronization @ 0x14038DAB4 (HalpTscTraceProcessorSynchronization.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1403A197C (PopDiagTraceThermalZoneEnumeration.c)
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403A5E60 (EtwTraceJobServerSiloMonitorCallback.c)
 *     PpmMediaBufferingWorker @ 0x1403ACBF0 (PpmMediaBufferingWorker.c)
 *     SSHSupportEtwWrite @ 0x1403AD9A8 (SSHSupportEtwWrite.c)
 *     PoFxSetComponentResidency @ 0x1403B3CB0 (PoFxSetComponentResidency.c)
 *     HalpIommuLogEarlyFault @ 0x1403B48A8 (HalpIommuLogEarlyFault.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x1403B6360 (PoTraceSystemTimerResolutionUpdate.c)
 *     MiAllocateContiguousMemory @ 0x1403B9CD4 (MiAllocateContiguousMemory.c)
 *     IoTransferActivityId @ 0x1403C3040 (IoTransferActivityId.c)
 *     EtwTraceContFreeEvent @ 0x1403C37A0 (EtwTraceContFreeEvent.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403C42C0 (McGenEventWrite_EtwWriteTransfer.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x1403C438C (PopBatteryTraceSystemBatteryStatus.c)
 *     MiLogPeriodicTelemetryForSlabAllocator @ 0x1403D0AA0 (MiLogPeriodicTelemetryForSlabAllocator.c)
 *     MiLogSlabEntriesDemote @ 0x1403D6B60 (MiLogSlabEntriesDemote.c)
 *     PpmEventHgsCoresUnparkedCount @ 0x14046332E (PpmEventHgsCoresUnparkedCount.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x14046343C (PpmEventTraceMakeupPerfCheck.c)
 *     PpmEventTraceSoftCoreParkingSelection @ 0x14046349E (PpmEventTraceSoftCoreParkingSelection.c)
 *     EtwpFileProvTrace @ 0x140467790 (EtwpFileProvTrace.c)
 *     EtwpLogMemNodeInfo @ 0x140467A86 (EtwpLogMemNodeInfo.c)
 *     EtwpNetProvTraceNetwork @ 0x140467C92 (EtwpNetProvTraceNetwork.c)
 *     HalpTscTraceStatus @ 0x14050A830 (HalpTscTraceStatus.c)
 *     HalpIommuTraceFault @ 0x14051865C (HalpIommuTraceFault.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x14053C058 (DbgkpLkmdSqmIncrementDword.c)
 *     HvlpWriteEventLog @ 0x140548C08 (HvlpWriteEventLog.c)
 *     IopDumpTraceCrashDumpDisabled @ 0x14055286C (IopDumpTraceCrashDumpDisabled.c)
 *     IopDumpTraceCrashDumpReconfiguration @ 0x140552948 (IopDumpTraceCrashDumpReconfiguration.c)
 *     IopDumpTraceDisableCrashDumpFailure @ 0x140552A58 (IopDumpTraceDisableCrashDumpFailure.c)
 *     IopDumpTraceFreeDumpStackFailure @ 0x140552B68 (IopDumpTraceFreeDumpStackFailure.c)
 *     IopDumpTraceInitializeCrashDumpFailure @ 0x140552C78 (IopDumpTraceInitializeCrashDumpFailure.c)
 *     IopDumpTraceInitializeDumpStackFailure @ 0x140552D88 (IopDumpTraceInitializeDumpStackFailure.c)
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x140552E98 (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     IopDumpTraceLoadDumpStackFailure @ 0x140552FA8 (IopDumpTraceLoadDumpStackFailure.c)
 *     IopInitActivityIdIrp @ 0x140555724 (IopInitActivityIdIrp.c)
 *     IopLiveDumpTrace @ 0x14055A08C (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure @ 0x14055A0D0 (IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x14055A158 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x14055A284 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration @ 0x14055A410 (IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration.c)
 *     IopLiveDumpTraceCaptureMemoryPages @ 0x14055A55C (IopLiveDumpTraceCaptureMemoryPages.c)
 *     IopLiveDumpTraceCaptureProcessorContextDuration @ 0x14055A65C (IopLiveDumpTraceCaptureProcessorContextDuration.c)
 *     IopLiveDumpTraceCorralProcessorsDuration @ 0x14055A7B8 (IopLiveDumpTraceCorralProcessorsDuration.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x14055A99C (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x14055AADC (IopLiveDumpTraceEstimatedAndAllocatedPageCount.c)
 *     IopLiveDumpTraceHvlPrepareLivedumpDescriptorFailure @ 0x14055AC2C (IopLiveDumpTraceHvlPrepareLivedumpDescriptorFailure.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x14055ACB0 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x14055AEB4 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x14055AF18 (IopLiveDumpTraceMarkImportantDumpDataDuration.c)
 *     IopLiveDumpTraceMarkRequiredDumpDataDuration @ 0x14055B074 (IopLiveDumpTraceMarkRequiredDumpDataDuration.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x14055B1D0 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x14055B228 (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x14055B280 (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x14055B2E0 (IopLiveDumpTraceMmDuplicateMemoryFailure.c)
 *     IopLiveDumpTraceOpenVMMemoryPartitionFailure @ 0x14055B398 (IopLiveDumpTraceOpenVMMemoryPartitionFailure.c)
 *     IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x14055B41C (IopLiveDumpTracePopulateBitmapForDumpDuration.c)
 *     IopLiveDumpTraceQueryHvlDumpSizeFailure @ 0x14055B594 (IopLiveDumpTraceQueryHvlDumpSizeFailure.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x14055B618 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x14055B6AC (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x14055B704 (IopLiveDumpTraceSystemQuiesceStart.c)
 *     IopLiveDumpTraceUncorralProcessorsDuration @ 0x14055B75C (IopLiveDumpTraceUncorralProcessorsDuration.c)
 *     KsepDsEventAddDevice @ 0x140581558 (KsepDsEventAddDevice.c)
 *     KsepDsEventDataIrp @ 0x140581684 (KsepDsEventDataIrp.c)
 *     KsepDsEventDevicePowerCompleted @ 0x140581780 (KsepDsEventDevicePowerCompleted.c)
 *     KsepDsEventDevicePowerIrp @ 0x140581864 (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventDriverLoad @ 0x14058197C (KsepDsEventDriverLoad.c)
 *     KsepDsEventDriverStartIo @ 0x140581A7C (KsepDsEventDriverStartIo.c)
 *     KsepDsEventDriverUnload @ 0x140581B50 (KsepDsEventDriverUnload.c)
 *     KsepDsEventIoCreateDevice @ 0x140581C0C (KsepDsEventIoCreateDevice.c)
 *     KsepDsEventPnpIrp @ 0x140581D1C (KsepDsEventPnpIrp.c)
 *     KsepDsEventPnpStartDevice @ 0x140581E18 (KsepDsEventPnpStartDevice.c)
 *     KsepDsEventPnpStopDevice @ 0x140581EFC (KsepDsEventPnpStopDevice.c)
 *     KsepDsEventPoolAllocate @ 0x140581FE0 (KsepDsEventPoolAllocate.c)
 *     KsepDsEventPoolFree @ 0x1405820DC (KsepDsEventPoolFree.c)
 *     KsepDsEventRequestPowerIrp @ 0x1405821B4 (KsepDsEventRequestPowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x1405822BC (KsepDsEventSystemPowerIrp.c)
 *     KsepSkipDriverUnloadEventDriverLoad @ 0x1405825EC (KsepSkipDriverUnloadEventDriverLoad.c)
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x1405826EC (KsepSkipDriverUnloadEventDriverUnload.c)
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x140590F04 (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     PoTraceDynamicTickDisabled @ 0x140590FFC (PoTraceDynamicTickDisabled.c)
 *     PoTraceSystemTimerResolutionIgnore @ 0x140591268 (PoTraceSystemTimerResolutionIgnore.c)
 *     PopDiagTraceAbnormalReset @ 0x140591A3C (PopDiagTraceAbnormalReset.c)
 *     PopDiagTraceCsDeepSleepWatchdog @ 0x140591ADC (PopDiagTraceCsDeepSleepWatchdog.c)
 *     PopDiagTraceCsDripsDivergence @ 0x140591BF0 (PopDiagTraceCsDripsDivergence.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x140591CE8 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x140591EE4 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDiagTraceCsFanPerfTrack @ 0x14059203C (PopDiagTraceCsFanPerfTrack.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x1405925E8 (PopDiagTraceDebuggerTransitionRequirements.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x1405926C4 (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x14059296C (PopDiagTraceDeviceIdleCheck.c)
 *     PopDiagTraceDiskIdleCheck @ 0x140592B4C (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceEsState @ 0x140592EA4 (PopDiagTraceEsState.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x140592F60 (PopDiagTraceFxComponentIdleConstraints.c)
 *     PopDiagTraceFxComponentWake @ 0x140593058 (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x140593150 (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1405934BC (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1405935C0 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x1405936A0 (PopDiagTraceFxDeviceIdleConstraints.c)
 *     PopDiagTraceFxPerfNominalChange @ 0x1405938A8 (PopDiagTraceFxPerfNominalChange.c)
 *     PopDiagTraceFxPerfRequest @ 0x1405939E8 (PopDiagTraceFxPerfRequest.c)
 *     PopDiagTraceIdleCheck @ 0x140593C9C (PopDiagTraceIdleCheck.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x140593DE8 (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x140593E98 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x140593F54 (PopDiagTraceIllegalProcessorThrottle.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x1405940FC (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopDiagTraceIrpPended @ 0x14059419C (PopDiagTraceIrpPended.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x14059423C (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x14059438C (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PopDiagTraceRegisterSystemState @ 0x1405944F4 (PopDiagTraceRegisterSystemState.c)
 *     PopDiagTraceRtcWakeInfo @ 0x1405945BC (PopDiagTraceRtcWakeInfo.c)
 *     PopDiagTraceSetSystemState @ 0x1405949E8 (PopDiagTraceSetSystemState.c)
 *     PopDiagTraceShutdownAction @ 0x140594A88 (PopDiagTraceShutdownAction.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x140594B7C (PopDiagTraceSleepStudyBlocker.c)
 *     PopDiagTraceThermalStateChange @ 0x140594C24 (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneRundown @ 0x140594D4C (PopDiagTraceThermalZoneRundown.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x140594F44 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x140595078 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x140599C5C (PpmEventBiosCapChange.c)
 *     PpmEventCoreParkingSoftParkedStateChange @ 0x140599D2C (PpmEventCoreParkingSoftParkedStateChange.c)
 *     PpmEventCoreParkingStateChange @ 0x140599E4C (PpmEventCoreParkingStateChange.c)
 *     PpmEventCoreParkingStateChangeEx @ 0x140599F40 (PpmEventCoreParkingStateChangeEx.c)
 *     PpmEventHeteroFavoredCoreRotationChange @ 0x14059A0D8 (PpmEventHeteroFavoredCoreRotationChange.c)
 *     PpmEventHgsActiveWorkloadClass @ 0x14059A198 (PpmEventHgsActiveWorkloadClass.c)
 *     PpmEventHgsNormalizedTable @ 0x14059A4E4 (PpmEventHgsNormalizedTable.c)
 *     PpmEventHiddenProcessorBiosCapChange @ 0x14059A6A8 (PpmEventHiddenProcessorBiosCapChange.c)
 *     PpmEventHiddenProcessorThermalCapChange @ 0x14059A7B0 (PpmEventHiddenProcessorThermalCapChange.c)
 *     PpmEventIdleDurationExpiration @ 0x14059A8B8 (PpmEventIdleDurationExpiration.c)
 *     PpmEventLPICoreParking @ 0x14059AA1C (PpmEventLPICoreParking.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x14059ABB8 (PpmEventParkNodeClassRecordedStats.c)
 *     PpmEventParkNodePreference @ 0x14059ADBC (PpmEventParkNodePreference.c)
 *     PpmEventParkingCountSelection @ 0x14059AEDC (PpmEventParkingCountSelection.c)
 *     PpmEventPlatformVetoRequest @ 0x14059B03C (PpmEventPlatformVetoRequest.c)
 *     PpmEventPlatformVetoRundown @ 0x14059B114 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRequest @ 0x14059B320 (PpmEventProcessorVetoRequest.c)
 *     PpmEventProcessorVetoRundown @ 0x14059B430 (PpmEventProcessorVetoRundown.c)
 *     PpmEventThermalCapChange @ 0x14059B690 (PpmEventThermalCapChange.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x14059B7F0 (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmEventTraceHeteroResponse @ 0x14059B8EC (PpmEventTraceHeteroResponse.c)
 *     PpmEventTraceLPIState @ 0x14059BAD8 (PpmEventTraceLPIState.c)
 *     PpmEventTraceMultiClassHeteroResponse @ 0x14059BBA0 (PpmEventTraceMultiClassHeteroResponse.c)
 *     PpmEventTraceMultiClassHeteroResponseUpdate @ 0x14059BD98 (PpmEventTraceMultiClassHeteroResponseUpdate.c)
 *     PpmEventTracePreVetoAccounting @ 0x14059BEA0 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x14059C0D0 (PpmEventTraceProcessorIdleAccounting.c)
 *     PpmEventVetoReasonRundown @ 0x14059C364 (PpmEventVetoReasonRundown.c)
 *     PpmEventVpQosChange @ 0x14059C458 (PpmEventVpQosChange.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x14059E770 (PpmHeteroDispatchHgsInterrupt.c)
 *     PopDirectedDripsDiagTraceDfxPowerStateFailure @ 0x1405A078C (PopDirectedDripsDiagTraceDfxPowerStateFailure.c)
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x1405A0894 (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     PopSqmAddToStream @ 0x1405A2170 (PopSqmAddToStream.c)
 *     SshpWriteBlocker @ 0x1405A2DC0 (SshpWriteBlocker.c)
 *     PsDispatchIumService @ 0x1405A4E64 (PsDispatchIumService.c)
 *     SmEtwLogRegionOp @ 0x1405CAEBC (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x1405CAF88 (SmEtwLogStoreCorruption.c)
 *     SmEtwLogStoreOp @ 0x1405CB0C0 (SmEtwLogStoreOp.c)
 *     SmEtwLogStoreStateChange @ 0x1405CB18C (SmEtwLogStoreStateChange.c)
 *     SmKmStoreTerminateWorker @ 0x1405CBB60 (SmKmStoreTerminateWorker.c)
 *     SmKmSqmAddToStream @ 0x1405CDCA8 (SmKmSqmAddToStream.c)
 *     EtwpTraceLostEvent @ 0x1405FC3A4 (EtwpTraceLostEvent.c)
 *     EtwpTraceLostSystemEvent @ 0x1405FC6F0 (EtwpTraceLostSystemEvent.c)
 *     EtwpTraceLostWppEvent @ 0x1405FC7C8 (EtwpTraceLostWppEvent.c)
 *     EtwTraceCumulativeDpcSoftTimeout @ 0x1405FC924 (EtwTraceCumulativeDpcSoftTimeout.c)
 *     EtwTraceDpcProfilingStack @ 0x1405FCB90 (EtwTraceDpcProfilingStack.c)
 *     EtwTraceDpcProfilingStackBegin @ 0x1405FCC20 (EtwTraceDpcProfilingStackBegin.c)
 *     EtwTraceProcessSetInPrivateMode @ 0x1405FD37C (EtwTraceProcessSetInPrivateMode.c)
 *     EtwTraceSingleDpcSoftTimeout @ 0x1405FD558 (EtwTraceSingleDpcSoftTimeout.c)
 *     EtwpPsProvTracePriority @ 0x1405FE16C (EtwpPsProvTracePriority.c)
 *     SeEtwWriteKMCveEvent @ 0x1405FED50 (SeEtwWriteKMCveEvent.c)
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x1405FFDDC (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 *     KitLogFeatureUsage @ 0x14060EB70 (KitLogFeatureUsage.c)
 *     WheapGenerateETWErrorRecord @ 0x140613130 (WheapGenerateETWErrorRecord.c)
 *     WheapGenerateETWErrorRecordLarge @ 0x1406131B0 (WheapGenerateETWErrorRecordLarge.c)
 *     WheapLogProcessTerminateEvent @ 0x140613430 (WheapLogProcessTerminateEvent.c)
 *     CmpThreadInfoLogStack @ 0x14061600C (CmpThreadInfoLogStack.c)
 *     MiLogBadMapper @ 0x140630DF8 (MiLogBadMapper.c)
 *     MiLogSlabEntryAllocateFailure @ 0x1406570EC (MiLogSlabEntryAllocateFailure.c)
 *     SmKmEtwLogStoreChange @ 0x1409D8774 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x1409D8884 (SmKmEtwLogStoreStats.c)
 *     EtwpPsProvTraceImage @ 0x1409E6324 (EtwpPsProvTraceImage.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140AA7BB0 (PopDiagTraceFirmwareS3Stats.c)
 *     PopDiagTraceDirtyTransition @ 0x140B35190 (PopDiagTraceDirtyTransition.c)
 *     EtwpTraceSystemInitialization @ 0x140B4C830 (EtwpTraceSystemInitialization.c)
 *     BapdpRecordIumStatus @ 0x140B4F34C (BapdpRecordIumStatus.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140B749C4 (PopTriggerDiagTraceAoAcCapability.c)
 *     PopDiagTraceAdaptiveBootOverride @ 0x140B96394 (PopDiagTraceAdaptiveBootOverride.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x140258520 (EtwpLevelKeywordEnabled.c)
 *     EtwpEventWriteFull @ 0x140258570 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
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
