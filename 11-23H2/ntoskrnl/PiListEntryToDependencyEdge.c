/*
 * XREFs of PiListEntryToDependencyEdge @ 0x140398664
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x14079C474 (PipNotifyDeviceDependencyList.c)
 *     PipCheckValidNewDependencyEdge @ 0x14083850C (PipCheckValidNewDependencyEdge.c)
 *     PiEnumerateDependentListEntry @ 0x140838614 (PiEnumerateDependentListEntry.c)
 *     PiEnumerateProviderListEntry @ 0x140838648 (PiEnumerateProviderListEntry.c)
 *     IoDuplicateDependency @ 0x140954370 (IoDuplicateDependency.c)
 *     PipDeleteAllDependencyRelations @ 0x140954610 (PipDeleteAllDependencyRelations.c)
 *     PipMergeDependencyEdgeList @ 0x140954918 (PipMergeDependencyEdgeList.c)
 *     PnpGetDeviceDependencyList @ 0x140954B68 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
