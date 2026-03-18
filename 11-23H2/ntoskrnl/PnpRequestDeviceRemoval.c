/*
 * XREFs of PnpRequestDeviceRemoval @ 0x1408673BC
 * Callers:
 *     PipCallDriverAddDevice @ 0x1406C8234 (PipCallDriverAddDevice.c)
 *     PipProcessStartPhase2 @ 0x140790E98 (PipProcessStartPhase2.c)
 *     PiUpdateGuestAssignedState @ 0x1407925C8 (PiUpdateGuestAssignedState.c)
 *     PiProcessQueryDeviceState @ 0x14079328C (PiProcessQueryDeviceState.c)
 *     PipEnumerateCompleted @ 0x140795400 (PipEnumerateCompleted.c)
 *     IopQueueDeviceResetEvent @ 0x1409575EC (IopQueueDeviceResetEvent.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x140963750 (PiProfileUpdateDeviceTreeCallback.c)
 *     PipDmaGuardBlockAddDevice @ 0x14096B14C (PipDmaGuardBlockAddDevice.c)
 *     PnpReallocateResources @ 0x14096D548 (PnpReallocateResources.c)
 *     PnpRebalance @ 0x14096E8B8 (PnpRebalance.c)
 *     PipProcessRestartPhase2 @ 0x14096F408 (PipProcessRestartPhase2.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x14096F508 (PiProcessDriversLoadedOnSecureDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x1406C98FC (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406C9958 (PnpAcquireDependencyRelationsLock.c)
 *     PnpSetTargetDeviceRemove @ 0x140867C50 (PnpSetTargetDeviceRemove.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140868FA0 (PnpRequestDeviceRemovalWorker.c)
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
