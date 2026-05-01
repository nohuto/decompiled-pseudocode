/*
 * XREFs of ?RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ @ 0x1800AF578
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180159A2C (--$MakeAndInitialize@VCApplicationViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x18005C210 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVNotificationDispatcher@@@Z @ 0x1800A0D5C (--$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVNotificati.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800B0B20 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?ApplicationViewManagerVisibilityDebouncer_CreateInstance@@YAJPEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1800D9B74 (-ApplicationViewManagerVisibilityDebouncer_CreateInstance@@YAJPEAUIApplicationViewCollection@@AE.c)
 *     ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x1800E3EC0 (--$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$uniq.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800E44D8 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800E4540 (--1-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18014731C (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall CApplicationViewManager::RuntimeClassInitialize(CApplicationViewManager *this)
{
  void **v1; // rsi
  int Instance; // ebx
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  _BYTE v9[16]; // [rsp+28h] [rbp-49h] BYREF
  GUID v10; // [rsp+38h] [rbp-39h] BYREF
  __int128 v11; // [rsp+48h] [rbp-29h]
  GUID v12; // [rsp+58h] [rbp-19h]
  __int128 v13; // [rsp+68h] [rbp-9h]
  GUID v14; // [rsp+78h] [rbp+7h]
  void *v15; // [rsp+88h] [rbp+17h]
  __int64 v16; // [rsp+90h] [rbp+1Fh]
  GUID v17; // [rsp+98h] [rbp+27h]
  __int128 v18; // [rsp+A8h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v1 = (void **)((char *)this + 728);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 91);
  Instance = ApplicationViewManagerVisibilityDebouncer_CreateInstance(
               (struct IApplicationViewCollection *)(((unsigned __int64)this + 136) & -(__int64)(this != 0LL)),
               (const struct _GUID *)((char *)this + 136),
               v1);
  if ( Instance < 0 )
  {
    v7 = 20LL;
    goto LABEL_8;
  }
  v15 = *v1;
  v10 = GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5;
  v16 = 0LL;
  v11 = 0LL;
  v12 = GUID_e0fe7384_5482_4659_ab2c_4ff038948779;
  v13 = 0LL;
  v14 = GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3;
  v18 = 0LL;
  v17 = GUID_de6e8a03_3811_4239_9de9_96d0dfc301e6;
  Instance = CImmersiveShellComponent::RegisterServiceInformation(
               (CApplicationViewManager *)((char *)this + 72),
               (const struct CImmersiveShellComponent::ISC_SERVICE *)&v10,
               4u);
  if ( Instance < 0 )
  {
    v7 = 29LL;
    goto LABEL_8;
  }
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease((char *)this + 808);
  Instance = Microsoft::WRL::Details::MakeAndInitialize<NotificationDispatcher,NotificationDispatcher,>((RTL_SRWLOCK **)this + 101);
  if ( Instance < 0 )
  {
    v7 = 30LL;
    goto LABEL_8;
  }
  *(_QWORD *)&v11 = this;
  *(_QWORD *)v10.Data4 = off_1806253A0;
  *(_QWORD *)&v18 = v10.Data4;
  v4 = (_QWORD *)wil::make_wnf_subscription_nothrow<wil::details::empty_wnf_state>(
                   v9,
                   &WNF_EDP_ENTERPRISE_CONTEXTS_UPDATED,
                   &v10,
                   0LL);
  v5 = (_QWORD *)((char *)this + 720);
  v6 = v4;
  if ( v5 != v4 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      v5,
      *v4);
    *v6 = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>(v9);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)&v10);
  if ( !*v5 )
  {
    Instance = -2147024882;
    v7 = 48LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  return 0LL;
}
