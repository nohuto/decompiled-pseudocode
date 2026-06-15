/*
 * XREFs of s_mmeNotifyDeviceAdded @ 0x180003690
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z @ 0x180003748 (-CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     WPP_SF_S @ 0x1800DDE2C (WPP_SF_S.c)
 */

__int64 __fastcall s_mmeNotifyDeviceAdded(__int64 a1, __int64 a2)
{
  struct _FILETIME pftDueTime; // rbx
  void *v4; // rdx
  void *v5; // rcx
  DWORD LastError; // ebx
  int v7; // eax
  _BYTE pv[64]; // [rsp+30h] [rbp-48h] BYREF
  int v10; // [rsp+90h] [rbp+18h] BYREF

  pftDueTime = g_AudioHealthMonitor;
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    a1,
    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, pftDueTime);
  LastError = 0;
  if ( CheckRpcClientTokenMembershipsDisjunctive(v5, v4, &v10) )
  {
    v7 = v10;
    if ( !v10 )
      goto LABEL_7;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_ea4dc79131a5388790567eb319c308bd_Traceguids, a2);
      v7 = v10;
    }
    if ( !v7 )
LABEL_7:
      LastError = 5;
  }
  else
  {
    LastError = GetLastError();
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return LastError;
}
