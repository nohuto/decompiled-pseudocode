/*
 * XREFs of AudioServerGetAudioSession @ 0x180051950
 * Callers:
 *     <none>
 * Callees:
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18001298C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x180051A40 (-get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 */

__int64 __fastcall AudioServerGetAudioSession(CVADServer *this, struct CServerAudioSessionControl **a2)
{
  __int64 pftDueTime; // rbx
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 *v7; // rax
  int AudioSession; // eax
  unsigned int v9; // ebx
  struct CServerAudioSessionControl *v11; // [rsp+30h] [rbp-88h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v13[16]; // [rsp+70h] [rbp-48h] BYREF
  _BYTE v14[16]; // [rsp+80h] [rbp-38h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v13, (char *)this);
  v11 = 0LL;
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         v6,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v7[1],
    v5,
    (struct _TP_TIMER *)L"AudioServerGetAudioSession",
    pftDueTime);
  AudioSession = CVADServer::get_AudioSession(this, &v11);
  v9 = AudioSession;
  if ( AudioSession )
  {
    if ( AudioSession < 0 )
      AudSrvTraceLoggingErrorHelper("AudioServerGetAudioSession", 2727, AudioSession);
  }
  else
  {
    *a2 = v11;
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, v14);
  return v9;
}
