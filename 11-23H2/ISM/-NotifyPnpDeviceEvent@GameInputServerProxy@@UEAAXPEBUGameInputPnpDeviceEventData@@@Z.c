/*
 * XREFs of ?NotifyPnpDeviceEvent@GameInputServerProxy@@UEAAXPEBUGameInputPnpDeviceEventData@@@Z @ 0x180118050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall GameInputServerProxy::NotifyPnpDeviceEvent(
        RTL_SRWLOCK *this,
        const struct GameInputPnpDeviceEventData *a2)
{
  PVOID Ptr; // rcx

  if ( TryAcquireSRWLockShared(this + 3) )
  {
    Ptr = this[4].Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID, const struct GameInputPnpDeviceEventData *))(*(_QWORD *)Ptr + 80LL))(Ptr, a2);
    ReleaseSRWLockShared(this + 3);
  }
}
