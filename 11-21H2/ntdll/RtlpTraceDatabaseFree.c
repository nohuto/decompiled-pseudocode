/*
 * XREFs of RtlpTraceDatabaseFree @ 0x18010F5AC
 * Callers:
 *     RtlTraceDatabaseDestroy @ 0x18010F2E0 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A4430 (ZwFreeVirtualMemory.c)
 */

bool RtlpTraceDatabaseFree()
{
  return (int)ZwFreeVirtualMemory() >= 0;
}
