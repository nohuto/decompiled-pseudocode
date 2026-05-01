/*
 * XREFs of ??1LaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180701034
 * Callers:
 *     _winrt::impl::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler___::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler____::_1_::dtor$1 @ 0x180700F8D (_winrt--impl--heap_implements_wil--details--module_count_wrapper_winrt--Windows--In_ea_180700F8D.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@V?$ImmersiveShellThreadDispatcherCallback@V?$_Binder@U_Unforced@std@@P6A?AUfire_and_forget@winrt@@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@2@U?$com_ptr@UIServiceProvider@@@4@AEBUCRect@Geometry@@I@ZAEAV52@AEAU64@U78@I@std@@@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIImmersiveShellThreadDispatcherCallback@34567@@impl@winrt@@IEAAIXZ @ 0x1800D9A88 (-subtract_reference@-$root_implements@V-$ImmersiveShellThreadDispatcherCallback@V-$_Binder@U_Unf.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler::~LaunchRemoteDesktopUriHandler(
        winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler *this)
{
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback<std::_Binder<std::_Unforced,winrt::fire_and_forget (*)(std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>,winrt::com_ptr<IServiceProvider>,Geometry::CRect const &,unsigned int),std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData> &,winrt::com_ptr<IServiceProvider> &,Geometry::CRect,unsigned int>>,winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::subtract_reference((__int64)this + 16);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
