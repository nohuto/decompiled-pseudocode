/*
 * XREFs of KiReadyDeferredReadyList @ 0x140249C90
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     KiExitDispatcher @ 0x14023CD70 (KiExitDispatcher.c)
 *     KiSwapThread @ 0x14023F3F0 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x140240350 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240C90 (KiSearchForNewThreadOnProcessor.c)
 *     KeYieldExecution @ 0x1402469F0 (KeYieldExecution.c)
 *     KiDispatchInterrupt @ 0x140249530 (KiDispatchInterrupt.c)
 *     KeRemoveQueueEx @ 0x1402AA040 (KeRemoveQueueEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E70 (KiProcessDeferredReadyList.c)
 *     KeSetBasePriorityThread @ 0x1402B9DA0 (KeSetBasePriorityThread.c)
 *     KiRemoveBoostThread @ 0x1402BB250 (KiRemoveBoostThread.c)
 *     KiAbProcessContextSwitch @ 0x1402BBE18 (KiAbProcessContextSwitch.c)
 *     KiAbApplyWakeupBoost @ 0x1402BC8A0 (KiAbApplyWakeupBoost.c)
 *     KiCheckForThreadDispatch @ 0x1402BCA78 (KiCheckForThreadDispatch.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140317EC0 (KiAbThreadUnboostCpuPriority.c)
 *     KiReadyOutSwappedThreads @ 0x14034D1F4 (KiReadyOutSwappedThreads.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036C118 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14036CB74 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x14039CB24 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x14039E0E8 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AADAC (KeSetUserGroupAffinityThread.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140575254 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140575B30 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577A0C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiDeferredReadySingleThread @ 0x14023A2D0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252760 (KiFlushSoftwareInterruptBatch.c)
 *     HalRequestIpiSpecifyVector @ 0x140254690 (HalRequestIpiSpecifyVector.c)
 *     KiSendSoftwareInterrupt @ 0x140318944 (KiSendSoftwareInterrupt.c)
 *     memset @ 0x140435A00 (memset.c)
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
