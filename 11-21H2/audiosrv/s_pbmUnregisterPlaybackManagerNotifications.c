/*
 * XREFs of s_pbmUnregisterPlaybackManagerNotifications @ 0x180112290
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmUnregisterPlaybackManagerNotifications(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 pftDueTime; // rbx
  unsigned int v5; // edi
  int v8; // esi
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r9d
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+20h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v8 = 0;
  v9 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v9[1],
    v5,
    (struct _TP_TIMER *)L"s_pbmUnregisterPlaybackManagerNotifications",
    pftDueTime);
  if ( (unsigned int)IsPbmUnregisterPlaybackManagerNotificationsSupported() )
  {
    v8 = PbmUnregisterPlaybackManagerNotifications(a1, a2, a3);
  }
  else if ( !a2 && g_PolicyManager )
  {
    v15 = 0LL;
    v8 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
           g_PolicyManager,
           a1,
           &v15);
    if ( v8 >= 0 )
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 336LL))(v15);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v10, v11, v12);
  return (unsigned int)v8;
}
