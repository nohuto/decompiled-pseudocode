/*
 * XREFs of MmGetCurrentProcessorColor @ 0x140328DA0
 * Callers:
 *     MiAddSecureEntry @ 0x140746294 (MiAddSecureEntry.c)
 * Callees:
 *     <none>
 */

USHORT MmGetCurrentProcessorColor(void)
{
  return KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
}
