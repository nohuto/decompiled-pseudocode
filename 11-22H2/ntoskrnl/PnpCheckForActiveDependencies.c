/*
 * XREFs of PnpCheckForActiveDependencies @ 0x1406CBD6C
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406CB740 (PipProcessDevNodeTree.c)
 *     PiProcessQueryDeviceState @ 0x14079379C (PiProcessQueryDeviceState.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x14022B1A0 (PipIsDevNodeDNStarted.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1406C98DC (PipCheckForUnsatisfiedDependencies.c)
 *     PpDevNodeUnlockTree @ 0x1406C99AC (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406C9A08 (PnpAcquireDependencyRelationsLock.c)
 */

char __fastcall PnpCheckForActiveDependencies(__int64 a1, unsigned __int8 a2)
{
  char v5; // bl

  if ( (unsigned int)PipIsDevNodeDNStarted(a1) )
    return 0;
  PnpAcquireDependencyRelationsLock(0);
  v5 = PipCheckForUnsatisfiedDependencies(a1, a2);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
  return v5;
}
