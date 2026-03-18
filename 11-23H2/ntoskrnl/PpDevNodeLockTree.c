/*
 * XREFs of PpDevNodeLockTree @ 0x1406C9990
 * Callers:
 *     PnpDeviceActionWorker @ 0x140359430 (PnpDeviceActionWorker.c)
 *     PnpLockDeviceActionQueue @ 0x1403C3E9C (PnpLockDeviceActionQueue.c)
 *     IoTranslateBusAddress @ 0x140560360 (IoTranslateBusAddress.c)
 *     PiGetRelatedDevice @ 0x1406C91E8 (PiGetRelatedDevice.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406C9958 (PnpAcquireDependencyRelationsLock.c)
 *     PipProcessDevNodeTree @ 0x1406CB690 (PipProcessDevNodeTree.c)
 *     PiControlGetPropertyData @ 0x140792750 (PiControlGetPropertyData.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140793124 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     IoGetLegacyVetoList @ 0x1407A88C0 (IoGetLegacyVetoList.c)
 *     PipForDeviceNodeSubtree @ 0x1407CD0F8 (PipForDeviceNodeSubtree.c)
 *     PiGetDeviceDepth @ 0x1407D5B90 (PiGetDeviceDepth.c)
 *     PpDevCfgProcessDevices @ 0x140810D14 (PpDevCfgProcessDevices.c)
 *     IopQueryInterfaceRecurseUp @ 0x1408287D0 (IopQueryInterfaceRecurseUp.c)
 *     IoReportDetectedDevice @ 0x140834DD0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140835270 (IoReportRootDevice.c)
 *     PiQueryDeviceRelations @ 0x14084DDFC (PiQueryDeviceRelations.c)
 *     PiPagePathSetState @ 0x140853C48 (PiPagePathSetState.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140867478 (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140867E64 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiQueryPowerRelations @ 0x14086EB74 (PiQueryPowerRelations.c)
 *     PnpDelayedRemoveWorker @ 0x140881690 (PnpDelayedRemoveWorker.c)
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
 *     ExAcquireResourceExclusiveLite @ 0x1402390E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D680 (ExAcquireResourceSharedLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402A07F0 (ExIsResourceAcquiredSharedLite.c)
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
