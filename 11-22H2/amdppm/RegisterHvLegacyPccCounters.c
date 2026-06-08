/*
 * XREFs of RegisterHvLegacyPccCounters @ 0x1C0025410
 * Callers:
 *     <none>
 * Callees:
 *     InitLegacyPccInternal @ 0x1C00088F0 (InitLegacyPccInternal.c)
 */

__int64 __fastcall RegisterHvLegacyPccCounters(_QWORD *a1)
{
  return InitLegacyPccInternal(a1, RegisterHvFeedbackCountersCallback);
}
