/*
 * XREFs of KiGetThreadEffectiveRankNonZero @ 0x1402103E0
 * Callers:
 *     KiCheckForEffectivePriorityChange @ 0x140208284 (KiCheckForEffectivePriorityChange.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14020E464 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiDirectSwitchThread @ 0x14020F360 (KiDirectSwitchThread.c)
 *     KiChooseLowestRankedThread @ 0x140210224 (KiChooseLowestRankedThread.c)
 *     KiIsThreadRankNonZero @ 0x140266BBC (KiIsThreadRankNonZero.c)
 *     KiQuantumEnd @ 0x14028FFD0 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140290B9C (KiGroupSchedulingQuantumEnd.c)
 *     KiUpdateThreadPriority @ 0x140291010 (KiUpdateThreadPriority.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140291380 (KiGroupSchedulingGenerationEnd.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140291710 (KiTransitionSchedulingGroupGeneration.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x140291A94 (KiMoveScbThreadsToNewReadylist.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140291C10 (KiDeferGroupSchedulingPreemption.c)
 *     KeYieldExecution @ 0x14029B310 (KeYieldExecution.c)
 *     KiExecuteAllDpcs @ 0x1402A9790 (KiExecuteAllDpcs.c)
 *     KiSwapThread @ 0x1402B3140 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402B4130 (KiSearchForNewThreadOnProcessor.c)
 *     KiSelectReadyThread @ 0x1402B4AE0 (KiSelectReadyThread.c)
 *     KiSelectReadyThreadEx @ 0x1402B7AE0 (KiSelectReadyThreadEx.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiSchedulerApc @ 0x1402EFA40 (KiSchedulerApc.c)
 *     KeAccumulateTicks @ 0x1403078A0 (KeAccumulateTicks.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1403424A0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiSearchForNewThread @ 0x140343DC0 (KiSearchForNewThread.c)
 *     KiSetPriorityThread @ 0x140344A30 (KiSetPriorityThread.c)
 *     KiRemoveBoostThread @ 0x14035B110 (KiRemoveBoostThread.c)
 *     KiSelectNextThread @ 0x14035C3FC (KiSelectNextThread.c)
 *     KiApplyForegroundBoostThread @ 0x14035CAD8 (KiApplyForegroundBoostThread.c)
 *     KeUpdateThreadSchedulingProperties @ 0x14035F144 (KeUpdateThreadSchedulingProperties.c)
 *     KiAddThreadToReadyQueue @ 0x1405737B4 (KiAddThreadToReadyQueue.c)
 *     KeTransitionProcessorParkState @ 0x14057C888 (KeTransitionProcessorParkState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetThreadEffectiveRankNonZero(__int64 a1, __int64 a2, __int64 a3, char a4, bool *a5)
{
  __int64 v5; // r8
  bool v6; // r11
  __int64 result; // rax
  int v8; // ebx

  v5 = a2;
  v6 = a5 && *(_QWORD *)(a2 + 120);
  result = 0LL;
  v8 = 0;
  if ( *(char *)(a1 + 195) < 16
    && (*(_DWORD *)(a1 + 120) & 0x200) == 0
    && (!a4 || !*(_DWORD *)(a1 + 484) && *(_BYTE *)(a1 + 390) != 1) )
  {
    do
    {
      if ( (*(_BYTE *)(a2 + 112) & 2) != 0 )
      {
        result = 0xFFFFFFFFLL;
        goto LABEL_11;
      }
      a2 = *(_QWORD *)(a2 + 408);
    }
    while ( a2 );
    do
    {
      result = (unsigned int)(*(_DWORD *)(v5 + 116) + result);
      if ( v6 )
      {
        v8 += **(_DWORD **)(v5 + 120);
      }
      else if ( (_DWORD)result )
      {
        break;
      }
      v5 = *(_QWORD *)(v5 + 408);
    }
    while ( v5 );
  }
LABEL_11:
  if ( a5 )
    *a5 = v8 != 0;
  return result;
}
