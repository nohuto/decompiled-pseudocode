/*
 * XREFs of ?DismissRequested@?$consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@USnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@3@@Z @ 0x1805B8AC0
 * Callers:
 *     ?Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NIPEAUHWND__@@_N1AEBUIInspectable@Foundation@67@@Z @ 0x1805B8EB4 (-Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N.c)
 * Callees:
 *     ??$make_event_revoker@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@U?$event_revoker@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEA@AA@impl@5@PEBU?$consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@@75@@impl@winrt@@YA?AU?$event_revoker@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEA@AA@01@PEBU?$consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@@01@Uevent_token@1@@Z @ 0x1801C10D8 (--$make_event_revoker@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@U-$event_revoker@UI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension<winrt::WindowsUdk::UI::Shell::ISnapLayoutPickerExtension>::DismissRequested(
        void (__fastcall ****a1)(_QWORD, __int64 *, __int64 *),
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  signed int v6; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *))(**a1)[7])(*a1, *a4, &v8);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  ___make_event_revoker_UISnapLayoutPickerExtension_Shell_UI_WindowsUdk_winrt__U__event_revoker_UISnapLayoutPickerExtension_Shell_UI_WindowsUdk_winrt___MP8type___abi_UISnapLayoutPickerExtension_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEA_AA_impl_5_PEBU__consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension_UISnapLayoutPickerExtension_Shell_UI_WindowsUdk_winrt___75__impl_winrt__YA_AU__event_revoker_UISnapLayoutPickerExtension_Shell_UI_WindowsUdk_winrt___MP8type___abi_UISnapLayoutPickerExtension_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEA_AA_01_PEBU__consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension_UISnapLayoutPickerExtension_Shell_UI_WindowsUdk_winrt___01_Uevent_token_1__Z(
    a2,
    a1,
    v8);
  return a2;
}
