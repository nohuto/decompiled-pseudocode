/*
 * XREFs of ArbRollbackAllocation @ 0x14090BA30
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeRangeList @ 0x1408397E0 (RtlFreeRangeList.c)
 */

__int64 __fastcall ArbRollbackAllocation(__int64 a1)
{
  RtlFreeRangeList(*(_QWORD *)(a1 + 48));
  return 0LL;
}
