/*
 * XREFs of ?get@?$weak_ref@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18067E054
 * Callers:
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BIA@AA@impl@winrt@@QEAA@XZ @ 0x180679A34 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@-$a.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJA@AA@impl@winrt@@QEAA@XZ @ 0x180679A94 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_180679A94.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BKA@AA@impl@winrt@@QEAA@XZ @ 0x180679AF4 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_180679AF4.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BLA@AA@impl@winrt@@QEAA@XZ @ 0x180679B54 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_180679B54.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BMA@AA@impl@winrt@@QEAA@XZ @ 0x180679BB4 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_180679BB4.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BNA@AA@impl@winrt@@QEAA@XZ @ 0x180679C14 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_180679C14.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::weak_ref<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::get(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>,
      &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
