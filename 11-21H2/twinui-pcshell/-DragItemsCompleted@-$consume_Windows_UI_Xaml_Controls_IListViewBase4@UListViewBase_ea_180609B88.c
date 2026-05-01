/*
 * XREFs of ?DragItemsCompleted@?$consume_Windows_UI_Xaml_Controls_IListViewBase4@UListViewBase@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AUevent_token@3@AEBU?$TypedEventHandler@UListViewBase@Controls@Xaml@UI@Windows@winrt@@UDragItemsCompletedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x180609B88
 * Callers:
 *     ?DragItemsCompleted@?$consume_Windows_UI_Xaml_Controls_IListViewBase4@UListViewBase@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UListViewBase@Controls@Xaml@UI@Windows@winrt@@UDragItemsCompletedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x180609B40 (-DragItemsCompleted@-$consume_Windows_UI_Xaml_Controls_IListViewBase4@UListViewBase@Controls@Xam.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_Controls_IListViewBase4<winrt::Windows::UI::Xaml::Controls::ListViewBase>::DragItemsCompleted(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  signed int v6; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v5 = *a1;
  if ( v5 )
  {
    v8 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v5)(
      v5,
      &winrt::impl::guid_v<winrt::Windows::UI::Xaml::Controls::IListViewBase4>,
      &v8);
    v5 = v8;
  }
  v9 = v5;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v5 + 72LL))(v5, *a3, a2);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  return a2;
}
