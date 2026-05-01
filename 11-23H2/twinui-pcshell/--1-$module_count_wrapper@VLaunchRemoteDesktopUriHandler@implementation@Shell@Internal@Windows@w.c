/*
 * XREFs of ??1?$module_count_wrapper@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x180700FD4
 * Callers:
 *     ??_E?$module_count_wrapper@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAAPEAXI@Z @ 0x180701058 (--_E-$module_count_wrapper@VLaunchRemoteDesktopUriHandler@implementation@Shell@Inte_ea_180701058.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@V?$ImmersiveShellThreadDispatcherCallback@V?$_Binder@U_Unforced@std@@P6A?AUfire_and_forget@winrt@@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@2@U?$com_ptr@UIServiceProvider@@@4@AEBUCRect@Geometry@@I@ZAEAV52@AEAU64@U78@I@std@@@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIImmersiveShellThreadDispatcherCallback@34567@@impl@winrt@@IEAAIXZ @ 0x1800D9A88 (-subtract_reference@-$root_implements@V-$ImmersiveShellThreadDispatcherCallback@V-$_Binder@U_Unf.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler>(
        _QWORD *a1)
{
  __int64 v1; // rbx

  *a1 = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler>>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,std::tuple<winrt::Windows::Foundation::IInspectable,IExecuteCommand>>'};
  v1 = (__int64)(a1 + 2);
  a1[2] = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler>>::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,winrt::Windows::Foundation::IInspectable,IExecuteCommand>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback<std::_Binder<std::_Unforced,winrt::fire_and_forget (*)(std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>,winrt::com_ptr<IServiceProvider>,Geometry::CRect const &,unsigned int),std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData> &,winrt::com_ptr<IServiceProvider> &,Geometry::CRect,unsigned int>>,winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::subtract_reference(v1);
  return winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
