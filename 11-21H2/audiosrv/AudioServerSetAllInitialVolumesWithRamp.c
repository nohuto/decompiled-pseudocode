/*
 * XREFs of AudioServerSetAllInitialVolumesWithRamp @ 0x1800F3C10
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x1800ED894 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 */

__int64 __fastcall AudioServerSetAllInitialVolumesWithRamp(char *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 pftDueTime; // rbx
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 *v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // r9d
  unsigned int v16; // ebx
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v19[16]; // [rsp+68h] [rbp-60h] BYREF
  _BYTE v20[16]; // [rsp+78h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v19, a1);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v9 = g_AudioSrvWatchDogTimerInMs;
  v11 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v10,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v11[1],
    v9,
    (struct _TP_TIMER *)L"AudioServerSetAllInitialVolumesWithRamp",
    pftDueTime);
  v12 = (*(__int64 (__fastcall **)(char *, _QWORD, __int64, __int64))(*(_QWORD *)a1 + 208LL))(a1, a2, a3, a4);
  v16 = v12;
  if ( v12 >= 0 )
    v16 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD7E,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v12);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v13, v14, v15);
  EtwEventActivityIdControl(4LL, v20);
  return v16;
}
