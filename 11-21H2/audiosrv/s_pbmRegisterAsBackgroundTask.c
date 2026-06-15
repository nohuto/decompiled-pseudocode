/*
 * XREFs of s_pbmRegisterAsBackgroundTask @ 0x180111BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmRegisterAsBackgroundTask(__int64 a1, __int128 *a2)
{
  __int64 pftDueTime; // rbx
  unsigned int v4; // edi
  int v6; // esi
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // rax
  __int128 v13; // [rsp+30h] [rbp-68h] BYREF
  struct _TP_TIMER *pv[8]; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v15; // [rsp+B0h] [rbp+18h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v4 = g_AudioSrvWatchDogTimerInMs;
  v6 = 0;
  v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v7[1],
    v4,
    (struct _TP_TIMER *)L"s_pbmRegisterAsBackgroundTask",
    pftDueTime);
  if ( g_PolicyManager )
  {
    v15 = 0LL;
    v6 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 **))(*(_QWORD *)g_PolicyManager + 32LL))(
           g_PolicyManager,
           a1,
           &v15);
    if ( v6 >= 0 )
    {
      v11 = *v15;
      v13 = *a2;
      (*(void (__fastcall **)(__int64 *, __int128 *))(v11 + 288))(v15, &v13);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v8, v9, v10);
  return (unsigned int)v6;
}
