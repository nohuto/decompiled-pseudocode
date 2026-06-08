/*
 * XREFs of RegisterHvPerfStatesCounters @ 0x1C0026180
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfStatesInternal @ 0x1C003295C (InitPerfStatesInternal.c)
 */

__int64 __fastcall RegisterHvPerfStatesCounters(__int64 a1)
{
  return InitPerfStatesInternal(a1, RegisterHvFeedbackCountersCallback);
}
