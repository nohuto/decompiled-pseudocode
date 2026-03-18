/*
 * XREFs of PopEtBucketsAllocate @ 0x1406EB300
 * Callers:
 *     PopEtProcessSnapshotCreate @ 0x140674BE4 (PopEtProcessSnapshotCreate.c)
 *     PopEtAggregateGet @ 0x1407A50BC (PopEtAggregateGet.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopEtBucketsAllocate(__int64 a1)
{
  return ExAllocatePool2(256LL, a1, 1413836624LL);
}
