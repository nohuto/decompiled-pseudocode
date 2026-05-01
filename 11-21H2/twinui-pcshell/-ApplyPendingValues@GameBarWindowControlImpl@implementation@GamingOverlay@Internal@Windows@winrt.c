/*
 * XREFs of ?ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180341874
 * Callers:
 *     ?OnViewCreated@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x1803428E4 (-OnViewCreated@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEA.c)
 *     ?ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180343F74 (-ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1802EBABC (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?SetAllowPointerActivation@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEB_N@Z @ 0x180343420 (-SetAllowPointerActivation@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Window.c)
 *     ?SetBounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBURect@Foundation@56@@Z @ 0x1803434A0 (-SetBounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUw.c)
 *     ?SetIsResizingEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEB_N@Z @ 0x1803437C0 (-SetIsResizingEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@win.c)
 *     ?SetIsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEB_N@Z @ 0x1803438FC (-SetIsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@win.c)
 *     ?SetMaximumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBUSize@Foundation@56@@Z @ 0x180343B3C (-SetMaximumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AE.c)
 *     ?SetMinimumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBUSize@Foundation@56@@Z @ 0x180343C90 (-SetMinimumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AE.c)
 *     ?SetWindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBI@Z @ 0x180343DE4 (-SetWindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEA.c)
 */

__int64 __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::ApplyPendingValues(
        _BYTE *a1,
        __int64 a2)
{
  __int64 result; // rax

  if ( a1[155] )
    result = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetIsResizingEnabled(
               a1,
               a2,
               a1 + 154);
  if ( a1[157] )
    result = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetIsTitleBarEnabled(
               a1,
               a2,
               a1 + 156);
  if ( a1[136] )
    result = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetMinimumSize(
               a1,
               a2,
               a1 + 128);
  if ( a1[148] )
    result = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetMaximumSize(
               a1,
               a2,
               a1 + 140);
  if ( a1[124] )
    result = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetBounds(
               a1,
               a2,
               a1 + 108);
  if ( a1[153] )
    result = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetAllowPointerActivation(
               a1,
               a2,
               a1 + 152);
  if ( a1[164] )
    return winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetWindowBand(a1);
  return result;
}
