/*
 * XREFs of ?IsGameInputClient@GameInputServerProxy@@UEAA_NK@Z @ 0x18005BE50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall GameInputServerProxy::IsGameInputClient(RTL_SRWLOCK *this, unsigned int a2)
{
  char v4; // bl
  PVOID Ptr; // rcx

  v4 = 0;
  if ( TryAcquireSRWLockShared(this + 3) )
  {
    Ptr = this[4].Ptr;
    if ( Ptr )
      v4 = (*(__int64 (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)Ptr + 72LL))(Ptr, a2);
    ReleaseSRWLockShared(this + 3);
  }
  return v4;
}
