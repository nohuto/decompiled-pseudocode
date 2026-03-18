/*
 * XREFs of MonitorIsUsingSimulatedMonitor @ 0x1C01DAEB4
 * Callers:
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C01DAD7C (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C03ABF4C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ @ 0x1C01DBF04 (-_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ.c)
 */

__int64 __fastcall MonitorIsUsingSimulatedMonitor(DXGADAPTER *this, _BYTE *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  MONITOR_MGR *v7; // rcx

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( this && a2 )
  {
    *a2 = 0;
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
      WdLogSingleEntry0(1LL);
    v6 = *((_QWORD *)this + 365);
    if ( v6 )
    {
      v7 = *(MONITOR_MGR **)(v6 + 112);
      if ( v7 )
      {
        *a2 = MONITOR_MGR::_IsUsingSimulatedMonitor(v7);
        return 0LL;
      }
    }
    WdLogSingleEntry1(2LL, this);
  }
  return 3221225485LL;
}
