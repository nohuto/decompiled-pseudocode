/*
 * XREFs of ?v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x18005DF60
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180192FD4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ?SetWindowLivePreviewAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x18021D098 (-SetWindowLivePreviewAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfi.c)
 *     ?SetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x18021D5E8 (-SetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LivePreviewForTabs@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18063BEF0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LivePreviewForTabs@@@details@wil@@QEAAX_N.c)
 *     ?SwitchToTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXW4SwitchTabOptions@@@Z @ 0x18063C448 (-SwitchToTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXW4SwitchTabOptions.c)
 *     ?TearOutTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x18063C54C (-TearOutTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z.c)
 *     ?WindowTabHostLivePreviewOnTab@WindowTabHostTelemetry@@SAXXZ @ 0x18063C8DC (-WindowTabHostLivePreviewOnTab@WindowTabHostTelemetry@@SAXXZ.c)
 */

LRESULT __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::v_WndProc(
        HWND *this,
        HWND a2,
        UINT a3,
        WPARAM a4,
        LPARAM lParam)
{
  HWND v6; // r11
  __int64 v8; // rdi
  UINT v9; // edx
  UINT v10; // edx
  __int64 v12; // rdx
  LPARAM v13; // r9
  WPARAM v14; // r8
  HWND v15; // rcx
  int v16; // eax
  char v17; // [rsp+50h] [rbp+18h] BYREF

  v6 = a2;
  v8 = 0LL;
  if ( a3 == winrt::Windows::Internal::Shell::implementation::TabProxyWindow::s_tabSwitchMessageId )
  {
    LOBYTE(a2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
      a2);
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SwitchToTab(this - 3, (unsigned int)a4);
    return v8;
  }
  if ( a3 == winrt::Windows::Internal::Shell::implementation::TabProxyWindow::s_tabTearOutMessageId )
  {
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TearOutTab(
      (winrt::Windows::Internal::Shell::implementation::TabProxyWindow *)(this - 3),
      lParam);
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
        v16 = (*(__int64 (__fastcall **)(HWND, HWND))(*(_QWORD *)this[2] + 88LL))(this[2], this[3]);
        if ( v16 < 0 )
          winrt::throw_hresult((unsigned int)v16);
      }
      return v8;
    case 0x112u:
      if ( !this[3] || a4 != 61536 )
      {
        v10 = 274;
        return DefWindowProcW(v6, v10, a4, lParam);
      }
      v13 = 1LL;
      v14 = 0LL;
      v15 = this[1];
LABEL_19:
      PostMessageW(v15, v9, v14, v13);
      return v8;
    case 0x313u:
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SwitchToTab(this - 3, 0LL);
      v13 = lParam;
      v14 = a4;
      v9 = 787;
      v15 = this[4];
      goto LABEL_19;
    case 0x323u:
      if ( this[3] )
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync(this - 3, &v17);
      break;
    case 0x326u:
      WindowTabHostTelemetry::WindowTabHostLivePreviewOnTab();
      LOBYTE(v12) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_LivePreviewForTabs>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_LivePreviewForTabs>::GetImpl'::`2'::impl,
        v12);
      if ( this[3] )
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync(this - 3, &v17);
      break;
    default:
      v10 = a3;
      return DefWindowProcW(v6, v10, a4, lParam);
  }
  return v8;
}
