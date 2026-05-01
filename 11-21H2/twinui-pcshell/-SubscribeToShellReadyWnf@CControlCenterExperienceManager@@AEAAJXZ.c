/*
 * XREFs of ?SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ @ 0x1800E1F68
 * Callers:
 *     ?RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800A5450 (-RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x18005C210 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006C1F8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsWeak@VCControlCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCControlCenterExperienceManager@@PEAVWeakRef@01@@Z @ 0x1800E1E3C (--$AsWeak@VCControlCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCControlCenterExperienceManag.c)
 *     ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x1800E3EC0 (--$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$uniq.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800E44D8 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800E4540 (--1-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1801492F0 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_db634c1a1de8526753ceb0d769df7cf6__void_ @ 0x180193B3C (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_db634c1a1de8526753ceb0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CControlCenterExperienceManager::SubscribeToShellReadyWnf(CControlCenterExperienceManager *this)
{
  unsigned __int64 v2; // rbx
  __int64 *v3; // rax
  int AgileReference; // edi
  __int64 *v5; // rax
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rsi
  __int64 *v13; // [rsp+28h] [rbp-69h] BYREF
  __int64 v14; // [rsp+30h] [rbp-61h] BYREF
  __int64 *v15; // [rsp+38h] [rbp-59h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-51h] BYREF
  CControlCenterExperienceManager *v17; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v18[8]; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v19[128]; // [rsp+58h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v2 = ((unsigned __int64)this + 32) & -(__int64)(this != 0LL);
  v16 = v2;
  if ( v2 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 8LL))(((unsigned __int64)this + 32) & -(__int64)(this != 0LL));
  v3 = 0LL;
  v13 = 0LL;
  AgileReference = 0;
  if ( v2 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
    AgileReference = RoGetAgileReference(0LL, &GUID_d669a58e_6b18_4d1d_9004_a8862adb0a20, v2, &v13);
    v3 = v13;
  }
  v13 = 0LL;
  v15 = v3;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
  if ( AgileReference >= 0 )
  {
    v14 = 0LL;
    v13 = &v14;
    v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v13);
    v6 = Microsoft::WRL::AsWeak<CControlCenterExperienceManager>((__int64)this, v5);
    AgileReference = v6;
    if ( v6 >= 0 )
    {
      v17 = this;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(v18, &v14);
      wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_db634c1a1de8526753ceb0d769df7cf6__void_(
        v19,
        &v17);
      v9 = (_QWORD *)wil::make_wnf_subscription_nothrow<wil::details::empty_wnf_state>(
                       &v13,
                       &WNF_SHEL_SESSION_LOGON_COMPLETE,
                       v19,
                       0LL);
      v10 = v9;
      v11 = (_QWORD *)((char *)this + 344);
      if ( v11 != v9 )
      {
        wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
          v11,
          *v9);
        *v10 = 0LL;
      }
      wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>(&v13);
      wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v19);
      if ( *v11 )
      {
        AgileReference = 0;
        goto LABEL_15;
      }
      AgileReference = -2147467259;
      v7 = 2147500037LL;
      v8 = 1055LL;
    }
    else
    {
      v7 = (unsigned int)v6;
      v8 = 1047LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)v7);
LABEL_15:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x414,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
    (const char *)(unsigned int)AgileReference);
LABEL_16:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v15);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
  return (unsigned int)AgileReference;
}
