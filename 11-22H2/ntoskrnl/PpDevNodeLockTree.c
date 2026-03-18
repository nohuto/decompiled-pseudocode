/*
 * XREFs of PpDevNodeLockTree @ 0x1406C9A40
 * Callers:
 *     PnpDeviceActionWorker @ 0x140358E30 (PnpDeviceActionWorker.c)
 *     PnpLockDeviceActionQueue @ 0x1403C383C (PnpLockDeviceActionQueue.c)
 *     IoTranslateBusAddress @ 0x140560400 (IoTranslateBusAddress.c)
 *     PiGetRelatedDevice @ 0x1406C9298 (PiGetRelatedDevice.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406C9A08 (PnpAcquireDependencyRelationsLock.c)
 *     PipProcessDevNodeTree @ 0x1406CB740 (PipProcessDevNodeTree.c)
 *     PiControlGetPropertyData @ 0x140792C60 (PiControlGetPropertyData.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140793634 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     IoGetLegacyVetoList @ 0x1407A8E70 (IoGetLegacyVetoList.c)
 *     PipForDeviceNodeSubtree @ 0x1407CD688 (PipForDeviceNodeSubtree.c)
 *     PiGetDeviceDepth @ 0x1407D6110 (PiGetDeviceDepth.c)
 *     PpDevCfgProcessDevices @ 0x140813294 (PpDevCfgProcessDevices.c)
 *     IopQueryInterfaceRecurseUp @ 0x14082A320 (IopQueryInterfaceRecurseUp.c)
 *     IoReportDetectedDevice @ 0x140836920 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140836DC0 (IoReportRootDevice.c)
 *     PiQueryDeviceRelations @ 0x14084EC7C (PiQueryDeviceRelations.c)
 *     PiPagePathSetState @ 0x140854B58 (PiPagePathSetState.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140867948 (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140868334 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiQueryPowerRelations @ 0x14086F044 (PiQueryPowerRelations.c)
 *     PnpDelayedRemoveWorker @ 0x140881B60 (PnpDelayedRemoveWorker.c)
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
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D660 (ExAcquireResourceSharedLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402A06D0 (ExIsResourceAcquiredSharedLite.c)
 */

char __fastcall PpDevNodeLockTree(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // bl
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  ULONG IsResourceAcquiredSharedLite; // edi
  ULONG v8; // esi

  CurrentThread = KeGetCurrentThread();
  v2 = 1;
  --CurrentThread->KernelApcDisable;
  if ( !a1 )
    goto LABEL_2;
  v4 = a1 - 1;
  if ( !v4 )
  {
    ExAcquireResourceExclusiveLite(&PiEngineLock, 1u);
LABEL_2:
    ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
    return v2;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    if ( !ExAcquireResourceExclusiveLite(&PiEngineLock, 0) )
    {
      v2 = 0;
      KeLeaveCriticalRegion();
      return v2;
    }
    goto LABEL_2;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(&IopDeviceTreeLock);
      v8 = IsResourceAcquiredSharedLite;
      if ( IsResourceAcquiredSharedLite )
      {
        do
        {
          ExReleaseResourceLite(&IopDeviceTreeLock);
          --v8;
        }
        while ( v8 );
        do
        {
          ExAcquireResourceExclusiveLite(&IopDeviceTreeLock, 1u);
          --IsResourceAcquiredSharedLite;
        }
        while ( IsResourceAcquiredSharedLite );
      }
    }
  }
  else
  {
    ExAcquireResourceExclusiveLite(&PiEngineLock, 1u);
    ExAcquireResourceExclusiveLite(&IopDeviceTreeLock, 1u);
  }
  return v2;
}
