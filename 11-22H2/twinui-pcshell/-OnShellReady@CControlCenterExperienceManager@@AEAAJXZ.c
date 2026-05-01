/*
 * XREFs of ?OnShellReady@CControlCenterExperienceManager@@AEAAJXZ @ 0x180143E74
 * Callers:
 *     ?OnMessage@CControlCenterExperienceManager@@UEAAJI_K_J@Z @ 0x180143E30 (-OnMessage@CControlCenterExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerInputAppRequestedResizeEventArgs@23456@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800678F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@UIToastCenterExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180144188 (--$As@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@-$ComPtr@UIToastCenterExperien.c)
 *     ??$As@UIToastCenterExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIToastCenterExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801441E4 (--$As@UIToastCenterExperienceManager@Experience@Shell@Internal@Windows@@@-$ComPtr@UIInspectable@.c)
 *     ?get@?$static_lazy@VControlCenterLogging@@@details@wil@@QEAAPEAVControlCenterLogging@@P6AXXZ@Z @ 0x180144240 (-get@-$static_lazy@VControlCenterLogging@@@details@wil@@QEAAPEAVControlCenterLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ToastCenterExperienceManager___Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs_____lambda_e0e36e850bb9087e83a32bb00bf4d79a___ @ 0x1801DD69C (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal--Shell--Exper.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::_)(Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_5d6125363dd4469ab2cf0b23e57b86eb___1_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_5d6125363dd4469ab2cf0b23e57b86eb___ @ 0x1801DD708 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1801DD708.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CControlCenterExperienceManager::OnShellReady(CControlCenterExperienceManager *this)
{
  _DWORD *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, void *, GUID *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, __int64 *); // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 **v12; // rdi
  __int64 *v13; // rax
  volatile int *v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdi
  int v22; // eax
  __int64 v24; // [rsp+30h] [rbp-29h] BYREF
  __int64 v25; // [rsp+38h] [rbp-21h] BYREF
  __int64 v26; // [rsp+40h] [rbp-19h] BYREF
  __int64 v27; // [rsp+48h] [rbp-11h] BYREF
  _QWORD v28[2]; // [rsp+50h] [rbp-9h] BYREF
  HSTRING_HEADER v29; // [rsp+60h] [rbp+7h] BYREF
  __int64 v30; // [rsp+78h] [rbp+1Fh]
  __int64 *v31; // [rsp+80h] [rbp+27h]
  int v32; // [rsp+88h] [rbp+2Fh]
  int v33; // [rsp+8Ch] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *((_BYTE *)this + 444) = 1;
  v2 = *(_DWORD **)(wil::details::static_lazy<ControlCenterLogging>::get(
                      this,
                      _lambda_7497dc87b220aaed4d14ef0ec7d62e5e_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v2 > 5u && tlgKeywordOn((__int64)v2, 0x200000000000LL) )
  {
    v24 = 0x1000000LL;
    v31 = &v24;
    v32 = 8;
    v33 = 0;
    tlgWriteTransfer_EventWriteTransfer(
      v3,
      (unsigned __int8 *)dword_18084A5D0,
      0LL,
      0LL,
      3u,
      (PEVENT_DATA_DESCRIPTOR)&v29);
  }
  v26 = 0LL;
  v4 = *((_QWORD *)this + 61);
  v5 = *(__int64 (__fastcall **)(__int64, void *, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
  v6 = v5(v4, &unk_1808224F0, &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5, &v26);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v25 = 0LL;
    v8 = v26;
    v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v26 + 48LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
    v30 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v29,
      L"Windows.Internal.ShellExperience.ToastCenter",
      0x2Du,
      0x2Cu);
    v10 = v9(v8, v30, &v25);
    v7 = v10;
    if ( v10 < 0 )
    {
      v11 = 759LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_25:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
      goto LABEL_26;
    }
    v12 = (__int64 **)((char *)this + 496);
    v10 = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Internal::Shell::Experience::IToastCenterExperienceManager>(
            &v25,
            (char *)this + 496);
    v7 = v10;
    if ( v10 < 0 )
    {
      v11 = 761LL;
      goto LABEL_10;
    }
    v28[0] = this;
    v13 = (__int64 *)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::___Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_5d6125363dd4469ab2cf0b23e57b86eb___1_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_5d6125363dd4469ab2cf0b23e57b86eb___(
                       &v24,
                       v28);
    v15 = *v13;
    v28[1] = *v13;
    *v13 = 0LL;
    v16 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputAppRequestedResizeEventArgs *>>::Release(
        v16,
        v14);
    }
    v27 = 0LL;
    v17 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IToastCenterExperienceManager>::As<Windows::Internal::Shell::Experience::IBaseExperienceManager>(
            (char *)this + 496,
            &v27);
    v7 = v17;
    if ( v17 >= 0 )
    {
      v17 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v27 + 64LL))(v27, v15, (char *)this + 808);
      v7 = v17;
      if ( v17 >= 0 )
      {
        v28[0] = this;
        Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ToastCenterExperienceManager___Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs_____lambda_e0e36e850bb9087e83a32bb00bf4d79a___(
          &v24,
          v28);
        v19 = *v12;
        v20 = **v12;
        v21 = v24;
        v22 = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(v20 + 56))(v19, v24, (char *)this + 816);
        v7 = v22;
        if ( v22 >= 0 )
          v7 = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x312,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
            (const char *)(unsigned int)v22);
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        goto LABEL_23;
      }
      v18 = 775LL;
    }
    else
    {
      v18 = 774LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v17);
LABEL_23:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v27);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2F3,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_26:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
  return v7;
}
