/*
 * XREFs of PnpAcquireDependencyRelationsLock @ 0x1406C9958
 * Callers:
 *     IoResolveDependency @ 0x140398140 (IoResolveDependency.c)
 *     PnpCheckForActiveDependencies @ 0x1406CBCBC (PnpCheckForActiveDependencies.c)
 *     PnpDeleteAllDependencyRelations @ 0x14078E45C (PnpDeleteAllDependencyRelations.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14079C174 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14079C210 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x14079C284 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14079C344 (PipProcessRebuildPowerRelationsQueue.c)
 *     IoReserveDependency @ 0x140837CB0 (IoReserveDependency.c)
 *     PnpRequestDeviceRemoval @ 0x1408673BC (PnpRequestDeviceRemoval.c)
 *     IopSortRelationListForRemove @ 0x1408687B8 (IopSortRelationListForRemove.c)
 *     PnpProcessDependencyRelations @ 0x140868E4C (PnpProcessDependencyRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x14086ED78 (PiQueryPowerDependencyRelations.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140882AE8 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140883070 (PnpQueuePendingSurpriseRemoval.c)
 *     IoDuplicateDependency @ 0x140954170 (IoDuplicateDependency.c)
 *     IoSetDependency @ 0x1409542A0 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x140954968 (PnpGetDeviceDependencyList.c)
 *     PiDeviceDependencyInit @ 0x140B3FA54 (PiDeviceDependencyInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402390E0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D680 (ExAcquireResourceSharedLite.c)
 *     PpDevNodeLockTree @ 0x1406C9990 (PpDevNodeLockTree.c)
 */

BOOLEAN __fastcall PnpAcquireDependencyRelationsLock(char a1)
{
  PpDevNodeLockTree(0LL);
  if ( a1 )
    return ExAcquireResourceExclusiveLite(&PiDependencyRelationsLock, 1u);
  else
    return ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
}
