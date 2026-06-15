/*
 * XREFs of AudioServerStopStream @ 0x1800127E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18001298C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180012FE0 (-StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800D15A0 (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 */

__int64 __fastcall AudioServerStopStream(void *a1, __int64 a2, unsigned int a3)
{
  struct _FILETIME v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  int pftDueTime; // [rsp+20h] [rbp-98h]
  _BYTE pv[56]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v13[16]; // [rsp+68h] [rbp-50h] BYREF
  _BYTE v14[16]; // [rsp+78h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v13, a1);
  v6 = g_AudioHealthMonitor;
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    v7,
    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v6);
  v8 = CVADServer::StopStream(a1, a2, a3);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( v8 != -2005139336 && v8 != -2004287484 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBDE,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v8,
        pftDueTime);
    CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
    TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)v13);
    return v9;
  }
  else
  {
    *((_DWORD *)a1 + 61) = 0;
    CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
    EtwEventActivityIdControl(4LL, v14);
    return 0LL;
  }
}
