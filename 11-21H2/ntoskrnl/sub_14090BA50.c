/*
 * XREFs of sub_14090BA50 @ 0x14090BA50
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     RtlFreeRangeList @ 0x1408397E0 (RtlFreeRangeList.c)
 */

__int64 __fastcall sub_14090BA50(__int64 a1, __int64 a2)
{
  RtlFreeRangeList(*(_QWORD *)(a1 + 40));
  return sub_14042A5E0(a1, *(unsigned int *)(a2 + 16));
}
