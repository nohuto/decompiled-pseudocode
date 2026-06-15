/*
 * XREFs of AudioServerGetAudioSession @ 0x1800072F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerGetAudioSession(__int64 a1, _QWORD *a2)
{
  GUID v4; // xmm0
  _FILETIME pftDueTime; // rbx
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  _BYTE pv[56]; // [rsp+30h] [rbp-29h] BYREF
  _OWORD v11[2]; // [rsp+68h] [rbp+Fh] BYREF
  GUID v12; // [rsp+88h] [rbp+2Fh] BYREF

  if ( a1 )
    v4 = *(GUID *)(a1 + 280);
  else
    v4 = GUID_00000000_0000_0000_0000_000000000000;
  v11[0] = v4;
  v11[1] = v4;
  v12 = v4;
  EtwEventActivityIdControl(4LL, &v12);
  *(_QWORD *)&v11[0] = 0LL;
  pftDueTime = g_AudioHealthMonitor;
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    v6,
    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, pftDueTime);
  v7 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)a1 + 40LL))(a1, v11);
  v8 = v7;
  if ( v7 )
  {
    if ( v7 < 0 )
      AudSrvTraceLoggingErrorHelper("AudioServerGetAudioSession", 0xB19u, v7);
  }
  else
  {
    *a2 = *(_QWORD *)&v11[0];
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  EtwEventActivityIdControl(4LL, &v12);
  return v8;
}
