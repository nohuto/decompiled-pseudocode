/*
 * XREFs of ZwQueryPerformanceCounter @ 0x14041ACC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryPerformanceCounter(PLARGE_INTEGER PerformanceCounter, PLARGE_INTEGER PerformanceFrequency)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PerformanceCounter);
}
