/*
 * XREFs of ?FilterMessage@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA_N_K@Z @ 0x1804F8CE0
 * Callers:
 *     ?FilterMessage@?$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK@34567@@impl@winrt@@UEAAH_KPEA_N@Z @ 0x1804F8C80 (-FilterMessage@-$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shel.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHINSTANCE__@@@Z @ 0x1801BC334 (-reset@-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9368 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::FilterMessage(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK *this,
        __int64 a2)
{
  HMODULE *v2; // rbx
  HMODULE v4; // rcx
  HMODULE LibraryW; // rax
  const char *v7; // r9
  FARPROC ProcAddress; // rax
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = (HMODULE *)((char *)this + 120);
  v4 = (HMODULE)*((_QWORD *)this + 15);
  if ( !v4 )
  {
    LibraryW = LoadLibraryW(L"Microsoft.UI.Windowing.Core.dll");
    if ( v2 == (HMODULE *)&v12 )
    {
      if ( LibraryW )
        FreeLibrary(LibraryW);
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::reset(
        v2,
        LibraryW);
    }
    v4 = *v2;
    if ( !*v2 )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0xB6,
        (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostChildWindow_WASDK.cpp",
        v7);
  }
  ProcAddress = (FARPROC)*((_QWORD *)this + 16);
  if ( !ProcAddress )
  {
    ProcAddress = GetProcAddress(v4, "ContentPreTranslateMessage");
    *((_QWORD *)this + 16) = ProcAddress;
    if ( !ProcAddress )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0xBD,
        (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostChildWindow_WASDK.cpp",
        v9);
  }
  return ((unsigned int (__fastcall *)(__int64))ProcAddress)(a2) != 0;
}
