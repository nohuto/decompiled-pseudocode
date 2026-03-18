/*
 * XREFs of KeAndGroupAffinityEx @ 0x140254480
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     HalSendNMI @ 0x14020CEE0 (HalSendNMI.c)
 *     KiExitDispatcher @ 0x14023CD70 (KiExitDispatcher.c)
 *     KiIpiSendRequest @ 0x140254020 (KiIpiSendRequest.c)
 *     HalpInterruptSendIpi @ 0x140254D50 (HalpInterruptSendIpi.c)
 *     KeRemoveQueueEx @ 0x1402AA040 (KeRemoveQueueEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E70 (KiProcessDeferredReadyList.c)
 *     KeSetBasePriorityThread @ 0x1402B9DA0 (KeSetBasePriorityThread.c)
 *     KiCheckForThreadDispatch @ 0x1402BCA78 (KiCheckForThreadDispatch.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140305FB0 (KeQueryLogicalProcessorRelationship.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140317EC0 (KiAbThreadUnboostCpuPriority.c)
 *     PnpSetDeviceAffinityThread @ 0x140322840 (PnpSetDeviceAffinityThread.c)
 *     KiReadyOutSwappedThreads @ 0x14034D1F4 (KiReadyOutSwappedThreads.c)
 *     PpmEventDomainPerfStateChange @ 0x140352E2C (PpmEventDomainPerfStateChange.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036C118 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14036CB74 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x14039CB24 (KeSetCpuSetsProcess.c)
 *     KeCpuSetReportParkedProcessors @ 0x14039D6B4 (KeCpuSetReportParkedProcessors.c)
 *     KeUpdateThreadCpuSets @ 0x14039E0E8 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AADAC (KeSetUserGroupAffinityThread.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14056E040 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140575254 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140575B30 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577A0C (KiSetHeteroPolicyThread.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x140999930 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 */

__int64 __fastcall KeAndGroupAffinityEx(_WORD *a1, __int64 a2, char *a3)
{
  __int64 v4; // rax
  unsigned int v5; // ecx
  __int64 v6; // rax
  char v8; // [rsp+0h] [rbp-28h] BYREF

  if ( a3 )
  {
    *(_DWORD *)(a3 + 10) = 0;
    *((_WORD *)a3 + 7) = 0;
    *((_WORD *)a3 + 4) = *(_WORD *)(a2 + 8);
  }
  else
  {
    a3 = &v8;
  }
  v4 = *(unsigned __int16 *)(a2 + 8);
  v5 = 0;
  if ( *a1 <= (unsigned __int16)v4 )
    v6 = 0LL;
  else
    v6 = *(_QWORD *)a2 & *(_QWORD *)&a1[4 * v4 + 4];
  *(_QWORD *)a3 = v6;
  LOBYTE(v5) = v6 != 0;
  return v5;
}
