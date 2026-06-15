/*
 * XREFs of s_pbmCastingAppStateChanged @ 0x180112B60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmCastingAppStateChanged(__int64 a1, unsigned int a2)
{
  __int64 pftDueTime; // rbx
  unsigned int v4; // edi
  int v6; // esi
  __int64 *v7; // rax
  __int64 v8; // r8
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v11; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v12; // [rsp+B8h] [rbp+48h] BYREF

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
    (struct _TP_TIMER *)L"s_pbmCastingAppStateChanged",
    pftDueTime);
  if ( (unsigned int)IsPbmCastingAppStateChangedSupported() )
  {
    v6 = PbmCastingAppStateChanged(a1, a2);
  }
  else if ( g_PolicyManager )
  {
    v12 = 0LL;
    if ( (**(int (__fastcall ***)(struct IAudioPolicyManager *, GUID *, __int64 *))g_PolicyManager)(
           g_PolicyManager,
           &GUID_7cd77114_b031_4a63_bf09_9fd46c7629d0,
           &v12) >= 0 )
    {
      v11 = 0LL;
      v6 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager
                                                                                       + 32LL))(
             g_PolicyManager,
             a1,
             &v11);
      if ( v6 >= 0 )
      {
        LOBYTE(v8) = a2 == 0;
        v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 40LL))(v12, v11, v8);
      }
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v11);
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v12);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v6;
}
