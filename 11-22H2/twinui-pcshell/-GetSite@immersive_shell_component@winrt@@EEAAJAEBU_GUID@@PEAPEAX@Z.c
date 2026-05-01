/*
 * XREFs of ?GetSite@immersive_shell_component@winrt@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180391B80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::immersive_shell_component::GetSite(RTL_SRWLOCK *this, const struct _GUID *a2, void **a3)
{
  RTL_SRWLOCK *v6; // rdi
  PVOID Ptr; // rcx
  int v8; // ebx

  v6 = this + 10;
  AcquireSRWLockShared(this + 10);
  Ptr = this[9].Ptr;
  if ( Ptr )
  {
    v8 = (*(__int64 (__fastcall **)(PVOID, const struct _GUID *, void **))(*(_QWORD *)Ptr + 24LL))(Ptr, a2, a3);
    if ( v8 < 0 )
    {
      if ( v6 )
        ReleaseSRWLockShared(v6);
      return (unsigned int)v8;
    }
  }
  else
  {
    *a3 = 0LL;
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return 0LL;
}
