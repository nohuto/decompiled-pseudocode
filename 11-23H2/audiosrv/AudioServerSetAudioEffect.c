/*
 * XREFs of AudioServerSetAudioEffect @ 0x180124FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18001298C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800D15A0 (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 *     ?SetAudioEffect@CVADServer@@QEAAJU_GUID@@H@Z @ 0x18011F478 (-SetAudioEffect@CVADServer@@QEAAJU_GUID@@H@Z.c)
 */

__int64 __fastcall AudioServerSetAudioEffect(CVADServer *this, struct _GUID *a2, unsigned int a3)
{
  __int64 pftDueTime; // rbx
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 *v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  struct _GUID v13; // [rsp+30h] [rbp-98h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v15[16]; // [rsp+78h] [rbp-50h] BYREF
  _BYTE v16[16]; // [rsp+88h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

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
    (struct _TP_TIMER *)L"AudioServerSetAudioEffect",
    pftDueTime);
  v13 = *a2;
  v10 = CVADServer::SetAudioEffect(this, &v13, a3);
  v11 = v10;
  if ( v10 >= 0 )
  {
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
    EtwEventActivityIdControl(4LL, v16);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x150D,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v10);
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
    TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)v15);
    return v11;
  }
}
