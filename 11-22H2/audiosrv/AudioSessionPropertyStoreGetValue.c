/*
 * XREFs of AudioSessionPropertyStoreGetValue @ 0x1800E6400
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionPropertyStoreGetValue(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 pftDueTime; // rbx
  unsigned int v6; // edi
  __int64 *v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  v3 = *a1;
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  v8 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         (__int64)a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v8[1],
    v6,
    (struct _TP_TIMER *)L"AudioSessionPropertyStoreGetValue",
    pftDueTime);
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v3 + 72) + 384LL))(
         *(_QWORD *)(v3 + 72),
         a2,
         a3);
  v10 = v9;
  if ( v9 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionPropertyStoreGetValue", 2452, v9);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v10;
}
