/*
 * XREFs of ??0?$weak_ref@UIFrameworkElement@Xaml@UI@Windows@winrt@@@winrt@@QEAA@AEBUIFrameworkElement@Xaml@UI@Windows@1@@Z @ 0x1805B81DC
 * Callers:
 *     ?Loaded@?$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFrameworkElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBGA@AA@23@Uauto_revoke_t@3@AEBURoutedEventHandler@Xaml@UI@Windows@3@@Z @ 0x1805B99B4 (-Loaded@-$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@winrt@@@i.c)
 *     ?Unloaded@?$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFrameworkElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBHA@AA@23@Uauto_revoke_t@3@AEBURoutedEventHandler@Xaml@UI@Windows@3@@Z @ 0x1805BB600 (-Unloaded@-$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@winrt@@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::weak_ref<winrt::Windows::UI::Xaml::IFrameworkElement>::weak_ref<winrt::Windows::UI::Xaml::IFrameworkElement>(
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
