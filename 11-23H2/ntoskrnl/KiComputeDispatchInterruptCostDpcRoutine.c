/*
 * XREFs of KiComputeDispatchInterruptCostDpcRoutine @ 0x1403B0500
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 */

LONG __fastcall KiComputeDispatchInterruptCostDpcRoutine(__int64 a1, __int64 a2)
{
  *(LARGE_INTEGER *)(a2 + 72) = KeQueryPerformanceCounter(0LL);
  return KeSetEvent((PRKEVENT)(a2 + 80), 0, 0);
}
