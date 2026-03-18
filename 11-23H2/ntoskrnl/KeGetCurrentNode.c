/*
 * XREFs of KeGetCurrentNode @ 0x1403A5514
 * Callers:
 *     ExpPartitionCreatePool @ 0x1408494F8 (ExpPartitionCreatePool.c)
 * Callees:
 *     <none>
 */

__int64 KeGetCurrentNode()
{
  return KeNodeBlock[KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]];
}
