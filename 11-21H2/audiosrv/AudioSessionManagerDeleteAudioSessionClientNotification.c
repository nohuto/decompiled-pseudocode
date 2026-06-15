/*
 * XREFs of AudioSessionManagerDeleteAudioSessionClientNotification @ 0x1800E1E50
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AudioSessionManagerDeleteAudioSessionClientNotification(_QWORD *a1)
{
  _QWORD *v1; // rsi
  __int64 pftDueTime; // rbx
  unsigned int v3; // edi
  __int64 *v4; // rax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // r9d
  unsigned int v9; // ebx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = (_QWORD *)*a1;
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v3 = g_AudioSrvWatchDogTimerInMs;
  v4 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         (__int64)a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v4[1],
    v3,
    (struct _TP_TIMER *)L"AudioSessionManagerDeleteAudioSessionClientNotification",
    pftDueTime);
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*v1 + 96LL) + 24LL))(*(_QWORD *)(*v1 + 96LL), v1[1]);
  v9 = v5;
  if ( v5 >= 0 )
    v9 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x602,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v5);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v6, v7, v8);
  return v9;
}
