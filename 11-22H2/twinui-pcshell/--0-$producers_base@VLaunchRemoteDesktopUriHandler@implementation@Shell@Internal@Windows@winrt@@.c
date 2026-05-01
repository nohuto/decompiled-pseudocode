/*
 * XREFs of ??0?$producers_base@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@V?$tuple@UIInspectable@Foundation@Windows@winrt@@UIExecuteCommand@@@std@@@impl@winrt@@QEAA@XZ @ 0x180700FA0
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x180700F10 (--0-$heap_implements@V-$module_count_wrapper@VLaunchRemoteDesktopUriHandler@implementation@Shell.c)
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x180100920 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

IApplicationViewChangeListener *__fastcall winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,std::tuple<winrt::Windows::Foundation::IInspectable,IExecuteCommand>>::producers_base<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,std::tuple<winrt::Windows::Foundation::IInspectable,IExecuteCommand>>(
        IApplicationViewChangeListener *a1)
{
  *((_QWORD *)a1 + 1) = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::DashboardActivator,winrt::Windows::Internal::Shell::IDashboardActivator>::`vftable';
  IApplicationViewChangeListener::IApplicationViewChangeListener(a1);
  *(_QWORD *)a1 = &IAppViewDataSourceAdapter::`vftable';
  return a1;
}
