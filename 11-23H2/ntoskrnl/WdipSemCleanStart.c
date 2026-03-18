/*
 * XREFs of WdipSemCleanStart @ 0x14082FA50
 * Callers:
 *     WdipSemInitialize @ 0x14082F9F8 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x1409DD93C (WdipSemUpdate.c)
 * Callees:
 *     WdipSemGetLoggerIds @ 0x1407E56B4 (WdipSemGetLoggerIds.c)
 *     WdipSemLoadGroupPolicy @ 0x14082FABC (WdipSemLoadGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x14082FB14 (WdipSemStartTimeoutCheck.c)
 *     WdipSemLoadConfigInfo @ 0x14082FDEC (WdipSemLoadConfigInfo.c)
 *     WdipSemEnableSemProvider @ 0x140830224 (WdipSemEnableSemProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140830D04 (WdipSemLoadScenarioTable.c)
 *     WdipSemCleanupGroupPolicy @ 0x1408328F8 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemShutdown @ 0x1409DDBF0 (WdipSemShutdown.c)
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
