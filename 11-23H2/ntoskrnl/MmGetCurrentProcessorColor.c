/*
 * XREFs of MmGetCurrentProcessorColor @ 0x140329210
 * Callers:
 *     MiAddSecureEntry @ 0x140745F74 (MiAddSecureEntry.c)
 * Callees:
 *     <none>
 */

USHORT MmGetCurrentProcessorColor(void)
{
  return KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
}
