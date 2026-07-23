/*
 * XREFs of KeSetCoalescableTimer @ 0x140252620
 * Callers:
 *     EtwpRequestFlushTimer @ 0x140227BD0 (EtwpRequestFlushTimer.c)
 *     CmpArmLazyWriter @ 0x1402E7524 (CmpArmLazyWriter.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x140310E6C (PopFxScheduleDeviceIdleTimer.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x140311F78 (PopFxEnableWorkOrderWatchdog.c)
 *     ExpSetTimerObject @ 0x14032EAB4 (ExpSetTimerObject.c)
 *     PopFxArmResidentTimer @ 0x14034C694 (PopFxArmResidentTimer.c)
 *     PopPepArmIdleTimer @ 0x140355694 (PopPepArmIdleTimer.c)
 *     CcRescheduleLazyWriteScanOnVolume @ 0x140357808 (CcRescheduleLazyWriteScanOnVolume.c)
 *     CmpCompleteLazyWrite @ 0x140366824 (CmpCompleteLazyWrite.c)
 *     ExpTimerDpcRoutine @ 0x14036A060 (ExpTimerDpcRoutine.c)
 *     ExpTimerResume @ 0x14036B240 (ExpTimerResume.c)
 *     CcBcbProfiler @ 0x1403E3520 (CcBcbProfiler.c)
 *     CcRescheduleLazyWriteScan @ 0x140537878 (CcRescheduleLazyWriteScan.c)
 *     IopEnableTimer @ 0x140555A98 (IopEnableTimer.c)
 *     ExpTimerAdjust @ 0x14060C2AC (ExpTimerAdjust.c)
 *     sub_14067E010 @ 0x14067E010 (sub_14067E010.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x1407E163C (ExpSetWorkerFactoryDeferredCreateTimer.c)
 *     ExpWorkQueueManagerThread @ 0x1408390C0 (ExpWorkQueueManagerThread.c)
 *     PiDrvDbUnloadNode @ 0x14086BCB4 (PiDrvDbUnloadNode.c)
 *     CcSetTelemetryPeriodicTimer @ 0x1408759B4 (CcSetTelemetryPeriodicTimer.c)
 *     CcTelemetryPeriodicTimerCallback @ 0x140880E00 (CcTelemetryPeriodicTimerCallback.c)
 *     IopErrorLogQueueRequest @ 0x1409517C4 (IopErrorLogQueueRequest.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140AEC0B8 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayFade @ 0x140AEC9E8 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x140AED598 (AnFwDisplayProgressIndicator.c)
 *     AnFwProgressIndicatorTransition @ 0x140AF2184 (AnFwProgressIndicatorTransition.c)
 *     CcInitializeBcbProfiler @ 0x140B17354 (CcInitializeBcbProfiler.c)
 *     PopInitializeSystemIdleDetection @ 0x140B74CD4 (PopInitializeSystemIdleDetection.c)
 * Callees:
 *     KiSetTimerEx @ 0x1402528E0 (KiSetTimerEx.c)
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
