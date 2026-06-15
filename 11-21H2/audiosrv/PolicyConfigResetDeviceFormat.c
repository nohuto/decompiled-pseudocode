/*
 * XREFs of PolicyConfigResetDeviceFormat @ 0x1800EBD70
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PolicyConfigResetDeviceFormat(__int64 a1, __int128 *a2, __int64 a3)
{
  __int64 pftDueTime; // rbx
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r9d
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v13; // [rsp+68h] [rbp-30h]
  __int128 v14; // [rsp+78h] [rbp-20h] BYREF

  v13 = *a2;
  v14 = v13;
  EtwEventActivityIdControl(4LL, &v14);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         v6,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v7[1],
    v5,
    (struct _TP_TIMER *)L"PolicyConfigResetDeviceFormat",
    pftDueTime);
  LODWORD(pftDueTime) = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64))(*(_QWORD *)g_PolicyConfig + 40LL))(
                          g_PolicyConfig,
                          a3);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v8, v9, v10);
  EtwEventActivityIdControl(4LL, &v14);
  return (unsigned int)pftDueTime;
}
