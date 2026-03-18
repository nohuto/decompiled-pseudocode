/*
 * XREFs of CarCleanup @ 0x140603390
 * Callers:
 *     CarReportUnusualShutdown @ 0x140604224 (CarReportUnusualShutdown.c)
 *     VfVolatileClearDifRuleClass @ 0x140A9CAB4 (VfVolatileClearDifRuleClass.c)
 *     VfVolatileSetDifRuleClass @ 0x140A9CBF8 (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     KeDeregisterBugCheckReasonCallback @ 0x14025C0E0 (KeDeregisterBugCheckReasonCallback.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CarLoggingExit @ 0x1406030C8 (CarLoggingExit.c)
 */

unsigned __int64 CarCleanup()
{
  unsigned __int64 result; // rax

  result = (unsigned int)CarInitialized;
  if ( CarInitialized )
  {
    CarLoggingExit();
    KeDeregisterBugCheckReasonCallback(&CarBugCheckCallback);
    CarBugCheckCallback.CallbackRoutine = 0LL;
    result = (unsigned __int64)memset(&CarViolationSnapshot, 0, 0x80uLL);
    _InterlockedExchange(&CarInitialized, 0);
  }
  return result;
}
