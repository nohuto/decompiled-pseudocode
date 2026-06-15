/*
 * XREFs of s_pbmLaunchBackgroundTask @ 0x180112F00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmLaunchBackgroundTask(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 pftDueTime; // rbx
  unsigned int v6; // edi
  int v10; // esi
  __int64 *v11; // rax
  __int64 v13; // [rsp+30h] [rbp-58h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-50h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  v10 = 0;
  v11 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          a1,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v11[1],
    v6,
    (struct _TP_TIMER *)L"s_pbmLaunchBackgroundTask",
    pftDueTime);
  if ( (unsigned int)IsPbmLaunchBackgroundTaskSupported() )
  {
    v10 = PbmLaunchBackgroundTask(a1, a2, a3, a4);
  }
  else if ( g_PolicyManager )
  {
    v13 = 0LL;
    v10 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
            g_PolicyManager,
            a1,
            &v13);
    if ( v10 >= 0 )
      v10 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64, __int64, __int64))(*(_QWORD *)g_PolicyManager + 120LL))(
              g_PolicyManager,
              v13,
              a2,
              a3,
              a4);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v13);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v10;
}
