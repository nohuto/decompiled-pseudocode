/*
 * XREFs of PnpProcessDependencyRelations @ 0x140868E4C
 * Callers:
 *     PnpProcessRelation @ 0x140868A58 (PnpProcessRelation.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x14022B180 (PipIsDevNodeDNStarted.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x1406C98FC (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406C9958 (PnpAcquireDependencyRelationsLock.c)
 *     PiGetDependentList @ 0x14079C318 (PiGetDependentList.c)
 *     PiEnumerateDependentListEntry @ 0x140838314 (PiEnumerateDependentListEntry.c)
 *     PnpProcessRelation @ 0x140868A58 (PnpProcessRelation.c)
 */

__int64 __fastcall PnpProcessDependencyRelations(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *DependentList; // rsi
  __int64 *i; // rbx

  v1 = *(_QWORD *)(a1 + 32);
  PnpAcquireDependencyRelationsLock(0);
  DependentList = PiGetDependentList(v1);
  for ( i = (__int64 *)*DependentList; i != DependentList; i = (__int64 *)*i )
    PiEnumerateDependentListEntry((__int64)i);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
  return 0LL;
}
