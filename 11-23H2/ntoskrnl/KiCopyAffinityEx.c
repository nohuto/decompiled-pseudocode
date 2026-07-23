/*
 * XREFs of KiCopyAffinityEx @ 0x140254680
 * Callers:
 *     KiSetAffinityThread @ 0x14020327C (KiSetAffinityThread.c)
 *     KeFreezeExecution @ 0x14020D540 (KeFreezeExecution.c)
 *     KeIntSteerPeriodic @ 0x140221440 (KeIntSteerPeriodic.c)
 *     KiIpiSetTargetAffinity @ 0x1402545B4 (KiIpiSetTargetAffinity.c)
 *     HalpInterruptSendIpi @ 0x140254E10 (HalpInterruptSendIpi.c)
 *     PpmParkSteerInterrupts @ 0x140256AE0 (PpmParkSteerInterrupts.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140256F40 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KeFlushTb @ 0x140279C00 (KeFlushTb.c)
 *     KeStartThread @ 0x1402BE368 (KeStartThread.c)
 *     KiComputeThreadAffinity @ 0x1402BFAC4 (KiComputeThreadAffinity.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1402BFF80 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KeFlushProcessWriteBuffers @ 0x1402C02CC (KeFlushProcessWriteBuffers.c)
 *     KiComputeCpuSetAffinity @ 0x1402C06D4 (KiComputeCpuSetAffinity.c)
 *     KiUpdateProcessConcurrencyCount @ 0x1402C3350 (KiUpdateProcessConcurrencyCount.c)
 *     KxFlushSingleTb @ 0x1402EB5D0 (KxFlushSingleTb.c)
 *     KxFlushNonGlobalTb @ 0x1402EB754 (KxFlushNonGlobalTb.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140306240 (KeQueryLogicalProcessorRelationship.c)
 *     KiSetSystemAffinityThread @ 0x1403073EC (KiSetSystemAffinityThread.c)
 *     KeQueryUserAffinityThread @ 0x1403299DC (KeQueryUserAffinityThread.c)
 *     KeQueryAffinityProcess @ 0x14034C2B0 (KeQueryAffinityProcess.c)
 *     KeSynchronizeSecurityDomain @ 0x140356B24 (KeSynchronizeSecurityDomain.c)
 *     PpmParkReportMask @ 0x14035AF00 (PpmParkReportMask.c)
 *     KeSynchronizeAddressPolicy @ 0x140360A9C (KeSynchronizeAddressPolicy.c)
 *     KeCopyAffinityEx2 @ 0x140368850 (KeCopyAffinityEx2.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036C2B8 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KiStartPrcbThread @ 0x140382BC0 (KiStartPrcbThread.c)
 *     KxFlushMultipleTb @ 0x140390674 (KxFlushMultipleTb.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140393514 (PpmHeteroUpdateHgsConfiguration.c)
 *     KeQueryActiveProcessorAffinity2 @ 0x140393950 (KeQueryActiveProcessorAffinity2.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AAF8C (KeSetUserGroupAffinityThread.c)
 *     KeQueryCpuPartitionAffinity @ 0x1403AE248 (KeQueryCpuPartitionAffinity.c)
 *     KeSetAffinityProcess @ 0x1403AEC48 (KeSetAffinityProcess.c)
 *     KxFlushEntireTb @ 0x1403B2C8C (KxFlushEntireTb.c)
 *     KiForwardTick @ 0x1403CB8C0 (KiForwardTick.c)
 *     HalpNmiReboot @ 0x14051C2A0 (HalpNmiReboot.c)
 *     EmonAddProfileSource @ 0x14051CE40 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x140528D70 (Amd64AddProfileSource.c)
 *     KeBugCheck2 @ 0x140568950 (KeBugCheck2.c)
 *     KeCopyAffinityEx @ 0x14056F900 (KeCopyAffinityEx.c)
 *     KeQueryActiveProcessorAffinity @ 0x140570CE0 (KeQueryActiveProcessorAffinity.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x14057A0E8 (KeGetAffinitizedInterruptsInfo.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x14057ACAC (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14057D4B4 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoInitiateProcessorWake @ 0x140584210 (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x140585D40 (PpmInstallNewIdleDomains.c)
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 *     KeInitializeProcess @ 0x1406B6898 (KeInitializeProcess.c)
 *     PspSetEffectiveJobLimits @ 0x1407D9AC4 (PspSetEffectiveJobLimits.c)
 *     PpmRegisterPerfStates @ 0x14082E84C (PpmRegisterPerfStates.c)
 *     PnpReplacePartitionUnit @ 0x140964CF0 (PnpReplacePartitionUnit.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x1409734C8 (KiPrepareUpdateCoresHeteroMask.c)
 *     KeInitializeProfile @ 0x1409750A4 (KeInitializeProfile.c)
 *     KeInitializeProfileCallback @ 0x140975160 (KeInitializeProfileCallback.c)
 *     KeDeleteCpuPartition @ 0x140975528 (KeDeleteCpuPartition.c)
 *     PpmInstallCoordinatedIdleStates @ 0x140981FD0 (PpmInstallCoordinatedIdleStates.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1409E48BC (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpProfileCreate @ 0x140A03F08 (ExpProfileCreate.c)
 *     HalpReportResourceUsage @ 0x140B40B3C (HalpReportResourceUsage.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall KiCopyAffinityEx(__int64 a1, unsigned __int16 a2, unsigned __int16 *a3)
{
  unsigned __int16 v5; // cx
  unsigned __int16 result; // ax
  _QWORD *v7; // rdx
  __int64 v8; // r8
  char *v9; // r10
  __int64 v10; // rcx

  v5 = *a3;
  if ( *a3 > a2 )
    v5 = a2;
  *(_WORD *)a1 = v5;
  *(_WORD *)(a1 + 2) = a2;
  result = 0;
  *(_DWORD *)(a1 + 4) = 0;
  if ( v5 )
  {
    v7 = (_QWORD *)(a1 + 8);
    v8 = v5;
    v9 = (char *)a3 - a1;
    result = v5;
    do
    {
      *v7 = *(_QWORD *)((char *)v7 + (_QWORD)v9);
      ++v7;
      --v8;
    }
    while ( v8 );
  }
  for ( ; result < *(_WORD *)(a1 + 2); *(_QWORD *)(a1 + 8 * v10 + 8) = 0LL )
    v10 = result++;
  return result;
}
