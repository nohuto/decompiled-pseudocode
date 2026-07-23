/*
 * XREFs of PpDevNodeLockTree @ 0x1406C99C0
 * Callers:
 *     PnpDeviceActionWorker @ 0x1403595D0 (PnpDeviceActionWorker.c)
 *     PnpLockDeviceActionQueue @ 0x1403C407C (PnpLockDeviceActionQueue.c)
 *     IoTranslateBusAddress @ 0x140560A20 (IoTranslateBusAddress.c)
 *     PiGetRelatedDevice @ 0x1406C9218 (PiGetRelatedDevice.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406C9988 (PnpAcquireDependencyRelationsLock.c)
 *     PipProcessDevNodeTree @ 0x1406CB6C0 (PipProcessDevNodeTree.c)
 *     PiControlGetPropertyData @ 0x140792940 (PiControlGetPropertyData.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140793314 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     IoGetLegacyVetoList @ 0x1407A8AB0 (IoGetLegacyVetoList.c)
 *     PipForDeviceNodeSubtree @ 0x1407CD3C8 (PipForDeviceNodeSubtree.c)
 *     PiGetDeviceDepth @ 0x1407D5E60 (PiGetDeviceDepth.c)
 *     PpDevCfgProcessDevices @ 0x140810FE4 (PpDevCfgProcessDevices.c)
 *     IopQueryInterfaceRecurseUp @ 0x140828AD0 (IopQueryInterfaceRecurseUp.c)
 *     IoReportDetectedDevice @ 0x1408350D0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140835570 (IoReportRootDevice.c)
 *     PiQueryDeviceRelations @ 0x14084E0FC (PiQueryDeviceRelations.c)
 *     PiPagePathSetState @ 0x140853F48 (PiPagePathSetState.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1408676B8 (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1408680A4 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiQueryPowerRelations @ 0x14086EDB4 (PiQueryPowerRelations.c)
 *     PnpDelayedRemoveWorker @ 0x1408818D0 (PnpDelayedRemoveWorker.c)
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
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402A0A80 (ExIsResourceAcquiredSharedLite.c)
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
