/*
 * XREFs of PspSetJobPagePriorityLimitPreCallback @ 0x1409B2E70
 * Callers:
 *     <none>
 * Callees:
 *     PspUpdateJobEffectivePriorityLimits @ 0x1407D7814 (PspUpdateJobEffectivePriorityLimits.c)
 */

__int64 __fastcall PspSetJobPagePriorityLimitPreCallback(__int64 a1)
{
  PspUpdateJobEffectivePriorityLimits(a1, 2);
  return 0LL;
}
