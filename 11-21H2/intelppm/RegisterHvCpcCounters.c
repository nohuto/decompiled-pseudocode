/*
 * XREFs of RegisterHvCpcCounters @ 0x1C0038AD0
 * Callers:
 *     <none>
 * Callees:
 *     InitCpcStatesInternal @ 0x1C0027340 (InitCpcStatesInternal.c)
 */

__int64 __fastcall RegisterHvCpcCounters(__int64 a1)
{
  return InitCpcStatesInternal(a1, (__int64 (__fastcall *)(__int64))RegisterHvFeedbackCountersCallback);
}
