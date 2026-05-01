/*
 * XREFs of ??$make_event_revoker@UListViewBase@Controls@Xaml@UI@Windows@winrt@@U?$event_revoker@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@6@PEBU?$consume_Windows_UI_Xaml_Controls_IListViewBase4@UListViewBase@Controls@Xaml@UI@Windows@winrt@@@86@@impl@winrt@@YA?AU?$event_revoker@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@01@PEBU?$consume_Windows_UI_Xaml_Controls_IListViewBase4@UListViewBase@Controls@Xaml@UI@Windows@winrt@@@01@Uevent_token@1@@Z @ 0x180771148
 * Callers:
 *     ?DragItemsCompleted@?$consume_Windows_UI_Xaml_Controls_IListViewBase4@UListViewBase@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UListViewBase@Controls@Xaml@UI@Windows@winrt@@UDragItemsCompletedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x180774010 (-DragItemsCompleted@-$consume_Windows_UI_Xaml_Controls_IListViewBase4@UListViewBase@Controls@Xam.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$from_com_ref@AEBUIListViewBase4@Controls@Xaml@UI@Windows@winrt@@@?$weak_ref@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@@winrt@@AEAAXAEBUIListViewBase4@Controls@Xaml@UI@Windows@1@@Z @ 0x180770AD4 (--$from_com_ref@AEBUIListViewBase4@Controls@Xaml@UI@Windows@winrt@@@-$weak_ref@UIListViewBase4@C.c)
 */

__int64 __fastcall ___make_event_revoker_UListViewBase_Controls_Xaml_UI_Windows_winrt__U__event_revoker_UIListViewBase4_Controls_Xaml_UI_Windows_winrt___MP8type___abi_UIListViewBase4_Controls_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_6_PEBU__consume_Windows_UI_Xaml_Controls_IListViewBase4_UListViewBase_Controls_Xaml_UI_Windows_winrt___86__impl_winrt__YA_AU__event_revoker_UIListViewBase4_Controls_Xaml_UI_Windows_winrt___MP8type___abi_UIListViewBase4_Controls_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_01_PEBU__consume_Windows_UI_Xaml_Controls_IListViewBase4_UListViewBase_Controls_Xaml_UI_Windows_winrt___01_Uevent_token_1__Z(
        __int64 a1,
        void (__fastcall ****a2)(_QWORD, void *, _QWORD),
        __int64 a3)
{
  void (__fastcall ***v5)(_QWORD, void *, _QWORD); // rcx
  void (__fastcall ***v6)(_QWORD, __int64 *, __int64 *); // rsi
  void (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h]

  v8 = (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1;
  v5 = *a2;
  v8 = 0LL;
  if ( v5 )
  {
    (**v5)(v5, &winrt::impl::guid_v<winrt::Windows::UI::Xaml::Controls::IListViewBase4>, &v8);
    v6 = v8;
  }
  else
  {
    v6 = 0LL;
  }
  v9 = a1;
  *(_QWORD *)a1 = 0LL;
  winrt::weak_ref<winrt::Windows::UI::Xaml::Controls::IListViewBase4>::from_com_ref<winrt::Windows::UI::Xaml::Controls::IListViewBase4 const &>(
    (__int64 *)a1,
    &v8);
  *(_QWORD *)(a1 + 8) = a3;
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  return a1;
}
