/*
 * XREFs of HalpTimerSetProblemEx @ 0x140509D04
 * Callers:
 *     HalpTimerClockInitialize @ 0x140351150 (HalpTimerClockInitialize.c)
 *     HalpTimerRestorePerformanceCounter @ 0x1404FED8C (HalpTimerRestorePerformanceCounter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpTimerSetProblemEx(__int64 a1, int a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  HalpTimerLastProblem = a2;
  if ( a1 )
  {
    result = a5;
    *(_DWORD *)(a1 + 272) = a5;
    *(_DWORD *)(a1 + 252) = a2;
    *(_DWORD *)(a1 + 256) = a3;
    *(_QWORD *)(a1 + 264) = a4;
  }
  return result;
}
