/*
 * XREFs of KiAndAffinityEx @ 0x140252500
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeIsSubsetAffinityEx @ 0x1402031E0 (KeIsSubsetAffinityEx.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     HalSendNMI @ 0x14020CEE0 (HalSendNMI.c)
 *     KiExitDispatcher @ 0x14023CE40 (KiExitDispatcher.c)
 *     HalpInterruptSendIpi @ 0x140254E10 (HalpInterruptSendIpi.c)
 *     PpmParkSteerInterrupts @ 0x140256AE0 (PpmParkSteerInterrupts.c)
 *     KiGetDeepIdleProcessors @ 0x14028FD90 (KiGetDeepIdleProcessors.c)
 *     KeRemoveQueueEx @ 0x1402AA2D0 (KeRemoveQueueEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B1100 (KiProcessDeferredReadyList.c)
 *     KeSetBasePriorityThread @ 0x1402BA030 (KeSetBasePriorityThread.c)
 *     KiCheckForThreadDispatch @ 0x1402BCD08 (KiCheckForThreadDispatch.c)
 *     KiComputeThreadAffinity @ 0x1402BFAC4 (KiComputeThreadAffinity.c)
 *     KiComputeCpuSetAffinity @ 0x1402C06D4 (KiComputeCpuSetAffinity.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140306240 (KeQueryLogicalProcessorRelationship.c)
 *     KiTryPopulateLogicalProcessorInformation @ 0x140308EF0 (KiTryPopulateLogicalProcessorInformation.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140318150 (KiAbThreadUnboostCpuPriority.c)
 *     KiReadyOutSwappedThreads @ 0x14034D394 (KiReadyOutSwappedThreads.c)
 *     PpmParkReportParkedCores @ 0x140350F60 (PpmParkReportParkedCores.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036C2B8 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14036CD14 (KeSetSystemMultipleGroupAffinityThread.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140393514 (PpmHeteroUpdateHgsConfiguration.c)
 *     KeSetCpuSetsProcess @ 0x14039CD04 (KeSetCpuSetsProcess.c)
 *     KeCpuSetReportParkedProcessors @ 0x14039D894 (KeCpuSetReportParkedProcessors.c)
 *     KeUpdateThreadCpuSets @ 0x14039E2C8 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AAF8C (KeSetUserGroupAffinityThread.c)
 *     KiForwardTick @ 0x1403CB8C0 (KiForwardTick.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14056E580 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeAndAffinityEx @ 0x14056F870 (KeAndAffinityEx.c)
 *     KeAndAffinityEx2 @ 0x14056F890 (KeAndAffinityEx2.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140575794 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140576070 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577EFC (KiSetHeteroPolicyThread.c)
 *     PspSetEffectiveJobLimits @ 0x1407D9AC4 (PspSetEffectiveJobLimits.c)
 *     KeInitializeProfile @ 0x1409750A4 (KeInitializeProfile.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KiAndAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2, _BYTE *a3, unsigned __int16 a4)
{
  _BYTE *v8; // r9
  unsigned __int16 v9; // cx
  unsigned int v10; // r10d
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // cx
  __int64 v13; // r8
  bool v14; // zf
  __int64 v15; // rdx
  _BYTE v17[272]; // [rsp+20h] [rbp-128h] BYREF

  memset(v17, 0, 0x108uLL);
  v8 = v17;
  v9 = 32;
  if ( a3 )
  {
    v8 = a3;
    v9 = a4;
  }
  v10 = 0;
  *((_WORD *)v8 + 1) = v9;
  v11 = *a1;
  if ( *a1 >= *a2 )
    v11 = *a2;
  *(_WORD *)v8 = v11;
  if ( v11 > v9 )
  {
    *(_WORD *)v8 = v9;
    v11 = v9;
  }
  v12 = 0;
  if ( v11 )
  {
    do
    {
      v13 = 4LL * v12;
      v14 = (*(_QWORD *)&a2[v13 + 4] & *(_QWORD *)&a1[v13 + 4]) == 0LL;
      *(_QWORD *)&v8[v13 * 2 + 8] = *(_QWORD *)&a2[v13 + 4] & *(_QWORD *)&a1[v13 + 4];
      if ( !v14 )
        v10 = 1;
      ++v12;
    }
    while ( v12 < *(_WORD *)v8 );
  }
  if ( v8 != v17 )
  {
    for ( *((_DWORD *)v8 + 1) = 0; v12 < *((_WORD *)v8 + 1); *(_QWORD *)&v8[8 * v15 + 8] = 0LL )
      v15 = v12++;
  }
  return v10;
}
