/*
 * XREFs of _lambda_667ec943145f044c0b36791820c9a348_::operator() @ 0x1803ACA30
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_2506f06f346abae1c3eb1ee2470e733b___1_long_::Invoke @ 0x1803AF850 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1803AF850.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18004E194 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800EDA34 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x1802D05FC (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Internal@Windows@@@Z @ 0x1803AFF8C (-MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Inter.c)
 *     ?Remove@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEBG@Z @ 0x1803B0CE0 (-Remove@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEBG@Z.c)
 *     ?WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHWND__@@@Z @ 0x1803B511C (-WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHW.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803B9424 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_667ec943145f044c0b36791820c9a348_::operator()(__int64 **a1)
{
  __int64 *v2; // rsi
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, GUID *, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, struct Windows::Foundation::Collections::IPropertySet **); // rdi
  int v17; // eax
  __int64 v18; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v19; // rax
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // r8
  int v21; // eax
  const unsigned __int16 *v22; // rdx
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // rdi
  void *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r9
  __int64 v27; // rdx
  int v28; // eax
  struct Windows::Foundation::Collections::IPropertySet *v30; // [rsp+48h] [rbp-49h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v31; // [rsp+50h] [rbp-41h] BYREF
  __int64 (__fastcall ***v32)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-39h] BYREF
  __int64 v33; // [rsp+60h] [rbp-31h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v34; // [rsp+68h] [rbp-29h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v35; // [rsp+70h] [rbp-21h] BYREF
  HWND v36; // [rsp+78h] [rbp-19h] BYREF
  HWND v37; // [rsp+80h] [rbp-11h] BYREF
  __int64 v38; // [rsp+88h] [rbp-9h] BYREF
  int v39; // [rsp+90h] [rbp-1h]
  __int64 v40; // [rsp+98h] [rbp+7h] BYREF
  __int64 v41; // [rsp+A0h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp+17h] BYREF
  HSTRING v43; // [rsp+C0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v35 = 0LL;
  v36 = 0LL;
  v2 = *a1;
  v3 = **a1;
  v4 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v3 + 48LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v35);
  v5 = v4(v3, &v35);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = WindowFromViewWrapper(v35, &v36);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 510LL;
      goto LABEL_5;
    }
    v34 = 0LL;
    v37 = 0LL;
    v8 = *v2;
    v9 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)*v2 + 56LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v34);
    v10 = v9(v8, &v34);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 514LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_43:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v34);
      goto LABEL_44;
    }
    v10 = WindowFromViewWrapper(v34, &v37);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 515LL;
      goto LABEL_16;
    }
    v38 = 0LL;
    v39 = 0;
    v40 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v2 + 64LL))(*v2, &v38);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 518LL;
      goto LABEL_16;
    }
    v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*v2 + 72LL))(*v2, (char *)&v38 + 4);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 519LL;
      goto LABEL_16;
    }
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v2 + 80LL))(*v2, &v40);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 520LL;
      goto LABEL_16;
    }
    v33 = 0LL;
    v12 = *v2;
    v13 = **(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))*v2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
    v14 = v13(v12, &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57, &v33);
    v6 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20B,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v14);
LABEL_42:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
      goto LABEL_43;
    }
    v30 = 0LL;
    v15 = v33;
    v16 = *(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v33 + 56LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v30);
    v17 = v16(v15, &v30);
    v6 = v17;
    if ( v17 < 0 )
    {
      v18 = 526LL;
LABEL_24:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v17);
LABEL_41:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v30);
      goto LABEL_42;
    }
    v19 = v30;
    if ( !v30 )
    {
      v43 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Foundation.Collections.ValueSet",
        0x28u,
        0x27u);
      v17 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
              (__int64)v43,
              (__int64 *)&v30);
      v6 = v17;
      if ( v17 < 0 )
      {
        v18 = 529LL;
        goto LABEL_24;
      }
      v19 = v30;
    }
    v31 = v19;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v31);
    v43 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"ClientRequestedNavigationType",
      0x1Eu,
      0x1Du);
    v21 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v31,
            v43,
            v20);
    v6 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x217,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v21);
LABEL_40:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
      goto LABEL_41;
    }
    MoveTryPositionPropertiesToPropertySet(v36, (struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v31);
    Windows::Internal::ShellHelpers::PropertySetHelper::Remove(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v31,
      v22);
    v23 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v2;
    v32 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v32);
    v24 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v25 = (__int64)v24;
    if ( v24 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>((__int64)v24);
      *(_QWORD *)(v25 + 16) = 0LL;
      if ( (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v25 + 16) != &v32 )
      {
        *(_QWORD *)(v25 + 16) = v23;
        v32 = 0LL;
      }
      *(_QWORD *)v25 = off_1807CFF68;
    }
    else
    {
      v25 = 0LL;
    }
    v41 = v25;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v32);
    if ( v25 )
    {
      v28 = CAppViewManager::_ShowViewAsyncWorker(
              (CAppViewManager *)*a1[1],
              v36,
              v37,
              (const struct CAppViewManager::ShowViewAsyncOptions *)&v38,
              v30,
              (struct IAsyncCallback *)v25,
              (struct IPresentationRequestedArgs *)*a1[2]);
      v6 = v28;
      if ( v28 >= 0 )
      {
        v6 = 0;
        goto LABEL_39;
      }
      v26 = (unsigned int)v28;
      v27 = 555LL;
    }
    else
    {
      v6 = -2147024882;
      v26 = 2147942414LL;
      v27 = 553LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)v26);
LABEL_39:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v41);
    goto LABEL_40;
  }
  v7 = 509LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_44:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v35);
  return v6;
}
