/*
 * XREFs of s_afxCloseAudioEffectsWatcher @ 0x1800D4B60
 * Callers:
 *     HAUDIOEFFECTSWATCHER_rundown @ 0x1800D4B30 (HAUDIOEFFECTSWATCHER_rundown.c)
 * Callees:
 *     ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800026F0 (--1-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?attach@?$com_ptr_t@UIAudioEffectsWatcher@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIAudioEffectsWatcher@@@Z @ 0x1800D4AF8 (-attach@-$com_ptr_t@UIAudioEffectsWatcher@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIAudioEffe.c)
 */

__int64 __fastcall s_afxCloseAudioEffectsWatcher(unsigned __int64 *a1)
{
  __int64 pftDueTime; // rbx
  unsigned int v2; // edi
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // r9d
  unsigned __int64 v8; // rax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+80h] [rbp+8h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v2 = g_AudioSrvWatchDogTimerInMs;
  v4 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         (__int64)a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v4[1],
    v2,
    (struct _TP_TIMER *)L"s_afxCloseAudioEffectsWatcher",
    pftDueTime);
  if ( CoInitializeEx(0LL, 0) >= 0 )
  {
    v8 = *a1;
    v11 = 0LL;
    wil::com_ptr_t<IAudioEffectsWatcher,wil::err_returncode_policy>::attach(
      &v11,
      (v8 + 8) & ((unsigned __int128)-(__int128)v8 >> 64));
    wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>(&v11);
    CoUninitialize();
  }
  *a1 = 0LL;
  return CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v5, v6, v7);
}
