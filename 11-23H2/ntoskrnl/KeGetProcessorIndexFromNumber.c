/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x140255270
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeSelectIdealProcessor @ 0x14020385C (KeSelectIdealProcessor.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     HalSendNMI @ 0x14020CEE0 (HalSendNMI.c)
 *     KiExitDispatcher @ 0x14023CE40 (KiExitDispatcher.c)
 *     PoGetIdleTimes @ 0x1402526E0 (PoGetIdleTimes.c)
 *     HalpInterruptSendIpi @ 0x140254E10 (HalpInterruptSendIpi.c)
 *     KeRemoveQueueEx @ 0x1402AA2D0 (KeRemoveQueueEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B1100 (KiProcessDeferredReadyList.c)
 *     KeSetBasePriorityThread @ 0x1402BA030 (KeSetBasePriorityThread.c)
 *     KiCheckForThreadDispatch @ 0x1402BCD08 (KiCheckForThreadDispatch.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140306240 (KeQueryLogicalProcessorRelationship.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140318150 (KiAbThreadUnboostCpuPriority.c)
 *     HalpInterruptDestinationToTarget @ 0x14031FF0C (HalpInterruptDestinationToTarget.c)
 *     PoGetPerfStateAndParkingInfo @ 0x14032A700 (PoGetPerfStateAndParkingInfo.c)
 *     KiReadyOutSwappedThreads @ 0x14034D394 (KiReadyOutSwappedThreads.c)
 *     KeSetTargetProcessorDpcEx @ 0x14036BE70 (KeSetTargetProcessorDpcEx.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036C2B8 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14036CD14 (KeSetSystemMultipleGroupAffinityThread.c)
 *     IntPartGetProcessorEfficiencyClass @ 0x140383C24 (IntPartGetProcessorEfficiencyClass.c)
 *     KeSetCpuSetsProcess @ 0x14039CD04 (KeSetCpuSetsProcess.c)
 *     KeCpuSetReportParkedProcessors @ 0x14039D894 (KeCpuSetReportParkedProcessors.c)
 *     KeUpdateThreadCpuSets @ 0x14039E2C8 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AAF8C (KeSetUserGroupAffinityThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1403CEFD4 (KeSetIdealProcessorThreadByNumber.c)
 *     HalpInterruptDpReplaceBegin @ 0x140520E8C (HalpInterruptDpReplaceBegin.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14056E580 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140575794 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140576070 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577EFC (KiSetHeteroPolicyThread.c)
 *     PpmClearSimulatedIdle @ 0x14058453C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x14058615C (PpmSetSimulatedIdle.c)
 *     PpmUpdateProcessorIdleVeto @ 0x140586DC0 (PpmUpdateProcessorIdleVeto.c)
 *     ExpQuerySystemInformation @ 0x140726A50 (ExpQuerySystemInformation.c)
 *     PspBuildCreateProcessContext @ 0x140771358 (PspBuildCreateProcessContext.c)
 *     IopConnectInterrupt @ 0x14078E950 (IopConnectInterrupt.c)
 *     PpmUpdateIdleStates @ 0x1408200A0 (PpmUpdateIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x140982610 (PpmInstallPlatformIdleStates.c)
 *     PpmClearSimulatedLoad @ 0x1409869F0 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x140986B18 (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x140986DA4 (PpmSetSimulatedLoad.c)
 *     HalpInterruptReinitialize @ 0x140A952BC (HalpInterruptReinitialize.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x140A97EF0 (HalpInterruptUpdateLocalUnitIdentifier.c)
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
