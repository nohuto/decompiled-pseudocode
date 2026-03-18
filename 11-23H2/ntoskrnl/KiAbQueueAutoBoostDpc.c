/*
 * XREFs of KiAbQueueAutoBoostDpc @ 0x140307D48
 * Callers:
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x1402078D4 (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     PsBoostThreadIoEx @ 0x14022FF50 (PsBoostThreadIoEx.c)
 *     KiDeferredReadySingleThread @ 0x14023A2D0 (KiDeferredReadySingleThread.c)
 *     KeYieldExecution @ 0x1402469F0 (KeYieldExecution.c)
 *     ExpApplyPriorityBoost @ 0x1402A8540 (ExpApplyPriorityBoost.c)
 *     KiSetPriorityThread @ 0x1402B05D0 (KiSetPriorityThread.c)
 *     KiComputeEffectivePriority @ 0x1402B2790 (KiComputeEffectivePriority.c)
 *     KeInsertPriQueue @ 0x1402B7F20 (KeInsertPriQueue.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402B8430 (KiSetBasePriorityAndClearDecrement.c)
 *     KiRemoveBoostThread @ 0x1402BB250 (KiRemoveBoostThread.c)
 *     KiAbProcessThreadPriorityModification @ 0x140307920 (KiAbProcessThreadPriorityModification.c)
 *     KiUpdateThreadPriority @ 0x140307B90 (KiUpdateThreadPriority.c)
 *     KiAbThreadBoostIoPriority @ 0x1403192F8 (KiAbThreadBoostIoPriority.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x14031B0CC (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiApplyForegroundBoostThread @ 0x1403504D8 (KiApplyForegroundBoostThread.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254790 (KiInsertQueueDpc.c)
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
