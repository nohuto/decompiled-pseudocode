/*
 * XREFs of ??1ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1801879F4
 * Callers:
 *     ??1?$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x18018797C (--1-$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@d.c)
 *     _wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager_::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager__::_1_::dtor$0 @ 0x1802B4D13 (_wil--details--module_count_wrapper_winrt--Windows--Internal--Shell--implementation_ea_1802B4D13.c)
 *     ??_EImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x180700B2C (--_EImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??1?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@impl@winrt@@QEAA@XZ @ 0x180187CF0 (--1-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi_ea_180187CF0.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::~ImeContextMenuManager(
        winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager *this)
{
  __1__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BHA_AA_impl_winrt__QEAA_XZ((char *)this + 112);
  if ( *((_QWORD *)this + 13) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager *)((char *)this + 104));
  if ( *((_QWORD *)this + 12) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 12);
  winrt::immersive_shell_component::~immersive_shell_component((winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager *)((char *)this + 8));
}
