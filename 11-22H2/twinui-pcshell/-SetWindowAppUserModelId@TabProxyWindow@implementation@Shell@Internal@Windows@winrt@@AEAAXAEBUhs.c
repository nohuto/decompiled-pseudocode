/*
 * XREFs of ?SetWindowAppUserModelId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x18063BF74
 * Callers:
 *     ?RegisterTaskbarGlom@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x18063BC48 (-RegisterTaskbarGlom@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstrin.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowAppUserModelId(
        HWND *this,
        const struct winrt::hstring *a2)
{
  HRESULT v3; // eax
  void *v4; // rbx
  int v5; // eax
  int v6; // eax
  int v7; // [rsp+20h] [rbp-28h] BYREF
  const unsigned __int16 *v8; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *ppv; // [rsp+50h] [rbp+8h] BYREF
  void *v11; // [rsp+60h] [rbp+18h] BYREF

  ppv = 0LL;
  v3 = SHGetPropertyStoreForWindow(this[4], &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99, &ppv);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3AB,
      (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      (const char *)(unsigned int)v3,
      v7);
  v4 = ppv;
  v11 = ppv;
  if ( ppv )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppv + 8LL))(ppv);
  LOWORD(v7) = 31;
  v8 = winrt::hstring::c_str(a2);
  v5 = (*(__int64 (__fastcall **)(void *, const PROPERTYKEY *, int *))(*(_QWORD *)v4 + 48LL))(
         v4,
         &PKEY_AppUserModel_ID,
         &v7);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3AD,
      (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      (const char *)(unsigned int)v5,
      v7);
  v6 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v4 + 56LL))(v4);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3AE,
      (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      (const char *)(unsigned int)v6,
      v7);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v11);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
}
