/*
 * XREFs of s_pbmReportAppClosing @ 0x180005CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 */

__int64 __fastcall s_pbmReportAppClosing(__int64 a1, __int64 a2, __int64 a3)
{
  struct _FILETIME pftDueTime; // rbx
  unsigned int v7; // ebx
  _BYTE pv[64]; // [rsp+30h] [rbp-48h] BYREF

  pftDueTime = g_AudioHealthMonitor;
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    a1,
    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, pftDueTime);
  if ( (unsigned int)IsPbmReportAppClosingSupported() )
    v7 = PbmReportAppClosing(a1, a2, a3);
  else
    v7 = 0;
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v7;
}
