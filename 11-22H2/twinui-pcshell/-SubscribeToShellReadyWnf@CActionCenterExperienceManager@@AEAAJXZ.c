/*
 * XREFs of ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x180127FDC
 * Callers:
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800E923C (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180097490 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x1800A3E20 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x1800A5ACC (--$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$uniq.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800A64A4 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_4e2cc9a10809832ba46e22de4246ba81__void_ @ 0x1801281E4 (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_4e2cc9a10809832ba46e22.c)
 *     ??$AsWeak@VCActionCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCActionCenterExperienceManager@@PEAVWeakRef@01@@Z @ 0x180128278 (--$AsWeak@VCActionCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCActionCenterExperienceManager.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::SubscribeToShellReadyWnf(CActionCenterExperienceManager *this)
{
  unsigned __int64 v2; // rbx
  wil::details *v3; // rax
  int AgileReference; // edi
  __int64 *v5; // rax
  int v6; // eax
  wil::details **v7; // rax
  struct wil::details::wnf_subscription_state_base *v8; // rdx
  wil::details **v9; // rbx
  wil::details **v10; // rsi
  __int64 v12; // r9
  __int64 v13; // rdx
  wil::details *v14; // [rsp+28h] [rbp-69h] BYREF
  __int64 v15; // [rsp+30h] [rbp-61h] BYREF
  wil::details *v16; // [rsp+38h] [rbp-59h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-51h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v19[128]; // [rsp+58h] [rbp-39h] BYREF
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
    AgileReference = RoGetAgileReference(0LL, &GUID_df65db57_d504_456e_8bd7_004ce308d8d9, v2, &v14);
    v3 = v14;
  }
  v14 = 0LL;
  v16 = v3;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v14);
  if ( AgileReference < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42B,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)AgileReference,
      (int)v14);
    goto LABEL_16;
  }
  v15 = 0LL;
  v14 = (wil::details *)&v15;
  v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v14);
  v6 = Microsoft::WRL::AsWeak<CActionCenterExperienceManager>(this, v5);
  AgileReference = v6;
  if ( v6 < 0 )
  {
    v12 = (unsigned int)v6;
    v13 = 1070LL;
    goto LABEL_18;
  }
  v18[0] = this;
  v18[1] = v15;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_4e2cc9a10809832ba46e22de4246ba81__void_(
    v19,
    v18);
  v7 = (wil::details **)wil::make_wnf_subscription_nothrow<wil::details::empty_wnf_state>(
                          &v14,
                          (__int64)&WNF_SHEL_SESSION_LOGON_COMPLETE,
                          (__int64)v19,
                          0);
  v9 = v7;
  v10 = (wil::details **)((char *)this + 440);
  if ( v10 != v7 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      v10,
      *v7);
    *v9 = 0LL;
  }
  if ( v14 )
    wil::details::delete_wnf_subscription_state(v14, v8);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v19);
  if ( !*v10 )
  {
    AgileReference = -2147467259;
    v12 = 2147500037LL;
    v13 = 1078LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)v12,
      (int)v14);
    goto LABEL_15;
  }
  AgileReference = 0;
LABEL_15:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
LABEL_16:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
  return (unsigned int)AgileReference;
}
