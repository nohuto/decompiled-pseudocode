/*
 * XREFs of s_pbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x1800061B0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 */

__int64 __fastcall s_pbmSwitchSoftNonInteractiveAppsToHardNonInteractive(__int64 a1)
{
  struct _FILETIME pftDueTime; // rbx
  unsigned int v3; // ebx
  _BYTE pv[64]; // [rsp+30h] [rbp-48h] BYREF

  pftDueTime = g_AudioHealthMonitor;
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    a1,
    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, pftDueTime);
  if ( (unsigned int)IsPbmSwitchSoftNonToHardNonInteractiveSupported() )
    v3 = PbmSwitchSoftNonInteractiveAppsToHardNonInteractive(a1);
  else
    v3 = 0;
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v3;
}
