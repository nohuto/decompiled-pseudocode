/*
 * XREFs of PolicyConfigSetAccessibilityAudioMonoMixState @ 0x180118230
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x180062178 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DisconnectSessionsForTsSession@AudioSessionManagerProvider@@YAXKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800E9ECC (-DisconnectSessionsForTsSession@AudioSessionManagerProvider@@YAXKW4__MIDL___MIDL_itf_mmdeviceapi.c)
 *     ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x1801157EC (-DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ.c)
 */

__int64 __fastcall PolicyConfigSetAccessibilityAudioMonoMixState(__int64 a1, unsigned int a2)
{
  __int64 pftDueTime; // rbx
  unsigned int v4; // edi
  __int64 *v6; // rax
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rdx
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v12; // r8d
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+90h] [rbp+18h] BYREF

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
  v7 = (*(__int64 (__fastcall **)(CPolicyConfig *, _QWORD))(*(_QWORD *)g_PolicyConfig + 168LL))(g_PolicyConfig, a2);
  if ( v7 >= 0 )
  {
    CPolicyConfig::UpdateRenderingEndpointsSpatialSettings();
    v8 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 208LL))(g_PolicyManager);
    if ( v8 == 1 )
    {
      v15 = 0LL;
      if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
             g_PolicyManager,
             a1,
             &v15) >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 48LL))(v15);
        AudioSessionManagerProvider::DisconnectSessionsForTsSession((AudioSessionManagerProvider *)v10, v11, v12);
      }
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v15);
    }
    else if ( v8 == 2 )
    {
      CPolicyConfig::DisconnectAllRenderEndpoints(v9);
    }
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v7;
}
