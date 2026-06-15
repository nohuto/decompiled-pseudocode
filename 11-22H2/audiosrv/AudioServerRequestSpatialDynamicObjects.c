/*
 * XREFs of AudioServerRequestSpatialDynamicObjects @ 0x180124B50
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerRequestSpatialDynamicObjects(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 pftDueTime; // rbx
  unsigned int v6; // edi
  __int64 *v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  v9 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v9[1],
    v6,
    (struct _TP_TIMER *)L"AudioServerRequestSpatialDynamicObjects",
    pftDueTime);
  v10 = (*(__int64 (__fastcall **)(struct ISpatialAudioResourceManager *, __int64, _QWORD, _QWORD))(*(_QWORD *)g_SpatialAudioResourceManager
                                                                                                  + 48LL))(
          g_SpatialAudioResourceManager,
          a2,
          a3,
          a4);
  v11 = v10;
  if ( v10 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerRequestSpatialDynamicObjects", 5179, v10);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v11;
}
