/*
 * XREFs of s_pbmReportAppInteractivityChange @ 0x180002850
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 */

__int64 __fastcall s_pbmReportAppInteractivityChange(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _FILETIME pftDueTime; // rbx
  unsigned int v9; // ebx
  _BYTE pv[64]; // [rsp+30h] [rbp-58h] BYREF

  pftDueTime = g_AudioHealthMonitor;
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    a1,
    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, pftDueTime);
  v9 = 0;
  if ( (unsigned int)IsPbmReportAppInteractivityChangeSupported() )
    v9 = PbmReportAppInteractivityChange(a1, a2, a3, a4);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v9;
}
