/*
 * XREFs of AudioServerDisconnect @ 0x1800126E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18001298C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012B00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Detail.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x1800432B0 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 */

__int64 __fastcall AudioServerDisconnect(void **a1)
{
  struct _FILETIME pftDueTime; // rbx
  __int64 v3; // rcx
  LPCRITICAL_SECTION v4; // rbx
  _BYTE pv[56]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v8[16]; // [rsp+68h] [rbp-30h] BYREF
  _BYTE v9[16]; // [rsp+78h] [rbp-20h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v8, *a1);
  pftDueTime = g_AudioHealthMonitor;
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    v3,
    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, pftDueTime);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUnknown>::Release(*a1);
  v4 = g_ADGProcess;
  *a1 = 0LL;
  EnterCriticalSection(v4);
  if ( LODWORD(v4[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v4);
  LeaveCriticalSection(v4);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  EtwEventActivityIdControl(4LL, v9);
  return 0LL;
}
