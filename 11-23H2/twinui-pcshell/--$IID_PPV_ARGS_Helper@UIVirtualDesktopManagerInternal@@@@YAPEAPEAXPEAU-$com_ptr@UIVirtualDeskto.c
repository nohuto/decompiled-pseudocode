/*
 * XREFs of ??$IID_PPV_ARGS_Helper@UIVirtualDesktopManagerInternal@@@@YAPEAPEAXPEAU?$com_ptr@UIVirtualDesktopManagerInternal@@@winrt@@@Z @ 0x180680F58
 * Callers:
 *     ?GetSnappableWindowList@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AV?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@XZ @ 0x180684008 (-GetSnappableWindowList@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Win.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 */

__int64 *__fastcall IID_PPV_ARGS_Helper<IVirtualDesktopManagerInternal>(__int64 *a1)
{
  if ( *a1 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(a1);
  return a1;
}
