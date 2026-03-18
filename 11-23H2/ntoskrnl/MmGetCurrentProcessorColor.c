/*
 * XREFs of MmGetCurrentProcessorColor @ 0x140328F80
 * Callers:
 *     MiAddSecureEntry @ 0x140745D84 (MiAddSecureEntry.c)
 * Callees:
 *     <none>
 */

USHORT MmGetCurrentProcessorColor(void)
{
  return KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
}
