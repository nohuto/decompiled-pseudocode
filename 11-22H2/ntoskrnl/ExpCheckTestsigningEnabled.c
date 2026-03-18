/*
 * XREFs of ExpCheckTestsigningEnabled @ 0x1409FBB18
 * Callers:
 *     ExpSetTimerObject @ 0x14032E684 (ExpSetTimerObject.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1407582A0 (RtlRunOnceExecuteOnce.c)
 */

char ExpCheckTestsigningEnabled()
{
  RtlRunOnceExecuteOnce(&ExpCheckTestSigningInit, (PRTL_RUN_ONCE_INIT_FN)ExpInitExpCheckTestSigningInfo, 0LL, 0LL);
  return ExpTestSigningEnabled;
}
