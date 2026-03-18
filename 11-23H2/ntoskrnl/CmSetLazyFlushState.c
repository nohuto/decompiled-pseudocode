/*
 * XREFs of CmSetLazyFlushState @ 0x140A118C8
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140AA6950 (PopUnlockAfterSleepWorker.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KiSetTimerEx @ 0x140252820 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140252AA0 (KeCancelTimer.c)
 *     CmpEnableLazyFlush @ 0x1403B4858 (CmpEnableLazyFlush.c)
 *     CmpDisableLazyFlush @ 0x1406164F4 (CmpDisableLazyFlush.c)
 */

void __fastcall CmSetLazyFlushState(char a1)
{
  int v1; // eax

  if ( a1 )
  {
    CmpDoIdleProcessing = CmpPrevIdleProcessingState;
    if ( CmpEnableLazyFlushTimerInitialized )
    {
      CmpDisableLazyFlush(1u);
      KiSetTimerEx((__int64)&CmpEnableLazyFlushTimer, -900000000LL, 0, 0, (__int64)&CmpEnableLazyFlushDpc);
    }
    CmpEnableLazyFlush(4);
  }
  else
  {
    CmpDisableLazyFlush(4u);
    if ( CmpEnableLazyFlushTimerInitialized && (CmpHoldLazyFlush & 1) != 0 )
    {
      if ( KeCancelTimer(&CmpEnableLazyFlushTimer) )
        CmpEnableLazyFlush(1);
    }
    v1 = CmpDoIdleProcessing;
    CmpDoIdleProcessing = 0;
    CmpPrevIdleProcessingState = v1;
  }
}
