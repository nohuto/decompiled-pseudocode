/*
 * XREFs of PopEtBucketsAllocate @ 0x1407EA1F4
 * Callers:
 *     PopEtProcessSnapshotCreate @ 0x1407B1B08 (PopEtProcessSnapshotCreate.c)
 *     PopEtAggregateGet @ 0x1407B2768 (PopEtAggregateGet.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopEtBucketsAllocate(__int64 a1)
{
  return ExAllocatePool2(256LL, a1, 1413836624LL);
}
