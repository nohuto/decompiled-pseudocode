/*
 * XREFs of asm_GetApplicationSubmixFromId @ 0x1800D4020
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180015DEC (--1-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$make_unique@VCAppSubmixContext@@PEAUIProcessSubmixProxy@@$0A@@std@@YA?AV?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@0@$$QEAPEAUIProcessSubmixProxy@@@Z @ 0x1800D103C (--$make_unique@VCAppSubmixContext@@PEAUIProcessSubmixProxy@@$0A@@std@@YA-AV-$unique_ptr@VCAppSub.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall asm_GetApplicationSubmixFromId(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 pftDueTime; // rbx
  unsigned int v5; // edi
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 (*v8)(void); // rax
  int v9; // eax
  unsigned int v10; // ebx
  const char *v11; // r9
  __int64 result; // rax
  __int64 v13; // [rsp+30h] [rbp-68h] BYREF
  __int64 v14; // [rsp+38h] [rbp-60h] BYREF
  struct _TP_TIMER *pv[8]; // [rsp+40h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v17; // [rsp+B8h] [rbp+20h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v6 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v6[1],
    v5,
    (struct _TP_TIMER *)L"asm_GetApplicationSubmixFromId",
    pftDueTime);
  v17 = 0LL;
  v7 = *(_QWORD *)g_ProcessSubmixManager;
  v17 = 0LL;
  v8 = *(__int64 (**)(void))(v7 + 56);
  try
  {
    v9 = v8();
    v10 = v9;
    if ( v9 >= 0 )
    {
      v13 = v17;
      std::make_unique<CAppSubmixContext,IProcessSubmixProxy *,0>(&v14, &v13);
      *a3 = v14;
      wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>(&v17);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x149,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
        (const char *)(unsigned int)v9);
      wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>(&v17);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      result = v10;
    }
  }
  catch ( ... )
  {
    LODWORD(v17) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x151,
                     (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                     v11);
    return (unsigned int)v17;
  }
  return result;
}
