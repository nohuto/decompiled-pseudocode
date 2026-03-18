/*
 * XREFs of KeAddProcessorAffinityEx @ 0x140257280
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     KiSendThawExecution @ 0x14020D230 (KiSendThawExecution.c)
 *     KiDeferredReadySingleThread @ 0x14023A2B0 (KiDeferredReadySingleThread.c)
 *     KiExitDispatcher @ 0x14023CD50 (KiExitDispatcher.c)
 *     PoGetIdleTimes @ 0x140252500 (PoGetIdleTimes.c)
 *     HalpInterruptSendIpi @ 0x140254C30 (HalpInterruptSendIpi.c)
 *     PpmParkSteerInterrupts @ 0x140256900 (PpmParkSteerInterrupts.c)
 *     KeFlushQueuedDpcs @ 0x14028F8A0 (KeFlushQueuedDpcs.c)
 *     KeRemoveQueueEx @ 0x1402A9F20 (KeRemoveQueueEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E40 (KiProcessDeferredReadyList.c)
 *     KeSetBasePriorityThread @ 0x1402B9D70 (KeSetBasePriorityThread.c)
 *     KiCheckForThreadDispatch @ 0x1402BCA48 (KiCheckForThreadDispatch.c)
 *     KiCheckKeepAlive @ 0x1402BFF1C (KiCheckKeepAlive.c)
 *     PpmIdlePrepare @ 0x1402C2300 (PpmIdlePrepare.c)
 *     PoIdle @ 0x1402C4B30 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x1402C52F0 (PpmIdleExecuteTransition.c)
 *     KiCompleteRescheduleContextEntry @ 0x140307C60 (KiCompleteRescheduleContextEntry.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140317CE0 (KiAbThreadUnboostCpuPriority.c)
 *     KeDisableTimer2 @ 0x14031D998 (KeDisableTimer2.c)
 *     KeQueryTotalCycleTimeThread @ 0x140329BD0 (KeQueryTotalCycleTimeThread.c)
 *     PoGetPerfStateAndParkingInfo @ 0x14032A290 (PoGetPerfStateAndParkingInfo.c)
 *     KiReadyOutSwappedThreads @ 0x14034CBF4 (KiReadyOutSwappedThreads.c)
 *     KiSendClockInterruptToClockOwner @ 0x140364A68 (KiSendClockInterruptToClockOwner.c)
 *     KeUpdateThreadTag @ 0x140366580 (KeUpdateThreadTag.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036BAC8 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14036C524 (KeSetSystemMultipleGroupAffinityThread.c)
 *     HalpInterruptInitializeLocalUnit @ 0x14037C0A0 (HalpInterruptInitializeLocalUnit.c)
 *     KiStartPrcbThread @ 0x140383070 (KiStartPrcbThread.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403917B4 (PpmHeteroUpdateHgsConfiguration.c)
 *     KeSetCpuSetsProcess @ 0x14039C834 (KeSetCpuSetsProcess.c)
 *     KeCpuSetReportParkedProcessors @ 0x14039D3C4 (KeCpuSetReportParkedProcessors.c)
 *     KeUpdateThreadCpuSets @ 0x14039DDF8 (KeUpdateThreadCpuSets.c)
 *     PpmInstallNewIdleStates @ 0x14039F2F0 (PpmInstallNewIdleStates.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AA6BC (KeSetUserGroupAffinityThread.c)
 *     PpmIdleSelectStates @ 0x1403B6E10 (PpmIdleSelectStates.c)
 *     ExpUpdateTimerConfiguration @ 0x1403C2918 (ExpUpdateTimerConfiguration.c)
 *     PoExecuteIdleCheck @ 0x1403CB450 (PoExecuteIdleCheck.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x140410748 (KiSoftParkElectionUnparkProcessor.c)
 *     KiSynchronizeStibpPairing @ 0x140460396 (KiSynchronizeStibpPairing.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140461BE4 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x14050B890 (HalpTimerWatchdogTriggerSystemReset.c)
 *     EmonReleaseProfileResourcesInternal @ 0x14051E1F0 (EmonReleaseProfileResourcesInternal.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14056E0E0 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KiStopProfileTarget @ 0x140574820 (KiStopProfileTarget.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1405752F4 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140575BD0 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577A9C (KiSetHeteroPolicyThread.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140579C88 (KeGetAffinitizedInterruptsInfo.c)
 *     KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule @ 0x14057DBBC (KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x140580990 (KiIntRedirectQueueRequestOnProcessor.c)
 *     PpmRemoveIdleStates @ 0x140585AA0 (PpmRemoveIdleStates.c)
 *     PpmTestAndLockProcessor @ 0x140585F8C (PpmTestAndLockProcessor.c)
 *     PpmUnlockProcessors @ 0x1405861F8 (PpmUnlockProcessors.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140586700 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x140586960 (PpmUpdateProcessorIdleVeto.c)
 *     PpmCapturePerformanceDistribution @ 0x140597AAC (PpmCapturePerformanceDistribution.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x14059DD2C (PopIdleWakeStopActiveIntervalAccounting.c)
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     PpmUpdateIdleStates @ 0x140822320 (PpmUpdateIdleStates.c)
 *     PpmRegisterPerfStates @ 0x14083009C (PpmRegisterPerfStates.c)
 *     HalAllocateHardwareCounters @ 0x140933290 (HalAllocateHardwareCounters.c)
 *     KeConfigureHeteroProcessors @ 0x140972998 (KeConfigureHeteroProcessors.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x140973378 (KiPrepareUpdateCoresHeteroMask.c)
 *     KiUpdateProcessorCount @ 0x140A894FC (KiUpdateProcessorCount.c)
 *     EmonInitializeProfiling @ 0x140A89F00 (EmonInitializeProfiling.c)
 *     KiInitializeBootStructures @ 0x140A8BDF0 (KiInitializeBootStructures.c)
 *     KiAddCpuToSystemCpuPartition @ 0x140A8D590 (KiAddCpuToSystemCpuPartition.c)
 *     KiInitializeTopologyStructures @ 0x140A8D958 (KiInitializeTopologyStructures.c)
 *     DefaultInitializeProfiling @ 0x140A95BD0 (DefaultInitializeProfiling.c)
 *     Amd64InitializeProfiling @ 0x140A98840 (Amd64InitializeProfiling.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140A9F3A0 (KiInitializeDynamicProcessorDpc.c)
 *     KiIntSteerInit @ 0x140B53C08 (KiIntSteerInit.c)
 *     KiInitializeIdleProcess @ 0x140B625B0 (KiInitializeIdleProcess.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140B979F4 (PspCopyNodeRelativeMaskToAffinityEx.c)
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
