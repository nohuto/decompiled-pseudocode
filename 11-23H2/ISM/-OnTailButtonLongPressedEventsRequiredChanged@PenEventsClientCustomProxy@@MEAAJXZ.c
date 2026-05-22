/*
 * XREFs of ?OnTailButtonLongPressedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ @ 0x1801AF680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PenEventsClientCustomProxy::OnTailButtonLongPressedEventsRequiredChanged(
        PenEventsClientCustomProxy *this)
{
  char v2; // al
  __int64 v3; // r9

  v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 104LL))((char *)this + 8);
  return PenEventsClientCustomProxy::NotifyHotkeyRegistrationChanged((__int64)this, 2u, v2, v3);
}
