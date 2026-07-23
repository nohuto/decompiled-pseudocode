/*
 * XREFs of ArbRollbackAllocation @ 0x140936A90
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeRangeList @ 0x1408158D0 (RtlFreeRangeList.c)
 */

__int64 __fastcall ArbRollbackAllocation(__int64 a1)
{
  RtlFreeRangeList(*(_QWORD *)(a1 + 48));
  return 0LL;
}
