/*
 * XREFs of PpmResetIdlePolicy @ 0x14039FD38
 * Callers:
 *     PpmInstallNewIdleStates @ 0x14039F7C0 (PpmInstallNewIdleStates.c)
 *     PpmApplyIdlePolicyChanges @ 0x1405843F0 (PpmApplyIdlePolicyChanges.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     PpmScaleIdleStateValues @ 0x14034F4BC (PpmScaleIdleStateValues.c)
 *     PpmApplyIdlePolicy @ 0x14039FD74 (PpmApplyIdlePolicy.c)
 *     PpmResetProcessorIdleAccounting @ 0x14039FDE4 (PpmResetProcessorIdleAccounting.c)
 */

void __fastcall PpmResetIdlePolicy(_QWORD *a1)
{
  LARGE_INTEGER PerformanceCounter; // rax

  if ( *a1 )
  {
    PpmApplyIdlePolicy();
    PpmScaleIdleStateValues((__int64)a1);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    ((void (__fastcall *)(_QWORD, _QWORD))PpmResetProcessorIdleAccounting)(
      a1[1],
      (LARGE_INTEGER)PerformanceCounter.QuadPart);
  }
}
