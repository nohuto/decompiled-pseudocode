/*
 * XREFs of ??_G?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsConfiguration@@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@UEAAPEAXI@Z @ 0x180589350
 * Callers:
 *     ??_E?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsConfiguration@@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@WEI@EAAPEAXI@Z @ 0x18020E980 (--_E-$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Ui.c)
 * Callees:
 *     ??1immersive_shell_component@winrt@@UEAA@XZ @ 0x1800F7E9C (--1immersive_shell_component@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

char *__fastcall winrt::implements<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,ITaskGroupsConfiguration,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::`scalar deleting destructor'(
        char *a1,
        char a2)
{
  winrt::immersive_shell_component::~immersive_shell_component((winrt::immersive_shell_component *)(a1 + 40));
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
