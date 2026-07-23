/*
 * XREFs of KiAbPropagateBoosts @ 0x1402BC160
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     KiExitDispatcher @ 0x14023CE40 (KiExitDispatcher.c)
 *     KeYieldExecution @ 0x140246AC0 (KeYieldExecution.c)
 *     KeRemoveQueueEx @ 0x1402AA2D0 (KeRemoveQueueEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B1100 (KiProcessDeferredReadyList.c)
 *     KeSetBasePriorityThread @ 0x1402BA030 (KeSetBasePriorityThread.c)
 *     KiAbDeferredProcessingWorker @ 0x1402BBD80 (KiAbDeferredProcessingWorker.c)
 *     KiAbProcessContextSwitch @ 0x1402BC0A8 (KiAbProcessContextSwitch.c)
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
 *     KiAbProcessThreadLocks @ 0x1402BC5E0 (KiAbProcessThreadLocks.c)
 */

__int64 __fastcall KiAbPropagateBoosts(__int64 **a1, __int64 a2, __int64 a3)
{
  __int64 *i; // r9
  __int64 result; // rax
  volatile signed __int16 *v8; // rdi
  signed __int32 v9[8]; // [rsp+0h] [rbp-48h] BYREF

  for ( i = *a1; i; i = *a1 )
  {
    result = *i;
    v8 = (volatile signed __int16 *)(i - 101);
    *a1 = (__int64 *)*i;
    *i = 1LL;
    _InterlockedOr(v9, 0);
    if ( *((_BYTE *)i - 15) )
      result = KiAbProcessThreadLocks((_DWORD)v8, 0, 1, 0, a3, (__int64)a1, a2);
    _InterlockedDecrement16(v8 + 434);
  }
  return result;
}
