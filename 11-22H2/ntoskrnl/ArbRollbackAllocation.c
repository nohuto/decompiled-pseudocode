/*
 * XREFs of ArbRollbackAllocation @ 0x140936940
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeRangeList @ 0x140817B80 (RtlFreeRangeList.c)
 */

__int64 __fastcall ArbRollbackAllocation(__int64 a1)
{
  RtlFreeRangeList(*(_QWORD *)(a1 + 48));
  return 0LL;
}
