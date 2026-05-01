/*
 * XREFs of ?UwpWindowVisibilityChanged@UwpWindowEventDispatcher@@UEAAJPEAUIWindowVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1803F7CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003DA78 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003E8F0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCachedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x1803EDB40 (-GetCachedView@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exc.c)
 *     ?attach@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x1803F8658 (-attach@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIUwpWi.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall UwpWindowEventDispatcher::UwpWindowVisibilityChanged(
        UwpWindowEventDispatcher *this,
        __int64 (***a2)(void))
{
  __int64 (**v4)(void); // rax
  unsigned int v5; // esi
  __int64 (*v6)(void); // rax
  int v7; // eax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64 *); // rdi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, _QWORD, int *); // rbx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rbx
  const char *v21; // r9
  __int64 result; // rax
  int v23[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v24; // [rsp+28h] [rbp-50h] BYREF
  __int64 v25; // [rsp+30h] [rbp-48h] BYREF
  __int64 v26; // [rsp+38h] [rbp-40h] BYREF
  __int64 v27; // [rsp+40h] [rbp-38h] BYREF
  RTL_SRWLOCK *v28; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v30; // [rsp+88h] [rbp+10h] BYREF
  int v31; // [rsp+90h] [rbp+18h] BYREF
  int v32; // [rsp+98h] [rbp+20h] BYREF

  v4 = *a2;
  v5 = 0;
  v27 = 0LL;
  v6 = *v4;
  try
  {
    v7 = v6();
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x524,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v7,
        v23[0]);
    v24 = 0LL;
    v8 = v27;
    v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 48LL);
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v24);
    v10 = v9(v8, &v24);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x527,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v10,
        v23[0]);
    v11 = ((__int64 (__fastcall *)(__int64 (***)(void), int *))(*a2)[6])(a2, &v32);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x52A,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v11,
        v23[0]);
    v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v24 + 80LL))(v24, &v30);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x52D,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v12,
        v23[0]);
    *(_QWORD *)v23 = 0LL;
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 37) + 56LL))(*((_QWORD *)this + 37), &v26);
    v14 = *(_QWORD *)v13;
    v15 = *(__int64 (__fastcall **)(__int64, _QWORD, int *))(**(_QWORD **)v13 + 112LL);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)v23);
    v16 = v15(v14, v30, v23);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x530,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v16,
        v23[0]);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v26);
    if ( !*(_QWORD *)v23 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x531,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)0x80070057LL,
        0);
    v17 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v23 + 48LL))(*(_QWORD *)v23, &v31);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x534,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v17,
        v23[0]);
    v26 = 0LL;
    AcquireSRWLockShared((PSRWLOCK)this + 57);
    v28 = (RTL_SRWLOCK *)((char *)this + 456);
    UwpWindowEventDispatcher::GetCachedView((__int64)this - 16, &v25, v31);
    v18 = v25;
    v25 = 0LL;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::attach(&v26, v18, v19);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v25);
    v20 = v26;
    if ( !v26 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x53A,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)0x80070490LL,
        v23[0]);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v28);
    LOBYTE(v5) = v32 == 1;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v20 + 320LL))(v20, 1LL, v5);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v26);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)v23);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v24);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v27);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x542,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v21);
  }
  return result;
}
