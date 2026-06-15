/*
 * XREFs of AudioServerSetStreamSampleRate @ 0x180125520
 * Callers:
 *     <none>
 * Callees:
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18001298C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ?SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z @ 0x180120340 (-SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z.c)
 */

__int64 __fastcall AudioServerSetStreamSampleRate(CVADServer *this, __int64 a2, float a3)
{
  __int64 pftDueTime; // rbx
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 *v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v13[16]; // [rsp+68h] [rbp-50h] BYREF
  _BYTE v14[16]; // [rsp+78h] [rbp-40h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v13, (char *)this);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  v8 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         v7,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v8[1],
    v6,
    (struct _TP_TIMER *)L"AudioServerSetStreamSampleRate",
    pftDueTime);
  v9 = CVADServer::SetStreamSampleRate(this, a2, a3);
  v10 = v9;
  if ( v9 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerSetStreamSampleRate", 3495, v9);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, v14);
  return v10;
}
