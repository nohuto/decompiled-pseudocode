/*
 * XREFs of _lambda_63662cd9376551e4950848a042514280_::operator() @ 0x18002783C
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_ed86ba92a0a36c90dc1eb653ea3f75c8___1_long_::Invoke @ 0x1800277F0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_--DelegateInvo.c)
 * Callees:
 *     ?WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHWND__@@@Z @ 0x180027BA4 (-WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHW.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x180027C4C (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ?Remove@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEBG@Z @ 0x1800287E0 (-Remove@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEBG@Z.c)
 *     ?MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Internal@Windows@@@Z @ 0x1800288EC (-MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Inter.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180036348 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1800585E4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800A47E0 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_63662cd9376551e4950848a042514280_::operator()(__int64 **a1)
{
  __int64 *v2; // rsi
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rbx
  int v9; // eax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, GUID *, __int64 *); // rbx
  int v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, struct Windows::Foundation::Collections::IPropertySet **); // rdi
  int v15; // eax
  struct Windows::Foundation::Collections::IPropertySet *v16; // rax
  int v17; // eax
  const unsigned __int16 *v18; // rdx
  __int64 (__fastcall ***v19)(_QWORD, _QWORD, _QWORD); // rdi
  _QWORD *v20; // rax
  _QWORD *v21; // rbx
  int v22; // eax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // rdx
  int v29; // [rsp+28h] [rbp-69h]
  struct Windows::Foundation::Collections::IPropertySet *v30; // [rsp+48h] [rbp-49h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v31; // [rsp+50h] [rbp-41h] BYREF
  __int64 (__fastcall ***v32)(_QWORD, _QWORD, _QWORD); // [rsp+58h] [rbp-39h] BYREF
  __int64 v33; // [rsp+60h] [rbp-31h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v34; // [rsp+68h] [rbp-29h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v35; // [rsp+70h] [rbp-21h] BYREF
  HWND v36; // [rsp+78h] [rbp-19h] BYREF
  HWND v37; // [rsp+80h] [rbp-11h] BYREF
  __int64 v38; // [rsp+88h] [rbp-9h] BYREF
  int v39; // [rsp+90h] [rbp-1h]
  __int64 v40; // [rsp+98h] [rbp+7h] BYREF
  _QWORD *v41; // [rsp+A0h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp+17h] BYREF
  HSTRING v43; // [rsp+C0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v35 = 0LL;
  v36 = 0LL;
  v2 = *a1;
  v3 = **a1;
  v4 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v3 + 48LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
  v5 = v4(v3, &v35);
  v6 = v5;
  if ( v5 < 0 )
  {
    v24 = 508LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v5,
      v29);
    goto LABEL_24;
  }
  v5 = WindowFromViewWrapper(v35, &v36);
  v6 = v5;
  if ( v5 < 0 )
  {
    v24 = 509LL;
    goto LABEL_27;
  }
  v34 = 0LL;
  v37 = 0LL;
  v7 = *v2;
  v8 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)*v2 + 56LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
  v9 = v8(v7, &v34);
  v6 = v9;
  if ( v9 < 0 )
  {
    v25 = 513LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v9,
      v29);
    goto LABEL_23;
  }
  v9 = WindowFromViewWrapper(v34, &v37);
  v6 = v9;
  if ( v9 < 0 )
  {
    v25 = 514LL;
    goto LABEL_33;
  }
  v38 = 0LL;
  v39 = 0;
  v40 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v2 + 64LL))(*v2, &v38);
  v6 = v9;
  if ( v9 < 0 )
  {
    v25 = 517LL;
    goto LABEL_33;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*v2 + 72LL))(*v2, (char *)&v38 + 4);
  v6 = v9;
  if ( v9 < 0 )
  {
    v25 = 518LL;
    goto LABEL_33;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v2 + 80LL))(*v2, &v40);
  v6 = v9;
  if ( v9 < 0 )
  {
    v25 = 519LL;
    goto LABEL_33;
  }
  v33 = 0LL;
  v10 = *v2;
  v11 = **(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))*v2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
  v12 = v11(v10, &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57, &v33);
  v6 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20A,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v12,
      v29);
    goto LABEL_22;
  }
  v30 = 0LL;
  v13 = v33;
  v14 = *(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v33 + 56LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
  v15 = v14(v13, &v30);
  v6 = v15;
  if ( v15 < 0 )
  {
    v26 = 525LL;
LABEL_38:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v15,
      v29);
    goto LABEL_21;
  }
  v16 = v30;
  if ( v30 )
    goto LABEL_11;
  v43 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v15 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
          v43,
          &v30);
  v6 = v15;
  if ( v15 < 0 )
  {
    v26 = 528LL;
    goto LABEL_38;
  }
  v16 = v30;
LABEL_11:
  v31 = v16;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v31);
  v43 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"ClientRequestedNavigationType",
    0x1Eu,
    0x1Du);
  v17 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v31,
          v43);
  v6 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x216,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v17,
      v29);
    goto LABEL_20;
  }
  MoveTryPositionPropertiesToPropertySet(v36, (struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v31);
  Windows::Internal::ShellHelpers::PropertySetHelper::Remove(
    (Windows::Internal::ShellHelpers::PropertySetHelper *)&v31,
    v18);
  v19 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))*v2;
  v32 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))*v2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v32);
  v20 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v21 = v20;
  if ( v20 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>(v20);
    v21[2] = 0LL;
    if ( v21 + 2 != &v32 )
    {
      v21[2] = v19;
      v32 = 0LL;
    }
    *v21 = off_180639E90;
  }
  else
  {
    v21 = 0LL;
  }
  v41 = v21;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
  if ( !v21 )
  {
    v6 = -2147024882;
    v27 = 2147942414LL;
    v28 = 552LL;
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)v27,
      v29);
    goto LABEL_19;
  }
  v22 = CAppViewManager::_ShowViewAsyncWorker(
          (CAppViewManager *)*a1[1],
          v36,
          v37,
          (const struct CAppViewManager::ShowViewAsyncOptions *)&v38,
          v30,
          (struct IAsyncCallback *)v21,
          (struct IPresentationRequestedArgs *)*a1[2]);
  v6 = v22;
  if ( v22 < 0 )
  {
    v27 = (unsigned int)v22;
    v28 = 554LL;
    goto LABEL_44;
  }
  v6 = 0;
LABEL_19:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v41);
LABEL_20:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
LABEL_21:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
LABEL_22:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
LABEL_23:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
LABEL_24:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
  return v6;
}
