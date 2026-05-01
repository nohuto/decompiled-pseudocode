/*
 * XREFs of ?UwpWindowConsolidateRequested@UwpWindowEventDispatcher@@UEAAJPEAUIConsolidateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1803F6100
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180095E64 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801A8BCC (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCachedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1803EDC2C (-GetCachedView@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInter_ea_1803EDC2C.c)
 *     ?RaiseViewEvent@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x1803F0058 (-RaiseViewEvent@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?attach@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x1803F8658 (-attach@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIUwpWi.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall UwpWindowEventDispatcher::UwpWindowConsolidateRequested(RTL_SRWLOCK *this, __int64 (***a2)(void))
{
  __int64 (**v3)(void); // rax
  __int64 (*v4)(void); // rax
  int v5; // eax
  int v6; // eax
  __int64 *CachedView; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 (__fastcall ***v10)(_QWORD, GUID *, _QWORD *); // rbx
  __int64 *v11; // rax
  RTL_SRWLOCK *v12; // rcx
  const char *v13; // r9
  __int64 result; // rax
  RTL_SRWLOCK *v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+28h] [rbp-30h] BYREF
  std::_Ref_count_base *v17; // [rsp+30h] [rbp-28h]
  std::_Ref_count_base *v18[2]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v20; // [rsp+68h] [rbp+10h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, _QWORD *); // [rsp+70h] [rbp+18h] BYREF
  __int64 v22; // [rsp+78h] [rbp+20h] BYREF

  v3 = *a2;
  v22 = 0LL;
  v4 = *v3;
  try
  {
    v5 = v4();
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6FD,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v5,
        (int)v15);
    v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 48LL))(v22, &v20);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x700,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        (int)v15);
    v21 = 0LL;
    *(_OWORD *)v18 = 0LL;
    AcquireSRWLockShared(this + 57);
    v15 = this + 57;
    CachedView = UwpWindowEventDispatcher::GetCachedView((__int64)&this[-2], &v16, v20);
    v8 = *CachedView;
    *CachedView = 0LL;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::attach(&v21, v8, v9);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v16);
    v10 = v21;
    if ( v21 )
    {
      v11 = (__int64 *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64 *))(*v21)[33])(
                         v21,
                         &v16);
      std::shared_ptr<ViewEventRegistration>::operator=(v18, v11);
      if ( v17 )
        std::_Ref_count_base::_Decref(v17);
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v15);
    if ( v10 )
    {
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
        &v21,
        &v16);
      v12 = (RTL_SRWLOCK *)*((_QWORD *)v18[0] + 3);
      v15 = v12;
      if ( v12 )
        (*((void (__fastcall **)(RTL_SRWLOCK *))v12->Ptr + 1))(v12);
      UwpWindowEventDispatcher::RaiseViewEvent((__int64)&this[-2], v16, 0x23u, (__int64 *)&v15);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v16);
    }
    if ( v18[1] )
      std::_Ref_count_base::_Decref(v18[1]);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v21);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v22);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x717,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v13);
  }
  return result;
}
