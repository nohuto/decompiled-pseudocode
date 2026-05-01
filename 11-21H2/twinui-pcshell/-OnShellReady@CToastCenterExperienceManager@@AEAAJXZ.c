/*
 * XREFs of ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800A6424
 * Callers:
 *     ?OnMessage@CToastCenterExperienceManager@@UEAAJI_K_J@Z @ 0x1800A63E0 (-OnMessage@CToastCenterExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800A6798 (-LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToCriticalNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800A67C8 (-SubscribeToCriticalNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToNewNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800A682C (-SubscribeToNewNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?ReadyToLaunch@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x1800A6CE8 (-ReadyToLaunch@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EF1A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x180117BE4 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180149610 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ @ 0x18015C524 (-ReleaseAndGetAddressOf@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::_)(Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_b9d311b2d01ba9cc4dc437503952e2a6___1_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_b9d311b2d01ba9cc4dc437503952e2a6___ @ 0x180196064 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_180196064.c)
 *     _lambda_5ab8ce89e2cf3b8eaaa3949bb6aa8195_::operator() @ 0x1801965A8 (_lambda_5ab8ce89e2cf3b8eaaa3949bb6aa8195_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180364EF4 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CToastCenterExperienceManager::OnShellReady(CToastCenterExperienceManager *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, void *, GUID *, __int64 *); // rbx
  int v4; // eax
  int v5; // edi
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64, __int64); // rsi
  __int64 AddressOf; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v12)(_QWORD, GUID *, char *); // rdi
  CToastCenterExperienceManager **v13; // rax
  CToastCenterExperienceManager *v14; // rbx
  __int64 v15; // rcx
  HRESULT Instance; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // eax
  unsigned __int64 v20; // r9
  LPVOID *ppv; // [rsp+20h] [rbp-39h]
  __int64 v23; // [rsp+30h] [rbp-29h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, GUID *, char *); // [rsp+38h] [rbp-21h] BYREF
  int v25[2]; // [rsp+40h] [rbp-19h] BYREF
  int v26; // [rsp+4Ch] [rbp-Dh]
  CToastCenterExperienceManager *v27; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v28[3]; // [rsp+58h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+17h] BYREF
  __int64 v30; // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *((_BYTE *)this + 441) = 1;
  if ( *((_QWORD *)this + 50) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)this + 50) = 0LL;
  }
  NotificationCenterUITelemetry::NotificationCenterTelemetry::ReadyToLaunch();
  v23 = 0LL;
  v2 = *((_QWORD *)this + 82);
  v3 = *(__int64 (__fastcall **)(__int64, void *, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
  v4 = v3(v2, &unk_180691608, &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5, &v23);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v24 = 0LL;
    v6 = v23;
    v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v23 + 48LL);
    AddressOf = Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(&v24);
    v30 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.ShellExperience.ActionCenter",
      0x2Eu,
      0x2Du);
    v9 = v7(v6, v30, AddressOf);
    v5 = v9;
    if ( v9 < 0 )
    {
      v10 = 621LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_33:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v24);
      goto LABEL_34;
    }
    v11 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v24;
    v12 = **v24;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 88);
    v9 = v12(v11, &GUID_fd8022e5_1099_53f9_b49a_b39bf3f15861, (char *)this + 704);
    v5 = v9;
    if ( v9 < 0 )
    {
      v10 = 623LL;
      goto LABEL_9;
    }
    v27 = this;
    v13 = (CToastCenterExperienceManager **)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::___Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_b9d311b2d01ba9cc4dc437503952e2a6___1_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_b9d311b2d01ba9cc4dc437503952e2a6___(
                                              v25,
                                              &v27);
    v14 = *v13;
    v27 = *v13;
    *v13 = 0LL;
    v15 = *(_QWORD *)v25;
    if ( *(_QWORD *)v25 )
    {
      *(_QWORD *)v25 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v15);
    }
    Instance = (*(__int64 (__fastcall **)(_QWORD, CToastCenterExperienceManager *, char *))(**((_QWORD **)this + 88)
                                                                                          + 64LL))(
                 *((_QWORD *)this + 88),
                 v14,
                 (char *)this + 720);
    v5 = Instance;
    if ( Instance >= 0 )
    {
      v28[0] = &v23;
      v28[1] = &v24;
      v28[2] = this;
      hstringHeader.Reserved.Reserved1 = retaddr;
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = "pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp";
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
      LOWORD(v30) = 637;
      LOBYTE(v17) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
        v17);
      wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v25);
      v19 = lambda_5ab8ce89e2cf3b8eaaa3949bb6aa8195_::operator()(v28);
      v5 = v19;
      if ( v19 < 0 )
        wil::details::ReportFeatureError(
          (wil::details *)(unsigned int)v19,
          (int)v25,
          (struct wil::ThreadErrorContext *)0x1C53B1D,
          (unsigned int)&hstringHeader,
          (const struct DiagnosticsInfo *)ppv);
      if ( *(_QWORD *)v25 )
        *(_DWORD *)(*(_QWORD *)v25 + 16LL) = v26;
      if ( v5 < 0 )
      {
        v20 = (unsigned int)v5;
        v18 = 684LL;
LABEL_29:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
          (const char *)v20);
        goto LABEL_31;
      }
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 59);
      Instance = CoCreateInstance(
                   &GUID_d18705be_fc2f_44c8_aeff_1cd49aea8fc1,
                   0LL,
                   0x17u,
                   &GUID_443b1739_3779_4aba_953b_9e4ff84dd4b6,
                   (LPVOID *)this + 59);
      v5 = Instance;
      if ( Instance >= 0 )
      {
        Instance = CToastCenterExperienceManager::SubscribeToNewNotificationWnf(this);
        v5 = Instance;
        if ( Instance >= 0 )
        {
          Instance = CToastCenterExperienceManager::SubscribeToCriticalNotificationWnf(this);
          v5 = Instance;
          if ( Instance >= 0 )
          {
            Instance = CToastCenterExperienceManager::LookupToastQueue(this);
            v5 = Instance;
            if ( Instance >= 0 )
            {
              v5 = 0;
LABEL_31:
              if ( v14 )
                (*(void (__fastcall **)(CToastCenterExperienceManager *))(*(_QWORD *)v14 + 16LL))(v14);
              goto LABEL_33;
            }
            v18 = 698LL;
          }
          else
          {
            v18 = 696LL;
          }
        }
        else
        {
          v18 = 693LL;
        }
      }
      else
      {
        v18 = 690LL;
      }
    }
    else
    {
      v18 = 635LL;
    }
    v20 = (unsigned int)Instance;
    goto LABEL_29;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x269,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_34:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
  return (unsigned int)v5;
}
