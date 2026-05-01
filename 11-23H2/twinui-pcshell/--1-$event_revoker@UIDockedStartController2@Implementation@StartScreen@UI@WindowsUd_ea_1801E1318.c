/*
 * XREFs of ??1?$event_revoker@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BIA@AA@impl@winrt@@QEAA@XZ @ 0x1801E1318
 * Callers:
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x18012CEA4 (--1CStartExperienceManager@@UEAA@XZ.c)
 *     ?SetDockedStartController@CStartExperienceManager@@UEAAJPEAUIInspectable@@@Z @ 0x1801E2FF0 (-SetDockedStartController@CStartExperienceManager@@UEAAJPEAUIInspectable@@@Z.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$19 @ 0x1802C2364 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$19.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?get@?$weak_ref@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ @ 0x1801E3388 (-get@-$weak_ref@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@@winrt@.c)
 *     ??_9type@?$abi@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@X@impl@winrt@@$BIA@AA @ 0x180297AB0 (--_9type@-$abi@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@wi_ea_180297AB0.c)
 */

void __fastcall __1__event_revoker_UIDockedStartController2_Implementation_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UIDockedStartController2_Implementation_StartScreen_UI_WindowsUdk_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BIA_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  winrt::Windows::Foundation::IUnknown *v2; // rdi
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = (winrt::Windows::Foundation::IUnknown *)winrt::weak_ref<winrt::WindowsUdk::UI::StartScreen::Implementation::IDockedStartController2>::get(
                                                   a1,
                                                   &v3);
    if ( *(_QWORD *)v2 )
       winrt::impl::abi<winrt::WindowsUdk::UI::StartScreen::Implementation::IDockedStartController2,void>::type::`vcall'{128,{flat}}(
        *(_QWORD *)v2,
        a1[1]);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(v2);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
}
