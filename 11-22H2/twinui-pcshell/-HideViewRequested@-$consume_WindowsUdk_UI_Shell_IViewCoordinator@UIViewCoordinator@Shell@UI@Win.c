/*
 * XREFs of ?HideViewRequested@?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UHideViewRequestedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x180017B6C
 * Callers:
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800178C0 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?HideViewRequested@?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UHideViewRequestedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x180017BC8 (-HideViewRequested@-$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator_ea_180017BC8.c)
 *     ??$from_com_ref@AEBUIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@?$weak_ref@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAAXAEBUIViewCoordinator@Shell@UI@WindowsUdk@1@@Z @ 0x18006E870 (--$from_com_ref@AEBUIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@-$weak_ref@UIViewCoordinator@Sh.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinator<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::HideViewRequested(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rbx
  _QWORD *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v6 = *(_QWORD *)winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinator<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::HideViewRequested(
                    a1,
                    &v8,
                    a4);
  *a2 = 0LL;
  winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::from_com_ref<winrt::WindowsUdk::UI::Shell::IViewCoordinator const &>(
    a2,
    a1);
  a2[1] = v6;
  return a2;
}
