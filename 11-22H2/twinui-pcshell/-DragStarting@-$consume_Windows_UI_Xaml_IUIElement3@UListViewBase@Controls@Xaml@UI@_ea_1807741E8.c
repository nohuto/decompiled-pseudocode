/*
 * XREFs of ?DragStarting@?$consume_Windows_UI_Xaml_IUIElement3@UListViewBase@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UUIElement@Xaml@UI@Windows@winrt@@UDragStartingEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1807741E8
 * Callers:
 *     ?DragStarting@?$consume_Windows_UI_Xaml_IUIElement3@UListViewBase@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIUIElement3@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement3@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UUIElement@Xaml@UI@Windows@winrt@@UDragStartingEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1807741A0 (-DragStarting@-$consume_Windows_UI_Xaml_IUIElement3@UListViewBase@Controls@Xaml@UI@Windows@winrt.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_IUIElement3<winrt::Windows::UI::Xaml::Controls::ListViewBase>::DragStarting(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  signed int v7; // eax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v5 = *a1;
  if ( v5 )
  {
    v9 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v5)(
      v5,
      &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IUIElement3>,
      &v9);
    v5 = v9;
    v6 = v9;
  }
  else
  {
    v6 = 0LL;
  }
  v10 = v5;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v5 + 80LL))(v5, *a3, a2);
  if ( v7 < 0 )
    winrt::throw_hresult(v7);
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  return a2;
}
