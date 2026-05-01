/*
 * XREFs of ?OnShellReady@CControlCenterExperienceManager@@AEAAJXZ @ 0x1800A68D4
 * Callers:
 *     ?OnMessage@CControlCenterExperienceManager@@UEAAJI_K_J@Z @ 0x1800A6890 (-OnMessage@CControlCenterExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@UIToastCenterExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800A6B84 (--$As@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@-$ComPtr@UIToastCenterExperien.c)
 *     ??$As@UIToastCenterExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIToastCenterExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800A6BE0 (--$As@UIToastCenterExperienceManager@Experience@Shell@Internal@Windows@@@-$ComPtr@UIInspectable@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EF1A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ @ 0x18015C524 (-ReleaseAndGetAddressOf@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ToastCenterExperienceManager___Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs_____lambda_e72d6442786bf2af2755e0daaae830e1___ @ 0x180193C14 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal--Shell--Exper.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::_)(Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_90acfd88701a8405d8a35a1b790a769f___1_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_90acfd88701a8405d8a35a1b790a769f___ @ 0x180193C80 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_180193C80.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CControlCenterExperienceManager::OnShellReady(CControlCenterExperienceManager *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, void *, GUID *, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // esi
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64, __int64); // rsi
  __int64 AddressOf; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 **v11; // rdi
  __int64 *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // eax
  __int64 v22; // [rsp+30h] [rbp-19h] BYREF
  __int64 v23; // [rsp+38h] [rbp-11h] BYREF
  __int64 v24; // [rsp+40h] [rbp-9h] BYREF
  __int64 v25; // [rsp+48h] [rbp-1h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp+17h] BYREF
  __int64 v28; // [rsp+78h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  *((_BYTE *)this + 388) = 1;
  v22 = 0LL;
  v2 = *((_QWORD *)this + 54);
  v3 = *(__int64 (__fastcall **)(__int64, void *, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
  v4 = v3(v2, &unk_1806911C8, &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5, &v22);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v25 = 0LL;
    v6 = v22;
    v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v22 + 48LL);
    AddressOf = Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(&v25);
    v28 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.ShellExperience.ToastCenter",
      0x2Du,
      0x2Cu);
    v9 = v7(v6, v28, AddressOf);
    v5 = v9;
    if ( v9 < 0 )
    {
      v10 = 637LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_22:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
      goto LABEL_23;
    }
    v11 = (__int64 **)((char *)this + 440);
    v9 = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Internal::Shell::Experience::IToastCenterExperienceManager>(
           &v25,
           (char *)this + 440);
    v5 = v9;
    if ( v9 < 0 )
    {
      v10 = 639LL;
      goto LABEL_7;
    }
    v26[0] = this;
    v12 = (__int64 *)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::___Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_90acfd88701a8405d8a35a1b790a769f___1_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_90acfd88701a8405d8a35a1b790a769f___(
                       &v23,
                       v26);
    v13 = *v12;
    v26[1] = *v12;
    *v12 = 0LL;
    v14 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v14);
    }
    v24 = 0LL;
    v15 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IToastCenterExperienceManager>::As<Windows::Internal::Shell::Experience::IBaseExperienceManager>(
            (char *)this + 440,
            &v24);
    v5 = v15;
    if ( v15 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v24 + 64LL))(v24, v13, (char *)this + 712);
      v5 = v15;
      if ( v15 >= 0 )
      {
        v26[0] = this;
        Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ToastCenterExperienceManager___Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs_____lambda_e72d6442786bf2af2755e0daaae830e1___(
          &v23,
          v26);
        v17 = *v11;
        v18 = **v11;
        v19 = v23;
        v20 = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(v18 + 56))(v17, v23, (char *)this + 720);
        v5 = v20;
        if ( v20 >= 0 )
          v5 = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x298,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
            (const char *)(unsigned int)v20);
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        goto LABEL_20;
      }
      v16 = 653LL;
    }
    else
    {
      v16 = 652LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v15);
LABEL_20:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x279,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_23:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
  return v5;
}
