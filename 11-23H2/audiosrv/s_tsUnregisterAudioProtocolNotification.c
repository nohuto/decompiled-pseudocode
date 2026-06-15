/*
 * XREFs of s_tsUnregisterAudioProtocolNotification @ 0x180054C80
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 */

__int64 __fastcall s_tsUnregisterAudioProtocolNotification(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 pftDueTime; // rbx
  unsigned int v6; // edi
  __int64 *v7; // rax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  if ( !(unsigned int)IsTSUnregisterAudioProtocolNotificationSupported() )
    return 2147500033LL;
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         v4,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v7[1],
    v6,
    (struct _TP_TIMER *)L"s_tsUnregisterAudioProtocolNotification",
    pftDueTime);
  LODWORD(pftDueTime) = TS_UnregisterAudioProtocolNotification(a1, a2);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)pftDueTime;
}
