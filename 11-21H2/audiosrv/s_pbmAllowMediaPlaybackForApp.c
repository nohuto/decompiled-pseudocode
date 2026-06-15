/*
 * XREFs of s_pbmAllowMediaPlaybackForApp @ 0x180111500
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmAllowMediaPlaybackForApp(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 pftDueTime; // rbx
  unsigned int v5; // edi
  unsigned int v8; // esi
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r9d
  unsigned int v13; // eax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-58h] BYREF

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
    (struct _TP_TIMER *)L"s_pbmAllowMediaPlaybackForApp",
    pftDueTime);
  if ( (unsigned int)IsPbmAllowMediaPlaybackForAppSupported() )
  {
    v13 = PbmAllowMediaPlaybackForApp(a1, a2, a3);
LABEL_5:
    v8 = v13;
    goto LABEL_6;
  }
  if ( g_PolicyManager )
  {
    v13 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64))(*(_QWORD *)g_PolicyManager + 184LL))(
            g_PolicyManager,
            a2);
    goto LABEL_5;
  }
LABEL_6:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v10, v11, v12);
  return v8;
}
