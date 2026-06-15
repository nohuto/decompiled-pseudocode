/*
 * XREFs of s_pbmUnregisterAppManagerNotification @ 0x1801135B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmUnregisterAppManagerNotification(__int64 a1)
{
  __int64 pftDueTime; // rbx
  unsigned int v2; // edi
  int v4; // esi
  __int64 *v5; // rax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+88h] [rbp+10h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v2 = g_AudioSrvWatchDogTimerInMs;
  v4 = 0;
  v5 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v5[1],
    v2,
    (struct _TP_TIMER *)L"s_pbmUnregisterAppManagerNotification",
    pftDueTime);
  if ( (unsigned int)IsPbmUnregisterAppManagerNotificationSupported() )
  {
    v4 = PbmUnregisterAppManagerNotification(a1);
  }
  else if ( g_PolicyManager )
  {
    v8 = 0LL;
    v4 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
           g_PolicyManager,
           a1,
           &v8);
    if ( v4 >= 0 )
      v4 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64))(*(_QWORD *)g_PolicyManager + 104LL))(
             g_PolicyManager,
             v8);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v8);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v4;
}
