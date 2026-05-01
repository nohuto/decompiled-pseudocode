/*
 * XREFs of ?CPPIAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x180104AD8
 * Callers:
 *     ?_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x18010792C (-_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ??$MakeAndInitialize@VCPPIAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@YAJPEAPEAVCPPIAllUpViewService@@AEAPEAUIMultitaskingViewTaskScheduler@@@Z @ 0x1801036C0 (--$MakeAndInitialize@VCPPIAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@W.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIPPIAllUpViewService@@UIPPIAllUpViewInvoker@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180104A50 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_180104A50.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPPIAllUpViewService@@@WRL@Microsoft@@IEAAKXZ @ 0x18014020C (-InternalRelease@-$ComPtr@VCPPIAllUpViewService@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPPIAllUpViewService_CreateInstance(
        struct IMultitaskingViewTaskScheduler *a1,
        const struct _GUID *a2,
        void **a3)
{
  int v4; // eax
  int CanCastTo; // ebx
  _DWORD *v6; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  CPPIAllUpViewService *v10; // rcx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IMultitaskingViewTaskScheduler *v13; // [rsp+30h] [rbp+8h] BYREF
  CPPIAllUpViewService *v14; // [rsp+38h] [rbp+10h] BYREF

  v13 = a1;
  *a3 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<CPPIAllUpViewService>::InternalRelease(&v14);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CPPIAllUpViewService,CPPIAllUpViewService,IMultitaskingViewTaskScheduler * &>(
         &v14,
         (__int64 *)&v13);
  CanCastTo = v4;
  if ( v4 < 0 )
  {
    v8 = (unsigned int)v4;
    v9 = 82LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewservice.cpp",
      (const char *)v8,
      v11);
    goto LABEL_6;
  }
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_6df90204_2291_4c35_98cd_722f8a0cad7e, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v10 = v14;
    *a3 = v14;
    (*(void (__fastcall **)(CPPIAllUpViewService *))(*(_QWORD *)v10 + 8LL))(v10);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IPPIAllUpViewService,IPPIAllUpViewInvoker>::CanCastTo(
                  (__int64)v14,
                  v6,
                  a3);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
  if ( CanCastTo < 0 )
  {
    v8 = (unsigned int)CanCastTo;
    v9 = 83LL;
    goto LABEL_10;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<CPPIAllUpViewService>::InternalRelease(&v14);
  return (unsigned int)CanCastTo;
}
