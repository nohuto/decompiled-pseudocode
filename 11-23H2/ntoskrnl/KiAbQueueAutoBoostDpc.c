/*
 * XREFs of KiAbQueueAutoBoostDpc @ 0x140307FD8
 * Callers:
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x1402078D4 (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     PsBoostThreadIoEx @ 0x140230040 (PsBoostThreadIoEx.c)
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KeYieldExecution @ 0x140246AC0 (KeYieldExecution.c)
 *     ExpApplyPriorityBoost @ 0x1402A87D0 (ExpApplyPriorityBoost.c)
 *     KiSetPriorityThread @ 0x1402B0860 (KiSetPriorityThread.c)
 *     KiComputeEffectivePriority @ 0x1402B2A20 (KiComputeEffectivePriority.c)
 *     KeInsertPriQueue @ 0x1402B81B0 (KeInsertPriQueue.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402B86C0 (KiSetBasePriorityAndClearDecrement.c)
 *     KiRemoveBoostThread @ 0x1402BB4E0 (KiRemoveBoostThread.c)
 *     KiAbProcessThreadPriorityModification @ 0x140307BB0 (KiAbProcessThreadPriorityModification.c)
 *     KiUpdateThreadPriority @ 0x140307E20 (KiUpdateThreadPriority.c)
 *     KiAbThreadBoostIoPriority @ 0x140319588 (KiAbThreadBoostIoPriority.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x14031B35C (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiApplyForegroundBoostThread @ 0x140350678 (KiApplyForegroundBoostThread.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiAbQueueAutoBoostDpc(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_QWORD *)(a1 + 35744) )
  {
    result = KiInsertQueueDpc(a1 + 35712, a1, 0LL, 0LL, 0);
    *(_QWORD *)(a1 + 35744) = 1LL;
  }
  return result;
}
