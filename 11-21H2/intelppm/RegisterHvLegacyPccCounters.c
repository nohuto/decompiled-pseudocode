/*
 * XREFs of RegisterHvLegacyPccCounters @ 0x1C0038FF0
 * Callers:
 *     <none>
 * Callees:
 *     InitLegacyPccInternal @ 0x1C000B2BC (InitLegacyPccInternal.c)
 */

__int64 __fastcall RegisterHvLegacyPccCounters(_QWORD *a1)
{
  return InitLegacyPccInternal(a1, RegisterHvFeedbackCountersCallback);
}
