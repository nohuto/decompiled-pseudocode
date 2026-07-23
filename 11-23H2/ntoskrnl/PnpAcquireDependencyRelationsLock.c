/*
 * XREFs of PnpAcquireDependencyRelationsLock @ 0x1406C9988
 * Callers:
 *     IoResolveDependency @ 0x140398320 (IoResolveDependency.c)
 *     PnpCheckForActiveDependencies @ 0x1406CBCEC (PnpCheckForActiveDependencies.c)
 *     PnpDeleteAllDependencyRelations @ 0x14078E64C (PnpDeleteAllDependencyRelations.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14079C364 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14079C400 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x14079C474 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14079C534 (PipProcessRebuildPowerRelationsQueue.c)
 *     IoReserveDependency @ 0x140837FB0 (IoReserveDependency.c)
 *     PnpRequestDeviceRemoval @ 0x1408675FC (PnpRequestDeviceRemoval.c)
 *     IopSortRelationListForRemove @ 0x1408689F8 (IopSortRelationListForRemove.c)
 *     PnpProcessDependencyRelations @ 0x14086908C (PnpProcessDependencyRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x14086EFB8 (PiQueryPowerDependencyRelations.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140882D28 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1408832B0 (PnpQueuePendingSurpriseRemoval.c)
 *     IoDuplicateDependency @ 0x140954370 (IoDuplicateDependency.c)
 *     IoSetDependency @ 0x1409544A0 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x140954B68 (PnpGetDeviceDependencyList.c)
 *     PiDeviceDependencyInit @ 0x140B3FA54 (PiDeviceDependencyInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 *     PpDevNodeLockTree @ 0x1406C99C0 (PpDevNodeLockTree.c)
 */

BOOLEAN __fastcall PnpAcquireDependencyRelationsLock(char a1)
{
  PpDevNodeLockTree(0LL);
  if ( a1 )
    return ExAcquireResourceExclusiveLite(&PiDependencyRelationsLock, 1u);
  else
    return ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
}
