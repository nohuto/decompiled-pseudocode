/*
 * XREFs of RegisterHvPerfStatesCounters @ 0x1C003A780
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfStatesInternal @ 0x1C003E964 (InitPerfStatesInternal.c)
 */

__int64 __fastcall RegisterHvPerfStatesCounters(__int64 a1)
{
  return InitPerfStatesInternal(a1, RegisterHvFeedbackCountersCallback);
}
