/*
 * XREFs of AudioServerDestroyStream @ 0x1800128C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18001298C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180013400 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 */

__int64 __fastcall AudioServerDestroyStream(void *a1, unsigned __int64 a2)
{
  struct _FILETIME pftDueTime; // rbx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  _BYTE pv[56]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v10[16]; // [rsp+68h] [rbp-40h] BYREF
  _BYTE v11[16]; // [rsp+78h] [rbp-30h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v10, a1);
  pftDueTime = g_AudioHealthMonitor;
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    v5,
    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, pftDueTime);
  v6 = CVADServer::DestroyStream((CVADServer *)a1, a2);
  v7 = v6;
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerDestroyStream", 0xC25u, v6);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  EtwEventActivityIdControl(4LL, v11);
  return v7;
}
