/*
 * XREFs of ?get@?$weak_ref@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEBA?AU?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1805BB874
 * Callers:
 *     ?Invoke@?$delegate@U?$TypedEventHandler@USnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@V_lambda_f5a2d91b5a005b4d30175758b0d49bc3_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x1805B96D0 (-Invoke@-$delegate@U-$TypedEventHandler@USnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@UI.c)
 *     ?Invoke@?$delegate@U?$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_6872fc236b75762c8818981034499b17_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x1805B9790 (-Invoke@-$delegate@U-$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerHost@Sh_ea_1805B9790.c)
 *     ?Invoke@?$delegate@UPointerEventHandler@Input@Xaml@UI@Windows@winrt@@V_lambda_9dad63d3803c46edb86fb890f93be47c_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x1805B9850 (-Invoke@-$delegate@UPointerEventHandler@Input@Xaml@UI@Windows@winrt@@V_lambda_9dad63d3803c46edb8.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::weak_ref<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::get(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 0LL;
  if ( v2 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>,
      &v6);
    if ( v6 )
      v3 = v6 - 16;
    *a2 = v3;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
