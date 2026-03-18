/*
 * XREFs of KiCopyAffinityEx @ 0x1402545C0
 * Callers:
 *     KiSetAffinityThread @ 0x14020327C (KiSetAffinityThread.c)
 *     KeFreezeExecution @ 0x14020D540 (KeFreezeExecution.c)
 *     KeIntSteerPeriodic @ 0x140221440 (KeIntSteerPeriodic.c)
 *     KiIpiSetTargetAffinity @ 0x1402544F4 (KiIpiSetTargetAffinity.c)
 *     HalpInterruptSendIpi @ 0x140254D50 (HalpInterruptSendIpi.c)
 *     PpmParkSteerInterrupts @ 0x140256A20 (PpmParkSteerInterrupts.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140256E80 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KeFlushTb @ 0x140279970 (KeFlushTb.c)
 *     KeStartThread @ 0x1402BE0D8 (KeStartThread.c)
 *     KiComputeThreadAffinity @ 0x1402BF834 (KiComputeThreadAffinity.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1402BFCF0 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KeFlushProcessWriteBuffers @ 0x1402C003C (KeFlushProcessWriteBuffers.c)
 *     KiComputeCpuSetAffinity @ 0x1402C0444 (KiComputeCpuSetAffinity.c)
 *     KiUpdateProcessConcurrencyCount @ 0x1402C30C0 (KiUpdateProcessConcurrencyCount.c)
 *     KxFlushSingleTb @ 0x1402EB340 (KxFlushSingleTb.c)
 *     KxFlushNonGlobalTb @ 0x1402EB4C4 (KxFlushNonGlobalTb.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140305FB0 (KeQueryLogicalProcessorRelationship.c)
 *     KiSetSystemAffinityThread @ 0x14030715C (KiSetSystemAffinityThread.c)
 *     KeQueryUserAffinityThread @ 0x14032974C (KeQueryUserAffinityThread.c)
 *     KeQueryAffinityProcess @ 0x14034C110 (KeQueryAffinityProcess.c)
 *     KeSynchronizeSecurityDomain @ 0x140356984 (KeSynchronizeSecurityDomain.c)
 *     PpmParkReportMask @ 0x14035AD60 (PpmParkReportMask.c)
 *     KeSynchronizeAddressPolicy @ 0x1403608FC (KeSynchronizeAddressPolicy.c)
 *     KeCopyAffinityEx2 @ 0x1403686B0 (KeCopyAffinityEx2.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036C118 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KiStartPrcbThread @ 0x140382A20 (KiStartPrcbThread.c)
 *     KxFlushMultipleTb @ 0x140390494 (KxFlushMultipleTb.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140393334 (PpmHeteroUpdateHgsConfiguration.c)
 *     KeQueryActiveProcessorAffinity2 @ 0x140393770 (KeQueryActiveProcessorAffinity2.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AADAC (KeSetUserGroupAffinityThread.c)
 *     KeQueryCpuPartitionAffinity @ 0x1403AE068 (KeQueryCpuPartitionAffinity.c)
 *     KeSetAffinityProcess @ 0x1403AEA68 (KeSetAffinityProcess.c)
 *     KxFlushEntireTb @ 0x1403B2AAC (KxFlushEntireTb.c)
 *     KiForwardTick @ 0x1403CB6E0 (KiForwardTick.c)
 *     HalpNmiReboot @ 0x14051BD50 (HalpNmiReboot.c)
 *     EmonAddProfileSource @ 0x14051C8F0 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x140528820 (Amd64AddProfileSource.c)
 *     KeBugCheck2 @ 0x140568290 (KeBugCheck2.c)
 *     KeCopyAffinityEx @ 0x14056F3C0 (KeCopyAffinityEx.c)
 *     KeQueryActiveProcessorAffinity @ 0x1405707A0 (KeQueryActiveProcessorAffinity.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140579BF8 (KeGetAffinitizedInterruptsInfo.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x14057A7BC (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14057CFC4 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoInitiateProcessorWake @ 0x140583D20 (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x140585850 (PpmInstallNewIdleDomains.c)
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     KeInitializeProcess @ 0x1406B66E8 (KeInitializeProcess.c)
 *     PspSetEffectiveJobLimits @ 0x1407D97F4 (PspSetEffectiveJobLimits.c)
 *     PpmRegisterPerfStates @ 0x14082E54C (PpmRegisterPerfStates.c)
 *     PnpReplacePartitionUnit @ 0x140964AF0 (PnpReplacePartitionUnit.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x1409732C8 (KiPrepareUpdateCoresHeteroMask.c)
 *     KeInitializeProfile @ 0x140974EA4 (KeInitializeProfile.c)
 *     KeInitializeProfileCallback @ 0x140974F60 (KeInitializeProfileCallback.c)
 *     KeDeleteCpuPartition @ 0x140975328 (KeDeleteCpuPartition.c)
 *     PpmInstallCoordinatedIdleStates @ 0x140981DD0 (PpmInstallCoordinatedIdleStates.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1409E462C (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpProfileCreate @ 0x140A03C78 (ExpProfileCreate.c)
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
