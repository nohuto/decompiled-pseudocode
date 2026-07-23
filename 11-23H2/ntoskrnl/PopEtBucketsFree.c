/*
 * XREFs of PopEtBucketsFree @ 0x1407EAB20
 * Callers:
 *     PopEtProcessSnapshotCreate @ 0x1407B1B08 (PopEtProcessSnapshotCreate.c)
 *     PopEtAggregateGet @ 0x1407B2768 (PopEtAggregateGet.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtBucketsFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x54456F50u);
}
