/*
 * XREFs of StorAdapterWatchForRegistryChanges @ 0x1C0044CB0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C0007534 (RaidAcquireAdapterRemoveLock.c)
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall StorAdapterWatchForRegistryChanges(__int64 *a1)
{
  PEX_RUNDOWN_REF_CACHE_AWARE *Adapter; // rax
  PEX_RUNDOWN_REF_CACHE_AWARE *v3; // rbx

  Adapter = (PEX_RUNDOWN_REF_CACHE_AWARE *)RaidpPortGetAdapter(*a1);
  v3 = Adapter;
  if ( Adapter )
  {
    if ( (int)RaidAcquireAdapterRemoveLock((__int64)Adapter) >= 0 )
    {
      ((void (__fastcall *)(__int64))a1[1])(*a1);
      ExReleaseRundownProtectionCacheAware(v3[37]);
    }
  }
}
