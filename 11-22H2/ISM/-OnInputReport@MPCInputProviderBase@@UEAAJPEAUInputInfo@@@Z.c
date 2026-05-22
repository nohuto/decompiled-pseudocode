/*
 * XREFs of ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x1800D6FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FC64 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsDesiredCursorActive@MPCHolographicInputManager@@QEAA_NW4InputType@@@Z @ 0x1800C6DBC (-IsDesiredCursorActive@MPCHolographicInputManager@@QEAA_NW4InputType@@@Z.c)
 *     ?LogInitialMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x1800D5BBC (-LogInitialMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x1800D66F4 (-LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?ReportPerf@MPCPerfCounter@@AEAAX_K@Z @ 0x1800D9680 (-ReportPerf@MPCPerfCounter@@AEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCInputProviderBase::OnInputReport(MPCInputProviderBase *this, struct InputInfo *a2)
{
  bool v4; // bp
  struct MPCHolographicInputManager *Instance; // rbx
  char *v6; // rsi
  int v7; // eax
  __int64 v8; // rcx
  bool v9; // al
  __int64 v10; // rcx
  ISMTracing *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  const char *v14; // r9
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // rdx
  MPCPerfCounter *v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // rcx
  ISMTracing *v21; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  bool v24; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_BYTE *)MPCHolographicInputManager::GetInstance() + 3364)
    && *((_QWORD *)MPCHolographicInputManager::GetInstance() + 418);
  v24 = v4;
  Instance = MPCHolographicInputManager::GetInstance();
  v6 = (char *)this + 24;
  v7 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 56LL))((char *)this + 24);
  v9 = MPCHolographicInputManager::IsDesiredCursorActive((__int64)Instance, v7)
    || (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v6 + 48LL))((char *)this + 24) != 0x40000;
  *((_BYTE *)this + 3572) = v9;
  if ( ISMTracing::IsEnabled(v8) )
  {
    wil::details::static_lazy<ISMTracing>::get(v10, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::LogInitialMPCInputReport_(v11, a2, (const bool *)this + 3572);
  }
  v12 = *(_QWORD *)v6;
  if ( v4 )
  {
    v13 = (*(__int64 (__fastcall **)(char *, struct InputInfo *))(v12 + 280))((char *)this + 24, a2);
    v15 = retaddr;
    if ( v13 >= 0 )
      goto LABEL_17;
    v16 = 226LL;
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(char *, struct InputInfo *))(v12 + 288))((char *)this + 24, a2);
    v15 = retaddr;
    if ( v13 >= 0 )
      goto LABEL_17;
    v16 = 231LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v15,
    (void *)v16,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
    (const char *)(unsigned int)v13);
LABEL_17:
  v17 = (MPCInputProviderBase *)((char *)this + 3576);
  v18 = *((_QWORD *)a2 + 2);
  if ( !*((_QWORD *)this + 450) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x46,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcperfcounter.cpp",
      v14);
  v19 = *((_QWORD *)this + 451);
  if ( !v19 )
  {
    *((_QWORD *)this + 451) = v18;
    v19 = v18;
  }
  ++*((_QWORD *)this + 452);
  if ( v18 - v19 > *((_QWORD *)this + 450) )
    MPCPerfCounter::ReportPerf(v17, v18);
  if ( ISMTracing::IsEnabled((__int64)v17) )
  {
    wil::details::static_lazy<ISMTracing>::get(v20, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::LogMPCInputReport_(v21, a2, &v24);
  }
  return 0LL;
}
