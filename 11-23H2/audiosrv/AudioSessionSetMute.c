/*
 * XREFs of AudioSessionSetMute @ 0x1800E68B0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionSetMute(__int64 *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 pftDueTime; // rbx
  unsigned int v7; // edi
  __int64 *v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = *a1;
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  v10 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          (__int64)a1,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v10[1],
    v7,
    (struct _TP_TIMER *)L"AudioSessionSetMute",
    pftDueTime);
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v4 + 312LL))(v4, a2, a3, a4);
  v12 = v11;
  if ( v11 >= 0 )
    v12 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x839,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessioncontrol.cpp",
      (const char *)(unsigned int)v11);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v12;
}
