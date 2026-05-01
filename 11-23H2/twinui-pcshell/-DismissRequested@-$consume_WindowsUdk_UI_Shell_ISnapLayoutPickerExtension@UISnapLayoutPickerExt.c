/*
 * XREFs of ?DismissRequested@?$consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@USnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@3@@Z @ 0x18068EF14
 * Callers:
 *     ?Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NIPEAUHWND__@@_N1W4SnapControlType@34567@W4InputDeviceKind@4UI@WindowsUdk@7@PEAUHMONITOR__@@@Z @ 0x18068FA04 (-Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$from_com_ref@AEBUISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@@?$weak_ref@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAAXAEBUISnapLayoutPickerExtension@Shell@UI@WindowsUdk@1@@Z @ 0x18068DF60 (--$from_com_ref@AEBUISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@@-$weak_ref@UISnapLayo.c)
 */

__int64 *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension<winrt::WindowsUdk::UI::Shell::ISnapLayoutPickerExtension>::DismissRequested(
        void (__fastcall ****a1)(_QWORD, __int64 *, __int64 *),
        __int64 *a2,
        __int64 a3,
        _QWORD *a4)
{
  signed int v6; // eax
  __int64 v7; // rbx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v10; // [rsp+58h] [rbp+20h]

  v9 = 0LL;
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *))(**a1)[7])(*a1, *a4, &v9);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  v7 = v9;
  v10 = a2;
  *a2 = 0LL;
  winrt::weak_ref<winrt::WindowsUdk::UI::Shell::ISnapLayoutPickerExtension>::from_com_ref<winrt::WindowsUdk::UI::Shell::ISnapLayoutPickerExtension const &>(
    a2,
    a1);
  a2[1] = v7;
  return a2;
}
