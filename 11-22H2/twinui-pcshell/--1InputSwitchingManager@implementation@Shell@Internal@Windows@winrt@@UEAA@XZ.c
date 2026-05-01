/*
 * XREFs of ??1InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18019FE90
 * Callers:
 *     ??1?$module_count_wrapper@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x18019FE18 (--1-$module_count_wrapper@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@d.c)
 *     _winrt::impl::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::InputSwitchingManager___::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::InputSwitchingManager____::_1_::dtor$1 @ 0x1802B5986 (_winrt--impl--heap_implements_wil--details--module_count_wrapper_winrt--Windows--In_ea_1802B5986.c)
 *     ??_GInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1806FF94C (--_GInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAA@XZ @ 0x180094E18 (--1-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIShellViewC.c)
 *     ??1?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x180094EB8 (--1-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi_ea_180094EB8.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??1?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18019FF84 (--1-$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V-$allocator@U.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::~InputSwitchingManager(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  wil::details *v3; // rcx
  wil::details *v4; // rcx

  v3 = (wil::details *)*((_QWORD *)this + 37);
  if ( v3 )
    wil::details::delete_wnf_subscription_state(v3, a2);
  v4 = (wil::details *)*((_QWORD *)this + 36);
  if ( v4 )
    wil::details::delete_wnf_subscription_state(v4, a2);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)this + 34);
  if ( *((_QWORD *)this + 33) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *)((char *)this + 264));
  __1__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAA_XZ((_QWORD *)this + 29);
  __1__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAA_XZ((_QWORD *)this + 27);
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
