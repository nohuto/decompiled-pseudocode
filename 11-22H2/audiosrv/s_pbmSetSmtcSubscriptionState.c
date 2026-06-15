/*
 * XREFs of s_pbmSetSmtcSubscriptionState @ 0x180113430
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmSetSmtcSubscriptionState(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 pftDueTime; // rbx
  unsigned int v5; // edi
  int v8; // esi
  __int64 *v9; // rax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+A8h] [rbp+20h] BYREF

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
    (struct _TP_TIMER *)L"s_pbmSetSmtcSubscriptionState",
    pftDueTime);
  if ( (unsigned int)IsPbmSmtcSubscriptionStateSupported() )
  {
    v8 = PbmSetSmtcSubscriptionState(a1, a2, a3);
  }
  else if ( g_PolicyManager )
  {
    v12 = 0LL;
    v8 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
           g_PolicyManager,
           a1,
           &v12);
    if ( v8 >= 0 )
      v8 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, _QWORD, _QWORD))(*(_QWORD *)g_PolicyManager
                                                                                            + 112LL))(
             g_PolicyManager,
             v12,
             a2,
             a3);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v12);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v8;
}
