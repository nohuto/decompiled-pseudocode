/*
 * XREFs of AudioVolumeStepDown @ 0x1800D1FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioVolumeStepDown(_QWORD *a1, __int128 *a2, __int64 a3, __int64 a4)
{
  __int64 pftDueTime; // rbx
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // r9d
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-88h] BYREF
  __int128 v16; // [rsp+68h] [rbp-50h]
  __int128 v17; // [rsp+78h] [rbp-40h] BYREF

  v16 = *a2;
  v17 = v16;
  EtwEventActivityIdControl(4LL, &v17);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v8 = g_AudioSrvWatchDogTimerInMs;
  v10 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v9,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v10[1],
    v8,
    (struct _TP_TIMER *)L"AudioVolumeStepDown",
    pftDueTime);
  LODWORD(pftDueTime) = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*a1 + 136LL))(*a1, a3, a4);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v11, v12, v13);
  EtwEventActivityIdControl(4LL, &v17);
  return (unsigned int)pftDueTime;
}
