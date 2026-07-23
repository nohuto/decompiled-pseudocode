/*
 * XREFs of KiSetSchedulerAssistPriority @ 0x140410704
 * Callers:
 *     KiUpdateThreadSchedulingProperties @ 0x140204EA0 (KiUpdateThreadSchedulingProperties.c)
 *     KiCheckForEffectivePriorityChange @ 0x1402064E4 (KiCheckForEffectivePriorityChange.c)
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KiCommitRescheduleContextEntry @ 0x140242F60 (KiCommitRescheduleContextEntry.c)
 *     KeYieldExecution @ 0x140246AC0 (KeYieldExecution.c)
 *     KiSetPriorityThread @ 0x1402B0860 (KiSetPriorityThread.c)
 *     KiComputeEffectivePriority @ 0x1402B2A20 (KiComputeEffectivePriority.c)
 *     KiRemoveBoostThread @ 0x1402BB4E0 (KiRemoveBoostThread.c)
 *     KiInitializeForegroundBoostThread @ 0x1402BE0E8 (KiInitializeForegroundBoostThread.c)
 *     KiUpdateThreadPriority @ 0x140307E20 (KiUpdateThreadPriority.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x14030889C (KiTransitionSchedulingGroupGeneration.c)
 *     KiApplyForegroundBoostThread @ 0x140350678 (KiApplyForegroundBoostThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSetSchedulerAssistPriority(volatile signed __int32 *a1, int a2, char a3)
{
  __int64 result; // rax
  char v5; // cl

  LODWORD(result) = *a1;
  if ( !a3 )
    LODWORD(result) = (unsigned int)result >> 8;
  result = (unsigned __int8)result;
  v5 = a3 == 0 ? 8 : 0;
  if ( a2 != (unsigned __int8)result )
  {
    if ( a2 <= (unsigned __int8)result )
      return (unsigned int)_InterlockedExchangeAdd(a1, -(((unsigned __int8)result - a2) << v5));
    else
      _InterlockedExchangeAdd(a1, (a2 - (unsigned __int8)result) << v5);
  }
  return result;
}
