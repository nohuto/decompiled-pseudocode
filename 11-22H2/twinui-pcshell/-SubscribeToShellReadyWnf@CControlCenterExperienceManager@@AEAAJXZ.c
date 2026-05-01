/*
 * XREFs of ?SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ @ 0x18012837C
 * Callers:
 *     ?RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801057B0 (-RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180097490 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x1800A3E20 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x1800A5ACC (--$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$uniq.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800A64A4 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800B382C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$AsWeak@VCControlCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCControlCenterExperienceManager@@PEAVWeakRef@01@@Z @ 0x180128550 (--$AsWeak@VCControlCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCControlCenterExperienceManag.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_bc4582fc0e1ebbe91b3d0812ed51ffb5__void_ @ 0x1801DD628 (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_bc4582fc0e1ebbe91b3d08.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::SubscribeToShellReadyWnf(CControlCenterExperienceManager *this)
{
  unsigned __int64 v2; // rbx
  wil::details *v3; // rax
  int AgileReference; // edi
  __int64 *v5; // rax
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rdx
  wil::details **v9; // rax
  struct wil::details::wnf_subscription_state_base *v10; // rdx
  wil::details **v11; // rbx
  wil::details **v12; // rsi
  wil::details *v14; // [rsp+28h] [rbp-69h] BYREF
  __int64 v15; // [rsp+30h] [rbp-61h] BYREF
  wil::details *v16; // [rsp+38h] [rbp-59h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-51h] BYREF
  CControlCenterExperienceManager *v18; // [rsp+48h] [rbp-49h] BYREF
  __int64 v19; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v20[128]; // [rsp+58h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v2 = ((unsigned __int64)this + 32) & -(__int64)(this != 0LL);
  v17 = v2;
  if ( v2 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 8LL))(((unsigned __int64)this + 32) & -(__int64)(this != 0LL));
  v3 = 0LL;
  v14 = 0LL;
  AgileReference = 0;
  if ( v2 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v14);
    AgileReference = RoGetAgileReference(0LL, &GUID_d669a58e_6b18_4d1d_9004_a8862adb0a20, v2, &v14);
    v3 = v14;
  }
  v14 = 0LL;
  v16 = v3;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v14);
  if ( AgileReference >= 0 )
  {
    v15 = 0LL;
    v14 = (wil::details *)&v15;
    v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v14);
    v6 = Microsoft::WRL::AsWeak<CControlCenterExperienceManager>(this, v5);
    AgileReference = v6;
    if ( v6 >= 0 )
    {
      v18 = this;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
        &v19,
        &v15);
      wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_bc4582fc0e1ebbe91b3d0812ed51ffb5__void_(
        v20,
        &v18);
      v9 = (wil::details **)wil::make_wnf_subscription_nothrow<wil::details::empty_wnf_state>(
                              &v14,
                              (__int64)&WNF_SHEL_SESSION_LOGON_COMPLETE,
                              (__int64)v20,
                              0);
      v11 = v9;
      v12 = (wil::details **)((char *)this + 400);
      if ( v12 != v9 )
      {
        wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
          v12,
          *v9);
        *v11 = 0LL;
      }
      if ( v14 )
        wil::details::delete_wnf_subscription_state(v14, v10);
      wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v20);
      if ( *v12 )
      {
        AgileReference = 0;
        goto LABEL_17;
      }
      AgileReference = -2147467259;
      v7 = 2147500037LL;
      v8 = 1289LL;
    }
    else
    {
      v7 = (unsigned int)v6;
      v8 = 1281LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)v7,
      (int)v14);
LABEL_17:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4FE,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
    (const char *)(unsigned int)AgileReference,
    (int)v14);
LABEL_18:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
  return (unsigned int)AgileReference;
}
