/*
 * XREFs of ?LaunchRemoteSystemSettings@VirtualDesktopController@@UEAAJXZ @ 0x180542870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktopController::LaunchRemoteSystemSettings(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  unsigned int v3; // ebx

  v2 = this + 14;
  AcquireSRWLockShared(this + 14);
  v3 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)this[15].Ptr + 104LL))(this[15].Ptr);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v3;
}
