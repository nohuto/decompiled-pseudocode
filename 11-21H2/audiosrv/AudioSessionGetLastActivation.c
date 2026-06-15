/*
 * XREFs of AudioSessionGetLastActivation @ 0x1800DD0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionGetLastActivation(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 pftDueTime; // rbx
  unsigned int v5; // edi
  __int64 *v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r9d
  unsigned int v11; // ebx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  v2 = *a1;
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v6 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         (__int64)a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v6[1],
    v5,
    (struct _TP_TIMER *)L"AudioSessionGetLastActivation",
    pftDueTime);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 152LL))(v2, a2);
  v11 = v7;
  if ( v7 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionGetLastActivation", 1691, v7);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v8, v9, v10);
  return v11;
}
