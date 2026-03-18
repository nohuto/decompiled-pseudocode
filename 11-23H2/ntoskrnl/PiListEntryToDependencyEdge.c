/*
 * XREFs of PiListEntryToDependencyEdge @ 0x140398484
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x14079C284 (PipNotifyDeviceDependencyList.c)
 *     PipCheckValidNewDependencyEdge @ 0x14083820C (PipCheckValidNewDependencyEdge.c)
 *     PiEnumerateDependentListEntry @ 0x140838314 (PiEnumerateDependentListEntry.c)
 *     PiEnumerateProviderListEntry @ 0x140838348 (PiEnumerateProviderListEntry.c)
 *     IoDuplicateDependency @ 0x140954170 (IoDuplicateDependency.c)
 *     PipDeleteAllDependencyRelations @ 0x140954410 (PipDeleteAllDependencyRelations.c)
 *     PipMergeDependencyEdgeList @ 0x140954718 (PipMergeDependencyEdgeList.c)
 *     PnpGetDeviceDependencyList @ 0x140954968 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
