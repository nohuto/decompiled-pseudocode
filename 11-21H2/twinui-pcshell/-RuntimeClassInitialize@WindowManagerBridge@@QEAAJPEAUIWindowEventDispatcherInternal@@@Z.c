/*
 * XREFs of ?RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z @ 0x1800E4C08
 * Callers:
 *     ??$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIWindowManagerBridge@@$$QEAPEAVWindowEventDispatcher@@@Z @ 0x180155324 (--$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@De.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18015F354 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?WindowEventDispatcher_WindowWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ @ 0x180160A40 (-WindowEventDispatcher_WindowWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_dd171a1d9ebdedee3576b89a841e614b___ @ 0x180160AA8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_dd171a1d9ebdedee3576b89a841e614b.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801661D4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?WindowEventDispatcher_ConnectedToWindowManager@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1801794CC (-WindowEventDispatcher_ConnectedToWindowManager@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ??4?$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindowEventDispatcherInternal@@@Z @ 0x18017F0E4 (--4-$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAU.c)
 *     ??$?0$0DK@@StringReference@Internal@Windows@@QEAA@AEAY0DK@$$CBG@Z @ 0x18017F328 (--$-0$0DK@@StringReference@Internal@Windows@@QEAA@AEAY0DK@$$CBG@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowManagerBridge::RuntimeClassInitialize(
        WindowManagerBridge *this,
        struct IWindowEventDispatcherInternal *a2)
{
  wil::details *v3; // rcx
  HANDLE Event; // r14
  wil::details *v5; // rsi
  int LastErrorFailHr; // eax
  wil::details *v7; // rcx
  HANDLE v8; // r14
  const unsigned __int16 *v9; // rdx
  wil::details *v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  int ActivationFactory; // eax
  __int64 v15; // rcx
  int v16; // eax
  DWORD CurrentThreadId; // eax
  __int64 v18; // rcx
  int v19; // eax
  int v20; // ebx
  DWORD LastError; // ebx
  void *v23; // rdx
  DWORD v24; // ebx
  void *v25; // rdx
  int v26; // [rsp+20h] [rbp-68h]
  RTL_SRWLOCK *v27; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v28[2]; // [rsp+38h] [rbp-50h] BYREF
  HSTRING string; // [rsp+48h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v28[1] = this;
  wil::com_ptr_t<IWindowEventDispatcherInternal,wil::err_exception_policy>::operator=((char *)this + 280, a2);
  Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    v5 = (wil::details *)*((_QWORD *)this + 33);
    if ( v5 )
    {
      LastError = GetLastError();
      wil::details::CloseHandle(v5, v23);
      SetLastError(LastError);
    }
    *((_QWORD *)this + 33) = Event;
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v3);
  }
  if ( LastErrorFailHr < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x33,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)LastErrorFailHr,
      v26);
  v8 = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( v8 )
  {
    GetLastError();
    v10 = (wil::details *)*((_QWORD *)this + 34);
    if ( v10 )
    {
      v24 = GetLastError();
      wil::details::CloseHandle(v10, v25);
      SetLastError(v24);
    }
    *((_QWORD *)this + 34) = v8;
    v11 = 0;
  }
  else
  {
    v11 = wil::details::GetLastErrorFailHr(v7);
  }
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x35,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v11,
      v26);
  v12 = *((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = (_QWORD *)Windows::Internal::StringReference::StringReference(&string, (const unsigned __int16 (*)[58])v9);
  ActivationFactory = RoGetActivationFactory(*v13, &GUID_5e75aba7_c424_4076_9d47_409a1eda087f, (char *)this + 184);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x39,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v26);
  v15 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( WindowsCreateStringReference(
         L"Windows.Internal.ApplicationModel.WindowManagement.AppView",
         0x3Au,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v16 = RoGetActivationFactory(string, &GUID_882d9981_e3b3_4275_a857_00c3910fb5c3, (char *)this + 48);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3A,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v16,
      v26);
  wil::AcquireSRWLockExclusive(&v27, (char *)this + 248);
  v28[0] = this;
  CurrentThreadId = GetCurrentThreadId();
  v19 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_dd171a1d9ebdedee3576b89a841e614b___(
          v18,
          CurrentThreadId,
          v28);
  v20 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x231,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v19);
  }
  else
  {
    ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowWatcherStarted();
    v20 = 0;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v27);
  if ( v20 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3E,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v20,
      v26);
  ViewManagerInteropTraceLogging::WindowEventDispatcher_ConnectedToWindowManager();
  return 0LL;
}
