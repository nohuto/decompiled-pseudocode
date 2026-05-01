/*
 * XREFs of ?ShowRequested@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UShowShellViewRequestedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1800D8EF8
 * Callers:
 *     _lambda_9b41e49093e020fa356c5dbea766620b_::operator() @ 0x18009284C (_lambda_9b41e49093e020fa356c5dbea766620b_--operator().c)
 *     ?InitializeViewCoordinators@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180094F5C (-InitializeViewCoordinators@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800E6E94 (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     _lambda_0cd710c0ca914c0bd498d5cbe5e09369_::operator() @ 0x180127D28 (_lambda_0cd710c0ca914c0bd498d5cbe5e09369_--operator().c)
 *     ?publish_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18012C120 (-publish_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServ.c)
 *     _lambda_7d09c6063c81243c28cd7b4b1f2016c9_::operator() @ 0x180136894 (_lambda_7d09c6063c81243c28cd7b4b1f2016c9_--operator().c)
 *     ?RuntimeClassInitialize@CNetworkExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180136AEC (-RuntimeClassInitialize@CNetworkExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ??R_lambda_9102ab066cd0787a9c4c0ffcea2bf645_@@QEBA@XZ @ 0x18018FB3C (--R_lambda_9102ab066cd0787a9c4c0ffcea2bf645_@@QEBA@XZ.c)
 *     ?publish_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180199470 (-publish_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServic.c)
 *     _lambda_e5288bd2e8441abb5041b2e3fba677a0_::operator() @ 0x18020E018 (_lambda_e5288bd2e8441abb5041b2e3fba677a0_--operator().c)
 * Callees:
 *     ??$from_com_ref@AEBUIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@?$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAAXAEBUIShellViewCoordinator@Shell@UI@WindowsUdk@1@@Z @ 0x1800D744C (--$from_com_ref@AEBUIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@-$weak_ref@UIShellViewCoor.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ShowRequested(
        void (__fastcall ****a1)(_QWORD, __int64 *, __int64 *),
        __int64 *a2,
        __int64 a3,
        _QWORD *a4)
{
  int v6; // eax
  __int64 v7; // rbx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v10; // [rsp+58h] [rbp+20h]

  v9 = 0LL;
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *))(**a1)[6])(*a1, *a4, &v9);
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6);
  v7 = v9;
  v10 = a2;
  *a2 = 0LL;
  winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::from_com_ref<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator const &>(
    a2,
    a1);
  a2[1] = v7;
  return a2;
}
