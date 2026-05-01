/*
 * XREFs of _lambda_10d04f2f2676f3bcd785d385c5de414a_::operator() @ 0x1801D0810
 * Callers:
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x1803A25E4 (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x1801BDC3C (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_ce925e2c65fa70a9c2e11950913c80c9___ @ 0x1801CFF68 (ShellPositionerHelpers--PerformCallbackOnView__lambda_ce925e2c65fa70a9c2e11950913c80c9___.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_10d04f2f2676f3bcd785d385c5de414a_::operator()(__int64 a1, bool *a2)
{
  __int64 *Ptr; // rcx
  __int64 v5; // rax
  int v6; // eax
  int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 *v11; // rax
  __int128 v13; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  char v15; // [rsp+50h] [rbp+20h] BYREF
  __int64 v16; // [rsp+58h] [rbp+28h] BYREF
  __int64 v17; // [rsp+60h] [rbp+30h] BYREF

  *a2 = 1;
  v16 = 0LL;
  Ptr = (__int64 *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  v5 = *Ptr;
  v16 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v5 + 56))(Ptr, **(_QWORD **)a1, &v16);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v15 = 1;
    *(_QWORD *)&v13 = &v15;
    *((_QWORD *)&v13 + 1) = &v16;
    v10 = v16;
    v11 = CWRLObjectWithGITSite::SiteUnk(*(_QWORD *)(a1 + 8) + 48LL, &v17);
    v7 = ShellPositionerHelpers::PerformCallbackOnView__lambda_ce925e2c65fa70a9c2e11950913c80c9___(
           (IUnknown *)*v11,
           v10,
           &v13);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
    if ( v7 >= 0 )
    {
      *a2 = v15 != 0;
      v7 = 0;
      goto LABEL_7;
    }
    v8 = (unsigned int)v7;
    v9 = 7101LL;
  }
  else
  {
    v8 = (unsigned int)v6;
    v9 = 7087LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)v8);
LABEL_7:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
  return (unsigned int)v7;
}
