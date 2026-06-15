/*
 * XREFs of asm_AudioServerGetApplicationSubmixPeriod @ 0x1800D3800
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall asm_AudioServerGetApplicationSubmixPeriod(__int64 **a1, _QWORD *a2)
{
  __int64 pftDueTime; // rbx
  unsigned int v5; // edi
  __int64 *v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v14; // [rsp+80h] [rbp+8h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v6 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         (__int64)a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v6[1],
    v5,
    (struct _TP_TIMER *)L"asm_AudioServerGetApplicationSubmixPeriod",
    pftDueTime);
  v7 = *a1;
  v8 = **a1;
  v14 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v8 + 80))(v7, &v14);
  v10 = v9;
  if ( v9 >= 0 )
  {
    *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 144LL))(v14);
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)(unsigned int)v9);
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v14);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v10;
}
