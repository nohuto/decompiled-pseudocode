/*
 * XREFs of ?InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x1800F1AF4
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x1800F3710 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F3354 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAVCortanaExper.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F342C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEA_ea_1800F342C.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ @ 0x180164414 (-ReleaseAndGetAddressOf@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180194BD0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@.c)
 *     ?UpdateAutoForegroundWindowForHotkeys@XamlLauncher@@AEAAXPEAUWindowId@UI@Windows@@@Z @ 0x18019BF1C (-UpdateAutoForegroundWindowForHotkeys@XamlLauncher@@AEAAXPEAUWindowId@UI@Windows@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801AB2A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_N.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____ @ 0x1801D079C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b773.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____lambda_0fdea9b2e80a09a178b72482c6f008f8___ @ 0x1801FB400 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_1801FB400.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___IInspectable_____lambda_88c37ada13575a8c3149dc5b04aa0d80___ @ 0x1801FB46C (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_1801FB46C.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::UI::WindowId___lambda_d8817a5bf489acbf44c898e094114795___ @ 0x1801FB4B0 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_1801FB4B0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBCC (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall XamlLauncher::InitializeCortanaExperienceManager(
        XamlLauncher *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *a2)
{
  struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *v2; // rsi
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *, __int64, __int64); // rbx
  __int64 AddressOf; // rax
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  _QWORD *v10; // rsi
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v12)(_QWORD, GUID *, char *); // rdi
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  int v16; // eax
  _QWORD *v17; // rbx
  _QWORD *v18; // rax
  _QWORD *v19; // rdi
  int v20; // eax
  int v21; // eax
  _QWORD *v22; // rbx
  _QWORD *v23; // rax
  _QWORD *v24; // rdi
  int v25; // eax
  _QWORD *v26; // rbx
  _QWORD *v27; // rax
  _QWORD *v28; // rdi
  int v29; // eax
  int v30; // eax
  __int64 v31; // rdx
  XamlLauncher *v32; // rbx
  XamlLauncher *v33; // rax
  XamlLauncher *v34; // rdi
  int v35; // eax
  __int64 v36; // rbx
  int v37; // eax
  XamlLauncher *v39; // [rsp+20h] [rbp-49h] BYREF
  __int64 (__fastcall ***v40)(_QWORD, GUID *, char *); // [rsp+28h] [rbp-41h] BYREF
  XamlLauncher *v41; // [rsp+30h] [rbp-39h] BYREF
  __int64 v42; // [rsp+38h] [rbp-31h] BYREF
  __int64 v43; // [rsp+40h] [rbp-29h] BYREF
  char v44[8]; // [rsp+48h] [rbp-21h] BYREF
  _QWORD *v45; // [rsp+50h] [rbp-19h] BYREF
  _QWORD *v46; // [rsp+58h] [rbp-11h] BYREF
  _QWORD *v47; // [rsp+60h] [rbp-9h] BYREF
  _QWORD *v48; // [rsp+68h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+7h] BYREF
  __int64 v50; // [rsp+88h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v2 = a2;
  v40 = 0LL;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::GetImpl'::`2'::impl,
    a2);
  v50 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.SearchApp",
    0x2Bu,
    0x2Au);
  v4 = v50;
  v50 = 0LL;
  v5 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *, __int64, __int64))(*(_QWORD *)v2 + 48LL);
  AddressOf = Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(&v40);
  v7 = v5(v2, v4, AddressOf);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = (_QWORD *)((char *)this + 192);
    v11 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v40;
    v12 = **v40;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 24);
    v7 = v12(v11, &GUID_3b810852_511f_4404_89ae_347bc2e8b561, (char *)this + 192);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1400LL;
      goto LABEL_5;
    }
    v13 = 0LL;
    v14 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v14;
    v39 = (XamlLauncher *)v14;
    if ( v14 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>(v14);
      v15[2] = this;
      *v15 = off_1807A4000;
      v13 = v15;
      v39 = 0LL;
    }
    Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____(&v39);
    v48 = v13;
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)*v10 + 224LL))(*v10, v13, (char *)this + 272);
    v8 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x580,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v16,
        (int)v39);
LABEL_46:
      Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(&v48);
      goto LABEL_47;
    }
    v17 = 0LL;
    v18 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v19 = v18;
    v39 = (XamlLauncher *)v18;
    if ( v18 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>(v18);
      v19[2] = this;
      *v19 = off_1807A3FD8;
      v17 = v19;
      v39 = 0LL;
    }
    Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____(&v39);
    v47 = v17;
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)*v10 + 240LL))(*v10, v17, (char *)this + 280);
    v8 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x588,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v20,
        (int)v39);
LABEL_45:
      Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(&v47);
      goto LABEL_46;
    }
    v41 = this;
    Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____lambda_0fdea9b2e80a09a178b72482c6f008f8___(
      &v42,
      &v41);
    v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v10 + 272LL))(*v10, v42, (char *)this + 288);
    v8 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x592,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v21,
        (int)v39);
LABEL_44:
      Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(&v42);
      goto LABEL_45;
    }
    v22 = 0LL;
    v23 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v24 = v23;
    v39 = (XamlLauncher *)v23;
    if ( v23 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>(v23);
      v24[2] = this;
      *v24 = off_1807A3FB0;
      v22 = v24;
      v39 = 0LL;
    }
    Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____(&v39);
    v46 = v22;
    v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)*v10 + 288LL))(*v10, v22, (char *)this + 296);
    v8 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59C,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v25,
        (int)v39);
LABEL_43:
      Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(&v46);
      goto LABEL_44;
    }
    v26 = 0LL;
    v27 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v28 = v27;
    v39 = (XamlLauncher *)v27;
    if ( v27 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>>(v27);
      v28[2] = this;
      *v28 = off_1807A3F88;
      v26 = v28;
      v39 = 0LL;
    }
    Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____(&v39);
    v45 = v26;
    v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)*v10 + 176LL))(*v10, v26, (char *)this + 304);
    v8 = v29;
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5A4,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v29,
        (int)v39);
LABEL_42:
      Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(&v45);
      goto LABEL_43;
    }
    v39 = this;
    Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___IInspectable_____lambda_88c37ada13575a8c3149dc5b04aa0d80___(
      &v41,
      &v39);
    v30 = (*(__int64 (__fastcall **)(_QWORD, XamlLauncher *, char *))(*(_QWORD *)*v10 + 208LL))(
            *v10,
            v41,
            (char *)this + 312);
    v8 = v30;
    if ( v30 >= 0 )
    {
      LOBYTE(v31) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
        v31);
      v32 = 0LL;
      v33 = (XamlLauncher *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v34 = v33;
      v39 = v33;
      if ( v33 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>(v33);
        *((_QWORD *)v34 + 2) = this;
        *(_QWORD *)v34 = off_1807A3F60;
        v32 = v34;
        v39 = 0LL;
      }
      Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____(&v39);
      v39 = v32;
      v35 = (*(__int64 (__fastcall **)(_QWORD, XamlLauncher *, char *))(*(_QWORD *)*v10 + 416LL))(
              *v10,
              v32,
              (char *)this + 320);
      v8 = v35;
      if ( v35 >= 0 )
      {
        Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(&v39);
        if ( !*((_BYTE *)this + 368) && !*((_BYTE *)this + 370) )
        {
          v39 = this;
          Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::UI::WindowId___lambda_d8817a5bf489acbf44c898e094114795___(
            &v43,
            &v39);
          v36 = v43;
          v37 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v10 + 472LL))(
                  *v10,
                  v43,
                  (char *)this + 328);
          v8 = v37;
          if ( v37 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x5E0,
              (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
              (const char *)(unsigned int)v37,
              (int)v39);
            if ( v36 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
            goto LABEL_41;
          }
          if ( (*(int (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v10 + 432LL))(*v10, v44) >= 0 )
            XamlLauncher::UpdateAutoForegroundWindowForHotkeys(this, (struct Windows::UI::WindowId *)v44);
          if ( v36 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
        }
        v8 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5D3,
          (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v35,
          (int)v39);
        Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(&v39);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5C2,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v30,
        (int)v39);
    }
LABEL_41:
    Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(&v41);
    goto LABEL_42;
  }
  v9 = 1399LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v7,
    (int)v39);
LABEL_47:
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v40);
  return v8;
}
