/*
 * XREFs of PnpCheckForActiveDependencies @ 0x1406CBCBC
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406CB690 (PipProcessDevNodeTree.c)
 *     PiProcessQueryDeviceState @ 0x14079328C (PiProcessQueryDeviceState.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x14022B180 (PipIsDevNodeDNStarted.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1406C982C (PipCheckForUnsatisfiedDependencies.c)
 *     PpDevNodeUnlockTree @ 0x1406C98FC (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406C9958 (PnpAcquireDependencyRelationsLock.c)
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
