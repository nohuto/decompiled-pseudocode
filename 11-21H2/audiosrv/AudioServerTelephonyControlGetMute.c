/*
 * XREFs of AudioServerTelephonyControlGetMute @ 0x1800F4870
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerTelephonyControlGetMute(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 pftDueTime; // rbx
  unsigned int v6; // edi
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r9d
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  v9 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v9[1],
    v6,
    (struct _TP_TIMER *)L"AudioServerTelephonyControlGetMute",
    pftDueTime);
  LODWORD(pftDueTime) = ((__int64 (__fastcall *)(struct IUnknown *, __int64, _QWORD, __int64))g_TelephonyControl->lpVtbl[4].QueryInterface)(
                          g_TelephonyControl,
                          a2,
                          a3,
                          a4);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v10, v11, v12);
  return (unsigned int)pftDueTime;
}
