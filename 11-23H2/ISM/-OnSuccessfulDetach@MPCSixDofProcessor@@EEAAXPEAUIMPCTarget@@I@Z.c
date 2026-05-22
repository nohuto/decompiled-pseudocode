/*
 * XREFs of ?OnSuccessfulDetach@MPCSixDofProcessor@@EEAAXPEAUIMPCTarget@@I@Z @ 0x1801DF0E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MPCInputProviderSourceDetectedLost@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@_NAEAI@ISMTracing@@SAXAEAPEAUIMPCTarget@@$$QEAPEAULegacyInputInfo@@$$QEA_NAEAI@Z @ 0x1800C468C (--$MPCInputProviderSourceDetectedLost@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@_NAEAI@ISMTracing@.c)
 */

void __fastcall MPCSixDofProcessor::OnSuccessfulDetach(
        MPCSixDofProcessor *this,
        struct IMPCTarget *a2,
        unsigned int a3)
{
  __int64 v6; // rcx
  int v7; // eax
  bool v8; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v9; // [rsp+28h] [rbp-28h] BYREF
  struct LegacyInputInfo *v10; // [rsp+30h] [rbp-20h] BYREF
  __int128 v11; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  if ( *((_BYTE *)this + 10800) )
  {
    v6 = *((_QWORD *)this + 5);
    v11 = 0LL;
    LODWORD(v11) = 2;
    DWORD2(v11) = 1;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v6 + 72LL))(
           v6,
           *((unsigned int *)this + 141),
           &v11);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        813LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
        (const char *)(unsigned int)v7);
  }
  v9 = a3;
  v10 = (MPCSixDofProcessor *)((char *)this + 560);
  *(_QWORD *)&v11 = a2;
  v8 = 0;
  ISMTracing::MPCInputProviderSourceDetectedLost<IMPCTarget * &,LegacyInputInfo *,bool,unsigned int &>(
    (struct IMPCTarget **)&v11,
    &v10,
    &v8,
    &v9);
  *((_BYTE *)this + 3569) = 1;
}
