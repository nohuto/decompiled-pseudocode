/*
 * XREFs of RtlStdDeleteStackDatabase @ 0x18010F380
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x18010F780 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A1270 (ZwFreeVirtualMemory.c)
 */

__int64 RtlStdDeleteStackDatabase()
{
  return ZwFreeVirtualMemory();
}
