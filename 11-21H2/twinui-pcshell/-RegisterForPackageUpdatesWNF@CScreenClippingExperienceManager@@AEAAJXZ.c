/*
 * XREFs of ?RegisterForPackageUpdatesWNF@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1800B44EC
 * Callers:
 *     ?RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1800B5964 (-RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x18005C210 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006C1F8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wistd::function_void___cdecl(unsigned_long_const_&)_::function_void___cdecl(unsigned_long_const_&)___lambda_56f82e2d72bc142b92699b1566ad23a5__void_ @ 0x1800B4D68 (wistd--function_void___cdecl(unsigned_long_const_-)_--function_void___cdecl(unsigne_ea_1800B4D68.c)
 *     ??$AsWeak@VCScreenClippingExperienceManager@@@WRL@Microsoft@@YAJPEAVCScreenClippingExperienceManager@@PEAVWeakRef@01@@Z @ 0x1800B4DC0 (--$AsWeak@VCScreenClippingExperienceManager@@@WRL@Microsoft@@YAJPEAVCScreenClippingExperienceMan.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800E44D8 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800E4540 (--1-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@.c)
 *     ??$make_wnf_subscription_nothrow@K@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@K@Z @ 0x1800E47C8 (--$make_wnf_subscription_nothrow@K@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CScreenClippingExperienceManager::RegisterForPackageUpdatesWNF(
        CScreenClippingExperienceManager *this)
{
  _DWORD *v2; // rcx
  __int64 *v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  CScreenClippingExperienceManager *wnf_subscription; // rax
  CScreenClippingExperienceManager *v7; // rdi
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // [rsp+38h] [rbp-69h] BYREF
  __int64 *v12; // [rsp+40h] [rbp-61h] BYREF
  _BYTE v13[128]; // [rsp+48h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+C8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v2 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   (__int64)this,
                   _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v2, (unsigned __int8 *)dword_1806A973D, 0LL, 0LL, 2u, &v14);
  v11 = 0LL;
  v12 = &v11;
  v3 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v12);
  v4 = Microsoft::WRL::AsWeak<CScreenClippingExperienceManager>(this, v3);
  v5 = v4;
  if ( v4 < 0 )
  {
    v9 = (unsigned int)v4;
    v10 = 625LL;
    goto LABEL_12;
  }
  v14.Ptr = (ULONGLONG)this;
  *(_QWORD *)&v14.Size = v11;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  wistd::function_void___cdecl_unsigned_long_const____::function_void___cdecl_unsigned_long_const______lambda_56f82e2d72bc142b92699b1566ad23a5__void_(
    v13,
    &v14);
  wnf_subscription = (CScreenClippingExperienceManager *)wil::make_wnf_subscription_nothrow<unsigned long>(
                                                           &v12,
                                                           &WNF_SHEL_PACKAGE_SERVICING_STATUS,
                                                           v13);
  v7 = wnf_subscription;
  if ( (CScreenClippingExperienceManager *)((char *)this + 328) != wnf_subscription )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 328,
      *(_QWORD *)wnf_subscription);
    *(_QWORD *)v7 = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>(&v12);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v13);
  if ( !*((_QWORD *)this + 41) )
  {
    v5 = -2147467259;
    v9 = 2147500037LL;
    v10 = 646LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)v9);
    goto LABEL_10;
  }
  v5 = 0;
LABEL_10:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  return v5;
}
