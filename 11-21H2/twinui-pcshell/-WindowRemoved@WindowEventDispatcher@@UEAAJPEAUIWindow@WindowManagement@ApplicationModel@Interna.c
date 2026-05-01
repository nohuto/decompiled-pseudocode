/*
 * XREFs of ?WindowRemoved@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180121B50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x180074904 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$WindowEventDispatcher_OnWindowRemoved@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z @ 0x180122714 (--$WindowEventDispatcher_OnWindowRemoved@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z.c)
 *     ?GetAppViewStatics@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18012280C (-GetAppViewStatics@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIAppViewStatics@WindowManagement@A.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WindowEventDispatcher::WindowRemoved(
        WindowEventDispatcher *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *a2)
{
  int v4; // eax
  __int64 AppViewStatics; // rax
  __int64 v6; // r14
  __int64 (__fastcall *v7)(__int64, struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *, __int64 *); // r15
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  RTL_SRWLOCK *v13[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v15; // [rsp+68h] [rbp+10h] BYREF
  char v16; // [rsp+70h] [rbp+18h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *, char *))(*(_QWORD *)a2 + 80LL))(
         a2,
         &v16);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x665,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v4,
      v12);
  v17 = 0LL;
  AppViewStatics = WindowEventDispatcher::GetAppViewStatics((char *)this - 16, v13);
  v6 = *(_QWORD *)AppViewStatics;
  v7 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *, __int64 *))(**(_QWORD **)AppViewStatics + 120LL);
  v8 = v17;
  v17 = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = v7(v6, a2, &v17);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x668,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v9,
      v12);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)v13);
  v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 48LL))(v17, &v15);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x66B,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v10,
      v12);
  wil::AcquireSRWLockExclusive(v13, (char *)this + 456);
  WindowEventDispatcher::GetCachedView((__int64)this - 16, &v12, v15);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 224LL))(v12);
  ViewManagerInteropTraceLogging::WindowEventDispatcher_OnWindowRemoved<unsigned int &>(&v15);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v12);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v13);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v17);
  return 0LL;
}
