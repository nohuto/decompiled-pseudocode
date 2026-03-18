/*
 * XREFs of MonitorNotifyDXGIGammaRampChange @ 0x1C01C4688
 * Callers:
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01C44E0 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C02D0490 (DxgkAdjustFullscreenGamma.c)
 *     DxgkSetGammaRamp @ 0x1C02EAB70 (DxgkSetGammaRamp.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01A2ECC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ @ 0x1C01C4724 (-OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ.c)
 */

__int64 __fastcall MonitorNotifyDXGIGammaRampChange(DXGADAPTER *a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  MONITOR_MGR *v5; // rdi
  int MonitorInstance; // ebx
  struct DXGMONITOR *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v4 = *((_QWORD *)a1 + 349);
  if ( !v4 )
  {
    WdLogSingleEntry0(1LL);
    v4 = *((_QWORD *)a1 + 349);
  }
  v5 = *(MONITOR_MGR **)(v4 + 112);
  if ( !v5 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3221225485LL;
  }
  v8 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v5, v2, 1, &v8);
  if ( MonitorInstance < 0 )
    WdLogSingleEntry2(7LL, v2, v5);
  else
    DxgMonitor::MonitorGammaState::OnDxgiGammaRampChange(*((DxgMonitor::MonitorGammaState **)v8 + 31));
  return (unsigned int)MonitorInstance;
}
