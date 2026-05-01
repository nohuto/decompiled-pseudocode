/*
 * XREFs of ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x180026874
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180039D90 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x18007620C (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     _lambda_edada67c8b0d3ef7052a6d737559161a_::operator() @ 0x1802128C0 (_lambda_edada67c8b0d3ef7052a6d737559161a_--operator().c)
 *     ?HandleRecoveryForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1805B3740 (-HandleRecoveryForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800262B8 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x180026A20 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180057794 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@QEAAAEAV012@PEAUIWindowingEnvironmentConfig@@@Z @ 0x1800588CC (--4-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@QEAAAEAV012@PEAUIWindowingEnvironmentC.c)
 *     ??4?$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180074D98 (--4-$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplication.c)
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIApplicationViewTabOperation@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803ECA80 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_1803ECA80.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IApplicationViewOperation **a3)
{
  __int64 v6; // rbx
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  int CanCastTo; // edi
  CDesktopPositioner *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // [rsp+20h] [rbp-10h] BYREF
  __int64 v21; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IApplicationViewTitlebarConfiguration *v23; // [rsp+68h] [rbp+38h] BYREF

  Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v21);
  v6 = v21;
  if ( !v21 )
  {
    CanCastTo = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA7D,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)0x8007000ELL,
      v20);
    goto LABEL_13;
  }
  *(_DWORD *)(v21 + 116) = 255;
  *(_DWORD *)(v6 + 120) = 97;
  *(_DWORD *)(v6 + 180) = 1;
  *(_DWORD *)(v6 + 200) = 0;
  *(_QWORD *)(v6 + 220) = 0LL;
  *(_QWORD *)(v6 + 228) = 0LL;
  *(_QWORD *)(v6 + 204) = 0LL;
  *(_QWORD *)(v6 + 212) = 0LL;
  *(_BYTE *)(v6 + 236) = 1;
  *(_QWORD *)(v6 + 240) = 0LL;
  v20 = 0LL;
  v7 = (__int64 *)*((_QWORD *)this + 43);
  v8 = *v7;
  v20 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v8 + 32))(v7, 1LL, &v20);
  CanCastTo = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA88,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v9,
      v20);
    goto LABEL_12;
  }
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::operator=(v6 + 184, v20);
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
  v12 = CDesktopPositioner::_CreateTitlebarConfiguration(v11, a2, &v23);
  CanCastTo = v12;
  if ( v12 < 0 )
  {
    v18 = (unsigned int)v12;
    v19 = 2700LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)v18,
      v20);
    goto LABEL_11;
  }
  Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=(v6 + 192, v23);
  *(_DWORD *)(v6 + 124) = 0;
  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(
                       &GUID_cc6192be_2002_4cd1_a603_e3b6795b4000,
                       &GUID_00000000_0000_0000_c000_000000000046)
    || (unsigned int)InlineIsEqualGUID(v13, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a3 = (struct IApplicationViewOperation *)v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    CanCastTo = 0;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(v14, v15) )
    {
      *a3 = (struct IApplicationViewOperation *)v6;
      CanCastTo = 0;
LABEL_8:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
      goto LABEL_9;
    }
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::ComposableShell::Tabs::IApplicationViewTabOperation,Microsoft::WRL::FtmBase>::CanCastTo(
                  v6 + 8,
                  v16,
                  a3);
    if ( CanCastTo >= 0 )
      goto LABEL_8;
  }
LABEL_9:
  if ( CanCastTo < 0 )
  {
    v18 = (unsigned int)CanCastTo;
    v19 = 2705LL;
    goto LABEL_21;
  }
  CanCastTo = 0;
LABEL_11:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
LABEL_12:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
LABEL_13:
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v21);
  return (unsigned int)CanCastTo;
}
