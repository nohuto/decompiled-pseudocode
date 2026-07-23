/*
 * XREFs of WdipSemCleanStart @ 0x14082FD50
 * Callers:
 *     WdipSemInitialize @ 0x14082FCF8 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x1409DDB3C (WdipSemUpdate.c)
 * Callees:
 *     WdipSemGetLoggerIds @ 0x1407E5984 (WdipSemGetLoggerIds.c)
 *     WdipSemLoadGroupPolicy @ 0x14082FDBC (WdipSemLoadGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x14082FE14 (WdipSemStartTimeoutCheck.c)
 *     WdipSemLoadConfigInfo @ 0x1408300EC (WdipSemLoadConfigInfo.c)
 *     WdipSemEnableSemProvider @ 0x140830524 (WdipSemEnableSemProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140831004 (WdipSemLoadScenarioTable.c)
 *     WdipSemCleanupGroupPolicy @ 0x140832BF8 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemShutdown @ 0x1409DDDF0 (WdipSemShutdown.c)
 */

__int64 WdipSemCleanStart()
{
  int LoggerIds; // ebx

  LoggerIds = WdipSemGetLoggerIds();
  if ( LoggerIds >= 0 )
  {
    LoggerIds = WdipSemEnableSemProvider();
    if ( LoggerIds >= 0 )
    {
      LoggerIds = WdipSemLoadConfigInfo();
      if ( LoggerIds >= 0 )
      {
        LoggerIds = WdipSemLoadGroupPolicy();
        if ( LoggerIds >= 0 )
        {
          LoggerIds = WdipSemLoadScenarioTable();
          if ( LoggerIds >= 0 )
            LoggerIds = WdipSemStartTimeoutCheck();
        }
      }
    }
  }
  WdipSemCleanupGroupPolicy();
  if ( LoggerIds < 0 )
    WdipSemShutdown();
  else
    WdipSemEnabled = 1;
  return (unsigned int)LoggerIds;
}
