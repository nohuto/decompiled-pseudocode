/*
 * XREFs of ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x1800C7C90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180040694 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsDesiredCursorActive@MPCHolographicInputManager@@QEAA_NW4InputType@@@Z @ 0x1800B56AC (-IsDesiredCursorActive@MPCHolographicInputManager@@QEAA_NW4InputType@@@Z.c)
 *     ??$LogInitialMPCInputReport@AEAPEAUInputInfo@@AEA_N@ISMTracing@@SAXAEAPEAUInputInfo@@AEA_N@Z @ 0x1800C4218 (--$LogInitialMPCInputReport@AEAPEAUInputInfo@@AEA_N@ISMTracing@@SAXAEAPEAUInputInfo@@AEA_N@Z.c)
 *     ??$LogMPCInputReport@AEAPEAUInputInfo@@AEA_N@ISMTracing@@SAXAEAPEAUInputInfo@@AEA_N@Z @ 0x1800C42D8 (--$LogMPCInputReport@AEAPEAUInputInfo@@AEA_N@ISMTracing@@SAXAEAPEAUInputInfo@@AEA_N@Z.c)
 *     ?ReportPerf@MPCPerfCounter@@AEAAX_K@Z @ 0x1800CA424 (-ReportPerf@MPCPerfCounter@@AEAAX_K@Z.c)
 */

__int64 __fastcall MPCInputProviderBase::OnInputReport(MPCInputProviderBase *this, struct InputInfo *a2)
{
  bool v4; // bp
  char *v5; // rdi
  struct MPCHolographicInputManager *Instance; // rbx
  int v7; // eax
  bool v8; // al
  __int64 v9; // rax
  int v10; // eax
  const char *v11; // r9
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  bool v17; // [rsp+40h] [rbp+8h] BYREF
  struct InputInfo *v18; // [rsp+48h] [rbp+10h] BYREF

  v18 = a2;
  v4 = *((_BYTE *)MPCHolographicInputManager::GetInstance() + 3364)
    && *((_QWORD *)MPCHolographicInputManager::GetInstance() + 418);
  v17 = v4;
  v5 = (char *)this + 24;
  Instance = MPCHolographicInputManager::GetInstance();
  v7 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 56LL))((char *)this + 24);
  v8 = MPCHolographicInputManager::IsDesiredCursorActive((__int64)Instance, v7)
    || (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v5 + 48LL))((char *)this + 24) != 0x40000;
  *((_BYTE *)this + 3572) = v8;
  ISMTracing::LogInitialMPCInputReport<InputInfo * &,bool &>(&v18, (const bool *)this + 3572);
  v9 = *(_QWORD *)v5;
  if ( v4 )
  {
    v10 = (*(__int64 (__fastcall **)(char *, struct InputInfo *))(v9 + 280))((char *)this + 24, a2);
    if ( v10 >= 0 )
      goto LABEL_15;
    v12 = 226LL;
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(char *, struct InputInfo *))(v9 + 288))((char *)this + 24, a2);
    if ( v10 >= 0 )
      goto LABEL_15;
    v12 = 231LL;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    v12,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
    (const char *)(unsigned int)v10);
LABEL_15:
  v13 = *((_QWORD *)a2 + 2);
  if ( !*((_QWORD *)this + 450) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x46,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcperfcounter.cpp",
      v11);
  v14 = *((_QWORD *)this + 451);
  if ( !v14 )
  {
    *((_QWORD *)this + 451) = v13;
    v14 = v13;
  }
  ++*((_QWORD *)this + 452);
  if ( v13 - v14 > *((_QWORD *)this + 450) )
    MPCPerfCounter::ReportPerf((MPCInputProviderBase *)((char *)this + 3576), v13);
  ISMTracing::LogMPCInputReport<InputInfo * &,bool &>(&v18, &v17);
  return 0LL;
}
