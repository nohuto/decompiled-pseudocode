/*
 * XREFs of PpDevNodeUnlockTree @ 0x1406C98FC
 * Callers:
 *     PnpDeviceActionWorker @ 0x140359430 (PnpDeviceActionWorker.c)
 *     PnpLockDeviceActionQueue @ 0x1403C3E9C (PnpLockDeviceActionQueue.c)
 *     PnpUnlockDeviceActionQueue @ 0x1403C3F14 (PnpUnlockDeviceActionQueue.c)
 *     IoTranslateBusAddress @ 0x140560360 (IoTranslateBusAddress.c)
 *     PiGetRelatedDevice @ 0x1406C91E8 (PiGetRelatedDevice.c)
 *     PipProcessDevNodeTree @ 0x1406CB690 (PipProcessDevNodeTree.c)
 *     PnpCheckForActiveDependencies @ 0x1406CBCBC (PnpCheckForActiveDependencies.c)
 *     PnpDeleteAllDependencyRelations @ 0x14078E45C (PnpDeleteAllDependencyRelations.c)
 *     PiControlGetPropertyData @ 0x140792750 (PiControlGetPropertyData.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140793124 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14079C174 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14079C210 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x14079C284 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14079C344 (PipProcessRebuildPowerRelationsQueue.c)
 *     IoGetLegacyVetoList @ 0x1407A88C0 (IoGetLegacyVetoList.c)
 *     PipForDeviceNodeSubtree @ 0x1407CD0F8 (PipForDeviceNodeSubtree.c)
 *     PiGetDeviceDepth @ 0x1407D5B90 (PiGetDeviceDepth.c)
 *     PpDevCfgProcessDevices @ 0x140810D14 (PpDevCfgProcessDevices.c)
 *     IopQueryInterfaceRecurseUp @ 0x1408287D0 (IopQueryInterfaceRecurseUp.c)
 *     IoReportDetectedDevice @ 0x140834DD0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140835270 (IoReportRootDevice.c)
 *     IoReserveDependency @ 0x140837CB0 (IoReserveDependency.c)
 *     PnpReleaseDependencyRelationsLock @ 0x140837E9C (PnpReleaseDependencyRelationsLock.c)
 *     PiQueryDeviceRelations @ 0x14084DDFC (PiQueryDeviceRelations.c)
 *     PiPagePathSetState @ 0x140853C48 (PiPagePathSetState.c)
 *     PnpRequestDeviceRemoval @ 0x1408673BC (PnpRequestDeviceRemoval.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140867478 (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140867E64 (PnpUnlinkDeviceRemovalRelations.c)
 *     IopSortRelationListForRemove @ 0x1408687B8 (IopSortRelationListForRemove.c)
 *     PnpProcessDependencyRelations @ 0x140868E4C (PnpProcessDependencyRelations.c)
 *     PiQueryPowerRelations @ 0x14086EB74 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x14086ED78 (PiQueryPowerDependencyRelations.c)
 *     PnpDelayedRemoveWorker @ 0x140881690 (PnpDelayedRemoveWorker.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140882AE8 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140883070 (PnpQueuePendingSurpriseRemoval.c)
 *     IoDuplicateDependency @ 0x140954170 (IoDuplicateDependency.c)
 *     IoSetDependency @ 0x1409542A0 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x140954968 (PnpGetDeviceDependencyList.c)
 *     IoLockUnlockPnpDeviceTree @ 0x140954C10 (IoLockUnlockPnpDeviceTree.c)
 *     PnpDiagRundownRegisterCallback @ 0x140957F70 (PnpDiagRundownRegisterCallback.c)
 *     PnpRestartDeviceNode @ 0x140958CBC (PnpRestartDeviceNode.c)
 *     PnpProcessCompletedEject @ 0x140958FF0 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x14095925C (PnpQueuePendingEject.c)
 *     PpResetProblemDevices @ 0x140959854 (PpResetProblemDevices.c)
 *     PipSetDevNodeStateFlags @ 0x140959A18 (PipSetDevNodeStateFlags.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x140963810 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMCreateDevice @ 0x140968430 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140968E48 (PiCMDeleteDevice.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x14096B9B0 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PiInitializeDevice @ 0x14096DAE4 (PiInitializeDevice.c)
 *     PnpIommuBlockUnblockDevice @ 0x14096EF58 (PnpIommuBlockUnblockDevice.c)
 *     IopWarmEjectDevice @ 0x14096F13C (IopWarmEjectDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     ExConvertExclusiveToSharedLite @ 0x1403476C0 (ExConvertExclusiveToSharedLite.c)
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
