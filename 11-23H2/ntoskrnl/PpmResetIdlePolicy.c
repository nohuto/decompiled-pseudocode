/*
 * XREFs of PpmResetIdlePolicy @ 0x14039FB58
 * Callers:
 *     PpmInstallNewIdleStates @ 0x14039F5E0 (PpmInstallNewIdleStates.c)
 *     PpmApplyIdlePolicyChanges @ 0x140583F00 (PpmApplyIdlePolicyChanges.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3270 (KeQueryPerformanceCounter.c)
 *     PpmScaleIdleStateValues @ 0x14034F31C (PpmScaleIdleStateValues.c)
 *     PpmApplyIdlePolicy @ 0x14039FB94 (PpmApplyIdlePolicy.c)
 *     PpmResetProcessorIdleAccounting @ 0x14039FC04 (PpmResetProcessorIdleAccounting.c)
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
