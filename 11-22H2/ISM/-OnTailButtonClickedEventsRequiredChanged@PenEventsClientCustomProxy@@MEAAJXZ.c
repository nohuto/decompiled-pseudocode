/*
 * XREFs of ?OnTailButtonClickedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ @ 0x1801BD550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PenEventsClientCustomProxy::OnTailButtonClickedEventsRequiredChanged(
        PenEventsClientCustomProxy *this)
{
  char v2; // al
  __int64 v3; // r9

  v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 88LL))((char *)this + 8);
  return PenEventsClientCustomProxy::NotifyHotkeyRegistrationChanged((__int64)this, 0, v2, v3);
}
