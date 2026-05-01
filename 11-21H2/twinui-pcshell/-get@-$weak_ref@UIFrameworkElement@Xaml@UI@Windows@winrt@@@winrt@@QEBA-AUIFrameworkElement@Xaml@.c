/*
 * XREFs of ?get@?$weak_ref@UIFrameworkElement@Xaml@UI@Windows@winrt@@@winrt@@QEBA?AUIFrameworkElement@Xaml@UI@Windows@2@XZ @ 0x1805B1C84
 * Callers:
 *     ??1?$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFrameworkElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBGA@AA@impl@winrt@@QEAA@XZ @ 0x1805AE7F0 (--1-$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIFrameworkElement@X.c)
 *     ??1?$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFrameworkElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBHA@AA@impl@winrt@@QEAA@XZ @ 0x1805AE830 (--1-$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIFrame_ea_1805AE830.c)
 *     ?OnControlUnloaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x1805B9F80 (-OnControlUnloaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@.c)
 *     ?revoke@?$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFrameworkElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBGA@AA@impl@winrt@@QEAAXXZ @ 0x1805BB96C (-revoke@-$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIFrameworkElem.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::weak_ref<winrt::Windows::UI::Xaml::IFrameworkElement>::get(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IFrameworkElement>,
      &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
