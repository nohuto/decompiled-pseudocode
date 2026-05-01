/*
 * XREFs of ??0?$weak_ref@UIUIElement@Xaml@UI@Windows@winrt@@@winrt@@QEAA@AEBUIUIElement@Xaml@UI@Windows@1@@Z @ 0x1805B8280
 * Callers:
 *     ?PointerEntered@?$consume_Windows_UI_Xaml_IUIElement@UIUIElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCAA@AA@23@Uauto_revoke_t@3@AEBUPointerEventHandler@Input@Xaml@UI@Windows@3@@Z @ 0x1805BA330 (-PointerEntered@-$consume_Windows_UI_Xaml_IUIElement@UIUIElement@Xaml@UI@Windows@winrt@@@impl@wi.c)
 *     ?PointerExited@?$consume_Windows_UI_Xaml_IUIElement@UIUIElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCBA@AA@23@Uauto_revoke_t@3@AEBUPointerEventHandler@Input@Xaml@UI@Windows@3@@Z @ 0x1805BA3AC (-PointerExited@-$consume_Windows_UI_Xaml_IUIElement@UIUIElement@Xaml@UI@Windows@winrt@@@impl@win.c)
 *     ??$make_event_revoker@UFrameworkElement@Xaml@UI@Windows@winrt@@U?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBIA@AA@impl@5@PEBU?$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@75@@impl@winrt@@YA?AU?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBIA@AA@01@PEBU?$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@01@Uevent_token@1@@Z @ 0x1806070FC (--$make_event_revoker@UFrameworkElement@Xaml@UI@Windows@winrt@@U-$event_revoker@UIUIElement@Xaml.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::weak_ref<winrt::Windows::UI::Xaml::IUIElement>::weak_ref<winrt::Windows::UI::Xaml::IUIElement>(
        _QWORD *a1,
        void (__fastcall ****a2)(_QWORD, __int64 *, __int64 *))
{
  void (__fastcall ***v3)(_QWORD, __int64 *, __int64 *); // rcx
  signed int v4; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v3 = *a2;
  if ( *a2 )
  {
    v6 = 0LL;
    (**v3)(v3, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>, &v6);
    v7 = v6;
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 24LL))(v6, a1);
    if ( v4 < 0 )
      winrt::throw_hresult(v4);
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v7);
  }
  return a1;
}
