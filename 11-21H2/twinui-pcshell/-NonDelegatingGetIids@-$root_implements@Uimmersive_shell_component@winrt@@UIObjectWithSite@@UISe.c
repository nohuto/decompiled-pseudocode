/*
 * XREFs of ?NonDelegatingGetIids@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1803B59C8
 * Callers:
 *     ?GetIids@?$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1803B5790 (-GetIids@-$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@i.c)
 *     ?GetIids@?$produce_base@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UIDragDropSimulator@34567@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18056D4E0 (-GetIids@-$produce_base@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Inter.c)
 *     ?GetIids@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180578000 (-GetIids@-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindo.c)
 *     ?GetIids@?$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupDataModelSingleton@34567@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x180589940 (-GetIids@-$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@wi.c)
 *     ?GetIids@?$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x180589970 (-GetIids@-$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Intern_ea_180589970.c)
 *     ?GetIids@?$produce_base@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@UIDashboardManager@3456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805BD700 (-GetIids@-$produce_base@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@UIDashboa.c)
 *     ?GetIids@?$produce_base@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805CC8B0 (-GetIids@-$produce_base@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetA.c)
 *     ?GetIids@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@3456@@winrt@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1805DDA00 (-GetIids@-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmers.c)
 * Callees:
 *     __Platform_CoTaskMemAlloc @ 0x180189A6B (__Platform_CoTaskMemAlloc.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingGetIids(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  unsigned int v5; // eax
  void *v6; // rax
  unsigned int v8; // [rsp+20h] [rbp-18h] BYREF
  void *Src; // [rsp+28h] [rbp-10h]

  if ( !a1 )
    a1 = 32LL;
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 32LL))(a1, &v8);
  v5 = v8;
  if ( v8 )
  {
    *a2 = v8;
    v6 = _Platform_CoTaskMemAlloc(16LL * v5);
    *a3 = v6;
    if ( !v6 )
      return 2147942414LL;
    memmove_0(v6, Src, 16LL * v8);
  }
  else
  {
    *a2 = 0;
    *a3 = 0LL;
  }
  return 0LL;
}
