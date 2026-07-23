/*
 * XREFs of KeAndGroupAffinityEx @ 0x140254540
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     HalSendNMI @ 0x14020CEE0 (HalSendNMI.c)
 *     KiExitDispatcher @ 0x14023CE40 (KiExitDispatcher.c)
 *     KiIpiSendRequest @ 0x1402540E0 (KiIpiSendRequest.c)
 *     HalpInterruptSendIpi @ 0x140254E10 (HalpInterruptSendIpi.c)
 *     KeRemoveQueueEx @ 0x1402AA2D0 (KeRemoveQueueEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B1100 (KiProcessDeferredReadyList.c)
 *     KeSetBasePriorityThread @ 0x1402BA030 (KeSetBasePriorityThread.c)
 *     KiCheckForThreadDispatch @ 0x1402BCD08 (KiCheckForThreadDispatch.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140306240 (KeQueryLogicalProcessorRelationship.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140318150 (KiAbThreadUnboostCpuPriority.c)
 *     PnpSetDeviceAffinityThread @ 0x140322AD0 (PnpSetDeviceAffinityThread.c)
 *     KiReadyOutSwappedThreads @ 0x14034D394 (KiReadyOutSwappedThreads.c)
 *     PpmEventDomainPerfStateChange @ 0x140352FCC (PpmEventDomainPerfStateChange.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036C2B8 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14036CD14 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x14039CD04 (KeSetCpuSetsProcess.c)
 *     KeCpuSetReportParkedProcessors @ 0x14039D894 (KeCpuSetReportParkedProcessors.c)
 *     KeUpdateThreadCpuSets @ 0x14039E2C8 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AAF8C (KeSetUserGroupAffinityThread.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14056E580 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140575794 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140576070 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577EFC (KiSetHeteroPolicyThread.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x140999B30 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
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
