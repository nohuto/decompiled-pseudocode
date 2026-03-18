/*
 * XREFs of KiAbPropagateBoosts @ 0x1402BBEA0
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     KiExitDispatcher @ 0x14023CD50 (KiExitDispatcher.c)
 *     KeYieldExecution @ 0x1402469D0 (KeYieldExecution.c)
 *     KeRemoveQueueEx @ 0x1402A9F20 (KeRemoveQueueEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E40 (KiProcessDeferredReadyList.c)
 *     KeSetBasePriorityThread @ 0x1402B9D70 (KeSetBasePriorityThread.c)
 *     KiAbDeferredProcessingWorker @ 0x1402BBAC0 (KiAbDeferredProcessingWorker.c)
 *     KiAbProcessContextSwitch @ 0x1402BBDE8 (KiAbProcessContextSwitch.c)
 *     KiCheckForThreadDispatch @ 0x1402BCA48 (KiCheckForThreadDispatch.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140317CE0 (KiAbThreadUnboostCpuPriority.c)
 *     KiReadyOutSwappedThreads @ 0x14034CBF4 (KiReadyOutSwappedThreads.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036BAC8 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14036C524 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x14039C834 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x14039DDF8 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AA6BC (KeSetUserGroupAffinityThread.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1405752F4 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140575BD0 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577A9C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiAbProcessThreadLocks @ 0x1402BC320 (KiAbProcessThreadLocks.c)
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
