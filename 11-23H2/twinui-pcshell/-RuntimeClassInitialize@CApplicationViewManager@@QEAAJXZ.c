/*
 * XREFs of ?RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ @ 0x18012DA34
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18012D6EC (--$MakeAndInitialize@VCApplicationViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18005F5C4 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x1800A3E20 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x1800A5ACC (--$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$uniq.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800A64A4 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIApplicationViewVisibilityDebouncedNotificationServicePrivate@@UIApplicationViewVisibilityDebouncedNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewChangeListener@@UIApplicationViewCollection@@UIApplicationViewCollectionTestHook@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIApplicationViewVisibilityDebouncedNotificationServicePrivate@@UIApplicationViewVisibilityDebouncedNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewChangeListener@@UIApplicationViewCollection@@UIApplicationViewCollectionTestHook@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800DE90C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterfac.c)
 *     ??$MakeAndInitialize@VApplicationViewManagerVisibilityDebouncer@@V1@AEAPEAUIApplicationViewCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewManagerVisibilityDebouncer@@AEAPEAUIApplicationViewCollection@@@Z @ 0x1800FE118 (--$MakeAndInitialize@VApplicationViewManagerVisibilityDebouncer@@V1@AEAPEAUIApplicationViewColle.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010BDB8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVNotificationDispatcher@@@Z @ 0x18012F384 (--$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVNotificati.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x180164114 (-InternalRelease@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::RuntimeClassInitialize(CApplicationViewManager *this)
{
  __int64 *v2; // rsi
  int v3; // eax
  int v4; // ebx
  wil::details **v5; // rax
  struct wil::details::wnf_subscription_state_base *v6; // rdx
  wil::details **v7; // rbx
  wil::details **v8; // rdi
  __int64 v9; // rdx
  __int64 v11; // rdx
  ApplicationViewManagerVisibilityDebouncer *v12; // [rsp+28h] [rbp-49h] BYREF
  wil::details *v13; // [rsp+30h] [rbp-41h] BYREF
  GUID v14; // [rsp+38h] [rbp-39h] BYREF
  __int128 v15; // [rsp+48h] [rbp-29h]
  GUID v16; // [rsp+58h] [rbp-19h]
  __int128 v17; // [rsp+68h] [rbp-9h]
  GUID v18; // [rsp+78h] [rbp+7h]
  __int64 v19; // [rsp+88h] [rbp+17h]
  __int64 v20; // [rsp+90h] [rbp+1Fh]
  GUID v21; // [rsp+98h] [rbp+27h]
  __int128 v22; // [rsp+A8h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v2 = (__int64 *)((char *)this + 728);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 91);
  v13 = (wil::details *)(((unsigned __int64)this + 136) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  *v2 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v12);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewManagerVisibilityDebouncer,ApplicationViewManagerVisibilityDebouncer,IApplicationViewCollection * &>(
         &v12,
         &v13);
  v4 = v3;
  if ( v3 < 0 )
  {
    v11 = 373LL;
  }
  else
  {
    v3 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IApplicationViewVisibilityDebouncedNotificationServicePrivate,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewChangeListener,IApplicationViewCollection,IApplicationViewCollectionTestHook,Microsoft::WRL::FtmBase>>(
           (__int64)v12,
           &GUID_7b75e1b4_5965_48b5_9daa_59f76b0d9b87,
           v2);
    v4 = v3;
    if ( v3 >= 0 )
      goto LABEL_3;
    v11 = 374LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
    (const char *)(unsigned int)v3,
    (int)v12);
LABEL_3:
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v12);
  if ( v4 < 0 )
  {
    v9 = 21LL;
    goto LABEL_12;
  }
  v14 = GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5;
  v15 = 0LL;
  v16 = GUID_e0fe7384_5482_4659_ab2c_4ff038948779;
  v17 = 0LL;
  v18 = GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3;
  v19 = *v2;
  v20 = 0LL;
  v21 = GUID_de6e8a03_3811_4239_9de9_96d0dfc301e6;
  v22 = 0LL;
  v4 = CImmersiveShellComponent::RegisterServiceInformation(
         (CApplicationViewManager *)((char *)this + 72),
         (__int64)&v14,
         4uLL);
  if ( v4 < 0 )
  {
    v9 = 30LL;
    goto LABEL_12;
  }
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease((__int64 *)this + 101);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<NotificationDispatcher,NotificationDispatcher,>((char *)this + 808);
  if ( v4 < 0 )
  {
    v9 = 31LL;
    goto LABEL_12;
  }
  *(_QWORD *)v14.Data4 = off_1807B54B8;
  *(_QWORD *)&v15 = this;
  *(_QWORD *)&v22 = v14.Data4;
  v5 = (wil::details **)wil::make_wnf_subscription_nothrow<wil::details::empty_wnf_state>(
                          &v13,
                          (__int64)&WNF_EDP_ENTERPRISE_CONTEXTS_UPDATED,
                          (__int64)&v14,
                          0);
  v7 = v5;
  v8 = (wil::details **)((char *)this + 720);
  if ( v8 != v5 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      v8,
      *v5);
    *v7 = 0LL;
  }
  if ( v13 )
    wil::details::delete_wnf_subscription_state(v13, v6);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)&v14);
  if ( !*v8 )
  {
    v4 = -2147024882;
    v9 = 49LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v4,
      (int)v12);
    return (unsigned int)v4;
  }
  return 0LL;
}
