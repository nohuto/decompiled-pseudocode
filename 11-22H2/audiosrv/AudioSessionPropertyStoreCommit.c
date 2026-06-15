/*
 * XREFs of AudioSessionPropertyStoreCommit @ 0x1800E61C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionPropertyStoreCommit(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 pftDueTime; // rbx
  unsigned int v3; // edi
  __int64 *v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *a1;
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v3 = g_AudioSrvWatchDogTimerInMs;
  v4 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         (__int64)a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v4[1],
    v3,
    (struct _TP_TIMER *)L"AudioSessionPropertyStoreCommit",
    pftDueTime);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 72) + 400LL))(*(_QWORD *)(v1 + 72));
  v6 = v5;
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionPropertyStoreCommit", 2490, v5);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v6;
}
