/*
 * XREFs of ?AddRef@?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsConfiguration@@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@UEAAKXZ @ 0x1801341A0
 * Callers:
 *     ?AddRef@?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsConfiguration@@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@W7EAAKXZ @ 0x18020E9C0 (-AddRef@-$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@_ea_18020E9C0.c)
 *     ?AddRef@?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsConfiguration@@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@WBA@EAAKXZ @ 0x18020E9E0 (-AddRef@-$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@_ea_18020E9E0.c)
 *     ?AddRef@?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsConfiguration@@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@WCI@EAAKXZ @ 0x18020EA00 (-AddRef@-$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@_ea_18020EA00.c)
 *     ?AddRef@?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsConfiguration@@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@WDA@EAAKXZ @ 0x18020EA20 (-AddRef@-$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@_ea_18020EA20.c)
 *     ?AddRef@?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsConfiguration@@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@WDI@EAAKXZ @ 0x18020EA40 (-AddRef@-$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@_ea_18020EA40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,ITaskGroupsConfiguration,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rdx
  unsigned int v2; // r8d
  bool v4; // zf
  signed __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 80);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), v1 + 1, v1);
    v4 = v1 == v5;
    v1 = v5;
    if ( v4 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 24));
}
