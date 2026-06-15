/*
 * XREFs of AudioSessionManagerDeleteVolumeDuckNotification @ 0x18003C940
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AudioSessionManagerDeleteVolumeDuckNotification(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // edi
  __int64 *v5; // rax
  __int64 v6; // rdx
  RPC_STATUS v7; // ebx
  __int64 v8; // r8
  int v9; // r9d
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  int pftDueTime; // [rsp+20h] [rbp-58h]
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int Pid; // [rsp+90h] [rbp+18h] BYREF

  v2 = (__int64)g_AudioHealthMonitor;
  v4 = g_AudioSrvWatchDogTimerInMs;
  v5 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v5[1],
    v4,
    (struct _TP_TIMER *)L"AudioSessionManagerDeleteVolumeDuckNotification",
    v2);
  v7 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( v7 )
  {
    v11 = v7 | 0x80010000;
    v13 = 1563LL;
    v14 = v11;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)v14,
      pftDueTime);
    goto LABEL_5;
  }
  if ( g_DuckingManager )
  {
    v10 = (*(__int64 (__fastcall **)(struct IAudioDuckingManager *, _QWORD, __int64))(*(_QWORD *)g_DuckingManager + 40LL))(
            g_DuckingManager,
            Pid,
            a2);
    v11 = v10;
    if ( v10 < 0 )
    {
      v14 = (unsigned int)v10;
      v13 = 1567LL;
      goto LABEL_8;
    }
  }
  v11 = 0;
LABEL_5:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v6, v8, v9);
  return v11;
}
