/*
 * XREFs of ?revoke_impl@?$event_revoker@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@AEAAXUISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@3@@Z @ 0x18067EA40
 * Callers:
 *     ??1?$event_revoker@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x180679C74 (--1-$event_revoker@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UISnap.c)
 *     ?Hide@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x18068F820 (-Hide@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??_9type@?$abi@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@X@impl@winrt@@$BEI@AA @ 0x1802ABBF0 (--_9type@-$abi@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@X@impl@winrt@@$BEI@AA.c)
 */

void __fastcall _revoke_impl___event_revoker_UISnapLayoutPickerExtension2_Shell_UI_WindowsUdk_winrt___MP8type___abi_UISnapLayoutPickerExtension2_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__AEAAXUISnapLayoutPickerExtension2_Shell_UI_WindowsUdk_3__Z(
        __int64 a1,
        __int64 *a2)
{
  if ( *a2 )
     winrt::impl::abi<winrt::WindowsUdk::UI::Shell::ISnapLayoutPickerExtension2,void>::type::`vcall'{72,{flat}}(*a2);
  if ( *a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a2);
}
