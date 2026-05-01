/*
 * XREFs of ?NonDelegatingGetRuntimeClassName@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1803B5A50
 * Callers:
 *     ?GetRuntimeClassName@?$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1803B57E0 (-GetRuntimeClassName@-$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@W.c)
 *     ?GetRuntimeClassName@?$produce_base@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UIDragDropSimulator@34567@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18056D860 (-GetRuntimeClassName@-$produce_base@UDragDropSimulatorComponent@implementation@DragDropSimulator.c)
 *     ?GetRuntimeClassName@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180578150 (-GetRuntimeClassName@-$implements@UWindowTabHost@implementation@Shell@Internal@Wind_ea_180578150.c)
 *     ?GetRuntimeClassName@?$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180578170 (-GetRuntimeClassName@-$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?GetRuntimeClassName@?$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabHost@3456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1805781A0 (-GetRuntimeClassName@-$produce_base@UWindowTabHost@implementation@Shell@Internal@Wi_ea_1805781A0.c)
 *     ?GetRuntimeClassName@?$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupDataModelSingleton@34567@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1805899A0 (-GetRuntimeClassName@-$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Interna.c)
 *     ?GetRuntimeClassName@?$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1805899D0 (-GetRuntimeClassName@-$produce_base@UTaskGroupsComponent@implementation@TaskGroups@_ea_1805899D0.c)
 *     ?GetRuntimeClassName@?$produce_base@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@UIDashboardManager@3456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1805BD7C0 (-GetRuntimeClassName@-$produce_base@UDashboardManager@implementation@Shell@Internal@Windows@winr.c)
 *     ?GetRuntimeClassName@?$produce_base@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1805CCBB0 (-GetRuntimeClassName@-$produce_base@UMeetAndChatManager@implementation@Shell@Internal@Windows@wi.c)
 *     ?GetRuntimeClassName@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@3456@@winrt@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1805DDA20 (-GetRuntimeClassName@-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@wi.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingGetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  volatile signed __int32 *v9; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    a1 = 32LL;
  try
  {
    v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
    v4 = *v3;
    *v3 = 0LL;
    *a2 = v4;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v9, v5, v6, v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v9);
  }
  return result;
}
