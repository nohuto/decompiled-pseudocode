/*
 * XREFs of StorPortSynchronizeAccess @ 0x1C0043FF0
 * Callers:
 *     StorPortSynchronizeAccessVrfy @ 0x1C0095800 (StorPortSynchronizeAccessVrfy.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C00112B8 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0011350 (RaidAdapterReleaseInterruptLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 */

char __fastcall StorPortSynchronizeAccess(__int64 a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  KIRQL v6; // di
  _DWORD *Adapter; // rax
  __int64 v8; // rbx
  char v9; // si

  v6 = 0;
  Adapter = RaidpPortGetAdapter(a1);
  v8 = (__int64)Adapter;
  if ( Adapter )
  {
    if ( Adapter[186] == 1 )
      v6 = RaidAdapterAcquireInterruptLock((__int64)Adapter);
    v9 = a2(a1, a3);
    if ( *(_DWORD *)(v8 + 744) == 1 )
      RaidAdapterReleaseInterruptLock(v8, v6);
    LOBYTE(Adapter) = v9;
  }
  return (char)Adapter;
}
