/*
 * XREFs of RtlStdDeleteStackDatabase @ 0x18010DD50
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x18010E150 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A4430 (ZwFreeVirtualMemory.c)
 */

__int64 RtlStdDeleteStackDatabase()
{
  return ZwFreeVirtualMemory();
}
