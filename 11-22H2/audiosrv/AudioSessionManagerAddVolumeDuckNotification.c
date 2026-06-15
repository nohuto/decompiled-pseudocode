/*
 * XREFs of AudioSessionManagerAddVolumeDuckNotification @ 0x1800E93B0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionManagerAddVolumeDuckNotification(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 pftDueTime; // rbx
  unsigned int v5; // edi
  __int64 *v7; // rax
  RPC_STATUS v8; // ebx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned __int64 v11; // r9
  int v12; // eax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int Pid; // [rsp+98h] [rbp+20h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v7[1],
    v5,
    (struct _TP_TIMER *)L"AudioSessionManagerAddVolumeDuckNotification",
    pftDueTime);
  v8 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( v8 )
  {
    v9 = v8 | 0x80010000;
    v10 = 1538LL;
    v11 = v9;
  }
  else
  {
    if ( !g_DuckingManager
      || (v12 = (*(__int64 (__fastcall **)(struct IAudioDuckingManager *, __int64, _QWORD, __int64))(*(_QWORD *)g_DuckingManager + 32LL))(
                  g_DuckingManager,
                  a3,
                  Pid,
                  a2),
          v9 = v12,
          v12 >= 0) )
    {
      v9 = 0;
      goto LABEL_8;
    }
    v11 = (unsigned int)v12;
    v10 = 1542LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
    (const char *)v11);
LABEL_8:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v9;
}
