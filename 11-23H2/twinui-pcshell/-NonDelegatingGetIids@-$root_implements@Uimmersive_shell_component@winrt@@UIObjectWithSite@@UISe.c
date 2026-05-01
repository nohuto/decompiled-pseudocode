/*
 * XREFs of ?NonDelegatingGetIids@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x180391C80
 * Callers:
 *     ?GetIids@?$produce_base@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@UIAppBackupListener@3456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x180391AC0 (-GetIids@-$produce_base@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@UIAppBac.c)
 *     ?GetIids@?$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x180391AF0 (-GetIids@-$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@i.c)
 *     ?GetIids@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180636E10 (-GetIids@-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindo.c)
 *     ?GetIids@?$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupDataModelSingleton@34567@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x180647940 (-GetIids@-$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@wi.c)
 *     ?GetIids@?$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x180647970 (-GetIids@-$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Intern_ea_180647970.c)
 *     ?GetIids@?$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupsComponent@DesktopTaskGroups@4567@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1806479A0 (-GetIids@-$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Intern_ea_1806479A0.c)
 *     ?GetIids@?$produce_base@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UIDiscoverabilityManager@3456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1806961E0 (-GetIids@-$produce_base@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UID.c)
 *     ?GetIids@?$produce_base@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1806A1780 (-GetIids@-$produce_base@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetA.c)
 *     ?GetIids@?$produce_base@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1806E26C0 (-GetIids@-$produce_base@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThe.c)
 *     ?GetIids@?$produce_base@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x180706950 (-GetIids@-$produce_base@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteS.c)
 * Callees:
 *     __Platform_CoTaskMemAlloc @ 0x1801C7A89 (__Platform_CoTaskMemAlloc.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
