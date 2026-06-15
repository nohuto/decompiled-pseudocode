/*
 * XREFs of s_tsRegisterAudioProtocolNotification @ 0x1800244C0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 */

__int64 __fastcall s_tsRegisterAudioProtocolNotification(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  struct _FILETIME pftDueTime; // rbx
  _BYTE pv[64]; // [rsp+30h] [rbp-48h] BYREF

  if ( !(unsigned int)IsTSRegisterAudioProtocolNotificationSupported() )
    return 2147500033LL;
  pftDueTime = g_AudioHealthMonitor;
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    v4,
    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, pftDueTime);
  pftDueTime.dwLowDateTime = TS_RegisterAudioProtocolNotification(a1, a2);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return pftDueTime.dwLowDateTime;
}
