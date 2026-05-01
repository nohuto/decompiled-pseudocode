/*
 * XREFs of ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x180024750
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_472a7092c1a4414452e48170d805fed1___::Invoke @ 0x1800241E0 (CAsyncCallbackWithLambda__lambda_472a7092c1a4414452e48170d805fed1___--Invoke.c)
 * Callees:
 *     ?TreatAsSecondaryTileId@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x180024A18 (-TreatAsSecondaryTileId@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell.c)
 *     ?TabChanged@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUevent_token@3@AEBU?$TypedEventHandler@UWindowTabView@Shell@UI@Internal@Windows@winrt@@UWindowTabViewPropertyChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x180024A6C (-TabChanged@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal.c)
 *     ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x180024ABC (-TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z.c)
 *     ?Title@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x180024C34 (-Title@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Wind.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F2B64 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800F76BC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F9DD8 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801610B0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEAAX_NW4Re.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?SetWindowIconAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1801BC534 (-SetWindowIconAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and_.c)
 *     ?RegisterTaskbarGlom@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x18057BEF8 (-RegisterTaskbarGlom@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstrin.c)
 *     ?UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18057C7B0 (-UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::CreateWindow(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this)
{
  int v2; // ebx
  _QWORD *v3; // r14
  winrt::hstring *v4; // rax
  const WCHAR *v5; // rax
  const char *v6; // r9
  HWND v7; // rcx
  const struct winrt::hstring *v8; // rax
  HRESULT v9; // r15d
  LONG WindowLongW; // eax
  __int64 v11; // rdx
  __int64 *v12; // rax
  char v13; // bl
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v17; // rdx
  int v18; // [rsp+70h] [rbp-48h] BYREF
  _BYTE v19[8]; // [rsp+78h] [rbp-40h] BYREF
  _BYTE v20[56]; // [rsp+80h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  __int64 v22; // [rsp+C0h] [rbp+8h] BYREF
  int v23; // [rsp+C8h] [rbp+10h]
  int pvAttribute; // [rsp+D0h] [rbp+18h] BYREF
  int v25; // [rsp+D8h] [rbp+20h] BYREF

  v2 = 0;
  v23 = 0;
  v3 = (_QWORD *)((char *)this + 48);
  if ( *((_QWORD *)this + 6) )
  {
    v4 = (winrt::hstring *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::Title(
                             (char *)this + 48,
                             &v22);
    v2 = 1;
    v23 = 1;
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
    v23 = v2;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v22);
  }
  v7 = (HWND)*((_QWORD *)this + 4);
  if ( !v7 )
  {
    v15 = 221LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v15,
             (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
             v6);
  }
  if ( *v3 )
  {
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync(this, &v22);
    v8 = (const struct winrt::hstring *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::TreatAsSecondaryTileId(
                                          v3,
                                          &v22);
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TileId(this, v8);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v22);
    *((_QWORD *)this + 19) = *(_QWORD *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::TabChanged(
                                          v3,
                                          &v22,
                                          (char *)this + 144);
    v7 = (HWND)*((_QWORD *)this + 4);
  }
  if ( !SetPropW(v7, (LPCWSTR)0xA920, *((HANDLE *)this + 7)) )
  {
    v15 = 231LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v15,
             (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
             v6);
  }
  if ( !SetPropW(*((HWND *)this + 4), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow", HANDLE_FLAG_INHERIT) )
  {
    v15 = 233LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v15,
             (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
             v6);
  }
  pvAttribute = 1;
  v9 = DwmSetWindowAttribute(*((HWND *)this + 4), 0xDu, &pvAttribute, 4u);
  if ( v9 < 0 )
  {
    v17 = 237LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      (const char *)(unsigned int)v9,
      0);
    return (unsigned int)v9;
  }
  v25 = 1;
  v18 = 1;
  v9 = DwmSetWindowAttribute(*((HWND *)this + 4), 7u, &v25, 4u);
  if ( v9 < 0 )
  {
    v17 = 245LL;
    goto LABEL_26;
  }
  v9 = DwmSetWindowAttribute(*((HWND *)this + 4), 0xAu, &v18, 4u);
  if ( v9 < 0 )
  {
    v17 = 250LL;
    goto LABEL_26;
  }
  WindowLongW = GetWindowLongW(*((HWND *)this + 4), -16);
  SetWindowLongW(*((HWND *)this + 4), -16, WindowLongW | 0x10000000);
  LOBYTE(v11) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WthTaskbarTabs>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_WthTaskbarTabs>::GetImpl'::`2'::impl,
    v11);
  v22 = 0LL;
  if ( (unsigned __int8)winrt::Windows::Foundation::operator==(v3, &v22) )
  {
    v12 = (__int64 *)winrt::hstring::hstring((winrt::hstring *)v19, &LocaleName);
    v13 = v2 | 4;
  }
  else
  {
    v12 = (__int64 *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::TreatAsSecondaryTileId(
                       v3,
                       v20);
    v13 = v2 | 2;
  }
  v14 = *v12;
  *v12 = 0LL;
  v22 = v14;
  if ( (v13 & 4) != 0 )
  {
    v13 &= ~4u;
    winrt::handle_type<winrt::impl::hstring_traits>::close(v19);
  }
  if ( (v13 & 2) != 0 )
    winrt::handle_type<winrt::impl::hstring_traits>::close(v20);
  if ( v14 )
  {
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::RegisterTaskbarGlom(
      this,
      (const struct winrt::hstring *)&v22);
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::UpdateTileGuid(this);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v22);
  return 0LL;
}
