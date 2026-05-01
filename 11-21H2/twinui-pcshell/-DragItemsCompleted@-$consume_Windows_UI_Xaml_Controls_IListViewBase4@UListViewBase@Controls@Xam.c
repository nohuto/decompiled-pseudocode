/*
 * XREFs of ?DragItemsCompleted@?$consume_Windows_UI_Xaml_Controls_IListViewBase4@UListViewBase@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UListViewBase@Controls@Xaml@UI@Windows@winrt@@UDragItemsCompletedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x180609B40
 * Callers:
 *     ?ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ @ 0x18060C2F0 (-ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ.c)
 * Callees:
 *     ??$make_event_revoker@UListViewBase@Controls@Xaml@UI@Windows@winrt@@U?$event_revoker@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@6@PEBU?$consume_Windows_UI_Xaml_Controls_IListViewBase4@UListViewBase@Controls@Xaml@UI@Windows@winrt@@@86@@impl@winrt@@YA?AU?$event_revoker@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@01@PEBU?$consume_Windows_UI_Xaml_Controls_IListViewBase4@UListViewBase@Controls@Xaml@UI@Windows@winrt@@@01@Uevent_token@1@@Z @ 0x18060719C (--$make_event_revoker@UListViewBase@Controls@Xaml@UI@Windows@winrt@@U-$event_revoker@UIListViewB.c)
 *     ?DragItemsCompleted@?$consume_Windows_UI_Xaml_Controls_IListViewBase4@UListViewBase@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AUevent_token@3@AEBU?$TypedEventHandler@UListViewBase@Controls@Xaml@UI@Windows@winrt@@UDragItemsCompletedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x180609B88 (-DragItemsCompleted@-$consume_Windows_UI_Xaml_Controls_IListViewBase4@UListViewBase_ea_180609B88.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_Controls_IListViewBase4<winrt::Windows::UI::Xaml::Controls::ListViewBase>::DragItemsCompleted(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v6; // rax
  _QWORD *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v6 = (__int64 *)winrt::impl::consume_Windows_UI_Xaml_Controls_IListViewBase4<winrt::Windows::UI::Xaml::Controls::ListViewBase>::DragItemsCompleted(
                    a1,
                    &v8,
                    a4);
  ___make_event_revoker_UListViewBase_Controls_Xaml_UI_Windows_winrt__U__event_revoker_UIListViewBase4_Controls_Xaml_UI_Windows_winrt___MP8type___abi_UIListViewBase4_Controls_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_6_PEBU__consume_Windows_UI_Xaml_Controls_IListViewBase4_UListViewBase_Controls_Xaml_UI_Windows_winrt___86__impl_winrt__YA_AU__event_revoker_UIListViewBase4_Controls_Xaml_UI_Windows_winrt___MP8type___abi_UIListViewBase4_Controls_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_01_PEBU__consume_Windows_UI_Xaml_Controls_IListViewBase4_UListViewBase_Controls_Xaml_UI_Windows_winrt___01_Uevent_token_1__Z(
    a2,
    a1,
    *v6);
  return a2;
}
