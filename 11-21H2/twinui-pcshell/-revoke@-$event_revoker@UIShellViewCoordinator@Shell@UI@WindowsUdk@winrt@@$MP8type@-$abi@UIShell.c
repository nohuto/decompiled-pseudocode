/*
 * XREFs of ?revoke@?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAAXXZ @ 0x1800F6834
 * Callers:
 *     ?unsubscribe_from_services@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800E2870 (-unsubscribe_from_services@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 *     _lambda_92c90ed01b0d8642303ed5be6c53eb36_::operator() @ 0x1801615DC (_lambda_92c90ed01b0d8642303ed5be6c53eb36_--operator().c)
 *     wil::details::functor_wrapper_void__lambda_2a26ce627aafbd278e079e6c0db8f6af__&_::Run @ 0x18017A020 (wil--details--functor_wrapper_void__lambda_2a26ce627aafbd278e079e6c0db8f6af__-_--Run.c)
 *     wil::details::functor_wrapper_void__lambda_48c367572776a2929bcb477c33355076__&_::Run @ 0x18017A080 (wil--details--functor_wrapper_void__lambda_48c367572776a2929bcb477c33355076__-_--Run.c)
 *     ?shutdown_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIProfferService@@@Z @ 0x18017B640 (-shutdown_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIPro.c)
 *     ?shutdown_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIProfferService@@@Z @ 0x18017B690 (-shutdown_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIProff.c)
 *     ?unsubscribe_from_services@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x18017B6E0 (-unsubscribe_from_services@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     _lambda_dfeb4bfb51e213a92906219ba5182255_::operator() @ 0x1801AA76C (_lambda_dfeb4bfb51e213a92906219ba5182255_--operator().c)
 *     ??1MiniSearchExperienceManager@@UEAA@XZ @ 0x1803A1028 (--1MiniSearchExperienceManager@@UEAA@XZ.c)
 * Callees:
 *     ?revoke_impl@?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@AEAAXUIShellViewCoordinator@Shell@UI@WindowsUdk@3@@Z @ 0x1800F6888 (-revoke_impl@-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UI.c)
 *     ?get@?$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA?AUIShellViewCoordinator@Shell@UI@WindowsUdk@2@XZ @ 0x1800F694C (-get@-$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA-AUIShellViewCoord.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall _revoke___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAAXXZ(
        __int64 *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = *a1;
  *a1 = 0LL;
  v5 = v1;
  v3 = winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::get(&v5, &v6);
  result = _revoke_impl___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__AEAAXUIShellViewCoordinator_Shell_UI_WindowsUdk_3__Z(
             a1,
             v3);
  if ( v1 )
    return winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v5);
  return result;
}
