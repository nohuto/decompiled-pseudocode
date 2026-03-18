/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x1402551B0
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeSelectIdealProcessor @ 0x14020385C (KeSelectIdealProcessor.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     HalSendNMI @ 0x14020CEE0 (HalSendNMI.c)
 *     KiExitDispatcher @ 0x14023CD70 (KiExitDispatcher.c)
 *     PoGetIdleTimes @ 0x140252620 (PoGetIdleTimes.c)
 *     HalpInterruptSendIpi @ 0x140254D50 (HalpInterruptSendIpi.c)
 *     KeRemoveQueueEx @ 0x1402AA040 (KeRemoveQueueEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E70 (KiProcessDeferredReadyList.c)
 *     KeSetBasePriorityThread @ 0x1402B9DA0 (KeSetBasePriorityThread.c)
 *     KiCheckForThreadDispatch @ 0x1402BCA78 (KiCheckForThreadDispatch.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140305FB0 (KeQueryLogicalProcessorRelationship.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140317EC0 (KiAbThreadUnboostCpuPriority.c)
 *     HalpInterruptDestinationToTarget @ 0x14031FC7C (HalpInterruptDestinationToTarget.c)
 *     PoGetPerfStateAndParkingInfo @ 0x14032A470 (PoGetPerfStateAndParkingInfo.c)
 *     KiReadyOutSwappedThreads @ 0x14034D1F4 (KiReadyOutSwappedThreads.c)
 *     KeSetTargetProcessorDpcEx @ 0x14036BCD0 (KeSetTargetProcessorDpcEx.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036C118 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14036CB74 (KeSetSystemMultipleGroupAffinityThread.c)
 *     IntPartGetProcessorEfficiencyClass @ 0x140383A44 (IntPartGetProcessorEfficiencyClass.c)
 *     KeSetCpuSetsProcess @ 0x14039CB24 (KeSetCpuSetsProcess.c)
 *     KeCpuSetReportParkedProcessors @ 0x14039D6B4 (KeCpuSetReportParkedProcessors.c)
 *     KeUpdateThreadCpuSets @ 0x14039E0E8 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AADAC (KeSetUserGroupAffinityThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1403CEDF4 (KeSetIdealProcessorThreadByNumber.c)
 *     HalpInterruptDpReplaceBegin @ 0x14052093C (HalpInterruptDpReplaceBegin.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14056E040 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140575254 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140575B30 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577A0C (KiSetHeteroPolicyThread.c)
 *     PpmClearSimulatedIdle @ 0x14058404C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x140585C6C (PpmSetSimulatedIdle.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405868D0 (PpmUpdateProcessorIdleVeto.c)
 *     ExpQuerySystemInformation @ 0x140726850 (ExpQuerySystemInformation.c)
 *     PspBuildCreateProcessContext @ 0x140771168 (PspBuildCreateProcessContext.c)
 *     IopConnectInterrupt @ 0x14078E760 (IopConnectInterrupt.c)
 *     PpmUpdateIdleStates @ 0x14081FDA0 (PpmUpdateIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x140982410 (PpmInstallPlatformIdleStates.c)
 *     PpmClearSimulatedLoad @ 0x1409867F0 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x140986918 (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x140986BA4 (PpmSetSimulatedLoad.c)
 *     HalpInterruptReinitialize @ 0x140A9544C (HalpInterruptReinitialize.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x140A98080 (HalpInterruptUpdateLocalUnitIdentifier.c)
 *     PopReadSimulateProcessorClass @ 0x140B966F4 (PopReadSimulateProcessorClass.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeGetProcessorIndexFromNumber(PPROCESSOR_NUMBER ProcNumber)
{
  __int64 Group; // rax
  __int64 Number; // rdx
  ULONG result; // eax

  if ( ProcNumber->Reserved )
    return -1;
  Group = ProcNumber->Group;
  if ( !(_WORD)Group && !ProcNumber->Number )
    return 0;
  if ( (unsigned __int16)Group >= (unsigned __int16)KiMaximumGroups )
    return -1;
  Number = ProcNumber->Number;
  if ( (unsigned __int8)Number >= 0x40u )
    return -1;
  result = KiProcessorNumberToIndexMappingTable[64 * Group + Number];
  if ( !result )
    return -1;
  return result;
}
