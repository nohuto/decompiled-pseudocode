/*
 * XREFs of ExpCheckTestsigningEnabled @ 0x1409FBA68
 * Callers:
 *     ExpSetTimerObject @ 0x14032E824 (ExpSetTimerObject.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x140757D90 (RtlRunOnceExecuteOnce.c)
 */

char ExpCheckTestsigningEnabled()
{
  RtlRunOnceExecuteOnce(&ExpCheckTestSigningInit, (PRTL_RUN_ONCE_INIT_FN)ExpInitExpCheckTestSigningInfo, 0LL, 0LL);
  return ExpTestSigningEnabled;
}
