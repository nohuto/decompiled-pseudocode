/*
 * XREFs of CarCleanup @ 0x1405D3738
 * Callers:
 *     CarReportUnusualShutdown @ 0x1405D45B0 (CarReportUnusualShutdown.c)
 *     VfVolatileClearDifRuleClass @ 0x140ADDAAC (VfVolatileClearDifRuleClass.c)
 *     VfVolatileSetDifRuleClass @ 0x140ADDC1C (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     KeDeregisterBugCheckReasonCallback @ 0x14036ABC0 (KeDeregisterBugCheckReasonCallback.c)
 *     memset @ 0x140435A00 (memset.c)
 *     CarLoggingExit @ 0x1405D3470 (CarLoggingExit.c)
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
