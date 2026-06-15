/*
 * XREFs of PolicyConfigSetAccessibilityAudioMonoMixState @ 0x1800EBE70
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x18005C314 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DisconnectSessionsForTsSession@AudioSessionManagerProvider@@YAXKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800E267C (-DisconnectSessionsForTsSession@AudioSessionManagerProvider@@YAXKW4__MIDL___MIDL_itf_mmdeviceapi.c)
 *     ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x1800E9564 (-DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ.c)
 */

__int64 __fastcall PolicyConfigSetAccessibilityAudioMonoMixState(__int64 a1, unsigned int a2)
{
  __int64 pftDueTime; // rbx
  unsigned int v4; // edi
  __int64 *v6; // rax
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // r8
  int v10; // r9d
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rdx
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v15; // r8d
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+90h] [rbp+18h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v4 = g_AudioSrvWatchDogTimerInMs;
  v6 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v6[1],
    v4,
    (struct _TP_TIMER *)L"PolicyConfigSetAccessibilityAudioMonoMixState",
    pftDueTime);
  v8 = (*(__int64 (__fastcall **)(CPolicyConfig *, _QWORD))(*(_QWORD *)g_PolicyConfig + 168LL))(g_PolicyConfig, a2);
  if ( v8 >= 0 )
  {
    CPolicyConfig::UpdateRenderingEndpointsSpatialSettings();
    v11 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 216LL))(g_PolicyManager);
    if ( v11 == 1 )
    {
      v18 = 0LL;
      if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
             g_PolicyManager,
             a1,
             &v18) >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 48LL))(v18);
        AudioSessionManagerProvider::DisconnectSessionsForTsSession((AudioSessionManagerProvider *)v13, v14, v15);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
    }
    else if ( v11 == 2 )
    {
      CPolicyConfig::DisconnectAllRenderEndpoints(v12);
    }
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v7, v9, v10);
  return (unsigned int)v8;
}
