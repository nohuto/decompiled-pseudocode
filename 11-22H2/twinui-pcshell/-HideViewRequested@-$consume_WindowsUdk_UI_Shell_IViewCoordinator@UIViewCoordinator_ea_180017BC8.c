/*
 * XREFs of ?HideViewRequested@?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UHideViewRequestedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x180017BC8
 * Callers:
 *     ?HideViewRequested@?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UHideViewRequestedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x180017B6C (-HideViewRequested@-$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@Win.c)
 *     ?RegisterViewCoordinatorEventsInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800B363C (-RegisterViewCoordinatorEventsInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinator<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::HideViewRequested(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  int v4; // eax

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)*a1 + 104LL))(*a1, *a3, a2);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  return a2;
}
