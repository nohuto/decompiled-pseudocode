/*
 * XREFs of AudioServerGetStreamLatency @ 0x180122E20
 * Callers:
 *     <none>
 * Callees:
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18001298C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ?GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z @ 0x18011E1F0 (-GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z.c)
 */

__int64 __fastcall AudioServerGetStreamLatency(CVADServer *this, __int64 a2, __int64 *a3)
{
  __int64 pftDueTime; // rbx
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 *v9; // rax
  int StreamLatency; // eax
  unsigned int v11; // ebx
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v14[16]; // [rsp+68h] [rbp-50h] BYREF
  _BYTE v15[16]; // [rsp+78h] [rbp-40h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v14, (char *)this);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  v9 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         v8,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v9[1],
    v7,
    (struct _TP_TIMER *)L"AudioServerGetStreamLatency",
    pftDueTime);
  StreamLatency = CVADServer::GetStreamLatency(this, a2, a3);
  v11 = StreamLatency;
  if ( StreamLatency < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetStreamLatency", 3429, StreamLatency);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, v15);
  return v11;
}
