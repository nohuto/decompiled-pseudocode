/*
 * XREFs of KeGetCurrentNode @ 0x1403D4F3C
 * Callers:
 *     ExpPartitionCreatePool @ 0x140851DAC (ExpPartitionCreatePool.c)
 * Callees:
 *     <none>
 */

__int64 KeGetCurrentNode()
{
  return KeNodeBlock[KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]];
}
