/*
 * XREFs of ?Dismissed@?$consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BIA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@6@@Foundation@Windows@3@@Z @ 0x1801E1C44
 * Callers:
 *     ?SetDockedStartController@CStartExperienceManager@@UEAAJPEAUIInspectable@@@Z @ 0x1801E2FF0 (-SetDockedStartController@CStartExperienceManager@@UEAAJPEAUIInspectable@@@Z.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??$?0AEBUIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@X@?$weak_ref@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@@winrt@@QEAA@AEBUIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@1@@Z @ 0x1801E0C48 (--$-0AEBUIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@X@-$weak_ref@UI.c)
 *     ?Dismissed@?$consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@6@@Foundation@Windows@3@@Z @ 0x1801E1CF0 (-Dismissed@-$consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartControlle_ea_1801E1CF0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2<winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController>::Dismissed(
        void (__fastcall ****a1)(_QWORD, void *, _QWORD),
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rbx
  void (__fastcall ***v7)(_QWORD, void *, _QWORD); // rcx
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+40h] [rbp+8h] BYREF
  void (__fastcall ***v11)(_QWORD, __int64 *, __int64 *); // [rsp+48h] [rbp+10h] BYREF

  v11 = (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a2;
  v6 = *(_QWORD *)winrt::impl::consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2<winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController>::Dismissed(
                    a1,
                    &v9,
                    a4);
  v7 = *a1;
  if ( *a1 )
  {
    v10 = 0LL;
    (**v7)(v7, &winrt::impl::guid_v<winrt::WindowsUdk::UI::StartScreen::Implementation::IDockedStartController2>, &v10);
    v11 = v10;
  }
  else
  {
    v11 = 0LL;
  }
  winrt::weak_ref<winrt::WindowsUdk::UI::StartScreen::Implementation::IDockedStartController2>::weak_ref<winrt::WindowsUdk::UI::StartScreen::Implementation::IDockedStartController2>(
    (__int64 *)a2,
    &v11);
  *(_QWORD *)(a2 + 8) = v6;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v11);
  return a2;
}
