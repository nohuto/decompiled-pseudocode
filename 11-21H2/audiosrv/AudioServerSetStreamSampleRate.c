/*
 * XREFs of AudioServerSetStreamSampleRate @ 0x1800F4340
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x1800ED894 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 */

__int64 __fastcall AudioServerSetStreamSampleRate(char *a1, __int64 a2)
{
  __int64 pftDueTime; // rbx
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 *v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // r9d
  unsigned int v12; // ebx
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v15[16]; // [rsp+68h] [rbp-50h] BYREF
  _BYTE v16[16]; // [rsp+78h] [rbp-40h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v15, a1);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         v6,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v7[1],
    v5,
    (struct _TP_TIMER *)L"AudioServerSetStreamSampleRate",
    pftDueTime);
  v8 = (*(__int64 (__fastcall **)(char *, __int64))(*(_QWORD *)a1 + 120LL))(a1, a2);
  v12 = v8;
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerSetStreamSampleRate", 3599, v8);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v9, v10, v11);
  EtwEventActivityIdControl(4LL, v16);
  return v12;
}
