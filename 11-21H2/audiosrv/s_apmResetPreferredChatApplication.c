/*
 * XREFs of s_apmResetPreferredChatApplication @ 0x180110C30
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall s_apmResetPreferredChatApplication(__int64 a1)
{
  __int64 pftDueTime; // rbx
  unsigned int v2; // edi
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // r9d
  int v7; // eax
  unsigned int v8; // ebx
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v12; // [rsp+88h] [rbp+10h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v2 = g_AudioSrvWatchDogTimerInMs;
  v3 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v3[1],
    v2,
    (struct _TP_TIMER *)L"s_apmResetPreferredChatApplication",
    pftDueTime);
  if ( !g_PolicyManager )
    goto LABEL_6;
  v12 = 0LL;
  if ( (**(int (__fastcall ***)(struct IAudioPolicyManager *, GUID *, __int64 *))g_PolicyManager)(
         g_PolicyManager,
         &GUID_b7bf3b49_fafe_4512_ab94_c5681657aed0,
         &v12) < 0
    || (v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 96LL))(v12), v8 = v7, v7 >= 0) )
  {
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v12);
LABEL_6:
    v8 = 0;
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B7,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\playbackmanagerrpc.cpp",
    (const char *)(unsigned int)v7);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v12);
LABEL_7:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v4, v5, v6);
  return v8;
}
