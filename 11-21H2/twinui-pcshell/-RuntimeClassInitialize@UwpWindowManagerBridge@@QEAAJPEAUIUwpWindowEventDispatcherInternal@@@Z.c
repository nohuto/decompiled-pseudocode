/*
 * XREFs of ?RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z @ 0x180403328
 * Callers:
 *     ??$MakeAndInitialize@VUwpWindowManagerBridge@@UIUwpWindowManagerBridge@@PEAVUwpWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIUwpWindowManagerBridge@@$$QEAPEAVUwpWindowEventDispatcher@@@Z @ 0x1803E916C (--$MakeAndInitialize@VUwpWindowManagerBridge@@UIUwpWindowManagerBridge@@PEAVUwpWindowEventDispat.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18015F354 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?WindowEventDispatcher_WindowWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ @ 0x180160A40 (-WindowEventDispatcher_WindowWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801661D4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?WindowEventDispatcher_ConnectedToWindowManager@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1801794CC (-WindowEventDispatcher_ConnectedToWindowManager@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ??$?0$0DK@@StringReference@Internal@Windows@@QEAA@AEAY0DK@$$CBG@Z @ 0x18017F328 (--$-0$0DK@@StringReference@Internal@Windows@@QEAA@AEAY0DK@$$CBG@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1803E853C (--$GetActivationFactory@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@In.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_524ccb934e25246a0120727c88ebe67d___ @ 0x1803FE5C8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_524ccb934e25246a0120727c88ebe67d.c)
 *     ??4?$com_ptr_t@UIUwpWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIUwpWindowEventDispatcherInternal@@@Z @ 0x1803FFBF0 (--4-$com_ptr_t@UIUwpWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@P.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall UwpWindowManagerBridge::RuntimeClassInitialize(
        UwpWindowManagerBridge *this,
        struct IUwpWindowEventDispatcherInternal *a2)
{
  __int64 v3; // rdx
  wil::details *v4; // rcx
  __int64 v5; // r8
  const char *v6; // r9
  HANDLE Event; // r14
  wil::details *v8; // rsi
  DWORD LastError; // ebx
  void *v10; // rdx
  signed int LastErrorFailHr; // eax
  __int64 v12; // rdx
  wil::details *v13; // rcx
  __int64 v14; // r8
  const char *v15; // r9
  HANDLE v16; // r14
  const unsigned __int16 *v17; // rdx
  wil::details *v18; // rsi
  DWORD v19; // ebx
  void *v20; // rdx
  signed int v21; // eax
  __int64 v22; // rcx
  HSTRING *v23; // rax
  int ActivationFactory; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  unsigned int v28; // r8d
  __int64 v29; // rbx
  __int64 (__fastcall *v30)(__int64, char *); // r14
  __int64 v31; // rcx
  int v32; // eax
  DWORD CurrentThreadId; // eax
  unsigned int v34; // ecx
  int v35; // eax
  __int64 v36; // rcx
  int v37; // ebx
  CCriticalFailureHandler *v38; // rcx
  UwpWindowManagerBridge *v40; // rbx
  int v41; // ebx
  char v42; // al
  unsigned __int64 *v43; // [rsp+20h] [rbp-78h]
  unsigned __int64 *v44; // [rsp+28h] [rbp-70h]
  __int64 v45; // [rsp+0h] [rbp-98h] BYREF
  int v46; // [rsp+20h] [rbp-78h]
  UwpWindowManagerBridge *v47; // [rsp+30h] [rbp-68h] BYREF
  __int64 v48; // [rsp+38h] [rbp-60h] BYREF
  RTL_SRWLOCK *v49; // [rsp+40h] [rbp-58h] BYREF
  UwpWindowManagerBridge *v50; // [rsp+48h] [rbp-50h]
  wil::ResultException *v51; // [rsp+50h] [rbp-48h] BYREF
  HSTRING string; // [rsp+58h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v50 = this;
  wil::com_ptr_t<IUwpWindowEventDispatcherInternal,wil::err_exception_policy>::operator=(
    (__int64 *)this + 36,
    (__int64)a2);
  Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    v8 = (wil::details *)*((_QWORD *)this + 34);
    if ( v8 )
    {
      LastError = GetLastError();
      wil::details::CloseHandle(v8, v10);
      SetLastError(LastError);
    }
    *((_QWORD *)this + 34) = Event;
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v4, v3, v5, v6);
  }
  try
  {
    if ( LastErrorFailHr < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x33,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)LastErrorFailHr,
        v46);
    v16 = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    if ( v16 )
    {
      GetLastError();
      v18 = (wil::details *)*((_QWORD *)this + 35);
      if ( v18 )
      {
        v19 = GetLastError();
        wil::details::CloseHandle(v18, v20);
        SetLastError(v19);
      }
      *((_QWORD *)this + 35) = v16;
      v21 = 0;
    }
    else
    {
      v21 = wil::details::GetLastErrorFailHr(v13, v12, v14, v15);
    }
    if ( v21 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x35,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v21,
        v46);
    v22 = *((_QWORD *)this + 21);
    *((_QWORD *)this + 21) = 0LL;
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    v23 = Windows::Internal::StringReference::StringReference(&string, (const unsigned __int16 (*)[58])v17);
    ActivationFactory = RoGetActivationFactory(*v23, &GUID_5e75aba7_c424_4076_9d47_409a1eda087f, (char *)this + 168);
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x38,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)ActivationFactory,
        v46);
    v25 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = 0LL;
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    if ( WindowsCreateStringReference(
           L"Windows.Internal.ApplicationModel.WindowManagement.UniversalAppModel",
           0x44u,
           &hstringHeader,
           &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    v26 = RoGetActivationFactory(string, &GUID_b880ce78_2e50_5a73_bfaa_a3f9a8b2f042, (char *)this + 48);
    if ( v26 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x39,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v26,
        v46);
    wil::GetActivationFactory<Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleManagerStatics>(
      (const WCHAR *)&v48,
      v27,
      v28);
    v29 = v48;
    v30 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v48 + 48LL);
    v31 = *((_QWORD *)this + 29);
    *((_QWORD *)this + 29) = 0LL;
    if ( v31 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    v32 = v30(v29, (char *)this + 232);
    if ( v32 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v32,
        v46);
    wil::AcquireSRWLockExclusive(&v49, (RTL_SRWLOCK *)this + 32);
    v47 = this;
    CurrentThreadId = GetCurrentThreadId();
    v35 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_524ccb934e25246a0120727c88ebe67d___(
            v34,
            CurrentThreadId,
            &v47);
    v37 = v35;
    if ( v35 >= 0 )
    {
      ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowWatcherStarted(v36);
      v37 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x222,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v35);
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v49);
    if ( v37 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x40,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v37,
        v46);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v48);
  }
  catch ( wil::ResultException *v51 )
  {
    v40 = v50;
    *((_DWORD *)v50 + 74) = *((_DWORD *)v51 + 8);
    wil::details::SetEvent(*((wil::details **)v40 + 34), &v45);
    v41 = *((_DWORD *)v40 + 74);
    LODWORD(v47) = v41;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_48:
      if ( v41 >= 0 )
        goto LABEL_54;
      if ( v41 != -2147024882 && v41 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v38,
          (int *)&v47,
          L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          0x4Au,
          v43,
          v44);
        v41 = (int)v47;
      }
      if ( v41 >= 0 )
LABEL_54:
        v42 = 1;
      else
        v42 = 0;
      if ( !v42 )
      {
        if ( v41 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4A,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)(unsigned int)v41);
        return (unsigned int)v47;
      }
      goto LABEL_35;
    }
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v48) >= 0 )
    {
      switch ( (_DWORD)v48 )
      {
        case 2:
          v41 = -2023406815;
          goto LABEL_46;
        case 3:
          v41 = -2023406814;
          goto LABEL_46;
        case 4:
          v41 = -2147418094;
          goto LABEL_46;
        case 5:
          v41 = -2147022986;
LABEL_46:
          LODWORD(v47) = v41;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
    goto LABEL_48;
  }
LABEL_35:
  ViewManagerInteropTraceLogging::WindowEventDispatcher_ConnectedToWindowManager((__int64)v38);
  return 0LL;
}
