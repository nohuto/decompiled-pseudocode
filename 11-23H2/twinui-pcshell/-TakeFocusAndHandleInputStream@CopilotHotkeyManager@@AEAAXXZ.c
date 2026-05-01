/*
 * XREFs of ?TakeFocusAndHandleInputStream@CopilotHotkeyManager@@AEAAXXZ @ 0x1802734E4
 * Callers:
 *     CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1 @ 0x180271D90 (CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_ResumeCoro$1.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1804443C8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CopilotHotkeyManager::TakeFocusAndHandleInputStream(CopilotHotkeyManager *this)
{
  const char *v2; // r9
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  HWND Window; // rax
  HWND v8; // rbx
  const char *v9; // r9
  const char *v10; // r9
  const char *v11; // r9
  int v12[2]; // [rsp+68h] [rbp-39h] BYREF
  HWND v13; // [rsp+70h] [rbp-31h] BYREF
  WNDCLASSEXW v14; // [rsp+78h] [rbp-29h] BYREF
  int X; // [rsp+C8h] [rbp+27h] BYREF
  int Y; // [rsp+CCh] [rbp+2Bh]
  int v17; // [rsp+D0h] [rbp+2Fh]
  int v18; // [rsp+D4h] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v14.cbSize = 80;
  memset_0(&v14.style, 0, 0x4CuLL);
  v14.lpfnWndProc = (WNDPROC)CWRLImpWndProc<CopilotHotkeyManager>::s_WndProcBase;
  v14.hInstance = &_ImageBase;
  v14.hCursor = 0LL;
  v14.lpszClassName = L"CopilotKeyPressFocusFrame";
  v14.cbWndExtra = 8;
  v14.hbrBackground = (HBRUSH)4;
  if ( !RegisterClassExW(&v14) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x5FD,
      (unsigned int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
      v2);
  *(_QWORD *)v12 = 0LL;
  v3 = (__int64 *)*((_QWORD *)this + 17);
  v4 = *v3;
  *(_QWORD *)v12 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, GUID *))(v4 + 72))(
         v3,
         0LL,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x601,
      (int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
      (const char *)(unsigned int)v5,
      (int)v12);
  v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v12 + 88LL))(*(_QWORD *)v12, &X);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x604,
      (int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
      (const char *)(unsigned int)v6,
      (int)v12);
  Window = CreateWindowExW(
             0x200088u,
             L"CopilotKeyPressFocusFrame",
             L"CopilotkeyFocusWindow",
             0x80000000,
             X,
             Y,
             v17 - X,
             v18 - Y,
             0LL,
             0LL,
             &_ImageBase,
             this);
  v8 = Window;
  v13 = Window;
  if ( Window )
  {
    if ( !SetPropW(Window, L"NonRudeHWND", HANDLE_FLAG_INHERIT) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x621,
        (unsigned int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
        v9);
    if ( !SetPropW(v8, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x622,
        (unsigned int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
        v10);
    ShowWindow(v8, 8);
    if ( !SetForegroundWindow(v8) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x626,
        (unsigned int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
        v11);
    v13 = 0LL;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>>(&v13);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v12);
}
