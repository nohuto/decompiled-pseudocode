/*
 * XREFs of AudioSessionManagerAddVolumeDuckNotification @ 0x180005FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AudioSessionManagerAddVolumeDuckNotification(__int64 a1, __int64 a2, __int64 a3)
{
  _FILETIME v3; // rbx
  RPC_STATUS v6; // ebx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // rdx
  unsigned __int64 v11; // r9
  int pftDueTime; // [rsp+20h] [rbp-58h]
  _BYTE pv[64]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int Pid; // [rsp+98h] [rbp+20h] BYREF

  v3 = g_AudioHealthMonitor;
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    a1,
    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v3);
  v6 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( v6 )
  {
    v8 = v6 | 0x80010000;
    v10 = 1548LL;
    v11 = v8;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)v11,
      pftDueTime);
    goto LABEL_5;
  }
  if ( g_DuckingManager )
  {
    v7 = (*(__int64 (__fastcall **)(struct IAudioDuckingManager *, __int64, _QWORD, __int64))(*(_QWORD *)g_DuckingManager
                                                                                            + 32LL))(
           g_DuckingManager,
           a3,
           Pid,
           a2);
    v8 = v7;
    if ( v7 < 0 )
    {
      v11 = (unsigned int)v7;
      v10 = 1552LL;
      goto LABEL_8;
    }
  }
  v8 = 0;
LABEL_5:
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v8;
}
