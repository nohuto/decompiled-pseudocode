/*
 * XREFs of MonitorIsMonitorConnected @ 0x1C01E1978
 * Callers:
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C01B3CC0 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?IsMonitorConnected@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C01E1720 (-IsMonitorConnected@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z.c)
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01E17E0 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkIsMonitorConnected @ 0x1C02D2120 (DxgkIsMonitorConnected.c)
 *     _lambda_ba9a8767fe334596bf562779960bba36_::operator() @ 0x1C02EBA1C (_lambda_ba9a8767fe334596bf562779960bba36_--operator().c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01A2ECC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorIsMonitorConnected(__int64 a1, __int64 a2, char a3, _BYTE *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  MONITOR_MGR *v10; // rcx
  __int64 result; // rax
  struct DXGMONITOR *v12; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v8 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a1;
  if ( !a1 || !a4 || (_DWORD)v5 == -1 )
    return 3221225485LL;
  *a4 = 0;
  v9 = *(_QWORD *)(a1 + 2792);
  if ( !v9 )
  {
    WdLogSingleEntry0(1LL);
    v9 = *(_QWORD *)(a1 + 2792);
  }
  v10 = *(MONITOR_MGR **)(v9 + 112);
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3221225485LL;
  }
  v12 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v10, v5, a3, &v12);
  if ( (_DWORD)result == -1073741275 )
  {
    if ( v12 )
      WdLogSingleEntry0(1LL);
    *a4 = 0;
  }
  else
  {
    if ( (int)result < 0 )
      return result;
    if ( !v12 )
      WdLogSingleEntry0(1LL);
    *a4 = 1;
  }
  return 0LL;
}
