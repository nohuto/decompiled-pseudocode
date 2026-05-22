/*
 * XREFs of ?NotifyPnpDeviceEvent@GameInputServerProxy@@UEAAXPEBUGameInputPnpDeviceEventData@@@Z @ 0x1800FC280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall GameInputServerProxy::NotifyPnpDeviceEvent(
        RTL_SRWLOCK *this,
        const struct GameInputPnpDeviceEventData *a2)
{
  PVOID Ptr; // rcx

  if ( TryAcquireSRWLockShared(this + 3) )
  {
    Ptr = this[5].Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID, const struct GameInputPnpDeviceEventData *))(*(_QWORD *)Ptr + 24LL))(Ptr, a2);
    ReleaseSRWLockShared(this + 3);
  }
}
