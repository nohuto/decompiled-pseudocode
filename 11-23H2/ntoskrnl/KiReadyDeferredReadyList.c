/*
 * XREFs of KiReadyDeferredReadyList @ 0x140249D60
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     KiExitDispatcher @ 0x14023CE40 (KiExitDispatcher.c)
 *     KiSwapThread @ 0x14023F4C0 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x140240420 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240D60 (KiSearchForNewThreadOnProcessor.c)
 *     KeYieldExecution @ 0x140246AC0 (KeYieldExecution.c)
 *     KiDispatchInterrupt @ 0x140249600 (KiDispatchInterrupt.c)
 *     KeRemoveQueueEx @ 0x1402AA2D0 (KeRemoveQueueEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B1100 (KiProcessDeferredReadyList.c)
 *     KeSetBasePriorityThread @ 0x1402BA030 (KeSetBasePriorityThread.c)
 *     KiRemoveBoostThread @ 0x1402BB4E0 (KiRemoveBoostThread.c)
 *     KiAbProcessContextSwitch @ 0x1402BC0A8 (KiAbProcessContextSwitch.c)
 *     KiAbApplyWakeupBoost @ 0x1402BCB30 (KiAbApplyWakeupBoost.c)
 *     KiCheckForThreadDispatch @ 0x1402BCD08 (KiCheckForThreadDispatch.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140318150 (KiAbThreadUnboostCpuPriority.c)
 *     KiReadyOutSwappedThreads @ 0x14034D394 (KiReadyOutSwappedThreads.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036C2B8 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14036CD14 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x14039CD04 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x14039E2C8 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AAF8C (KeSetUserGroupAffinityThread.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140575794 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140576070 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577EFC (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     HalRequestIpiSpecifyVector @ 0x140254750 (HalRequestIpiSpecifyVector.c)
 *     KiSendSoftwareInterrupt @ 0x140318BD4 (KiSendSoftwareInterrupt.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KiReadyDeferredReadyList(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  char v3; // r14
  unsigned __int8 *v6; // rsi
  __int64 result; // rax
  _QWORD *v8; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v10; // r8

  v2 = (_QWORD *)*a2;
  v3 = 0;
  if ( *a2 )
  {
    *a2 = *v2;
    do
    {
      KiDeferredReadySingleThread(a1, (unsigned __int64)(v2 - 27), (__int64)a2);
      v2 = (_QWORD *)*a2;
      ++v3;
      if ( *a2 )
        *a2 = *v2;
      v6 = (unsigned __int8 *)(a1 + 12760);
      if ( (v3 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(a1 + 12760);
    }
    while ( v2 );
  }
  else
  {
    v6 = (unsigned __int8 *)(a1 + 12760);
  }
  result = v6[1];
  if ( (_BYTE)result )
  {
    if ( (_BYTE)result == 1 )
    {
      result = KiSendSoftwareInterrupt(*((unsigned int *)v6 + 1), *v6);
      v8 = v6 + 8;
    }
    else
    {
      v8 = v6 + 8;
      CurrentPrcb = KeGetCurrentPrcb();
      v10 = 47LL;
      if ( *v6 == 1 )
        v10 = 31LL;
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      result = HalRequestIpiSpecifyVector(0LL, v6 + 8, v10);
    }
    if ( v6[1] == 2 )
    {
      *v8 = 2097153LL;
      result = (__int64)memset(v8 + 1, 0, 0x100uLL);
    }
    v6[1] = 0;
    *((_DWORD *)v6 + 1) = 0xFFFF;
  }
  return result;
}
