/*
 * XREFs of PnpCheckForActiveDependencies @ 0x1406CBCEC
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406CB6C0 (PipProcessDevNodeTree.c)
 *     PiProcessQueryDeviceState @ 0x14079347C (PiProcessQueryDeviceState.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x14022B290 (PipIsDevNodeDNStarted.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1406C985C (PipCheckForUnsatisfiedDependencies.c)
 *     PpDevNodeUnlockTree @ 0x1406C992C (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406C9988 (PnpAcquireDependencyRelationsLock.c)
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
