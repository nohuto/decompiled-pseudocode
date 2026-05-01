/*
 * XREFs of ?ContextRequested@?$consume_Windows_UI_Xaml_IUIElement4@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AUevent_token@3@AEBU?$TypedEventHandler@UUIElement@Xaml@UI@Windows@winrt@@UContextRequestedEventArgs@Input@2345@@Foundation@Windows@3@@Z @ 0x180608B3C
 * Callers:
 *     ?ContextRequested@?$consume_Windows_UI_Xaml_IUIElement4@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIUIElement4@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement4@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BII@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UUIElement@Xaml@UI@Windows@winrt@@UContextRequestedEventArgs@Input@2345@@Foundation@Windows@3@@Z @ 0x180608AF4 (-ContextRequested@-$consume_Windows_UI_Xaml_IUIElement4@UFrameworkElement@Xaml@UI@Windows@winrt@.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_IUIElement4<winrt::Windows::UI::Xaml::FrameworkElement>::ContextRequested(
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
      &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IUIElement4>,
      &v8);
    v5 = v8;
  }
  v9 = v5;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v5 + 128LL))(v5, *a3, a2);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  return a2;
}
