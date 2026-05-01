/*
 * XREFs of ?SubscribeToServices@RetailDemoExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E7470
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??4?$com_ptr_t@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIServiceProvider@@@Z @ 0x1800A268C (--4-$com_ptr_t@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIServiceProvid.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FDD58 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIViewWrapper.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18019204C (-reset@-$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall RetailDemoExperienceManager::SubscribeToServices(
        RetailDemoExperienceManager *this,
        struct IServiceProvider *a2)
{
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, GUID *, GUID *, char *); // rdi
  __int64 v6; // rcx
  int v7; // eax
  char *v8; // rax
  char *v9; // rbx
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64, char *, _QWORD, __int64); // rdi
  int v12; // eax
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v14; // rcx
  int v15; // eax
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v17; // eax
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, _QWORD, SID *, GUID *); // rsi
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  int v24; // [rsp+20h] [rbp-88h]
  int v25; // [rsp+20h] [rbp-88h]
  int v26; // [rsp+20h] [rbp-88h]
  __int64 v27; // [rsp+30h] [rbp-78h] BYREF
  __int128 v28; // [rsp+38h] [rbp-70h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-60h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-58h] BYREF
  __int64 v31; // [rsp+68h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 416));
  wil::com_ptr_t<IServiceProvider,wil::err_exception_policy>::operator=((__int64 *)this + 22, (__int64)a2);
  v4 = *((_QWORD *)this + 22);
  v5 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, char *))(*(_QWORD *)v4 + 24LL);
  v6 = *((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = v5(v4, &SID_ViewEventDispatcher, &GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e, (char *)this + 184);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2DF,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v7,
      v24);
  *(_QWORD *)&v28 = RetailDemoExperienceManager::OnViewEvent;
  DWORD2(v28) = 0;
  hstringHeader.Reserved.Reserved1 = (char *)this - 48;
  *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = v28;
  v8 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>(v8);
    *(HSTRING_HEADER *)(v9 + 16) = hstringHeader;
    *(_QWORD *)v9 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>::*)(Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>,_lambda_c4c171c796dda8ef92eb2cbbbcefab87_,-1,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>::`vftable';
  }
  else
  {
    v9 = 0LL;
  }
  *(_QWORD *)&v28 = v9;
  v10 = *((_QWORD *)this + 23);
  v11 = *(__int64 (__fastcall **)(__int64, char *, _QWORD, __int64))(*(_QWORD *)v10 + 48LL);
  v31 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.RetailDemo",
    0x2Cu,
    0x2Bu);
  v25 = (_DWORD)this + 400;
  v12 = v11(v10, v9, 0LL, v31);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2EC,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v12,
      v25);
  QueryService = a2->lpVtbl->QueryService;
  v14 = *((_QWORD *)this + 18);
  *((_QWORD *)this + 18) = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
          a2,
          &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
          &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
          (char *)this + 144);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2EF,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v15,
      v25);
  v27 = 0LL;
  v16 = a2->lpVtbl->QueryService;
  wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(&v27);
  v17 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v16)(
          a2,
          &SID_IImmersiveMonitorService,
          &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
          &v27);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2F3,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v17,
      v25);
  v18 = v27;
  v19 = *(__int64 (__fastcall **)(__int64, _QWORD, SID *, GUID *))(*(_QWORD *)v27 + 72LL);
  v20 = *((_QWORD *)this + 20);
  *((_QWORD *)this + 20) = 0LL;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  v26 = (_DWORD)this + 160;
  v21 = v19(v18, 0LL, &SID_ImmersiveLayout, &GUID_d770b2ad_8f5e_4b8e_b3df_f05a2ab5287c);
  if ( v21 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2F4,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v21,
      v26);
  v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(**((_QWORD **)this + 20) + 40LL))(
          *((_QWORD *)this + 20),
          10LL,
          ((unsigned __int64)this + 72) & -(__int64)(this != (RetailDemoExperienceManager *)48),
          (char *)this + 384);
  if ( v22 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2FB,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v22,
      v26);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v27);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v28);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
