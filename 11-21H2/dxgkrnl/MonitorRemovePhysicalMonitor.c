/*
 * XREFs of MonitorRemovePhysicalMonitor @ 0x1C03B0AD0
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x1C01F0E64 (DxgkPowerOnOffMonitor.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C02164B8 (DpiPdoHandleChildConnectionChange.c)
 *     DpiPdoRemovePdo @ 0x1C0397BD4 (DpiPdoRemovePdo.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z @ 0x1C0157474 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C01A7544 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C01BE8BC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C01E285C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C0206098 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03B40B8 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MonitorRemovePhysicalMonitor(char *a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // rbp
  unsigned int v13; // esi
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // [rsp+58h] [rbp+10h] BYREF

  v5 = (unsigned int)a2;
  v8 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a1;
  if ( !a1 || (_DWORD)v5 == -1 )
    return 3221225485LL;
  if ( a4 )
  {
    *(_DWORD *)(a4 + 36) = v5;
    v9 = *(_QWORD *)(a1 + 404);
    *(_DWORD *)(a4 + 40) = 0;
    *(_QWORD *)(a4 + 52) = v9;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
    WdLogSingleEntry0(1LL);
  v10 = *((_QWORD *)a1 + 349);
  if ( !v10 || (v12 = *(_QWORD *)(v10 + 112)) == 0 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3221225485LL;
  }
  v13 = MONITOR_MGR::_HandleRemovePhysicalMonitor(
          *(MONITOR_MGR **)(v10 + 112),
          v5,
          a3,
          (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a4);
  MONITOR_MGR::_LogMonitorPresentEvent(v12, 2, v5, v13, 0LL);
  LOBYTE(v16) = 0;
  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)a1)
    && !a1[2705]
    && (int)DmmIsTargetForceable((DXGADAPTER *)a1, v5, (unsigned __int8 *)&v16, 0) >= 0
    && !(_BYTE)v16
    && (int)DmmGetSourceConnectedToTargetInClientVidPn(a1, v5, &v16) >= 0 )
  {
    LOBYTE(v14) = 1;
    v15 = DmmPowerOnOffTargetsFromSourceIfNecessary((PERESOURCE *)a1, v14, 0LL);
    if ( v15 < 0 )
      WdLogSingleEntry2(2LL, a1, v15);
  }
  return v13;
}
