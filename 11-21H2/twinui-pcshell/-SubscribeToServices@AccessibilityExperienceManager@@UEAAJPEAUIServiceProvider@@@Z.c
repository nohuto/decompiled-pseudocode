/*
 * XREFs of ?SubscribeToServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800B2F50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z @ 0x1800A281C (--4-$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3A48 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIViewWrapper.c)
 *     ?RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ @ 0x1800B42D0 (-RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x18010988C (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AccessibilityExperienceManager::SubscribeToServices(
        AccessibilityExperienceManager *this,
        struct IServiceProvider *a2)
{
  char *v4; // rbx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, GUID *, GUID *, char *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  _OWORD *v9; // rax
  _OWORD *v10; // rbx
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(__int64, _OWORD *, _QWORD, _QWORD, char *); // rdi
  __int64 v13; // rax
  int v14; // eax
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v17; // eax
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, _QWORD, SID *, GUID *, char *); // rdi
  _QWORD *v20; // rsi
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // [rsp+30h] [rbp-40h] BYREF
  __int128 v25; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v26[24]; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v4 = (char *)this + 216;
  Microsoft::WRL::ComPtr<IServiceProvider>::operator=((__int64 *)this + 27, (__int64)a2);
  v5 = *(_QWORD *)v4;
  v6 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, char *))(**(_QWORD **)v4 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 26);
  v7 = v6(v5, &SID_ViewEventDispatcher, &GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e, (char *)this + 208);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x93,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
  *(_QWORD *)&v25 = AccessibilityExperienceManager::_OnViewEvent;
  DWORD2(v25) = 0;
  *(_QWORD *)v26 = (char *)this - 48;
  *(_OWORD *)&v26[8] = v25;
  v9 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( v9 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>(v9);
    v10[1] = *(_OWORD *)v26;
    *((_QWORD *)v10 + 4) = *(_QWORD *)&v26[16];
    *(_QWORD *)v10 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>::*)(Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>,_lambda_c4c171c796dda8ef92eb2cbbbcefab87_,-1,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>::`vftable';
  }
  else
  {
    v10 = 0LL;
  }
  *(_QWORD *)&v25 = v10;
  v11 = *((_QWORD *)this + 26);
  v12 = *(__int64 (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, char *))(*(_QWORD *)v11 + 48LL);
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v26, &qword_1807B3A38);
  v14 = v12(v11, v10, *(_QWORD *)(v13 + 24), 0LL, (char *)this + 192);
  v8 = v14;
  if ( v14 < 0 )
  {
    v22 = 154LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_12;
  }
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 44);
  v14 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
          a2,
          &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
          &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
          (char *)this + 352);
  v8 = v14;
  if ( v14 < 0 )
  {
    v22 = 156LL;
    goto LABEL_18;
  }
  v24 = 0LL;
  v16 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
  v17 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v16)(
          a2,
          &SID_IImmersiveMonitorService,
          &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
          &v24);
  v8 = v17;
  if ( v17 < 0 )
  {
    v23 = 162LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_11;
  }
  v18 = v24;
  v19 = *(__int64 (__fastcall **)(__int64, _QWORD, SID *, GUID *, char *))(*(_QWORD *)v24 + 72LL);
  v20 = (_QWORD *)((char *)this + 232);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 29);
  v17 = v19(v18, 0LL, &SID_ImmersiveLayout, &GUID_d770b2ad_8f5e_4b8e_b3df_f05a2ab5287c, (char *)this + 232);
  v8 = v17;
  if ( v17 < 0 )
  {
    v23 = 163LL;
    goto LABEL_23;
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 44) + 40LL))(
          *((_QWORD *)this + 44),
          ((unsigned __int64)this + 72) & -(__int64)(this != (AccessibilityExperienceManager *)48),
          (char *)this + 200);
  v8 = v17;
  if ( v17 < 0 )
  {
    v23 = 165LL;
    goto LABEL_23;
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v20 + 40LL))(
          *v20,
          10LL,
          ((unsigned __int64)this + 80) & -(__int64)(this != (AccessibilityExperienceManager *)48),
          (char *)this + 204);
  v8 = v17;
  if ( v17 < 0 )
  {
    v23 = 168LL;
    goto LABEL_23;
  }
  (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v20 + 72LL))(*v20, (char *)this + 392);
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  AccessibilityExperienceManager::RelaunchWithDelay((AccessibilityExperienceManager *)((char *)this - 48));
  v8 = 0;
LABEL_11:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
LABEL_12:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
  return v8;
}
