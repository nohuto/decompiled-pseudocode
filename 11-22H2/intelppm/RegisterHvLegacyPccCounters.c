/*
 * XREFs of RegisterHvLegacyPccCounters @ 0x1C003A2F0
 * Callers:
 *     <none>
 * Callees:
 *     InitLegacyPccInternal @ 0x1C000C7D0 (InitLegacyPccInternal.c)
 */

__int64 __fastcall RegisterHvLegacyPccCounters(_QWORD *a1)
{
  return InitLegacyPccInternal(a1, RegisterHvFeedbackCountersCallback);
}
