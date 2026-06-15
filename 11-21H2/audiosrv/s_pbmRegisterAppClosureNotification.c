/*
 * XREFs of s_pbmRegisterAppClosureNotification @ 0x180111B10
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 */

__int64 __fastcall s_pbmRegisterAppClosureNotification(__int64 a1)
{
  __int64 pftDueTime; // rbx
  unsigned int v2; // edi
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // r9d
  unsigned int v8; // ebx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v2 = g_AudioSrvWatchDogTimerInMs;
  v4 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v4[1],
    v2,
    (struct _TP_TIMER *)L"s_pbmRegisterAppClosureNotification",
    pftDueTime);
  v8 = 0;
  if ( (unsigned int)IsPbmRegisterAppClosureNotificationSupported() )
    v8 = PbmRegisterAppClosureNotification(a1);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v5, v6, v7);
  return v8;
}
