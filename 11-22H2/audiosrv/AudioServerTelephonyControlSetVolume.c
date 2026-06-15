/*
 * XREFs of AudioServerTelephonyControlSetVolume @ 0x1801261B0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerTelephonyControlSetVolume(__int64 a1)
{
  __int64 pftDueTime; // rbx
  unsigned int v2; // edi
  __int64 *v3; // rax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-58h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v2 = g_AudioSrvWatchDogTimerInMs;
  v3 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v3[1],
    v2,
    (struct _TP_TIMER *)L"AudioServerTelephonyControlSetVolume",
    pftDueTime);
  LODWORD(pftDueTime) = ((__int64 (__fastcall *)(struct IUnknown *))g_TelephonyControl->lpVtbl[5].QueryInterface)(g_TelephonyControl);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)pftDueTime;
}
