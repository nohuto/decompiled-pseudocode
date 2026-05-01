/*
 * XREFs of ?WinUICohabitation_DesktopWindowXamlSourceNative_get_WindowHandleWrapper@WinUICohabitationFunctions@@QEBAXPEAUIUnknown@@PEAPEAUHWND__@@@Z @ 0x180081510
 * Callers:
 *     ??0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@56@I@Z @ 0x18007FE54 (--0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAE.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9368 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall WinUICohabitationFunctions::WinUICohabitation_DesktopWindowXamlSourceNative_get_WindowHandleWrapper(
        HMODULE *this,
        struct IUnknown *a2,
        HWND *a3)
{
  FARPROC ProcAddress; // rax
  const char *v6; // r9
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ProcAddress = GetProcAddress(*this, "WinUICohabitation_DesktopWindowXamlSourceNative_get_WindowHandle");
  if ( !ProcAddress )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x46,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\WinUICohabitationFunctions.h",
      v6);
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, HWND *))ProcAddress)(a2, a3);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x47,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\WinUICohabitationFunctions.h",
      (const char *)(unsigned int)v7,
      v8);
}
