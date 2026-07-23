/*
 * XREFs of PnpRequestDeviceRemoval @ 0x1408675FC
 * Callers:
 *     PipCallDriverAddDevice @ 0x1406C8264 (PipCallDriverAddDevice.c)
 *     PipProcessStartPhase2 @ 0x140791088 (PipProcessStartPhase2.c)
 *     PiUpdateGuestAssignedState @ 0x1407927B8 (PiUpdateGuestAssignedState.c)
 *     PiProcessQueryDeviceState @ 0x14079347C (PiProcessQueryDeviceState.c)
 *     PipEnumerateCompleted @ 0x1407955F0 (PipEnumerateCompleted.c)
 *     IopQueueDeviceResetEvent @ 0x1409577EC (IopQueueDeviceResetEvent.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x140963950 (PiProfileUpdateDeviceTreeCallback.c)
 *     PipDmaGuardBlockAddDevice @ 0x14096B34C (PipDmaGuardBlockAddDevice.c)
 *     PnpReallocateResources @ 0x14096D748 (PnpReallocateResources.c)
 *     PnpRebalance @ 0x14096EAB8 (PnpRebalance.c)
 *     PipProcessRestartPhase2 @ 0x14096F608 (PipProcessRestartPhase2.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x14096F708 (PiProcessDriversLoadedOnSecureDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x1406C992C (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406C9988 (PnpAcquireDependencyRelationsLock.c)
 *     PnpSetTargetDeviceRemove @ 0x140867E90 (PnpSetTargetDeviceRemove.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1408691E0 (PnpRequestDeviceRemovalWorker.c)
 */

__int64 __fastcall PnpRequestDeviceRemoval(__int64 a1, char a2, int a3, int a4)
{
  int v8; // r8d
  int v10; // [rsp+40h] [rbp-38h]
  int v11; // [rsp+48h] [rbp-30h]

  if ( !a1 )
    return 3221225486LL;
  PnpAcquireDependencyRelationsLock(1);
  LOBYTE(v8) = a2;
  PnpRequestDeviceRemovalWorker(a1, a1, v8, 2, 0);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
  return PnpSetTargetDeviceRemove(*(PVOID *)(a1 + 32), 1, a3, a4, 0LL, v10, v11, 0LL, 0LL, 0LL, 0LL);
}
