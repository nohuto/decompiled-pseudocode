/*
 * XREFs of AudioVolumeDeleteMasterVolumeNotification @ 0x1800243F0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioVolumeDeleteMasterVolumeNotification(__int64 *a1)
{
  struct _FILETIME v1; // rbx
  __int64 v3; // rdi
  RPC_STATUS v4; // ebx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rdx
  unsigned __int64 v9; // r9
  int pftDueTime; // [rsp+20h] [rbp-58h]
  _BYTE pv[64]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int Pid; // [rsp+80h] [rbp+8h] BYREF

  v1 = g_AudioHealthMonitor;
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    a1,
    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v1);
  v3 = *a1;
  v4 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( v4 )
  {
    v6 = v4 | 0x80010000;
    v8 = 417LL;
    v9 = v6;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
      (const char *)v9,
      pftDueTime);
    goto LABEL_4;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 256LL))(v3, Pid);
  v6 = v5;
  if ( v5 < 0 )
  {
    v9 = (unsigned int)v5;
    v8 = 418LL;
    goto LABEL_7;
  }
  v6 = 0;
LABEL_4:
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v6;
}
