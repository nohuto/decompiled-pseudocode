/*
 * XREFs of ?NonDelegatingGetTrustLevel@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1803B5ACC
 * Callers:
 *     ?GetTrustLevel@?$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1803B5890 (-GetTrustLevel@-$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows.c)
 *     ?GetTrustLevel@?$produce_base@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UIDragDropSimulator@34567@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x18056D8B0 (-GetTrustLevel@-$produce_base@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell.c)
 *     ?GetTrustLevel@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@UEAAJPEAW4TrustLevel@@@Z @ 0x180578290 (-GetTrustLevel@-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@U.c)
 *     ?GetTrustLevel@?$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1805782B0 (-GetTrustLevel@-$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWind.c)
 *     ?GetTrustLevel@?$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabHost@3456@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1805782E0 (-GetTrustLevel@-$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@_ea_1805782E0.c)
 *     ?GetTrustLevel@?$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupDataModelSingleton@34567@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x180589A00 (-GetTrustLevel@-$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Wind.c)
 *     ?GetTrustLevel@?$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x180589A30 (-GetTrustLevel@-$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@_ea_180589A30.c)
 *     ?GetTrustLevel@?$produce_base@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@UIDashboardManager@3456@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1805BD820 (-GetTrustLevel@-$produce_base@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@UID.c)
 *     ?GetTrustLevel@?$produce_base@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1805CCBF0 (-GetTrustLevel@-$produce_base@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@U.c)
 *     ?GetTrustLevel@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@3456@@winrt@@UEAAJPEAW4TrustLevel@@@Z @ 0x1805DDB30 (-GetTrustLevel@-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@U.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingGetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  if ( !a1 )
    a1 = 32LL;
  *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return 0LL;
}
