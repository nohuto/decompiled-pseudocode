/*
 * XREFs of ??0?$heap_implements@V?$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x180064400
 * Callers:
 *     ??$make@V?$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?AU?$com_ptr@UIObjectWithSite@@@0@XZ @ 0x1800643A0 (--$make@V-$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Wi.c)
 * Callees:
 *     ??0?$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x18006446C (--0-$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@.c)
 */

_QWORD *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>(
        _QWORD *a1)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>();
  *a1 = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,ITaskGroupsConfiguration,void>'};
  a1[1] = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,IApplicationViewChangeListener,void>'};
  a1[2] = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,void>'};
  a1[5] = &winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  a1[6] = &winrt::implements<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,ITaskGroupsConfiguration,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  a1[7] = &winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  a1[9] = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>::`vftable';
  return a1;
}
