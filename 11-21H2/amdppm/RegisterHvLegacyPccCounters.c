/*
 * XREFs of RegisterHvLegacyPccCounters @ 0x1C0024830
 * Callers:
 *     <none>
 * Callees:
 *     InitLegacyPccInternal @ 0x1C00082C8 (InitLegacyPccInternal.c)
 */

__int64 __fastcall RegisterHvLegacyPccCounters(_QWORD *a1)
{
  return InitLegacyPccInternal(a1, RegisterHvFeedbackCountersCallback);
}
