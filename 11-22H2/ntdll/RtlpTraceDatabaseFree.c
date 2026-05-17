/*
 * XREFs of RtlpTraceDatabaseFree @ 0x18010F754
 * Callers:
 *     RtlTraceDatabaseDestroy @ 0x18010F4A0 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009F1B0 (ZwFreeVirtualMemory.c)
 */

bool RtlpTraceDatabaseFree()
{
  return (int)ZwFreeVirtualMemory() >= 0;
}
