/*
 * XREFs of ?RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z @ 0x1804DA704
 * Callers:
 *     ??$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIWindowManagerBridge@@$$QEAPEAVWindowEventDispatcher@@@Z @ 0x1804B99AC (--$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@De.c)
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800BD1C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801917C4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??$?0$0DK@@StringReference@Internal@Windows@@QEAA@AEAY0DK@$$CBG@Z @ 0x1801AF7C8 (--$-0$0DK@@StringReference@Internal@Windows@@QEAA@AEAY0DK@$$CBG@Z.c)
 *     ?WindowEventDispatcher_ConnectedToWindowManager@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1801B57DC (-WindowEventDispatcher_ConnectedToWindowManager@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindowEventDispatcherInternal@@@Z @ 0x1804D7414 (--4-$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAU.c)
 *     ?StartWindowWatcher@WindowManagerBridge@@AEAAJXZ @ 0x1804DAB34 (-StartWindowWatcher@WindowManagerBridge@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowManagerBridge::RuntimeClassInitialize(
        WindowManagerBridge *this,
        struct IWindowEventDispatcherInternal *a2)
{
  wil::details *v3; // rcx
  HANDLE Event; // r14
  wil::details *v5; // rsi
  DWORD LastError; // ebx
  void *v7; // rdx
  signed int LastErrorFailHr; // eax
  wil::details *v9; // rcx
  HANDLE v10; // r14
  wil::details *v11; // rsi
  DWORD v12; // ebx
  void *v13; // rdx
  signed int v14; // eax
  __int64 v15; // rcx
  HSTRING *v16; // rax
  int ActivationFactory; // eax
  __int64 v18; // rcx
  int v19; // eax
  int started; // eax
  wil *v21; // rcx
  int v23; // eax
  WindowManagerBridge *v24; // rbx
  void *v25; // rdx
  int v26; // ebx
  char v27; // al
  unsigned __int64 *v28; // [rsp+20h] [rbp-68h]
  unsigned __int64 *v29; // [rsp+28h] [rbp-60h]
  int v30; // [rsp+20h] [rbp-68h]
  unsigned int v31; // [rsp+30h] [rbp-58h] BYREF
  WindowManagerBridge *v32; // [rsp+38h] [rbp-50h] BYREF
  HSTRING string; // [rsp+40h] [rbp-48h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v32 = this;
  wil::com_ptr_t<IWindowEventDispatcherInternal,wil::err_exception_policy>::operator=((__int64 *)this + 35, (__int64)a2);
  Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    v5 = (wil::details *)*((_QWORD *)this + 33);
    if ( v5 )
    {
      LastError = GetLastError();
      wil::details::CloseHandle(v5, v7);
      SetLastError(LastError);
    }
    *((_QWORD *)this + 33) = Event;
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v3);
  }
  try
  {
    if ( LastErrorFailHr < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x33,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)LastErrorFailHr,
        v30);
    v10 = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    if ( v10 )
    {
      GetLastError();
      v11 = (wil::details *)*((_QWORD *)this + 34);
      if ( v11 )
      {
        v12 = GetLastError();
        wil::details::CloseHandle(v11, v13);
        SetLastError(v12);
      }
      *((_QWORD *)this + 34) = v10;
      v14 = 0;
    }
    else
    {
      v14 = wil::details::GetLastErrorFailHr(v9);
    }
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x35,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v14,
        v30);
    v15 = *((_QWORD *)this + 23);
    *((_QWORD *)this + 23) = 0LL;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v16 = Windows::Internal::StringReference::StringReference(
            &string,
            L"Windows.Internal.ApplicationModel.WindowManagement.Window");
    ActivationFactory = RoGetActivationFactory(*v16, &GUID_5e75aba7_c424_4076_9d47_409a1eda087f, (char *)this + 184);
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x39,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)ActivationFactory,
        v30);
    v18 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = 0LL;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    if ( WindowsCreateStringReference(
           L"Windows.Internal.ApplicationModel.WindowManagement.AppView",
           0x3Au,
           &hstringHeader,
           &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    v19 = RoGetActivationFactory(string, &GUID_882d9981_e3b3_4275_a857_00c3910fb5c3, (char *)this + 48);
    if ( v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3A,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v19,
        v30);
    started = WindowManagerBridge::StartWindowWatcher(this);
    v21 = retaddr;
    if ( started < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3E,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)started,
        v30);
  }
  catch ( ... )
  {
    v23 = wil::ResultFromCaughtException(v21);
    v24 = v32;
    *((_DWORD *)v32 + 72) = v23;
    wil::details::SetEvent(*((wil::details **)v24 + 33), v25);
    v26 = *((_DWORD *)v24 + 72);
    v31 = v26;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_40:
      if ( v26 >= 0 )
        goto LABEL_46;
      if ( v26 != -2147024882 && v26 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v21,
          (int *)&v31,
          L"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          0x48u,
          v28,
          v29);
        v26 = v31;
      }
      if ( v26 >= 0 )
LABEL_46:
        v27 = 1;
      else
        v27 = 0;
      if ( !v27 )
      {
        if ( v26 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x48,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
            (const char *)(unsigned int)v26);
        return v31;
      }
      goto LABEL_27;
    }
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v32) >= 0 )
    {
      switch ( (_DWORD)v32 )
      {
        case 2:
          v26 = -2023406815;
          goto LABEL_38;
        case 3:
          v26 = -2023406814;
          goto LABEL_38;
        case 4:
          v26 = -2147418094;
          goto LABEL_38;
        case 5:
          v26 = -2147022986;
LABEL_38:
          v31 = v26;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
    goto LABEL_40;
  }
LABEL_27:
  ViewManagerInteropTraceLogging::WindowEventDispatcher_ConnectedToWindowManager((__int64)v21);
  return 0LL;
}
