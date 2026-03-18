/*
 * XREFs of PopEtBucketsFree @ 0x1406EB7CC
 * Callers:
 *     PopEtProcessSnapshotCreate @ 0x140674BE4 (PopEtProcessSnapshotCreate.c)
 *     PopEtAggregateGet @ 0x1407A50BC (PopEtAggregateGet.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtBucketsFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x54456F50u);
}
