/*
 * XREFs of ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x18008AB3C
 * Callers:
 *     ??0?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsComponent@DesktopTaskGroups@4567@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@QEAA@XZ @ 0x180089228 (--0-$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uim.c)
 *     ??0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800892C0 (--0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@QEAA@XZ @ 0x180089638 (--0-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_sh.c)
 *     ??0NPSMDesktopShellComponent@@QEAA@XZ @ 0x1800896D0 (--0NPSMDesktopShellComponent@@QEAA@XZ.c)
 *     ??0AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180089790 (--0AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180089D14 (--0InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x180089E60 (--0-$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@d.c)
 *     ??0TouchGestureComponent@@QEAA@XZ @ 0x18008A290 (--0TouchGestureComponent@@QEAA@XZ.c)
 *     ??0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18008A48C (--0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0DashboardManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18008ABC8 (--0DashboardManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@QEAA@XZ @ 0x18008ACE0 (--0-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHo.c)
 *     ??0?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x18008AD98 (--0-$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Int.c)
 *     ??0PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18008AE84 (--0PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$module_count_wrapper@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x18008AF20 (--0-$module_count_wrapper@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@d.c)
 *     ??0?$PinManager_base@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManagerInterop3@@Uimmersive_shell_component@6@@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18024F614 (--0-$PinManager_base@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManagerIntero.c)
 *     ??0?$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@winrt@@QEAA@XZ @ 0x1802608A0 (--0-$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWindowMessag.c)
 *     ??0DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1806F96C0 (--0DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

winrt::immersive_shell_component *__fastcall winrt::immersive_shell_component::immersive_shell_component(
        winrt::immersive_shell_component *this)
{
  *((_QWORD *)this + 3) = &winrt::impl::produce<winrt::immersive_shell_component,winrt::Windows::Foundation::IInspectable>::`vftable';
  *(_QWORD *)this = &winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::DashboardActivator,std::tuple<winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>>::`vftable';
  *((_QWORD *)this + 1) = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *((_QWORD *)this + 2) = &winrt::impl::producers_base<winrt::immersive_shell_component,std::tuple<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 5) = 1LL;
  *(_QWORD *)this = &winrt::immersive_shell_component::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 1) = &winrt::immersive_shell_component::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 2) = &winrt::immersive_shell_component::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 4) = &winrt::immersive_shell_component::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  return this;
}
