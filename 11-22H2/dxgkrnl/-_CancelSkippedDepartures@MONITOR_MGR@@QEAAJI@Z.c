/*
 * XREFs of ?_CancelSkippedDepartures@MONITOR_MGR@@QEAAJI@Z @ 0x1C020F988
 * Callers:
 *     MonitorCancelSkippedDepartures @ 0x1C020F90C (MonitorCancelSkippedDepartures.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01AC420 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?CancelSkippedDepartures@MonitorUsb4State@DxgMonitor@@QEAAXXZ @ 0x1C03CA5A0 (-CancelSkippedDepartures@MonitorUsb4State@DxgMonitor@@QEAAXXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_CancelSkippedDepartures(MONITOR_MGR *this, unsigned int a2)
{
  __int64 v2; // rbx
  int MonitorInstance; // edi
  DxgMonitor::MonitorUsb4State *v6; // rcx
  struct DXGMONITOR *v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  if ( a2 == -1 )
    WdLogSingleEntry0(1LL);
  v7 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v2, 0, &v7);
  if ( MonitorInstance >= 0 )
  {
    v6 = (DxgMonitor::MonitorUsb4State *)*((_QWORD *)v7 + 33);
    if ( *((_BYTE *)v6 + 8) )
      DxgMonitor::MonitorUsb4State::CancelSkippedDepartures(v6);
  }
  else
  {
    WdLogSingleEntry2(2LL, v2, this);
  }
  return (unsigned int)MonitorInstance;
}
