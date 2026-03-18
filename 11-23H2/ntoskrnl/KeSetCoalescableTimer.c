/*
 * XREFs of KeSetCoalescableTimer @ 0x140252560
 * Callers:
 *     EtwpRequestFlushTimer @ 0x140227AC0 (EtwpRequestFlushTimer.c)
 *     CmpArmLazyWriter @ 0x1402E7294 (CmpArmLazyWriter.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x140310BDC (PopFxScheduleDeviceIdleTimer.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x140311CE8 (PopFxEnableWorkOrderWatchdog.c)
 *     ExpSetTimerObject @ 0x14032E824 (ExpSetTimerObject.c)
 *     PopFxArmResidentTimer @ 0x14034C4F4 (PopFxArmResidentTimer.c)
 *     PopPepArmIdleTimer @ 0x1403554F4 (PopPepArmIdleTimer.c)
 *     CcRescheduleLazyWriteScanOnVolume @ 0x140357668 (CcRescheduleLazyWriteScanOnVolume.c)
 *     CmpCompleteLazyWrite @ 0x140366684 (CmpCompleteLazyWrite.c)
 *     ExpTimerDpcRoutine @ 0x140369EC0 (ExpTimerDpcRoutine.c)
 *     ExpTimerResume @ 0x14036B0A0 (ExpTimerResume.c)
 *     CcBcbProfiler @ 0x1403E3340 (CcBcbProfiler.c)
 *     CcRescheduleLazyWriteScan @ 0x140537328 (CcRescheduleLazyWriteScan.c)
 *     IopEnableTimer @ 0x1405553D8 (IopEnableTimer.c)
 *     ExpTimerAdjust @ 0x14060BD5C (ExpTimerAdjust.c)
 *     sub_14067E010 @ 0x14067E010 (sub_14067E010.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x1407E136C (ExpSetWorkerFactoryDeferredCreateTimer.c)
 *     ExpWorkQueueManagerThread @ 0x140838DC0 (ExpWorkQueueManagerThread.c)
 *     PiDrvDbUnloadNode @ 0x14086BA74 (PiDrvDbUnloadNode.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140875774 (CcSetTelemetryPeriodicTimer.c)
 *     CcTelemetryPeriodicTimerCallback @ 0x140880BC0 (CcTelemetryPeriodicTimerCallback.c)
 *     IopErrorLogQueueRequest @ 0x1409515C4 (IopErrorLogQueueRequest.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140AEC0B8 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayFade @ 0x140AEC9E8 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x140AED598 (AnFwDisplayProgressIndicator.c)
 *     AnFwProgressIndicatorTransition @ 0x140AF2174 (AnFwProgressIndicatorTransition.c)
 *     CcInitializeBcbProfiler @ 0x140B17354 (CcInitializeBcbProfiler.c)
 *     PopInitializeSystemIdleDetection @ 0x140B74CD4 (PopInitializeSystemIdleDetection.c)
 * Callees:
 *     KiSetTimerEx @ 0x140252820 (KiSetTimerEx.c)
 */

BOOLEAN __stdcall KeSetCoalescableTimer(
        PKTIMER Timer,
        LARGE_INTEGER DueTime,
        ULONG Period,
        ULONG TolerableDelay,
        PKDPC Dpc)
{
  char v5; // r10
  unsigned __int64 v7; // r9
  unsigned __int64 v9; // r9
  ULONG v10; // r8d
  ULONG v11; // eax

  v5 = 0;
  if ( TolerableDelay )
  {
    v7 = 10000LL * TolerableDelay;
    if ( v7 > 0xFC0000 )
    {
      v9 = v7 - 16515072;
      if ( DueTime.QuadPart >= 0 )
      {
        v10 = v9 + DueTime.LowPart;
        if ( (__int64)(v9 + DueTime.QuadPart) < DueTime.QuadPart )
          v10 = -1;
      }
      else
      {
        v10 = DueTime.LowPart - v9;
        if ( (__int64)(DueTime.QuadPart - v9) > DueTime.QuadPart )
          v10 = 0;
      }
      if ( Period )
      {
        v11 = -1;
        if ( Period + (int)v9 / 10000 >= Period )
          v11 = Period + (int)v9 / 10000;
        Period = v11;
      }
      LODWORD(v7) = 16515072;
      DueTime.LowPart = v10;
    }
    TolerableDelay = (unsigned int)v7 >> 18;
    if ( TolerableDelay > 0x3F )
      TolerableDelay = 63;
    v5 = 4 * TolerableDelay;
  }
  LOBYTE(TolerableDelay) = v5;
  return KiSetTimerEx((_DWORD)Timer, DueTime.LowPart, Period, TolerableDelay, (__int64)Dpc);
}
