/*
 * XREFs of KeAddProcessorAffinityEx @ 0x140257460
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     KiSendThawExecution @ 0x14020D210 (KiSendThawExecution.c)
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KiExitDispatcher @ 0x14023CE40 (KiExitDispatcher.c)
 *     PoGetIdleTimes @ 0x1402526E0 (PoGetIdleTimes.c)
 *     HalpInterruptSendIpi @ 0x140254E10 (HalpInterruptSendIpi.c)
 *     PpmParkSteerInterrupts @ 0x140256AE0 (PpmParkSteerInterrupts.c)
 *     KeFlushQueuedDpcs @ 0x14028FC50 (KeFlushQueuedDpcs.c)
 *     KeRemoveQueueEx @ 0x1402AA2D0 (KeRemoveQueueEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B1100 (KiProcessDeferredReadyList.c)
 *     KeSetBasePriorityThread @ 0x1402BA030 (KeSetBasePriorityThread.c)
 *     KiCheckForThreadDispatch @ 0x1402BCD08 (KiCheckForThreadDispatch.c)
 *     KiCheckKeepAlive @ 0x1402C01DC (KiCheckKeepAlive.c)
 *     PpmIdlePrepare @ 0x1402C25C0 (PpmIdlePrepare.c)
 *     PoIdle @ 0x1402C4DF0 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x1402C55B0 (PpmIdleExecuteTransition.c)
 *     KiCompleteRescheduleContextEntry @ 0x140308020 (KiCompleteRescheduleContextEntry.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140318150 (KiAbThreadUnboostCpuPriority.c)
 *     KeDisableTimer2 @ 0x14031DE08 (KeDisableTimer2.c)
 *     KeQueryTotalCycleTimeThread @ 0x14032A040 (KeQueryTotalCycleTimeThread.c)
 *     PoGetPerfStateAndParkingInfo @ 0x14032A700 (PoGetPerfStateAndParkingInfo.c)
 *     KiReadyOutSwappedThreads @ 0x14034D394 (KiReadyOutSwappedThreads.c)
 *     KiSendClockInterruptToClockOwner @ 0x140365258 (KiSendClockInterruptToClockOwner.c)
 *     KeUpdateThreadTag @ 0x140366D70 (KeUpdateThreadTag.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036C2B8 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14036CD14 (KeSetSystemMultipleGroupAffinityThread.c)
 *     HalpInterruptInitializeLocalUnit @ 0x14037BBF0 (HalpInterruptInitializeLocalUnit.c)
 *     KiStartPrcbThread @ 0x140382BC0 (KiStartPrcbThread.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140393514 (PpmHeteroUpdateHgsConfiguration.c)
 *     KeSetCpuSetsProcess @ 0x14039CD04 (KeSetCpuSetsProcess.c)
 *     KeCpuSetReportParkedProcessors @ 0x14039D894 (KeCpuSetReportParkedProcessors.c)
 *     KeUpdateThreadCpuSets @ 0x14039E2C8 (KeUpdateThreadCpuSets.c)
 *     PpmInstallNewIdleStates @ 0x14039F7C0 (PpmInstallNewIdleStates.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AAF8C (KeSetUserGroupAffinityThread.c)
 *     PpmIdleSelectStates @ 0x1403B7650 (PpmIdleSelectStates.c)
 *     ExpUpdateTimerConfiguration @ 0x1403C3158 (ExpUpdateTimerConfiguration.c)
 *     PoExecuteIdleCheck @ 0x1403CBC90 (PoExecuteIdleCheck.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x1404112D8 (KiSoftParkElectionUnparkProcessor.c)
 *     KiSynchronizeStibpPairing @ 0x140460DF6 (KiSynchronizeStibpPairing.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140462644 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x14050C170 (HalpTimerWatchdogTriggerSystemReset.c)
 *     EmonReleaseProfileResourcesInternal @ 0x14051E680 (EmonReleaseProfileResourcesInternal.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14056E580 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KiStopProfileTarget @ 0x140574CC0 (KiStopProfileTarget.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140575794 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140576070 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577EFC (KiSetHeteroPolicyThread.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x14057A0E8 (KeGetAffinitizedInterruptsInfo.c)
 *     KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule @ 0x14057E01C (KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x140580DF0 (KiIntRedirectQueueRequestOnProcessor.c)
 *     PpmRemoveIdleStates @ 0x140585F00 (PpmRemoveIdleStates.c)
 *     PpmTestAndLockProcessor @ 0x1405863EC (PpmTestAndLockProcessor.c)
 *     PpmUnlockProcessors @ 0x140586658 (PpmUnlockProcessors.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140586B60 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x140586DC0 (PpmUpdateProcessorIdleVeto.c)
 *     PpmCapturePerformanceDistribution @ 0x140597F0C (PpmCapturePerformanceDistribution.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x14059E18C (PopIdleWakeStopActiveIntervalAccounting.c)
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 *     PpmUpdateIdleStates @ 0x1408200A0 (PpmUpdateIdleStates.c)
 *     PpmRegisterPerfStates @ 0x14082E84C (PpmRegisterPerfStates.c)
 *     HalAllocateHardwareCounters @ 0x1409333E0 (HalAllocateHardwareCounters.c)
 *     KeConfigureHeteroProcessors @ 0x140972AE8 (KeConfigureHeteroProcessors.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x1409734C8 (KiPrepareUpdateCoresHeteroMask.c)
 *     KiUpdateProcessorCount @ 0x140A88CA8 (KiUpdateProcessorCount.c)
 *     EmonInitializeProfiling @ 0x140A896A0 (EmonInitializeProfiling.c)
 *     KiInitializeBootStructures @ 0x140A8B590 (KiInitializeBootStructures.c)
 *     KiAddCpuToSystemCpuPartition @ 0x140A8CD30 (KiAddCpuToSystemCpuPartition.c)
 *     KiInitializeTopologyStructures @ 0x140A8D0F8 (KiInitializeTopologyStructures.c)
 *     DefaultInitializeProfiling @ 0x140A95980 (DefaultInitializeProfiling.c)
 *     Amd64InitializeProfiling @ 0x140A985F0 (Amd64InitializeProfiling.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140A9F150 (KiInitializeDynamicProcessorDpc.c)
 *     KiIntSteerInit @ 0x140B4E594 (KiIntSteerInit.c)
 *     KiInitializeIdleProcess @ 0x140B5EA40 (KiInitializeIdleProcess.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140B969F4 (PspCopyNodeRelativeMaskToAffinityEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAddProcessorAffinityEx(unsigned __int16 *a1, int a2)
{
  unsigned int v3; // r9d
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v3 = KiProcessorIndexToNumberMappingTable[a2] & 0x3F;
  v4 = (unsigned int)KiProcessorIndexToNumberMappingTable[a2] >> 6;
  if ( *a1 > (unsigned int)v4 )
    goto LABEL_2;
  result = a1[1];
  if ( (unsigned int)result > (unsigned int)v4 )
  {
    *a1 = v4 + 1;
LABEL_2:
    v5 = (unsigned int)v4;
    v6 = *(_QWORD *)&a1[4 * v4 + 4];
    result = v3;
    _bittestandset64(&v6, v3);
    *(_QWORD *)&a1[4 * v5 + 4] = v6;
  }
  return result;
}
