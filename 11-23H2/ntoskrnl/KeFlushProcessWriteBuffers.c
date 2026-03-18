/*
 * XREFs of KeFlushProcessWriteBuffers @ 0x1402C003C
 * Callers:
 *     KeFlushTb @ 0x140279970 (KeFlushTb.c)
 *     NtFlushProcessWriteBuffers @ 0x1402C0020 (NtFlushProcessWriteBuffers.c)
 *     KeFlushSingleTb @ 0x1402EB0C4 (KeFlushSingleTb.c)
 *     KeQueryTotalCycleTimeThread @ 0x140329DB0 (KeQueryTotalCycleTimeThread.c)
 *     PoFxSendSystemLatencyUpdate @ 0x14032C330 (PoFxSendSystemLatencyUpdate.c)
 *     KeSetPriorityAndQuantumProcess @ 0x140350190 (KeSetPriorityAndQuantumProcess.c)
 *     KeFlushMultipleRangeTb @ 0x1403903B4 (KeFlushMultipleRangeTb.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140584004 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140585B8C (PpmSetExitLatencySamplingPercentage.c)
 *     ExpQuerySystemInformation @ 0x140726850 (ExpQuerySystemInformation.c)
 *     ExpGetProcessInformation @ 0x140742DC0 (ExpGetProcessInformation.c)
 *     PspTerminateAllThreads @ 0x14076D010 (PspTerminateAllThreads.c)
 *     PsQueryTotalCycleTimeProcess @ 0x14079F610 (PsQueryTotalCycleTimeProcess.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x1409AE908 (PspEnableProcessOptionalXStateFeatures.c)
 *     ExProcessCounterSetCallback @ 0x1409F5DD0 (ExProcessCounterSetCallback.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x1402545C0 (KiCopyAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1402C01C0 (KeCountSetBitsAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402C02B0 (KeRemoveProcessorAffinityEx.c)
 *     KiIpiStallOnPacketTargetsPrcb @ 0x1402C02F0 (KiIpiStallOnPacketTargetsPrcb.c)
 *     KiIpiSendPacket @ 0x1402C0330 (KiIpiSendPacket.c)
 *     memset @ 0x140435A00 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeFlushProcessWriteBuffers(char a1)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r14
  int v3; // r15d
  _KSTATIC_AFFINITY_BLOCK *p_StaticAffinity; // rsi
  _KPROCESS *Process; // rbx
  int v6; // eax
  __int64 v7; // rcx
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rdx
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 12 )
      LODWORD(v10) = 4096;
    else
      v10 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
    SchedulerAssist[5] |= v10;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  p_StaticAffinity = &CurrentPrcb->StaticAffinity;
  if ( a1 )
  {
    v3 = 1;
    v6 = KeNumberProcessors_0 - 1;
    LODWORD(p_StaticAffinity) = 0;
  }
  else
  {
    Process = CurrentPrcb->CurrentThread->ApcState.Process;
    CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Reserved = 0;
    *(_DWORD *)&p_StaticAffinity->KeFlushTbAffinity.Count = 2097153;
    memset(
      &CurrentPrcb->StaticAffinity.KeSyncContextAffinity.8,
      0,
      sizeof(CurrentPrcb->StaticAffinity.KeSyncContextAffinity.8));
    KiCopyAffinityEx(
      (__int64)&CurrentPrcb->StaticAffinity,
      CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Size,
      &Process->ActiveProcessors.Count);
    KeRemoveProcessorAffinityEx(&CurrentPrcb->StaticAffinity, CurrentPrcb->Number);
    v6 = KeCountSetBitsAffinityEx(&CurrentPrcb->StaticAffinity);
  }
  if ( v6 )
  {
    KiIpiSendPacket(v3, (_DWORD)p_StaticAffinity, (unsigned int)xHalTimerWatchdogStop, 0, 0LL, 0LL);
    KiIpiStallOnPacketTargetsPrcb(v7, CurrentPrcb);
  }
  if ( KiIrqlFlags )
  {
    v11 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
    {
      v12 = KeGetCurrentPrcb();
      v13 = v12->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v15 = (v14 & v13[5]) == 0;
      v13[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick(v12);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
