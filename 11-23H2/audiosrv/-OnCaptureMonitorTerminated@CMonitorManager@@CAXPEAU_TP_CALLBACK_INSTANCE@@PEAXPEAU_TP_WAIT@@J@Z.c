/*
 * XREFs of ?OnCaptureMonitorTerminated@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18012E000
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1800E42B8 (WPP_SF_qq.c)
 */

void __fastcall CMonitorManager::OnCaptureMonitorTerminated(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Fu,
      (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
      Context,
      *((_QWORD *)Context + 25));
  }
  CMonitorManager::ScheduleMonitorRestartTimer(*((CMonitorManager **)Context + 24));
}
