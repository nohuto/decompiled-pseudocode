/*
 * XREFs of AudioSessionDestroy @ 0x180054A00
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x180054AA4 (-RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 *     WPP_SF_d @ 0x1800DDE44 (WPP_SF_d.c)
 */

__int64 __fastcall AudioSessionDestroy(CServerAudioSessionControl **a1)
{
  CServerAudioSessionControl *v1; // rsi
  __int64 pftDueTime; // rbx
  unsigned int v4; // edi
  __int64 *v5; // rax
  unsigned int v6; // eax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *a1;
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v4 = g_AudioSrvWatchDogTimerInMs;
  v5 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         (__int64)a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v5[1],
    v4,
    (struct _TP_TIMER *)L"AudioSessionDestroy",
    pftDueTime);
  v6 = CServerAudioSessionControl::RemoveClientReference(v1);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, v6);
  }
  *a1 = 0LL;
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return 0LL;
}
