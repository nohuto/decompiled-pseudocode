/*
 * XREFs of ?NonDelegatingGetRuntimeClassName@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x180391D10
 * Callers:
 *     ?GetRuntimeClassName@?$produce_base@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@UIFocusSessionComponent@3456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180391B20 (-GetRuntimeClassName@-$produce_base@UFocusSessionComponent@implementation@Shell@Internal@Windows.c)
 *     ?GetRuntimeClassName@?$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180391B50 (-GetRuntimeClassName@-$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@W.c)
 *     ?GetRuntimeClassName@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180636F60 (-GetRuntimeClassName@-$implements@UWindowTabHost@implementation@Shell@Internal@Wind_ea_180636F60.c)
 *     ?GetRuntimeClassName@?$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180636F80 (-GetRuntimeClassName@-$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?GetRuntimeClassName@?$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabHost@3456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180636FB0 (-GetRuntimeClassName@-$produce_base@UWindowTabHost@implementation@Shell@Internal@Wi_ea_180636FB0.c)
 *     ?GetRuntimeClassName@?$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupDataModelSingleton@34567@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1806479D0 (-GetRuntimeClassName@-$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Interna.c)
 *     ?GetRuntimeClassName@?$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180647A00 (-GetRuntimeClassName@-$produce_base@UTaskGroupsComponent@implementation@TaskGroups@_ea_180647A00.c)
 *     ?GetRuntimeClassName@?$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupsComponent@DesktopTaskGroups@4567@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180647A30 (-GetRuntimeClassName@-$produce_base@UTaskGroupsComponent@implementation@TaskGroups@_ea_180647A30.c)
 *     ?GetRuntimeClassName@?$produce_base@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UIDiscoverabilityManager@3456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180696C80 (-GetRuntimeClassName@-$produce_base@UDiscoverabilityManager@implementation@Shell@Internal@Window.c)
 *     ?GetRuntimeClassName@?$produce_base@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@3456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1806A24A0 (-GetRuntimeClassName@-$produce_base@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIP.c)
 *     ?GetRuntimeClassName@?$produce_base@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1806E27F0 (-GetRuntimeClassName@-$produce_base@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@.c)
 *     ?GetRuntimeClassName@?$produce_base@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180706B90 (-GetRuntimeClassName@-$produce_base@UCloudPCComponent@implementation@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingGetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  volatile signed __int32 *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    a1 = 32LL;
  try
  {
    v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
    v4 = *v3;
    *v3 = 0LL;
    *a2 = v4;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
