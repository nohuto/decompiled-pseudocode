/*
 * XREFs of UserIsUserCritSecIn @ 0x1C0090AB0
 * Callers:
 *     DrvIsNotUsingGraphicsDevice @ 0x1C0090610 (DrvIsNotUsingGraphicsDevice.c)
 *     DrvNotifySessionStateChange @ 0x1C0090680 (DrvNotifySessionStateChange.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C0090A74 (CheckOrAcquireDwmStateLock.c)
 *     GreGetDCPoint @ 0x1C00AB470 (GreGetDCPoint.c)
 *     DrvSessionHasAnyGraphicsDevice @ 0x1C00D4370 (DrvSessionHasAnyGraphicsDevice.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1C01737C4 (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C017511C (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     <none>
 */

__int64 UserIsUserCritSecIn()
{
  ULONG IsResourceAcquiredSharedLite; // eax
  unsigned int v1; // ecx

  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) == 1 )
    return 1;
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(gpresUser);
  v1 = 0;
  if ( IsResourceAcquiredSharedLite )
    return 1;
  return v1;
}
