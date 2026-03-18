/*
 * XREFs of KiAbPropagateBoosts @ 0x1402BBED0
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     KiExitDispatcher @ 0x14023CD70 (KiExitDispatcher.c)
 *     KeYieldExecution @ 0x1402469F0 (KeYieldExecution.c)
 *     KeRemoveQueueEx @ 0x1402AA040 (KeRemoveQueueEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E70 (KiProcessDeferredReadyList.c)
 *     KeSetBasePriorityThread @ 0x1402B9DA0 (KeSetBasePriorityThread.c)
 *     KiAbDeferredProcessingWorker @ 0x1402BBAF0 (KiAbDeferredProcessingWorker.c)
 *     KiAbProcessContextSwitch @ 0x1402BBE18 (KiAbProcessContextSwitch.c)
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
 *     KiAbProcessThreadLocks @ 0x1402BC350 (KiAbProcessThreadLocks.c)
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
