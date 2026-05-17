/*
 * XREFs of RtlpTraceDatabaseFree @ 0x180110C04
 * Callers:
 *     RtlTraceDatabaseDestroy @ 0x180110950 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A1270 (ZwFreeVirtualMemory.c)
 */

bool RtlpTraceDatabaseFree()
{
  return (int)ZwFreeVirtualMemory() >= 0;
}
