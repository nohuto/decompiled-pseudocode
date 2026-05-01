/*
 * XREFs of ?get@?$weak_ref@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ @ 0x18019CB90
 * Callers:
 *     ?unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800A3E50 (-unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXP.c)
 *     ??1?$event_revoker@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x180129920 (--1-$event_revoker@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@$MP8type@-$abi@UITileCollec.c)
 *     ??1?$event_revoker@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@impl@winrt@@QEAA@XZ @ 0x18012994C (--1-$event_revoker@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@$MP8type@-$abi_ea_18012994C.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::weak_ref<winrt::WindowsUdk::UI::StartScreen::ITileCollection>::get(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<winrt::WindowsUdk::UI::StartScreen::ITileCollection>,
      &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
