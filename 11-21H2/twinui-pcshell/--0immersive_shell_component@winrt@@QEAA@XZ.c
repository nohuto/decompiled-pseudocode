/*
 * XREFs of ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x1800CEFE4
 * Callers:
 *     ??0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800CCA24 (--0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x1800CDCFC (--0-$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Int.c)
 *     ??0?$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x1800CE58C (--0-$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@d.c)
 *     ??0DashboardManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800CE868 (--0DashboardManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0NPSMDesktopShellComponent@@QEAA@XZ @ 0x1800CE960 (--0NPSMDesktopShellComponent@@QEAA@XZ.c)
 *     ??0InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800CEA20 (--0InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800CEB6C (--0PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$module_count_wrapper@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x1800CEDB0 (--0-$module_count_wrapper@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@de.c)
 *     ??0?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@QEAA@XZ @ 0x1800CEE8C (--0-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHo.c)
 *     ??0?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsConfiguration@@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@QEAA@XZ @ 0x1800CEF44 (--0-$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uim.c)
 *     ??0TouchGestureComponent@@QEAA@XZ @ 0x1800CF140 (--0TouchGestureComponent@@QEAA@XZ.c)
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
