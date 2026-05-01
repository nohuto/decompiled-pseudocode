/*
 * XREFs of ?DragStarting@?$consume_Windows_UI_Xaml_IUIElement3@UListViewBase@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIUIElement3@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement3@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UUIElement@Xaml@UI@Windows@winrt@@UDragStartingEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1807741A0
 * Callers:
 *     ?ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ @ 0x180776AD0 (-ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ.c)
 * Callees:
 *     ??$make_event_revoker@UListViewBase@Controls@Xaml@UI@Windows@winrt@@U?$event_revoker@UIUIElement3@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement3@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@impl@6@PEBU?$consume_Windows_UI_Xaml_IUIElement3@UListViewBase@Controls@Xaml@UI@Windows@winrt@@@86@@impl@winrt@@YA?AU?$event_revoker@UIUIElement3@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement3@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@01@PEBU?$consume_Windows_UI_Xaml_IUIElement3@UListViewBase@Controls@Xaml@UI@Windows@winrt@@@01@Uevent_token@1@@Z @ 0x1807711FC (--$make_event_revoker@UListViewBase@Controls@Xaml@UI@Windows@winrt@@U-$event_revoker@UIUIElement.c)
 *     ?DragStarting@?$consume_Windows_UI_Xaml_IUIElement3@UListViewBase@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UUIElement@Xaml@UI@Windows@winrt@@UDragStartingEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1807741E8 (-DragStarting@-$consume_Windows_UI_Xaml_IUIElement3@UListViewBase@Controls@Xaml@UI@_ea_1807741E8.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_UI_Xaml_IUIElement3<winrt::Windows::UI::Xaml::Controls::ListViewBase>::DragStarting(
        void (__fastcall ****a1)(_QWORD, void *, _QWORD),
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v6; // rax
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v6 = (__int64 *)winrt::impl::consume_Windows_UI_Xaml_IUIElement3<winrt::Windows::UI::Xaml::Controls::ListViewBase>::DragStarting(
                    a1,
                    &v8,
                    a4);
  ___make_event_revoker_UListViewBase_Controls_Xaml_UI_Windows_winrt__U__event_revoker_UIUIElement3_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement3_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BFI_AA_impl_6_PEBU__consume_Windows_UI_Xaml_IUIElement3_UListViewBase_Controls_Xaml_UI_Windows_winrt___86__impl_winrt__YA_AU__event_revoker_UIUIElement3_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement3_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BFI_AA_01_PEBU__consume_Windows_UI_Xaml_IUIElement3_UListViewBase_Controls_Xaml_UI_Windows_winrt___01_Uevent_token_1__Z(
    a2,
    a1,
    *v6);
  return a2;
}
