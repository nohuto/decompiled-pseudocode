/*
 * XREFs of ??1NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180734384
 * Callers:
 *     ??_E?$heap_implements@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180734430 (--_E-$heap_implements@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@@impl.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@V?$ImmersiveShellThreadDispatcherCallback@V?$_Binder@U_Unforced@std@@P6A?AUfire_and_forget@winrt@@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@2@U?$com_ptr@UIServiceProvider@@@4@AEBUCRect@Geometry@@I@ZAEAV52@AEAU64@U78@I@std@@@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIImmersiveShellThreadDispatcherCallback@34567@@impl@winrt@@IEAAIXZ @ 0x1800D9A88 (-subtract_reference@-$root_implements@V-$ImmersiveShellThreadDispatcherCallback@V-$_Binder@U_Unf.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800D9EC8 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$EventHandler@UIInspectable@Foundation@Win.c)
 *     ??1?$factory_event_revoker@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@$MP8type@?$abi@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGI@AA@impl@winrt@@QEAA@XZ @ 0x180734328 (--1-$factory_event_revoker@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@$M.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils::~NetworkConnectionUtils(
        winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils *this)
{
  __1__factory_event_revoker_UINetworkInformationStatics_Connectivity_Networking_Windows_winrt___MP8type___abi_UINetworkInformationStatics_Connectivity_Networking_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGI_AA_impl_winrt__QEAA_XZ((winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils *)((char *)this + 48));
  if ( *((_QWORD *)this + 3) )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref((__int64 *)this + 3);
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback<std::_Binder<std::_Unforced,winrt::fire_and_forget (*)(std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>,winrt::com_ptr<IServiceProvider>,Geometry::CRect const &,unsigned int),std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData> &,winrt::com_ptr<IServiceProvider> &,Geometry::CRect,unsigned int>>,winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::subtract_reference((__int64)this);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
