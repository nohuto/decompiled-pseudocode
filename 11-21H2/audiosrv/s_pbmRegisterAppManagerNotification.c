/*
 * XREFs of s_pbmRegisterAppManagerNotification @ 0x180002B10
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmRegisterAppManagerNotification(__int64 a1)
{
  _FILETIME pftDueTime; // rbx
  int v3; // esi
  _BYTE pv[64]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v6; // [rsp+88h] [rbp+10h] BYREF

  pftDueTime = g_AudioHealthMonitor;
  v3 = 0;
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    a1,
    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, pftDueTime);
  if ( (unsigned int)IsPbmRegisterAppManagerNotificationSupported() )
  {
    v3 = PbmRegisterAppManagerNotification(a1);
  }
  else if ( g_PolicyManager )
  {
    v6 = 0LL;
    v3 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
           g_PolicyManager,
           a1,
           &v6);
    if ( v3 >= 0 )
      v3 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64))(*(_QWORD *)g_PolicyManager + 104LL))(
             g_PolicyManager,
             v6);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v6);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return (unsigned int)v3;
}
