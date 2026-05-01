/*
 * XREFs of ?WindowRemoved@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804CCD60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$WindowEventDispatcher_OnWindowRemoved@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z @ 0x1804BA2C0 (--$WindowEventDispatcher_OnWindowRemoved@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z.c)
 *     ?GetAppViewStatics@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1804C3FFC (-GetAppViewStatics@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIAppViewStatics@WindowManagement@A.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x1804C4488 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WindowEventDispatcher::WindowRemoved(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *a2)
{
  int v4; // eax
  __int64 *AppViewStatics; // rax
  __int64 v6; // r14
  __int64 (__fastcall *v7)(__int64, struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *, __int64 *); // r15
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  const char *v11; // r9
  __int64 result; // rax
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v16; // [rsp+68h] [rbp+10h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  try
  {
    v4 = (*(__int64 (**)(void))(*(_QWORD *)a2 + 80LL))();
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x665,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v4,
        v13);
    v17 = 0LL;
    AppViewStatics = WindowEventDispatcher::GetAppViewStatics((__int64)&this[-2], v14);
    v6 = *AppViewStatics;
    v7 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *, __int64 *))(*(_QWORD *)*AppViewStatics + 120LL);
    v8 = v17;
    v17 = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v9 = v7(v6, a2, &v17);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x668,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v9,
        v13);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v14);
    v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 48LL))(v17, &v16);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x66B,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v10,
        v13);
    AcquireSRWLockExclusive(this + 57);
    v14[0] = (__int64)&this[57];
    WindowEventDispatcher::GetCachedView((__int64)&this[-2], &v13, v16);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 224LL))(v13);
    ViewManagerInteropTraceLogging::WindowEventDispatcher_OnWindowRemoved<unsigned int &>(&v16);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
    if ( this != (RTL_SRWLOCK *)-456LL )
      ReleaseSRWLockExclusive(this + 57);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x678,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v11);
  }
  return result;
}
