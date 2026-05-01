/*
 * XREFs of ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x180050D84
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_472a7092c1a4414452e48170d805fed1___::Invoke @ 0x180050D70 (CAsyncCallbackWithLambda__lambda_472a7092c1a4414452e48170d805fed1___--Invoke.c)
 * Callees:
 *     ?DestroyWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1800353E0 (-DestroyWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 *     ?TreatAsSecondaryTileId@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180051134 (-TreatAsSecondaryTileId@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell.c)
 *     ?TabChanged@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UWindowTabView@Shell@UI@Internal@Windows@winrt@@UWindowTabViewPropertyChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x180051188 (-TabChanged@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shel_ea_180051188.c)
 *     ?Title@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005166C (-Title@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Wind.c)
 *     ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x180051930 (-TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?SetWindowIconAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x18021C544 (-SetWindowIconAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and_.c)
 *     ?RegisterTaskbarGlom@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x18063BC48 (-RegisterTaskbarGlom@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstrin.c)
 *     ?UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18063C650 (-UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::CreateWindow(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this)
{
  int v2; // edi
  _QWORD *v3; // r14
  winrt::hstring *v4; // rax
  const WCHAR *v5; // rax
  const char *v6; // r9
  HWND v7; // rcx
  __int64 result; // rax
  const char *v9; // r9
  __int64 v10; // rdx
  unsigned int LastError; // edi
  HRESULT v12; // eax
  HRESULT v13; // r15d
  HRESULT v14; // esi
  __int64 v15; // rdx
  LONG WindowLongW; // eax
  const struct winrt::hstring *v17; // rax
  _QWORD *v18; // rax
  __int64 *v19; // rax
  char v20; // di
  __int64 v21; // rsi
  const char *v22; // r9
  const char *v23; // r9
  int v24; // [rsp+70h] [rbp-58h] BYREF
  int v25; // [rsp+74h] [rbp-54h] BYREF
  _BYTE v26[8]; // [rsp+78h] [rbp-50h] BYREF
  _BYTE v27[8]; // [rsp+80h] [rbp-48h] BYREF
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow *v28; // [rsp+88h] [rbp-40h]
  char v29; // [rsp+90h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  __int64 v32; // [rsp+D8h] [rbp+10h] BYREF
  int v33; // [rsp+E0h] [rbp+18h]
  int pvAttribute; // [rsp+E8h] [rbp+20h] BYREF

  v2 = 0;
  v33 = 0;
  v3 = (_QWORD *)((char *)this + 48);
  if ( *((_QWORD *)this + 6) )
  {
    v4 = (winrt::hstring *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::Title(
                             (char *)this + 48,
                             &v32);
    v2 = 1;
    v33 = 1;
    v5 = winrt::hstring::c_str(v4);
  }
  else
  {
    v5 = &LocaleName;
  }
  *((_QWORD *)this + 4) = CreateWindowInBandEx(0x200000LL, L"Windows.Internal.Shell.TabProxyWindow", v5, 114229248LL);
  if ( (v2 & 1) != 0 )
  {
    v2 &= ~1u;
    v33 = v2;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v32);
  }
  v7 = (HWND)*((_QWORD *)this + 4);
  if ( !v7 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xF8,
             (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
             v6);
  v28 = this;
  v29 = 1;
  if ( !SetPropW(v7, (LPCWSTR)0xA920, *((HANDLE *)this + 7)) )
  {
    v10 = 259LL;
LABEL_12:
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v10,
                  (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
                  v9);
LABEL_20:
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::DestroyWindow(this);
    return LastError;
  }
  if ( !SetPropW(*((HWND *)this + 4), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow", HANDLE_FLAG_INHERIT) )
  {
    v10 = 261LL;
    goto LABEL_12;
  }
  pvAttribute = 1;
  v12 = DwmSetWindowAttribute(*((HWND *)this + 4), 0xDu, &pvAttribute, 4u);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x109,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      (const char *)(unsigned int)v12,
      0);
    LastError = v13;
    goto LABEL_20;
  }
  v24 = 1;
  v25 = 1;
  v14 = DwmSetWindowAttribute(*((HWND *)this + 4), 7u, &v24, 4u);
  if ( v14 < 0 )
  {
    v15 = 273LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      (const char *)(unsigned int)v14,
      0);
    LastError = v14;
    goto LABEL_20;
  }
  v14 = DwmSetWindowAttribute(*((HWND *)this + 4), 0xAu, &v25, 4u);
  if ( v14 < 0 )
  {
    v15 = 278LL;
    goto LABEL_19;
  }
  WindowLongW = GetWindowLongW(*((HWND *)this + 4), -16);
  SetWindowLongW(*((HWND *)this + 4), -16, WindowLongW | 0x10000000);
  if ( *v3 )
  {
    if ( *((_BYTE *)this + 184) )
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync(this, &v32);
    v17 = (const struct winrt::hstring *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::TreatAsSecondaryTileId(
                                           v3,
                                           &v32);
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TileId(this, v17);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v32);
    v18 = (_QWORD *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::TabChanged(
                      v3,
                      &v32,
                      (char *)this + 144);
    *((_QWORD *)this + 19) = *v18;
  }
  try
  {
    v32 = 0LL;
    if ( (unsigned __int8)winrt::Windows::Foundation::operator==(v3, &v32) )
    {
      v19 = (__int64 *)winrt::hstring::hstring((winrt::hstring *)v26, &LocaleName);
      v20 = v2 | 4;
    }
    else
    {
      v19 = (__int64 *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::TreatAsSecondaryTileId(
                         v3,
                         v27);
      v20 = v2 | 2;
    }
    v21 = *v19;
    *v19 = 0LL;
    v32 = v21;
    if ( (v20 & 4) != 0 )
    {
      v20 &= ~4u;
      winrt::handle_type<winrt::impl::hstring_traits>::close(v26);
    }
    if ( (v20 & 2) != 0 )
      winrt::handle_type<winrt::impl::hstring_traits>::close(v27);
    if ( v21 )
    {
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::RegisterTaskbarGlom(
        this,
        (const struct winrt::hstring *)&v32);
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::UpdateTileGuid(this);
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v32);
    result = 0LL;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x131,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      v22);
    LODWORD(v32) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x132,
                     (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
                     v23);
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::DestroyWindow(this);
    return (unsigned int)v32;
  }
  return result;
}
