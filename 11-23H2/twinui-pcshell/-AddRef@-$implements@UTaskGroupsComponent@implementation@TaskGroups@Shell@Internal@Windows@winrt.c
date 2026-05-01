/*
 * XREFs of ?AddRef@?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsComponent@DesktopTaskGroups@4567@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@UEAAKXZ @ 0x1800D8BA0
 * Callers:
 *     ?AddRef@?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsComponent@DesktopTaskGroups@4567@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@W7EAAKXZ @ 0x1802AAC10 (-AddRef@-$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@_ea_1802AAC10.c)
 *     ?AddRef@?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsComponent@DesktopTaskGroups@4567@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@WCI@EAAKXZ @ 0x1802AAC30 (-AddRef@-$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@_ea_1802AAC30.c)
 *     ?AddRef@?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsComponent@DesktopTaskGroups@4567@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@WDA@EAAKXZ @ 0x1802AAC50 (-AddRef@-$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@_ea_1802AAC50.c)
 *     ?AddRef@?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsComponent@DesktopTaskGroups@4567@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@WDI@EAAKXZ @ 0x1802AAC70 (-AddRef@-$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@_ea_1802AAC70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::AddRef(
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
