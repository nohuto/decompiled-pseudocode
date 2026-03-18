/*
 * XREFs of RtlFreeRangeList_0 @ 0x1C002F18F
 * Callers:
 *     ArbBootAllocation @ 0x1C009BD00 (ArbBootAllocation.c)
 *     ArbTestAllocation @ 0x1C009C590 (ArbTestAllocation.c)
 *     ArbCommitAllocation @ 0x1C00B76F0 (ArbCommitAllocation.c)
 *     ArbDeleteArbiterInstance @ 0x1C00B7724 (ArbDeleteArbiterInstance.c)
 *     ArbInitializeRangeList @ 0x1C00B7970 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x1C00B7D10 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1C00B80F0 (ArbRetestAllocation.c)
 *     ArbRollbackAllocation @ 0x1C00B82E0 (ArbRollbackAllocation.c)
 *     ArbStartArbiter @ 0x1C00B8550 (ArbStartArbiter.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlFreeRangeList_0(PRTL_RANGE_LIST RangeList)
{
  RtlFreeRangeList(RangeList);
}
