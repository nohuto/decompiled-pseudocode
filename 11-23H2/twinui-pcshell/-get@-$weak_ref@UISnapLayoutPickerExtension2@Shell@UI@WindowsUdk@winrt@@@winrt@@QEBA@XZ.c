/*
 * XREFs of ?get@?$weak_ref@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ @ 0x18067E0AC
 * Callers:
 *     ??1?$event_revoker@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x180679C74 (--1-$event_revoker@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UISnap.c)
 *     ?Hide@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x18068F820 (-Hide@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::weak_ref<winrt::WindowsUdk::UI::Shell::ISnapLayoutPickerExtension2>::get(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::ISnapLayoutPickerExtension2>,
      &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
