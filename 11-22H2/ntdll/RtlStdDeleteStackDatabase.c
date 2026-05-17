/*
 * XREFs of RtlStdDeleteStackDatabase @ 0x18010DED0
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x18010E2D0 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009F1B0 (ZwFreeVirtualMemory.c)
 */

__int64 RtlStdDeleteStackDatabase()
{
  return ZwFreeVirtualMemory();
}
