/*
 * XREFs of ?PerformDelayedInitialization@UwpWindowEventDispatcher@@UEAAJXZ @ 0x1803EF660
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003DA78 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UwpWindowRemoved@UwpWindowEventDispatcher@@UEAAJAEBUUwpWindowContextRemovedEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1803F6490 (-UwpWindowRemoved@UwpWindowEventDispatcher@@UEAAJAEBUUwpWindowContextRemovedEventArgs@UwpWindowL.c)
 *     ?clear@?$vector@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1803F8690 (-clear@-$vector@V-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V-$all.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall UwpWindowEventDispatcher::PerformDelayedInitialization(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rsi
  RTL_SRWLOCK *v2; // r15
  _QWORD *Ptr; // r14
  _QWORD *v4; // r12
  PVOID v5; // rbx
  __int64 (__fastcall *v6)(PVOID, _QWORD, _QWORD); // rdi
  unsigned int *v7; // rax
  int v8; // eax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64 *); // rbx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  const char *v14; // r9
  int v16; // [rsp+20h] [rbp-48h] BYREF
  char v17; // [rsp+24h] [rbp-44h]
  RTL_SRWLOCK *v18[8]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  RTL_SRWLOCK *v20; // [rsp+70h] [rbp+8h] BYREF
  int v21; // [rsp+78h] [rbp+10h] BYREF
  char v22; // [rsp+80h] [rbp+18h] BYREF
  __int64 v23; // [rsp+88h] [rbp+20h] BYREF

  v20 = this;
  v1 = this;
  v2 = this + 33;
  Ptr = this[33].Ptr;
  v4 = this[34].Ptr;
  try
  {
    while ( Ptr != v4 )
    {
      v23 = 0LL;
      wil::AcquireSRWLockExclusive(v18, v1 + 43);
      v5 = v1[23].Ptr;
      v6 = *(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)v5 + 64LL);
      v7 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*Ptr + 288LL))(*Ptr, &v22);
      v8 = v6(v5, *v7, 0LL);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x88,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v8);
      v9 = *Ptr;
      v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*Ptr + 232LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v23);
      v11 = v10(v9, &v23);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x89,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v11);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v18);
      if ( v23 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 48LL))(v23, &v21);
        if ( v12 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x92,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
            (const char *)(unsigned int)v12,
            v16);
        v16 = v21;
        v17 = 0;
        v13 = UwpWindowEventDispatcher::UwpWindowRemoved(
                (UwpWindowEventDispatcher *)&v1[-14],
                (const struct Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextRemovedEventArgs *)&v16);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x93,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
            (const char *)(unsigned int)v13);
      }
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v23);
      ++Ptr;
    }
    std::vector<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>>::clear(v2);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x99,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      v14);
    v1 = v20;
  }
  wil::AcquireSRWLockExclusive(&v20, v1 + 43);
  LOBYTE(v1[46].Ptr) = 1;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v20);
  return 0LL;
}
