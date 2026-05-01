/*
 * XREFs of ?SubscribeToServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E6940
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x1800A3E20 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x1800A5ACC (--$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$uniq.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800A64A4 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??4?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z @ 0x1800EA0E8 (--4-$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x1800EAB24 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FDD58 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIViewWrapper.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180142264 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18017AA2C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingOverlayExperienceManager::SubscribeToServices(
        GamingOverlayExperienceManager *this,
        struct IServiceProvider *a2)
{
  char *v4; // r14
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v6; // eax
  unsigned int v7; // ebx
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, _QWORD, SID *, GUID *); // rdi
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, GUID *, GUID *, char *); // rbx
  char *v17; // rax
  char *v18; // rdi
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // r14
  __int64 (__fastcall *v20)(_QWORD, GUID *, __int64 *); // rbx
  int v21; // eax
  unsigned int v22; // r8d
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, char *, PVOID, _QWORD); // r14
  HSTRING_HEADER *v25; // rax
  __int64 v26; // rdx
  wil::details **v27; // rax
  struct wil::details::wnf_subscription_state_base *v28; // rdx
  wil::details **v29; // rbx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  int v34; // [rsp+20h] [rbp-E0h]
  __int64 v35; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v37; // [rsp+50h] [rbp-B0h] BYREF
  wil::details *v38; // [rsp+60h] [rbp-A0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-98h] BYREF
  HSTRING_HEADER v40; // [rsp+70h] [rbp-90h] BYREF
  char v41[8]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v42[15]; // [rsp+98h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)this + 10);
  v4 = (char *)this + 320;
  Microsoft::WRL::ComPtr<IServiceProvider>::operator=((char *)this + 320, a2);
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 38);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6,
         &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6,
         (char *)this + 304);
  v7 = v6;
  if ( v6 < 0 )
  {
    v31 = 3535LL;
  }
  else
  {
    v8 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 39);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v8)(
           a2,
           &GUID_a993a76e_0909_48bb_b0e9_4d8236263896,
           &GUID_a993a76e_0909_48bb_b0e9_4d8236263896,
           (char *)this + 312);
    v7 = v6;
    if ( v6 < 0 )
    {
      v31 = 3538LL;
    }
    else
    {
      v9 = a2->lpVtbl->QueryService;
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 46);
      v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v9)(
             a2,
             &CLSID_ImmersivePlaybackManager,
             &GUID_1fc98738_e0bf_4cb2_9de2_20ab31b23ce4,
             (char *)this + 368);
      v7 = v6;
      if ( v6 < 0 )
      {
        v31 = 3541LL;
      }
      else
      {
        v10 = a2->lpVtbl->QueryService;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 35);
        v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v10)(
               a2,
               &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
               &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
               (char *)this + 280);
        v7 = v6;
        if ( v6 >= 0 )
        {
          v36 = 0LL;
          v11 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v36);
          v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v11)(
                  a2,
                  &SID_IImmersiveMonitorService,
                  &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
                  &v36);
          v7 = v12;
          if ( v12 < 0 )
          {
            v32 = 3548LL;
          }
          else
          {
            v13 = v36;
            v14 = *(__int64 (__fastcall **)(__int64, _QWORD, SID *, GUID *))(*(_QWORD *)v36 + 72LL);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 37);
            v34 = (_DWORD)this + 296;
            v12 = v14(v13, 0LL, &SID_ImmersiveLayout, &GUID_d770b2ad_8f5e_4b8e_b3df_f05a2ab5287c);
            v7 = v12;
            if ( v12 < 0 )
            {
              v32 = 3549LL;
            }
            else
            {
              v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(**((_QWORD **)this + 37)
                                                                                         + 40LL))(
                      *((_QWORD *)this + 37),
                      10LL,
                      ((unsigned __int64)this + 72) & -(__int64)(this != (GamingOverlayExperienceManager *)48),
                      (char *)this + 376);
              v7 = v12;
              if ( v12 < 0 )
              {
                v32 = 3556LL;
              }
              else
              {
                v15 = *(_QWORD *)v4;
                v16 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, char *))(**(_QWORD **)v4 + 24LL);
                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 41);
                v12 = v16(v15, &SID_ViewEventDispatcher, &GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e, (char *)this + 328);
                v7 = v12;
                if ( v12 >= 0 )
                {
                  *(_QWORD *)&v37 = GamingOverlayExperienceManager::OnViewEvent;
                  DWORD2(v37) = 0;
                  v40.Reserved.Reserved1 = (char *)this - 48;
                  *(_OWORD *)&v40.Reserved.Reserved2[8] = v37;
                  v17 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
                  v18 = v17;
                  if ( v17 )
                  {
                    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>(v17);
                    *(HSTRING_HEADER *)(v18 + 16) = v40;
                    *(_QWORD *)v18 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>::*)(Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>,_lambda_c4c171c796dda8ef92eb2cbbbcefab87_,-1,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>::`vftable';
                  }
                  else
                  {
                    v18 = 0LL;
                  }
                  *(_QWORD *)&v37 = v18;
                  v35 = 0LL;
                  v19 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 41);
                  v20 = **v19;
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
                  v21 = v20(v19, &GUID_22347704_c4ce_4e82_afeb_c6a00e06cc3a, &v35);
                  v7 = v21;
                  if ( v21 < 0 )
                  {
                    v33 = 3571LL;
                  }
                  else
                  {
                    v23 = v35;
                    v24 = *(__int64 (__fastcall **)(__int64, char *, PVOID, _QWORD))(*(_QWORD *)v35 + 48LL);
                    v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                            &v40,
                            (const WCHAR **)&c_GamingOverlayAppId,
                            v22);
                    v34 = 1;
                    v21 = v24(v23, v18, v25[1].Reserved.Reserved1, 0LL);
                    v7 = v21;
                    if ( v21 < 0 )
                    {
                      v33 = 3582LL;
                    }
                    else
                    {
                      LOBYTE(v26) = 1;
                      wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::ReportUsage(
                        &`wil::Feature<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::GetImpl'::`2'::impl,
                        v26);
                      v21 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 35) + 40LL))(
                              *((_QWORD *)this + 35),
                              ((unsigned __int64)this + 80) & -(__int64)(this != (GamingOverlayExperienceManager *)48),
                              (char *)this + 380);
                      v7 = v21;
                      if ( v21 < 0 )
                      {
                        v33 = 3587LL;
                      }
                      else
                      {
                        Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((char *)this + 768);
                        v21 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((char *)this + 768);
                        v7 = v21;
                        if ( v21 >= 0 )
                        {
                          v42[0] = off_1807C3950;
                          v42[1] = (char *)this - 48;
                          v42[13] = v42;
                          v27 = (wil::details **)wil::make_wnf_subscription_nothrow<wil::details::empty_wnf_state>(
                                                   &v38,
                                                   (__int64)&WNF_SHEL_LOGON_COMPLETE,
                                                   (__int64)v41,
                                                   0);
                          v29 = v27;
                          if ( (wil::details **)((char *)this + 744) != v27 )
                          {
                            wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
                              (wil::details **)this + 93,
                              *v27);
                            *v29 = 0LL;
                          }
                          if ( v38 )
                            wil::details::delete_wnf_subscription_state(v38, v28);
                          wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v41);
                          v7 = 0;
                          goto LABEL_20;
                        }
                        v33 = 3591LL;
                      }
                    }
                  }
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v33,
                    (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                    (const char *)(unsigned int)v21,
                    v34);
LABEL_20:
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v37);
LABEL_21:
                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v36);
                  goto LABEL_22;
                }
                v32 = 3562LL;
              }
            }
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v32,
            (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
            (const char *)(unsigned int)v12,
            v34);
          goto LABEL_21;
        }
        v31 = 3544LL;
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v31,
    (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
    (const char *)(unsigned int)v6,
    v34);
LABEL_22:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
