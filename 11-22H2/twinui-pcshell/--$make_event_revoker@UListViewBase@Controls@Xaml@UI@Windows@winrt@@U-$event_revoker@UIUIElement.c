/*
 * XREFs of ??$make_event_revoker@UListViewBase@Controls@Xaml@UI@Windows@winrt@@U?$event_revoker@UIUIElement3@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement3@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@impl@6@PEBU?$consume_Windows_UI_Xaml_IUIElement3@UListViewBase@Controls@Xaml@UI@Windows@winrt@@@86@@impl@winrt@@YA?AU?$event_revoker@UIUIElement3@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement3@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@01@PEBU?$consume_Windows_UI_Xaml_IUIElement3@UListViewBase@Controls@Xaml@UI@Windows@winrt@@@01@Uevent_token@1@@Z @ 0x1807711FC
 * Callers:
 *     ?DragStarting@?$consume_Windows_UI_Xaml_IUIElement3@UListViewBase@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIUIElement3@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement3@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UUIElement@Xaml@UI@Windows@winrt@@UDragStartingEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1807741A0 (-DragStarting@-$consume_Windows_UI_Xaml_IUIElement3@UListViewBase@Controls@Xaml@UI@Windows@winrt.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$from_com_ref@AEBUIUIElement3@Xaml@UI@Windows@winrt@@@?$weak_ref@UIUIElement3@Xaml@UI@Windows@winrt@@@winrt@@AEAAXAEBUIUIElement3@Xaml@UI@Windows@1@@Z @ 0x180770C44 (--$from_com_ref@AEBUIUIElement3@Xaml@UI@Windows@winrt@@@-$weak_ref@UIUIElement3@Xaml@UI@Windows@.c)
 */

__int64 __fastcall ___make_event_revoker_UListViewBase_Controls_Xaml_UI_Windows_winrt__U__event_revoker_UIUIElement3_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement3_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BFI_AA_impl_6_PEBU__consume_Windows_UI_Xaml_IUIElement3_UListViewBase_Controls_Xaml_UI_Windows_winrt___86__impl_winrt__YA_AU__event_revoker_UIUIElement3_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement3_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BFI_AA_01_PEBU__consume_Windows_UI_Xaml_IUIElement3_UListViewBase_Controls_Xaml_UI_Windows_winrt___01_Uevent_token_1__Z(
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
    (**v5)(v5, &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IUIElement3>, &v8);
    v6 = v8;
  }
  else
  {
    v6 = 0LL;
  }
  v9 = a1;
  *(_QWORD *)a1 = 0LL;
  winrt::weak_ref<winrt::Windows::UI::Xaml::IUIElement3>::from_com_ref<winrt::Windows::UI::Xaml::IUIElement3 const &>(
    (__int64 *)a1,
    &v8);
  *(_QWORD *)(a1 + 8) = a3;
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  return a1;
}
