/*
 * XREFs of ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x1802FD200
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_e0406ff635fb08f1c21915f069992ce2___1_long_::Invoke @ 0x1802F69D0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F69D0.c)
 * Callees:
 *     ?WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHWND__@@@Z @ 0x180027BA4 (-WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHW.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x180027C4C (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ?MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Internal@Windows@@@Z @ 0x1800288EC (-MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Inter.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180036348 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1800585E4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006BBE8 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180075104 (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180093360 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802DB634 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802DEFE0 (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??$?0$0DO@@StringReference@Internal@Windows@@QEAA@AEAY0DO@$$CBG@Z @ 0x1802F279C (--$-0$0DO@@StringReference@Internal@Windows@@QEAA@AEAY0DO@$$CBG@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIModalExperienceDefaultOptions@ModalExperience@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIModalExperienceDefaultOptions@ModalExperience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1802F28A0 (--$ActivateInstance@V-$ComPtr@UIModalExperienceDefaultOptions@ModalExperience@Shell@Internal@Win.c)
 *     ??$As@UIPropertySet@Collections@Foundation@Windows@@@?$ComPtr@UIModalExperienceDefaultOptions@ModalExperience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802F28D8 (--$As@UIPropertySet@Collections@Foundation@Windows@@@-$ComPtr@UIModalExperienceDefaultOptions@Mo.c)
 *     ??0EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1802F37AC (--0EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??1EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1802F3C9C (--1EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??4EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802F3E58 (--4EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z @ 0x1802F4DEC (-CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z.c)
 *     ?SetSizeHintHeight@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@M@Z @ 0x1802F7724 (-SetSizeHintHeight@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Wi.c)
 *     ?SetSizeHintWidth@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@M@Z @ 0x1802F77C4 (-SetSizeHintWidth@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Win.c)
 *     ?SetTargetPresenterKind@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@W4ApplicationWindowPresenterKindInternal@WindowingEnvironment@ApplicationModel@45@@Z @ 0x1802F792C (-SetTargetPresenterKind@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Intern.c)
 *     ?SetTargetViewMode@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@W4ApplicationViewMode@ViewManagement@UI@5@@Z @ 0x1802F79C8 (-SetTargetViewMode@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Wi.c)
 *     ?StartActivity@EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAXPEBGW4CompactOverlayEnterStyle@@@Z @ 0x1802F857C (-StartActivity@EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAXPEBGW4CompactOverla.c)
 *     ?IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180321534 (-IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=25
__int64 __fastcall CAppViewManager::_ShowAsViewModeWorker(
        IUnknown **this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *a2,
        struct IPresentationRequestedArgs *a3)
{
  float v3; // xmm2_4
  unsigned int v7; // r15d
  __int64 (__fastcall *v8)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rbx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 (__fastcall *v18)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, GUID *, LPVOID *); // rbx
  int v19; // eax
  LPVOID v20; // rbx
  __int64 (__fastcall *v21)(LPVOID, __int64 *); // rdi
  int v22; // eax
  int v23; // ebx
  HWND v24; // r14
  HRESULT v25; // eax
  void *v26; // rbx
  __int64 (__fastcall *v27)(void *, HWND, __int64 *); // rdi
  __int64 *AddressOf; // rax
  int v29; // eax
  HSTRING v30; // rbx
  int (__fastcall *v31)(HSTRING, GUID *, HWND *); // rdi
  struct IApplicationView *v32; // rdx
  bool v33; // di
  int v34; // eax
  __int64 *p_ppvOut; // rcx
  __int64 *v36; // rcx
  HRESULT Service; // eax
  HWND v38; // rbx
  __int64 (__fastcall *v39)(HWND, HWND, __int64 *); // rdi
  __int64 *v40; // rax
  int v41; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *v42; // rbx
  __int64 (__fastcall *v43)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, HSTRING_HEADER *); // rdi
  int v44; // eax
  PVOID Reserved1; // rbx
  int v46; // eax
  __int64 v47; // rdx
  struct Windows::Internal::ShellHelpers::PropertySetHelper *v48; // rdx
  struct Windows::Internal::ShellHelpers::PropertySetHelper *v49; // rdx
  int v50; // eax
  WINBOOL v51; // edx
  __int64 v52; // rdx
  HSTRING v53; // rax
  HSTRING v54; // rbx
  int v55; // eax
  int v56; // eax
  __int64 v57; // rdx
  const unsigned __int16 *v58; // rdx
  __int64 *v59; // rax
  int v60; // eax
  int v61; // eax
  __int64 v62; // r8
  int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r8
  __int64 v67; // r8
  char v68; // di
  __int64 v69; // r8
  __int64 v70; // r8
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v71; // rbx
  __int64 (__fastcall *v72)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING *); // rdi
  int v73; // eax
  __int64 v74; // rdx
  HRESULT v75; // eax
  __int64 v76; // rdx
  LPVOID v77; // rbx
  __int64 (__fastcall *v78)(LPVOID, void *, GUID *, __int64 *); // rdi
  int ppv; // [rsp+20h] [rbp-E0h]
  HWND v81; // [rsp+40h] [rbp-C0h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v82; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING string; // [rsp+50h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v84)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-A8h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *v85; // [rsp+60h] [rbp-A0h] BYREF
  void *ppvOut; // [rsp+68h] [rbp-98h] BYREF
  __int64 v87; // [rsp+70h] [rbp-90h] BYREF
  LPVOID v88; // [rsp+78h] [rbp-88h] BYREF
  int v89; // [rsp+80h] [rbp-80h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v90; // [rsp+88h] [rbp-78h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v91; // [rsp+90h] [rbp-70h] BYREF
  HWND v92; // [rsp+98h] [rbp-68h] BYREF
  int v93; // [rsp+A0h] [rbp-60h] BYREF
  HSTRING_HEADER v94; // [rsp+A8h] [rbp-58h] BYREF
  HSTRING v95; // [rsp+C0h] [rbp-40h]
  HSTRING_HEADER hstringHeader; // [rsp+C8h] [rbp-38h] BYREF
  HSTRING v97; // [rsp+E0h] [rbp-20h]
  _QWORD v98[40]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v99[40]; // [rsp+230h] [rbp+130h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3B8h] [rbp+2B8h]

  v7 = 0;
  v90 = 0LL;
  v8 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)a2 + 48LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v90);
  v9 = v8(a2, &v90);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v9 = WindowFromViewWrapper(
           (__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *))v90,
           &v81);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 2039LL;
      goto LABEL_5;
    }
    v91 = 0LL;
    v12 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)a2 + 56LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v91);
    v13 = v12(a2, &v91);
    v10 = v13;
    if ( v13 < 0 )
    {
      v14 = 2043LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v13);
LABEL_145:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v91);
      goto LABEL_146;
    }
    v13 = WindowFromViewWrapper(
            (__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *))v91,
            &v92);
    v10 = v13;
    if ( v13 < 0 )
    {
      v14 = 2044LL;
      goto LABEL_12;
    }
    v89 = 0;
    v13 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, int *))(*(_QWORD *)a2 + 72LL))(
            a2,
            &v89);
    v10 = v13;
    if ( v13 < 0 )
    {
      v14 = 2047LL;
      goto LABEL_12;
    }
    if ( (unsigned int)(v89 - 1) > 1 )
    {
      v13 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)a2 + 64LL))(
              a2,
              &v84);
      v10 = v13;
      if ( v13 < 0 )
      {
        v14 = 2095LL;
        goto LABEL_12;
      }
      v94.Reserved.Reserved1 = 0LL;
      *(_DWORD *)&v94.Reserved.Reserved2[8] = 0;
      *(_QWORD *)&v94.Reserved.Reserved2[16] = 0LL;
      v13 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, HSTRING_HEADER *))(*(_QWORD *)a2 + 80LL))(
              a2,
              &v94);
      v10 = v13;
      if ( v13 < 0 )
      {
        v14 = 2098LL;
        goto LABEL_12;
      }
      v13 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, char *))(*(_QWORD *)a2 + 88LL))(
              a2,
              &v94.Reserved.Reserved2[4]);
      v10 = v13;
      if ( v13 < 0 )
      {
        v14 = 2099LL;
        goto LABEL_12;
      }
      v13 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, char *))(*(_QWORD *)a2 + 112LL))(
              a2,
              &v94.Reserved.Reserved2[8]);
      v10 = v13;
      if ( v13 < 0 )
      {
        v14 = 2100LL;
        goto LABEL_12;
      }
      v13 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, int *))(*(_QWORD *)a2 + 96LL))(
              a2,
              &v93);
      v10 = v13;
      if ( v13 < 0 )
      {
        v14 = 2103LL;
        goto LABEL_12;
      }
      v82 = 0LL;
      v15 = Windows::Internal::ShellHelpers::PropertySetHelper::CreateFromValueSet((struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v82);
      v10 = v15;
      if ( v15 < 0 )
      {
        v16 = 2107LL;
LABEL_28:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v15);
LABEL_85:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v82);
        goto LABEL_145;
      }
      v97 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"ClientRequestedNavigationType",
        0x1Eu,
        0x1Du);
      v15 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v82,
              v97,
              v17,
              2u);
      v10 = v15;
      if ( v15 < 0 )
      {
        v16 = 2109LL;
        goto LABEL_28;
      }
      v88 = 0LL;
      v18 = **(__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, GUID *, LPVOID *))a2;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v88);
      v19 = v18(a2, &GUID_ca746cf0_7375_4d7a_9d29_6c72d8b5e684, &v88);
      if ( v19 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          2117LL,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v19,
          ppv);
      v87 = 0LL;
      v20 = v88;
      v21 = *(__int64 (__fastcall **)(LPVOID, __int64 *))(*(_QWORD *)v88 + 48LL);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v87);
      v22 = v21(v20, &v87);
      v10 = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x848,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v22);
LABEL_84:
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v87);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v88);
        goto LABEL_85;
      }
      v23 = 0;
      if ( v87 && (*(int (__fastcall **)(__int64, void **))(*(_QWORD *)v87 + 48LL))(v87, &ppvOut) >= 0 )
      {
        v23 = (int)ppvOut;
        if ( (_DWORD)ppvOut )
        {
          if ( (_DWORD)ppvOut == 1 )
            LODWORD(v84) = 1;
        }
        else
        {
          LODWORD(v84) = 0;
        }
      }
      CAppViewManagerTelemetry::EnterCompactOverlayModeForView::EnterCompactOverlayModeForView((CAppViewManagerTelemetry::EnterCompactOverlayModeForView *)v98);
      v24 = v81;
      if ( v23 == 2 )
      {
        ppvOut = 0LL;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
        v25 = IUnknown_QueryService(
                this[15],
                &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
                &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
                &ppvOut);
        v10 = v25;
        if ( v25 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x866,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v25);
LABEL_49:
          p_ppvOut = (__int64 *)&ppvOut;
LABEL_50:
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(p_ppvOut);
LABEL_83:
          CAppViewManagerTelemetry::EnterCompactOverlayModeForView::~EnterCompactOverlayModeForView((CAppViewManagerTelemetry::EnterCompactOverlayModeForView *)v98);
          goto LABEL_84;
        }
        string = 0LL;
        v26 = ppvOut;
        v27 = *(__int64 (__fastcall **)(void *, HWND, __int64 *))(*(_QWORD *)ppvOut + 48LL);
        AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&string);
        v29 = v27(v26, v24, AddressOf);
        v10 = v29;
        if ( v29 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x869,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v29);
LABEL_48:
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&string);
          goto LABEL_49;
        }
        v81 = 0LL;
        v30 = string;
        v31 = **(int (__fastcall ***)(HSTRING, GUID *, HWND *))string;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v81);
        if ( v31(v30, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v81) < 0
          || FullScreenPositionerHelpers::IsFullScreenModeDisabledForView((FullScreenPositionerHelpers *)string, v32) )
        {
          v33 = 0;
        }
        else
        {
          v33 = 1;
          v34 = ViewModePreferencesHelpers::SetTargetPresenterKind(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v82,
                  2u);
          v10 = v34;
          if ( v34 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x871,
              (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
              (const char *)(unsigned int)v34);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v81);
            goto LABEL_48;
          }
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v81);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&string);
        v36 = (__int64 *)&ppvOut;
LABEL_76:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v36);
        if ( !v33 )
        {
          v50 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, __int64))(*(_QWORD *)a2 + 104LL))(
                  a2,
                  1LL);
          v10 = v50;
          if ( v50 < 0 )
          {
            v52 = 2222LL;
LABEL_82:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v52,
              (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
              (const char *)(unsigned int)v50);
            goto LABEL_83;
          }
          goto LABEL_95;
        }
LABEL_87:
        v85 = a2;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v85);
        v81 = (HWND)a2;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v81);
        v53 = (HSTRING)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
        v54 = v53;
        if ( v53 )
        {
          Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>((__int64)v53);
          *((_QWORD *)v54 + 2) = 0LL;
          if ( v54 + 4 != (HSTRING)&v81 )
          {
            *((_QWORD *)v54 + 2) = a2;
            v81 = 0LL;
          }
          *(_QWORD *)v54 = off_180648850;
        }
        else
        {
          v54 = 0LL;
        }
        string = v54;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v81);
        v55 = CAppViewManager::_ShowViewAsyncWorker(
                (CAppViewManager *)this,
                v24,
                v92,
                (const struct CAppViewManager::ShowViewAsyncOptions *)&v94,
                v82,
                (struct IAsyncCallback *)v54,
                a3);
        if ( v55 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x8AA,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v55);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&string);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v85);
LABEL_95:
        if ( *(_DWORD *)v98[6] == 1 )
          wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
            (__int64)v98,
            v51);
        CAppViewManagerTelemetry::EnterCompactOverlayModeForView::~EnterCompactOverlayModeForView((CAppViewManagerTelemetry::EnterCompactOverlayModeForView *)v98);
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v87);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v88);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v82);
        goto LABEL_144;
      }
      if ( (_DWORD)v84 != 1 )
      {
        if ( !(_DWORD)v84 )
        {
          v50 = ViewModePreferencesHelpers::SetTargetViewMode(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v82,
                  0);
          v10 = v50;
          if ( v50 < 0 )
          {
            v52 = 2193LL;
            goto LABEL_82;
          }
          MoveTryPositionPropertiesToPropertySet(v24, (struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v82);
        }
        goto LABEL_87;
      }
      v81 = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v81);
      Service = IUnknown_QueryService(
                  this[15],
                  &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
                  &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
                  (void **)&v81);
      v10 = Service;
      if ( Service < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x877,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)Service);
LABEL_74:
        p_ppvOut = (__int64 *)&v81;
        goto LABEL_50;
      }
      v85 = 0LL;
      v38 = v81;
      v39 = *(__int64 (__fastcall **)(HWND, HWND, __int64 *))(*(_QWORD *)v81 + 48LL);
      v40 = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v85);
      v41 = v39(v38, v24, v40);
      v10 = v41;
      if ( v41 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x87A,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v41);
LABEL_73:
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v85);
        goto LABEL_74;
      }
      memset(&hstringHeader, 0, sizeof(hstringHeader));
      v42 = v85;
      v43 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, HSTRING_HEADER *))(*(_QWORD *)v85 + 136LL);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = -1LL;
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = -1LL;
      v44 = v43(v42, &hstringHeader);
      v10 = v44;
      if ( v44 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x87C,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v44);
LABEL_72:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
        goto LABEL_73;
      }
      LOBYTE(v7) = v92 != v24;
      Reserved1 = hstringHeader.Reserved.Reserved1;
      wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v99,
        (__int64)"EnterCompactOverlayModeForView");
      v99[0] = &CAppViewManagerTelemetry::EnterCompactOverlayModeForView::`vftable';
      CAppViewManagerTelemetry::EnterCompactOverlayModeForView::StartActivity((__int64)v99, (__int64)Reserved1, v7 ^ 1);
      CAppViewManagerTelemetry::EnterCompactOverlayModeForView::operator=(v98, (__int64)v99);
      CAppViewManagerTelemetry::EnterCompactOverlayModeForView::~EnterCompactOverlayModeForView((CAppViewManagerTelemetry::EnterCompactOverlayModeForView *)v99);
      string = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&string);
      v46 = IUnknown_QueryService(
              this[15],
              &GUID_4d20c9ad_7836_4782_add6_8d92387ee831,
              &GUID_4d20c9ad_7836_4782_add6_8d92387ee831,
              (void **)&string);
      v10 = v46;
      if ( v46 >= 0 )
      {
        v46 = (*(__int64 (__fastcall **)(HSTRING, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, _QWORD, void **))(*(_QWORD *)string + 96LL))(
                string,
                v85,
                v7,
                &ppvOut);
        v10 = v46;
        if ( v46 >= 0 )
        {
          v33 = (_DWORD)ppvOut != 0;
          if ( (_DWORD)ppvOut )
          {
            v46 = ViewModePreferencesHelpers::SetTargetViewMode(
                    (Windows::Internal::ShellHelpers::PropertySetHelper *)&v82,
                    (unsigned int)v84);
            v10 = v46;
            if ( v46 < 0 )
            {
              v47 = 2185LL;
              goto LABEL_71;
            }
            v46 = ViewModePreferencesHelpers::SetSizeHintWidth((ViewModePreferencesHelpers *)&v82, v48, v3);
            v10 = v46;
            if ( v46 < 0 )
            {
              v47 = 2186LL;
              goto LABEL_71;
            }
            v46 = ViewModePreferencesHelpers::SetSizeHintHeight((ViewModePreferencesHelpers *)&v82, v49, v3);
            v10 = v46;
            if ( v46 < 0 )
            {
              v47 = 2187LL;
              goto LABEL_71;
            }
          }
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&string);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v85);
          v36 = (__int64 *)&v81;
          goto LABEL_76;
        }
        v47 = 2180LL;
      }
      else
      {
        v47 = 2177LL;
      }
LABEL_71:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v47,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v46);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&string);
      goto LABEL_72;
    }
    v85 = 0LL;
    v56 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v91,
            (__int64 *)&v85);
    v10 = v56;
    if ( v56 < 0 )
    {
      v57 = 2052LL;
LABEL_102:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v57,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v56);
LABEL_142:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v85);
      goto LABEL_145;
    }
    v56 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, void **))(*(_QWORD *)v85 + 48LL))(
            v85,
            &ppvOut);
    v10 = v56;
    if ( v56 < 0 )
    {
      v57 = 2054LL;
      goto LABEL_102;
    }
    v84 = 0LL;
    v59 = (__int64 *)Windows::Internal::StringReference::StringReference(
                       (HSTRING *)&v94,
                       (const unsigned __int16 (*)[62])v58);
    v60 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ModalExperience::IModalExperienceDefaultOptions>>(
            *v59,
            (__int64 *)&v84);
    v10 = v60;
    if ( v60 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x80C,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v60);
LABEL_141:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v84);
      goto LABEL_142;
    }
    v81 = 0LL;
    v61 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ModalExperience::IModalExperienceDefaultOptions>::As<Windows::Foundation::Collections::IPropertySet>(
            &v84,
            (__int64 *)&v81);
    v10 = v61;
    if ( v61 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x80F,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v61);
LABEL_140:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v81);
      goto LABEL_141;
    }
    v82 = (struct Windows::Foundation::Collections::IPropertySet *)v81;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v82);
    v95 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v94,
      L"ModalExperienceOption.ShouldDisplayFullscreen",
      0x2Eu,
      0x2Du);
    v63 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v82,
            v95,
            v62,
            0);
    v10 = v63;
    if ( v63 < 0 )
    {
      v64 = 2066LL;
LABEL_125:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v64,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v63);
LABEL_139:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v82);
      goto LABEL_140;
    }
    v95 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v94,
      L"ModalExperienceOption.SuppressSplashscreen",
      0x2Bu,
      0x2Au);
    v63 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v82,
            v95,
            v65,
            1);
    v10 = v63;
    if ( v63 < 0 )
    {
      v64 = 2067LL;
      goto LABEL_125;
    }
    v95 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v94,
      L"ModalExperienceOption.SuppressTitleBar",
      0x27u,
      0x26u);
    v63 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v82,
            v95,
            v66,
            0);
    v10 = v63;
    if ( v63 < 0 )
    {
      v64 = 2068LL;
      goto LABEL_125;
    }
    v95 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v94,
      L"ModalExperienceOption.LinkAsTreeNode",
      0x25u,
      0x24u);
    v63 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v82,
            v95,
            v67,
            1);
    v10 = v63;
    if ( v63 < 0 )
    {
      v64 = 2069LL;
      goto LABEL_125;
    }
    v68 = v89 == 1;
    v95 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v94,
      L"ModalExperienceOption.DismissOnIdle",
      0x24u,
      0x23u);
    v63 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v82,
            v95,
            v69,
            v68);
    v10 = v63;
    if ( v63 < 0 )
    {
      v64 = 2072LL;
      goto LABEL_125;
    }
    v95 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v94,
      L"ModalExperienceOption.ShouldLightDismiss",
      0x29u,
      0x28u);
    v63 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v82,
            v95,
            v70,
            v68);
    v10 = v63;
    if ( v63 < 0 )
    {
      v64 = 2073LL;
      goto LABEL_125;
    }
    v63 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, HWND *))(*(_QWORD *)a2 + 96LL))(
            a2,
            &v92);
    v10 = v63;
    if ( v63 < 0 )
    {
      v64 = 2076LL;
      goto LABEL_125;
    }
    v63 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), HWND))(*v84)[6])(v84, v92);
    v10 = v63;
    if ( v63 < 0 )
    {
      v64 = 2077LL;
      goto LABEL_125;
    }
    v63 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD))(*v84)[10])(v84, 0LL);
    v10 = v63;
    if ( v63 < 0 )
    {
      v64 = 2078LL;
      goto LABEL_125;
    }
    string = 0LL;
    v71 = v90;
    v72 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING *))(*(_QWORD *)v90 + 480LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v73 = v72(v71, &string);
    v10 = v73;
    if ( v73 >= 0 )
    {
      v73 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), HSTRING))(*v84)[12])(
              v84,
              string);
      v10 = v73;
      if ( v73 >= 0 )
      {
        v87 = 0LL;
        v88 = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v88);
        v75 = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 0x404u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &v88);
        v10 = v75;
        if ( v75 >= 0 )
        {
          v77 = v88;
          v78 = *(__int64 (__fastcall **)(LPVOID, void *, GUID *, __int64 *))(*(_QWORD *)v88 + 24LL);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v87);
          v75 = v78(v77, &unk_1806D5290, &GUID_73ef35c2_3adf_4ac8_8383_0850e26e9683, &v87);
          v10 = v75;
          if ( v75 >= 0 )
          {
            v75 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, _QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v87 + 48LL))(
                    v87,
                    v90,
                    (unsigned int)ppvOut,
                    v84);
            v10 = v75;
            if ( v75 >= 0 )
            {
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v88);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v87);
              WindowsDeleteString(string);
              string = 0LL;
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v82);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v81);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v84);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v85);
LABEL_144:
              v10 = 0;
              goto LABEL_145;
            }
            v76 = 2090LL;
          }
          else
          {
            v76 = 2088LL;
          }
        }
        else
        {
          v76 = 2087LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v76,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v75);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v88);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v87);
        goto LABEL_138;
      }
      v74 = 2082LL;
    }
    else
    {
      v74 = 2081LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v74,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v73);
LABEL_138:
    WindowsDeleteString(string);
    string = 0LL;
    goto LABEL_139;
  }
  v11 = 2038LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_146:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v90);
  return v10;
}
