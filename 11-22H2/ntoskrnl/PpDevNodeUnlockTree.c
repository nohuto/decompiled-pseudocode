/*
 * XREFs of PpDevNodeUnlockTree @ 0x1406C99AC
 * Callers:
 *     PnpDeviceActionWorker @ 0x140358E30 (PnpDeviceActionWorker.c)
 *     PnpLockDeviceActionQueue @ 0x1403C383C (PnpLockDeviceActionQueue.c)
 *     PnpUnlockDeviceActionQueue @ 0x1403C38B4 (PnpUnlockDeviceActionQueue.c)
 *     IoTranslateBusAddress @ 0x140560400 (IoTranslateBusAddress.c)
 *     PiGetRelatedDevice @ 0x1406C9298 (PiGetRelatedDevice.c)
 *     PipProcessDevNodeTree @ 0x1406CB740 (PipProcessDevNodeTree.c)
 *     PnpCheckForActiveDependencies @ 0x1406CBD6C (PnpCheckForActiveDependencies.c)
 *     PnpDeleteAllDependencyRelations @ 0x14078E96C (PnpDeleteAllDependencyRelations.c)
 *     PiControlGetPropertyData @ 0x140792C60 (PiControlGetPropertyData.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140793634 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14079C684 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14079C720 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x14079C794 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14079C854 (PipProcessRebuildPowerRelationsQueue.c)
 *     IoGetLegacyVetoList @ 0x1407A8E70 (IoGetLegacyVetoList.c)
 *     PipForDeviceNodeSubtree @ 0x1407CD688 (PipForDeviceNodeSubtree.c)
 *     PiGetDeviceDepth @ 0x1407D6110 (PiGetDeviceDepth.c)
 *     PpDevCfgProcessDevices @ 0x140813294 (PpDevCfgProcessDevices.c)
 *     IopQueryInterfaceRecurseUp @ 0x14082A320 (IopQueryInterfaceRecurseUp.c)
 *     IoReportDetectedDevice @ 0x140836920 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140836DC0 (IoReportRootDevice.c)
 *     IoReserveDependency @ 0x140839800 (IoReserveDependency.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1408399EC (PnpReleaseDependencyRelationsLock.c)
 *     PiQueryDeviceRelations @ 0x14084EC7C (PiQueryDeviceRelations.c)
 *     PiPagePathSetState @ 0x140854B58 (PiPagePathSetState.c)
 *     PnpRequestDeviceRemoval @ 0x14086788C (PnpRequestDeviceRemoval.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140867948 (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140868334 (PnpUnlinkDeviceRemovalRelations.c)
 *     IopSortRelationListForRemove @ 0x140868C88 (IopSortRelationListForRemove.c)
 *     PnpProcessDependencyRelations @ 0x14086931C (PnpProcessDependencyRelations.c)
 *     PiQueryPowerRelations @ 0x14086F044 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x14086F248 (PiQueryPowerDependencyRelations.c)
 *     PnpDelayedRemoveWorker @ 0x140881B60 (PnpDelayedRemoveWorker.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140882FB8 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140883540 (PnpQueuePendingSurpriseRemoval.c)
 *     IoDuplicateDependency @ 0x140954220 (IoDuplicateDependency.c)
 *     IoSetDependency @ 0x140954350 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x140954A18 (PnpGetDeviceDependencyList.c)
 *     IoLockUnlockPnpDeviceTree @ 0x140954CC0 (IoLockUnlockPnpDeviceTree.c)
 *     PnpDiagRundownRegisterCallback @ 0x140958020 (PnpDiagRundownRegisterCallback.c)
 *     PnpRestartDeviceNode @ 0x140958D6C (PnpRestartDeviceNode.c)
 *     PnpProcessCompletedEject @ 0x1409590A0 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x14095930C (PnpQueuePendingEject.c)
 *     PpResetProblemDevices @ 0x140959904 (PpResetProblemDevices.c)
 *     PipSetDevNodeStateFlags @ 0x140959AC8 (PipSetDevNodeStateFlags.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x1409638C0 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMCreateDevice @ 0x1409684E0 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140968EF8 (PiCMDeleteDevice.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x14096BA60 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PiInitializeDevice @ 0x14096DB94 (PiInitializeDevice.c)
 *     PnpIommuBlockUnblockDevice @ 0x14096F008 (PnpIommuBlockUnblockDevice.c)
 *     IopWarmEjectDevice @ 0x14096F1EC (IopWarmEjectDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     ExConvertExclusiveToSharedLite @ 0x1403471D0 (ExConvertExclusiveToSharedLite.c)
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
