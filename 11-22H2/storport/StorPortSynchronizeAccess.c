/*
 * XREFs of StorPortSynchronizeAccess @ 0x1C0046FC0
 * Callers:
 *     StorPortSynchronizeAccessVrfy @ 0x1C00B1790 (StorPortSynchronizeAccessVrfy.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0008690 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0008708 (RaidAdapterReleaseInterruptLock.c)
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
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
    if ( Adapter[188] == 1 )
      v6 = RaidAdapterAcquireInterruptLock((__int64)Adapter);
    v9 = a2(a1, a3);
    if ( *(_DWORD *)(v8 + 752) == 1 )
      RaidAdapterReleaseInterruptLock(v8, v6);
    LOBYTE(Adapter) = v9;
  }
  return (char)Adapter;
}
