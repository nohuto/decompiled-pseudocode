/*
 * XREFs of ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18002B508
 * Callers:
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18002B450 (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ??1WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18002B940 (--1WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0I_N11@Z @ 0x18002B9D8 (-StartActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0I_N11@.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800B382C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x1800E2B7C (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ??0?$ComPtr@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@AEBV012@@Z @ 0x1800F5040 (--0-$ComPtr@V-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKey.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18010D948 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18010DABC (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl_ea_18010DABC.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180174BCC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIClientWindo.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180174EA4 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ?NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x18018B9EC (-NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewMa.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_71ae74f74888d637c85562ef224bc48a___ @ 0x180285728 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_180285728.c)
 *     _lambda_71ae74f74888d637c85562ef224bc48a_::__lambda_71ae74f74888d637c85562ef224bc48a_ @ 0x1802859C8 (_lambda_71ae74f74888d637c85562ef224bc48a_--__lambda_71ae74f74888d637c85562ef224bc48a_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_6914baa2bbb41478f35591fe55a15932_::operator() @ 0x1807472B8 (_lambda_6914baa2bbb41478f35591fe55a15932_--operator().c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CSingleViewShellExperience::WaitForWindowReadyForPresentation(__int64 a1, int a2)
{
  bool v3; // r15
  _DWORD *v4; // r12
  bool v5; // si
  unsigned int v6; // r14d
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v8; // rbx
  char v9; // di
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  _OWORD *v15; // rax
  _OWORD *v16; // rbx
  __int64 v17; // rcx
  int v18; // eax
  int v20; // [rsp+28h] [rbp-E0h]
  __int64 v21; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v22[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v26; // [rsp+70h] [rbp-98h] BYREF
  _OWORD *v27; // [rsp+80h] [rbp-88h] BYREF
  __int128 v28; // [rsp+88h] [rbp-80h] BYREF
  char v29; // [rsp+98h] [rbp-70h]
  char v30[8]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-58h]
  char v32[8]; // [rsp+B8h] [rbp-50h] BYREF
  void **v33; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v34[40]; // [rsp+208h] [rbp+100h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+380h] [rbp+278h]

  LODWORD(v21) = a2;
  v22[0] = -1;
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 24) + 352LL))(*(_QWORD *)(a1 + 24), v22);
  v3 = *(_QWORD *)(a1 + 120) != 0LL;
  v4 = (_DWORD *)(a1 + 72);
  v5 = *(_DWORD *)(a1 + 72) != 0;
  v6 = v22[0];
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v8 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    v34,
    "WaitForWindowReadyForPresentation");
  v34[0] = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::StartActivity(
    (SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *)v34,
    v8,
    StringRawBuffer,
    v6,
    v5,
    v3,
    *(_BYTE *)(a1 + 53));
  *(_QWORD *)&v26 = v34;
  *((_QWORD *)&v26 + 1) = a1;
  v28 = v26;
  v9 = 1;
  v29 = 1;
  v25 = 0LL;
  v10 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
          a1 + 24,
          &v25);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x337,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v10,
      v20);
    goto LABEL_25;
  }
  if ( *v4 )
  {
    *v4 = 4;
  }
  else
  {
    v12 = ShellExperienceHelpers::NavigationLevelOverrideHelper::NavigateView(a1 + 72, *(_QWORD *)(a1 + 24), 4LL);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x80,
        (unsigned int)"desktop\\internal\\Shell\\inc\\private\\NavigationLevelOverrideHelper.h",
        (const char *)(unsigned int)v12,
        v20);
      goto LABEL_8;
    }
  }
  v13 = 0;
LABEL_8:
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x33A,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v13,
      v20);
  if ( (v21 & 1) != 0
    || (v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 72LL))(*(_QWORD *)(a1 + 80)), v11 >= 0)
    || (v21 & 4) == 0 )
  {
    if ( !*(_QWORD *)(a1 + 120) )
    {
      *(_QWORD *)&v26 = a1;
      *((_QWORD *)&v26 + 1) = CSingleViewShellExperience::OnClientWindowReadyForPresentationChanged;
      v15 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      v16 = v15;
      if ( v15 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>(v15);
        v16[1] = v26;
        *(_QWORD *)v16 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>::*)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,_lambda_e2a4807c8e61afd010bc972c5955136a_,-1,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>::`vftable';
      }
      else
      {
        v16 = 0LL;
      }
      v27 = v16;
      v17 = *(_QWORD *)(a1 + 96);
      v24 = v17;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      v23 = 0LL;
      LODWORD(v21) = 2;
      *(_QWORD *)&v26 = v16;
      Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
        &v23,
        &GUID_8cecdf70_ced8_5bc7_84a7_d80615fedcdd,
        &v26,
        &v21);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(v30, &v24);
      v31 = a1;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>>::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>>(
        v32,
        &v23);
      wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
        &v33,
        v34);
      v33 = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
      Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_71ae74f74888d637c85562ef224bc48a___(
        &v21,
        v30);
      lambda_71ae74f74888d637c85562ef224bc48a_::__lambda_71ae74f74888d637c85562ef224bc48a_(v30);
      v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v25 + 80LL))(v25, v21, a1 + 120);
      v11 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x374,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v18,
          v20);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
        goto LABEL_25;
      }
      v9 = 0;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
    }
    v11 = 0;
  }
  else
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 72LL))(*(_QWORD *)(a1 + 88), a1);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x340,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v14,
        v20);
  }
LABEL_25:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
  if ( v9 )
  {
    v29 = 0;
    lambda_6914baa2bbb41478f35591fe55a15932_::operator()(&v28);
  }
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::~WaitForWindowReadyForPresentation((SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *)v34);
  return (unsigned int)v11;
}
