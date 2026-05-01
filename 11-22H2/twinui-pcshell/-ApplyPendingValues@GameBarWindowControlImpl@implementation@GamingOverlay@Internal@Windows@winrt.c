/*
 * XREFs of ?ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18040F4D0
 * Callers:
 *     ?OnViewCreated@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x1804106DC (-OnViewCreated@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEA.c)
 *     ?ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180411D20 (-ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     ?SetBounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBURect@Foundation@56@@Z @ 0x1802D3A98 (-SetBounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUw.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1803A45A8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?SetAllowPointerActivation@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEB_N@Z @ 0x180411280 (-SetAllowPointerActivation@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Window.c)
 *     ?SetIsResizingEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEB_N@Z @ 0x18041153C (-SetIsResizingEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@win.c)
 *     ?SetIsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEB_N@Z @ 0x180411678 (-SetIsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@win.c)
 *     ?SetMaximumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBUSize@Foundation@56@@Z @ 0x1804118B8 (-SetMaximumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AE.c)
 *     ?SetMinimumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBUSize@Foundation@56@@Z @ 0x180411A0C (-SetMinimumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AE.c)
 *     ?SetWindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBI@Z @ 0x180411B60 (-SetWindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEA.c)
 */

void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::ApplyPendingValues(
        __int64 a1,
        __int64 a2)
{
  if ( *(_BYTE *)(a1 + 155) )
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetIsResizingEnabled(
      a1,
      a2,
      a1 + 154);
  if ( *(_BYTE *)(a1 + 157) )
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetIsTitleBarEnabled(
      a1,
      a2,
      a1 + 156);
  if ( *(_BYTE *)(a1 + 136) )
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetMinimumSize(a1, a2, a1 + 128);
  if ( *(_BYTE *)(a1 + 148) )
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetMaximumSize(a1, a2, a1 + 140);
  if ( *(_BYTE *)(a1 + 124) )
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetBounds(
      a1,
      a2,
      (float *)(a1 + 108));
  if ( *(_BYTE *)(a1 + 153) )
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetAllowPointerActivation(
      a1,
      a2,
      a1 + 152);
  if ( *(_BYTE *)(a1 + 164) )
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetWindowBand(a1);
}
