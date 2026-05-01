/*
 * XREFs of ?UnsubscribeFromServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801299B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008D264 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800A64A4 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4E4C (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall UwpWindowEventDispatcher::UnsubscribeFromServices(
        UwpWindowEventDispatcher *this,
        struct IServiceProvider *a2)
{
  __int64 v4; // rcx
  struct IServiceProviderVtbl *lpVtbl; // rax
  int v6; // eax
  int v7; // eax
  struct IServiceProviderVtbl *v8; // rax
  int v9; // eax
  int v11; // [rsp+20h] [rbp-28h]
  std::_Ref_count_base *v12[2]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 32LL))(*((_QWORD *)this + 24));
  v4 = *((_QWORD *)this + 30);
  if ( v4 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (wil::details **)(v4 + 40),
      0LL);
    *(_OWORD *)v12 = 0LL;
    std::shared_ptr<ViewEventRegistration>::operator=((_QWORD *)this + 30, (__int64 *)v12);
    if ( v12[1] )
      std::_Ref_count_base::_Decref(v12[1]);
  }
  if ( *((_DWORD *)this + 89) )
  {
    lpVtbl = a2->lpVtbl;
    v14 = 0LL;
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))lpVtbl->QueryService)(
           a2,
           &IID_IImmersiveSessionIdleDetector,
           &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
           &v14);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xBB,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        v11);
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 40LL))(v14, *((unsigned int *)this + 89));
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xBD,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v7,
          v11);
      *((_DWORD *)this + 89) = 0;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
  }
  if ( *((_DWORD *)this + 88) )
  {
    v8 = a2->lpVtbl;
    v14 = 0LL;
    v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v8->QueryService)(
           a2,
           &SID_ImmersiveShellHookService,
           &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
           &v14);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC5,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v9,
        v11);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 32LL))(v14, *((unsigned int *)this + 88));
    *((_DWORD *)this + 88) = 0;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
  }
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 25);
  return 0LL;
}
