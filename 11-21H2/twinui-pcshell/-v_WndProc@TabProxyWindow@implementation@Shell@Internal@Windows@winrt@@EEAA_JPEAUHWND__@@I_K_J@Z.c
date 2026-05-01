/*
 * XREFs of ?v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180020CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetWindowLivePreviewAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1801BD12C (-SetWindowLivePreviewAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfi.c)
 *     ?SetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1801BD878 (-SetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LivePreviewForTabs@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18057C190 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LivePreviewForTabs@@@details@wil@@QEAAX_N.c)
 *     ?SwitchToTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18057C6A0 (-SwitchToTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?WindowTabHostLivePreviewOnTab@WindowTabHostTelemetry@@SAXXZ @ 0x18057CF6C (-WindowTabHostLivePreviewOnTab@WindowTabHostTelemetry@@SAXXZ.c)
 */

LRESULT __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::v_WndProc(
        HWND *this,
        HWND a2,
        UINT a3,
        WPARAM a4,
        LPARAM lParam)
{
  __int64 v8; // rdi
  UINT v9; // edx
  UINT v10; // edx
  LPARAM v12; // r9
  WPARAM v13; // r8
  HWND v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  char v17; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  if ( a3 == winrt::Windows::Internal::Shell::implementation::TabProxyWindow::s_tabSwitchMessageId )
  {
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SwitchToTab((winrt::Windows::Internal::Shell::implementation::TabProxyWindow *)(this - 3));
    return v8;
  }
  v9 = 16;
  switch ( a3 )
  {
    case 0x10u:
      if ( this[3] )
      {
        if ( lParam != 1 )
          SetForegroundWindow(this[4]);
        v15 = (*(__int64 (__fastcall **)(HWND, HWND))(*(_QWORD *)this[2] + 88LL))(this[2], this[3]);
        if ( v15 < 0 )
          winrt::throw_hresult((unsigned int)v15);
      }
      return v8;
    case 0x112u:
      if ( !this[3] || a4 != 61536 )
      {
        v10 = 274;
        return DefWindowProcW(a2, v10, a4, lParam);
      }
      v12 = 1LL;
      v13 = 0LL;
      v14 = this[1];
LABEL_13:
      PostMessageW(v14, v9, v13, v12);
      return v8;
    case 0x313u:
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SwitchToTab((winrt::Windows::Internal::Shell::implementation::TabProxyWindow *)(this - 3));
      v12 = lParam;
      v13 = a4;
      v9 = 787;
      v14 = this[4];
      goto LABEL_13;
    case 0x323u:
      if ( this[3] )
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync(this - 3, &v17);
      break;
    case 0x326u:
      WindowTabHostTelemetry::WindowTabHostLivePreviewOnTab();
      LOBYTE(v16) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_LivePreviewForTabs>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_LivePreviewForTabs>::GetImpl'::`2'::impl,
        v16);
      if ( this[3] )
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync(this - 3, &v17);
      break;
    default:
      v10 = a3;
      return DefWindowProcW(a2, v10, a4, lParam);
  }
  return v8;
}
