/*
 * XREFs of AudioServerSetEchoCancellationRenderEndpoint @ 0x180125370
 * Callers:
 *     <none>
 * Callees:
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18001298C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800D15F0 (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 *     ?SetEchoCancellationRenderEndpoint@CVADServer@@UEAAJ_KPEBG@Z @ 0x18011FC00 (-SetEchoCancellationRenderEndpoint@CVADServer@@UEAAJ_KPEBG@Z.c)
 */

__int64 __fastcall AudioServerSetEchoCancellationRenderEndpoint(CVADServer *this, __int64 a2, char *a3)
{
  __int64 pftDueTime; // rbx
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 *v9; // rax
  int v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // ebx
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v15[16]; // [rsp+68h] [rbp-50h] BYREF
  _BYTE v16[16]; // [rsp+78h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v15, (char *)this);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  v9 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         v8,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v9[1],
    v7,
    (struct _TP_TIMER *)L"AudioServerSetEchoCancellationRenderEndpoint",
    pftDueTime);
  v10 = CVADServer::SetEchoCancellationRenderEndpoint(this, a2, a3);
  v11 = v10;
  if ( v10 >= 0 )
  {
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
    EtwEventActivityIdControl(4LL, v16);
    return 0LL;
  }
  else
  {
    v12 = -2005139336;
    if ( v10 != -2005139336 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x154B,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v10);
      v12 = v11;
    }
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
    TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)v15);
    return v12;
  }
}
