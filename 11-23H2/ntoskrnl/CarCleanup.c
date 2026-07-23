/*
 * XREFs of CarCleanup @ 0x1405D3CA8
 * Callers:
 *     CarReportUnusualShutdown @ 0x1405D4B20 (CarReportUnusualShutdown.c)
 *     VfVolatileClearDifRuleClass @ 0x140ADDA9C (VfVolatileClearDifRuleClass.c)
 *     VfVolatileSetDifRuleClass @ 0x140ADDC0C (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     KeDeregisterBugCheckReasonCallback @ 0x14036AD60 (KeDeregisterBugCheckReasonCallback.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CarLoggingExit @ 0x1405D39E0 (CarLoggingExit.c)
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
