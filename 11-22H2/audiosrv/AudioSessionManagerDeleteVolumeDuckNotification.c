/*
 * XREFs of AudioSessionManagerDeleteVolumeDuckNotification @ 0x1800E9570
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionManagerDeleteVolumeDuckNotification(__int64 a1, __int64 a2)
{
  __int64 pftDueTime; // rbx
  unsigned int v4; // edi
  __int64 *v5; // rax
  RPC_STATUS v6; // ebx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned __int64 v9; // r9
  int v10; // eax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int Pid; // [rsp+90h] [rbp+18h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v4 = g_AudioSrvWatchDogTimerInMs;
  v5 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v5[1],
    v4,
    (struct _TP_TIMER *)L"AudioSessionManagerDeleteVolumeDuckNotification",
    pftDueTime);
  v6 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( v6 )
  {
    v7 = v6 | 0x80010000;
    v8 = 1553LL;
    v9 = v7;
  }
  else
  {
    if ( !g_DuckingManager
      || (v10 = (*(__int64 (__fastcall **)(struct IAudioDuckingManager *, _QWORD, __int64))(*(_QWORD *)g_DuckingManager
                                                                                          + 40LL))(
                  g_DuckingManager,
                  Pid,
                  a2),
          v7 = v10,
          v10 >= 0) )
    {
      v7 = 0;
      goto LABEL_8;
    }
    v9 = (unsigned int)v10;
    v8 = 1557LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
    (const char *)v9);
LABEL_8:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v7;
}
