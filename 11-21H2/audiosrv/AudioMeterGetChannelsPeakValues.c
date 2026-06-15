/*
 * XREFs of AudioMeterGetChannelsPeakValues @ 0x1800D13C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioMeterGetChannelsPeakValues(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 pftDueTime; // rbx
  unsigned int v5; // edi
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // r9d
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v8 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         (__int64)a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v8[1],
    v5,
    (struct _TP_TIMER *)L"AudioMeterGetChannelsPeakValues",
    pftDueTime);
  LODWORD(pftDueTime) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a1 + 176LL))(*a1, a2, a3);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v9, v10, v11);
  return (unsigned int)pftDueTime;
}
