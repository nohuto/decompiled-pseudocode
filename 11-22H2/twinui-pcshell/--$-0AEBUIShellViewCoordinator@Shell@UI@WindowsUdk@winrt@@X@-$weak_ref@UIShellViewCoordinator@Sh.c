/*
 * XREFs of ??$?0AEBUIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@?$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAA@AEBUIShellViewCoordinator@Shell@UI@WindowsUdk@1@@Z @ 0x180187CC8
 * Callers:
 *     ?VisibilityChanged@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@3@@Z @ 0x180187C50 (-VisibilityChanged@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Sh.c)
 * Callees:
 *     ??$from_com_ref@AEBUIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@?$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAAXAEBUIShellViewCoordinator@Shell@UI@WindowsUdk@1@@Z @ 0x1800D744C (--$from_com_ref@AEBUIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@-$weak_ref@UIShellViewCoor.c)
 */

__int64 *__fastcall winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::weak_ref<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>(
        __int64 *a1,
        void (__fastcall ****a2)(_QWORD, __int64 *, __int64 *))
{
  *a1 = 0LL;
  winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::from_com_ref<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator const &>(
    a1,
    a2);
  return a1;
}
