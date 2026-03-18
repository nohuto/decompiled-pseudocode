/*
 * XREFs of KeAddProcessorAffinityEx @ 0x1402573A0
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     KiSendThawExecution @ 0x14020D210 (KiSendThawExecution.c)
 *     KiDeferredReadySingleThread @ 0x14023A2D0 (KiDeferredReadySingleThread.c)
 *     KiExitDispatcher @ 0x14023CD70 (KiExitDispatcher.c)
 *     PoGetIdleTimes @ 0x140252620 (PoGetIdleTimes.c)
 *     HalpInterruptSendIpi @ 0x140254D50 (HalpInterruptSendIpi.c)
 *     PpmParkSteerInterrupts @ 0x140256A20 (PpmParkSteerInterrupts.c)
 *     KeFlushQueuedDpcs @ 0x14028F9C0 (KeFlushQueuedDpcs.c)
 *     KeRemoveQueueEx @ 0x1402AA040 (KeRemoveQueueEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E70 (KiProcessDeferredReadyList.c)
 *     KeSetBasePriorityThread @ 0x1402B9DA0 (KeSetBasePriorityThread.c)
 *     KiCheckForThreadDispatch @ 0x1402BCA78 (KiCheckForThreadDispatch.c)
 *     KiCheckKeepAlive @ 0x1402BFF4C (KiCheckKeepAlive.c)
 *     PpmIdlePrepare @ 0x1402C2330 (PpmIdlePrepare.c)
 *     PoIdle @ 0x1402C4B60 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x1402C5320 (PpmIdleExecuteTransition.c)
 *     KiCompleteRescheduleContextEntry @ 0x140307D90 (KiCompleteRescheduleContextEntry.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140317EC0 (KiAbThreadUnboostCpuPriority.c)
 *     KeDisableTimer2 @ 0x14031DB78 (KeDisableTimer2.c)
 *     KeQueryTotalCycleTimeThread @ 0x140329DB0 (KeQueryTotalCycleTimeThread.c)
 *     PoGetPerfStateAndParkingInfo @ 0x14032A470 (PoGetPerfStateAndParkingInfo.c)
 *     KiReadyOutSwappedThreads @ 0x14034D1F4 (KiReadyOutSwappedThreads.c)
 *     KiSendClockInterruptToClockOwner @ 0x1403650B8 (KiSendClockInterruptToClockOwner.c)
 *     KeUpdateThreadTag @ 0x140366BD0 (KeUpdateThreadTag.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036C118 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14036CB74 (KeSetSystemMultipleGroupAffinityThread.c)
 *     HalpInterruptInitializeLocalUnit @ 0x14037BA50 (HalpInterruptInitializeLocalUnit.c)
 *     KiStartPrcbThread @ 0x140382A20 (KiStartPrcbThread.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140393334 (PpmHeteroUpdateHgsConfiguration.c)
 *     KeSetCpuSetsProcess @ 0x14039CB24 (KeSetCpuSetsProcess.c)
 *     KeCpuSetReportParkedProcessors @ 0x14039D6B4 (KeCpuSetReportParkedProcessors.c)
 *     KeUpdateThreadCpuSets @ 0x14039E0E8 (KeUpdateThreadCpuSets.c)
 *     PpmInstallNewIdleStates @ 0x14039F5E0 (PpmInstallNewIdleStates.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AADAC (KeSetUserGroupAffinityThread.c)
 *     PpmIdleSelectStates @ 0x1403B7470 (PpmIdleSelectStates.c)
 *     ExpUpdateTimerConfiguration @ 0x1403C2F78 (ExpUpdateTimerConfiguration.c)
 *     PoExecuteIdleCheck @ 0x1403CBAB0 (PoExecuteIdleCheck.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x1404110CC (KiSoftParkElectionUnparkProcessor.c)
 *     KiSynchronizeStibpPairing @ 0x1404609F6 (KiSynchronizeStibpPairing.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140462244 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x14050BC20 (HalpTimerWatchdogTriggerSystemReset.c)
 *     EmonReleaseProfileResourcesInternal @ 0x14051E130 (EmonReleaseProfileResourcesInternal.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14056E040 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KiStopProfileTarget @ 0x140574780 (KiStopProfileTarget.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140575254 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140575B30 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577A0C (KiSetHeteroPolicyThread.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140579BF8 (KeGetAffinitizedInterruptsInfo.c)
 *     KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule @ 0x14057DB2C (KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x140580900 (KiIntRedirectQueueRequestOnProcessor.c)
 *     PpmRemoveIdleStates @ 0x140585A10 (PpmRemoveIdleStates.c)
 *     PpmTestAndLockProcessor @ 0x140585EFC (PpmTestAndLockProcessor.c)
 *     PpmUnlockProcessors @ 0x140586168 (PpmUnlockProcessors.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140586670 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405868D0 (PpmUpdateProcessorIdleVeto.c)
 *     PpmCapturePerformanceDistribution @ 0x140597A1C (PpmCapturePerformanceDistribution.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x14059DC9C (PopIdleWakeStopActiveIntervalAccounting.c)
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     PpmUpdateIdleStates @ 0x14081FDA0 (PpmUpdateIdleStates.c)
 *     PpmRegisterPerfStates @ 0x14082E54C (PpmRegisterPerfStates.c)
 *     HalAllocateHardwareCounters @ 0x1409331E0 (HalAllocateHardwareCounters.c)
 *     KeConfigureHeteroProcessors @ 0x1409728E8 (KeConfigureHeteroProcessors.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x1409732C8 (KiPrepareUpdateCoresHeteroMask.c)
 *     KiUpdateProcessorCount @ 0x140A88CA8 (KiUpdateProcessorCount.c)
 *     EmonInitializeProfiling @ 0x140A896A0 (EmonInitializeProfiling.c)
 *     KiInitializeBootStructures @ 0x140A8B590 (KiInitializeBootStructures.c)
 *     KiAddCpuToSystemCpuPartition @ 0x140A8CD30 (KiAddCpuToSystemCpuPartition.c)
 *     KiInitializeTopologyStructures @ 0x140A8D0F8 (KiInitializeTopologyStructures.c)
 *     DefaultInitializeProfiling @ 0x140A95B10 (DefaultInitializeProfiling.c)
 *     Amd64InitializeProfiling @ 0x140A98780 (Amd64InitializeProfiling.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140A9F2E0 (KiInitializeDynamicProcessorDpc.c)
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
