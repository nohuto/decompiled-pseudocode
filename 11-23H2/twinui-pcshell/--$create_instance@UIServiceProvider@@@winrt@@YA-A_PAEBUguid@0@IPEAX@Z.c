/*
 * XREFs of ??$create_instance@UIServiceProvider@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x1801A2090
 * Callers:
 *     ??0DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800DDFA8 (--0DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows.c)
 *     ?InsertAfter@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAAJ_K@Z @ 0x1804F9C60 (-InsertAfter@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt.c)
 *     ?InsertAfter@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAAJ_K@Z @ 0x1804FB820 (-InsertAfter@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows.c)
 *     ??0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@AEBUDisplayRegion@WindowManagement@UI@56@@Z @ 0x180682750 (--0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@AEBU.c)
 *     ??0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@AEBURect@Foundation@56@@Z @ 0x180682998 (--0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@win_ea_180682998.c)
 *     ?GetForWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUSnapLayoutManagerExtension@PlatformExtensions@4567@AEBURect@Foundation@67@@Z @ 0x180683904 (-GetForWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@win.c)
 *     ?GetSnappableWindowList@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AV?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@XZ @ 0x180684008 (-GetSnappableWindowList@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Win.c)
 * Callees:
 *     ??$capture@UIServiceProvider@@A6AHAEBUguid@winrt@@PEAXI0PEAPEAX@_EAEBU23@AEAPEAXAEAI@winrt@@YA?AU?$com_ptr@UIServiceProvider@@@0@A6AHAEBUguid@0@PEAXI0PEAPEAX@_E0AEAPEAXAEAI@Z @ 0x1801A20F0 (--$capture@UIServiceProvider@@A6AHAEBUguid@winrt@@PEAXI0PEAPEAX@_EAEBU23@AEAPEAXAEAI@winrt@@YA-A.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall winrt::create_instance<IServiceProvider>(__int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+50h] [rbp-18h] BYREF

  v4 = 0LL;
  v5 = 4;
  ___capture_UIServiceProvider__A6AHAEBUguid_winrt__PEAXI0PEAPEAX__EAEBU23_AEAPEAXAEAI_winrt__YA_AU__com_ptr_UIServiceProvider___0_A6AHAEBUguid_0_PEAXI0PEAPEAX__E0AEAPEAXAEAI_Z(
    a1,
    a2,
    a2,
    &v4,
    &v5);
  return a1;
}
