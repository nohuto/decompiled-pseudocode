/*
 * XREFs of KiComputeDispatchInterruptCostDpcRoutine @ 0x1403B0320
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     KeQueryPerformanceCounter @ 0x1402C3270 (KeQueryPerformanceCounter.c)
 */

LONG __fastcall KiComputeDispatchInterruptCostDpcRoutine(__int64 a1, __int64 a2)
{
  *(LARGE_INTEGER *)(a2 + 72) = KeQueryPerformanceCounter(0LL);
  return KeSetEvent((PRKEVENT)(a2 + 80), 0, 0);
}
