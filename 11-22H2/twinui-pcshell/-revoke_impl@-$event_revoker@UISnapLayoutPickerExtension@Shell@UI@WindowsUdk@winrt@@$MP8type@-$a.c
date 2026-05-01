/*
 * XREFs of ?revoke_impl@?$event_revoker@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEA@AA@impl@winrt@@AEAAXUISnapLayoutPickerExtension@Shell@UI@WindowsUdk@3@@Z @ 0x18067EA78
 * Callers:
 *     ??1?$event_revoker@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEA@AA@impl@winrt@@QEAA@XZ @ 0x180679CB4 (--1-$event_revoker@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UISnapL.c)
 *     ?OnControlUnloaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x180690B90 (-OnControlUnloaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??_9type@?$abi@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@X@impl@winrt@@$BEA@AA @ 0x1802ABC10 (--_9type@-$abi@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@X@impl@winrt@@$BEA@AA.c)
 */

void __fastcall _revoke_impl___event_revoker_UISnapLayoutPickerExtension_Shell_UI_WindowsUdk_winrt___MP8type___abi_UISnapLayoutPickerExtension_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEA_AA_impl_winrt__AEAAXUISnapLayoutPickerExtension_Shell_UI_WindowsUdk_3__Z(
        __int64 a1,
        __int64 *a2)
{
  if ( *a2 )
     winrt::impl::abi<winrt::WindowsUdk::UI::Shell::ISnapLayoutPickerExtension,void>::type::`vcall'{64,{flat}}(*a2);
  if ( *a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a2);
}
