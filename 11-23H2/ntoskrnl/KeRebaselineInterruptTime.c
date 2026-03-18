/*
 * XREFs of KeRebaselineInterruptTime @ 0x14056AEAC
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x140A9EF40 (KiCalibrateTimeAdjustment.c)
 *     PopInvokeSystemStateHandler @ 0x140AA859C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3270 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER KeRebaselineInterruptTime()
{
  LARGE_INTEGER result; // rax

  result = KeQueryPerformanceCounter(0LL);
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 848) = result;
  KiInterruptTimeErrorAccumulator = 0LL;
  return result;
}
