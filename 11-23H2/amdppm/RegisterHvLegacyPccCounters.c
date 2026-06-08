/*
 * XREFs of RegisterHvLegacyPccCounters @ 0x1C0025CC0
 * Callers:
 *     <none>
 * Callees:
 *     InitLegacyPccInternal @ 0x1C0008DE0 (InitLegacyPccInternal.c)
 */

__int64 __fastcall RegisterHvLegacyPccCounters(_QWORD *a1)
{
  return InitLegacyPccInternal(a1, RegisterHvFeedbackCountersCallback);
}
