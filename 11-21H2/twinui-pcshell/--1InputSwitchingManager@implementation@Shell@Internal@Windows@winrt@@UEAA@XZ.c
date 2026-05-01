/*
 * XREFs of ??1InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800E2778
 * Callers:
 *     ??1?$module_count_wrapper@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1800CC814 (--1-$module_count_wrapper@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@d.c)
 *     _winrt::impl::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::InputSwitchingManager___::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::InputSwitchingManager____::_1_::dtor$1 @ 0x18021C6B1 (_winrt--impl--heap_implements_wil--details--module_count_wrapper_winrt--Windows--In_ea_18021C6B1.c)
 *     ??_GInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1805E0F88 (--_GInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800E4540 (--1-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??1?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x1800F445C (--1-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIShellViewC.c)
 *     ??1?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAA@XZ @ 0x1800F44F0 (--1-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi_ea_1800F44F0.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??1?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18017DB80 (--1-$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V-$allocator@U.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::~InputSwitchingManager(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this)
{
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>((char *)this + 296);
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>((char *)this + 288);
  winrt::handle_type<winrt::impl::hstring_traits>::close((char *)this + 272);
  if ( *((_QWORD *)this + 33) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *)((char *)this + 264));
  __1__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAA_XZ((char *)this + 232);
  __1__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAA_XZ((char *)this + 216);
  if ( *((_QWORD *)this + 26) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *)((char *)this + 208));
  if ( *((_QWORD *)this + 25) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 25);
  if ( *((_QWORD *)this + 24) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 24);
  if ( *((_QWORD *)this + 23) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 23);
  if ( *((_QWORD *)this + 22) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 22);
  std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::~deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>((char *)this + 136);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  winrt::immersive_shell_component::~immersive_shell_component((winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *)((char *)this + 8));
}
