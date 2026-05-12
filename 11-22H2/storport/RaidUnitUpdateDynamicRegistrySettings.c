/*
 * XREFs of RaidUnitUpdateDynamicRegistrySettings @ 0x1C001A340
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x1C0007014 (RaUnitAcquireRemoveLock.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00070DC (RaUnitReleaseRemoveLock.c)
 */

LONG __fastcall RaidUnitUpdateDynamicRegistrySettings(__int64 a1)
{
  LONG result; // eax

  result = RaUnitAcquireRemoveLock(a1, 0LL, 0LL);
  if ( result >= 0 )
    return RaUnitReleaseRemoveLock(a1);
  return result;
}
