/*
 * XREFs of PpDevNodeUnlockTree @ 0x1406C992C
 * Callers:
 *     PnpDeviceActionWorker @ 0x1403595D0 (PnpDeviceActionWorker.c)
 *     PnpLockDeviceActionQueue @ 0x1403C407C (PnpLockDeviceActionQueue.c)
 *     PnpUnlockDeviceActionQueue @ 0x1403C40F4 (PnpUnlockDeviceActionQueue.c)
 *     IoTranslateBusAddress @ 0x140560A20 (IoTranslateBusAddress.c)
 *     PiGetRelatedDevice @ 0x1406C9218 (PiGetRelatedDevice.c)
 *     PipProcessDevNodeTree @ 0x1406CB6C0 (PipProcessDevNodeTree.c)
 *     PnpCheckForActiveDependencies @ 0x1406CBCEC (PnpCheckForActiveDependencies.c)
 *     PnpDeleteAllDependencyRelations @ 0x14078E64C (PnpDeleteAllDependencyRelations.c)
 *     PiControlGetPropertyData @ 0x140792940 (PiControlGetPropertyData.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140793314 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14079C364 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14079C400 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x14079C474 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14079C534 (PipProcessRebuildPowerRelationsQueue.c)
 *     IoGetLegacyVetoList @ 0x1407A8AB0 (IoGetLegacyVetoList.c)
 *     PipForDeviceNodeSubtree @ 0x1407CD3C8 (PipForDeviceNodeSubtree.c)
 *     PiGetDeviceDepth @ 0x1407D5E60 (PiGetDeviceDepth.c)
 *     PpDevCfgProcessDevices @ 0x140810FE4 (PpDevCfgProcessDevices.c)
 *     IopQueryInterfaceRecurseUp @ 0x140828AD0 (IopQueryInterfaceRecurseUp.c)
 *     IoReportDetectedDevice @ 0x1408350D0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140835570 (IoReportRootDevice.c)
 *     IoReserveDependency @ 0x140837FB0 (IoReserveDependency.c)
 *     PnpReleaseDependencyRelationsLock @ 0x14083819C (PnpReleaseDependencyRelationsLock.c)
 *     PiQueryDeviceRelations @ 0x14084E0FC (PiQueryDeviceRelations.c)
 *     PiPagePathSetState @ 0x140853F48 (PiPagePathSetState.c)
 *     PnpRequestDeviceRemoval @ 0x1408675FC (PnpRequestDeviceRemoval.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1408676B8 (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1408680A4 (PnpUnlinkDeviceRemovalRelations.c)
 *     IopSortRelationListForRemove @ 0x1408689F8 (IopSortRelationListForRemove.c)
 *     PnpProcessDependencyRelations @ 0x14086908C (PnpProcessDependencyRelations.c)
 *     PiQueryPowerRelations @ 0x14086EDB4 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x14086EFB8 (PiQueryPowerDependencyRelations.c)
 *     PnpDelayedRemoveWorker @ 0x1408818D0 (PnpDelayedRemoveWorker.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140882D28 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1408832B0 (PnpQueuePendingSurpriseRemoval.c)
 *     IoDuplicateDependency @ 0x140954370 (IoDuplicateDependency.c)
 *     IoSetDependency @ 0x1409544A0 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x140954B68 (PnpGetDeviceDependencyList.c)
 *     IoLockUnlockPnpDeviceTree @ 0x140954E10 (IoLockUnlockPnpDeviceTree.c)
 *     PnpDiagRundownRegisterCallback @ 0x140958170 (PnpDiagRundownRegisterCallback.c)
 *     PnpRestartDeviceNode @ 0x140958EBC (PnpRestartDeviceNode.c)
 *     PnpProcessCompletedEject @ 0x1409591F0 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x14095945C (PnpQueuePendingEject.c)
 *     PpResetProblemDevices @ 0x140959A54 (PpResetProblemDevices.c)
 *     PipSetDevNodeStateFlags @ 0x140959C18 (PipSetDevNodeStateFlags.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x140963A10 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMCreateDevice @ 0x140968630 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140969048 (PiCMDeleteDevice.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x14096BBB0 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PiInitializeDevice @ 0x14096DCE4 (PiInitializeDevice.c)
 *     PnpIommuBlockUnblockDevice @ 0x14096F158 (PnpIommuBlockUnblockDevice.c)
 *     IopWarmEjectDevice @ 0x14096F33C (IopWarmEjectDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExConvertExclusiveToSharedLite @ 0x140347950 (ExConvertExclusiveToSharedLite.c)
 */

void __fastcall PpDevNodeUnlockTree(int a1)
{
  struct _ERESOURCE *v1; // rcx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  if ( !a1 )
  {
    v1 = &IopDeviceTreeLock;
LABEL_3:
    ExReleaseResourceLite(v1);
    goto LABEL_4;
  }
  v2 = a1 - 1;
  if ( !v2 || (v3 = v2 - 1) == 0 || (v4 = v3 - 1) == 0 )
  {
    ExReleaseResourceLite(&IopDeviceTreeLock);
    v1 = &PiEngineLock;
    goto LABEL_3;
  }
  if ( v4 == 1 )
    ExConvertExclusiveToSharedLite(&IopDeviceTreeLock);
LABEL_4:
  KeLeaveCriticalRegion();
}
