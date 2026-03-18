/*
 * XREFs of WheapSetDefaultErrorConfigurationCalls @ 0x140612C0C
 * Callers:
 *     WheaUnconfigureErrorSource @ 0x140AAB8D0 (WheaUnconfigureErrorSource.c)
 * Callees:
 *     <none>
 */

void (*__fastcall WheapSetDefaultErrorConfigurationCalls(_QWORD *a1))()
{
  void (*result)(); // rax

  a1[2] = PdcCreateWatchdogAroundClientCall;
  a1[3] = xHalPciEarlyRestore;
  a1[4] = WheapDefaultErrSrcCreateRecord;
  a1[5] = PdcCreateWatchdogAroundClientCall;
  result = xHalTimerWatchdogStop;
  a1[6] = xHalTimerWatchdogStop;
  a1[7] = 0LL;
  return result;
}
