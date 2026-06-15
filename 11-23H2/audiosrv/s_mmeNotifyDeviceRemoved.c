/*
 * XREFs of s_mmeNotifyDeviceRemoved @ 0x180003570
 * Callers:
 *     <none>
 * Callees:
 *     ?MmeOnDeviceRemoved@@YAJPEBG@Z @ 0x18000361C (-MmeOnDeviceRemoved@@YAJPEBG@Z.c)
 *     ?CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z @ 0x180003748 (-CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 */

__int64 __fastcall s_mmeNotifyDeviceRemoved(__int64 a1, const unsigned __int16 *a2)
{
  struct _FILETIME pftDueTime; // rbx
  void *v4; // rdx
  void *v5; // rcx
  DWORD LastError; // ebx
  _BYTE pv[64]; // [rsp+30h] [rbp-48h] BYREF
  int v9; // [rsp+90h] [rbp+18h] BYREF

  pftDueTime = g_AudioHealthMonitor;
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    a1,
    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, pftDueTime);
  LastError = 0;
  if ( CheckRpcClientTokenMembershipsDisjunctive(v5, v4, &v9) )
  {
    if ( !v9 || (MmeOnDeviceRemoved(a2), !v9) )
      LastError = 5;
  }
  else
  {
    LastError = GetLastError();
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return LastError;
}
