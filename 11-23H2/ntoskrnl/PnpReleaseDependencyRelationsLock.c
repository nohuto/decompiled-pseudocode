/*
 * XREFs of PnpReleaseDependencyRelationsLock @ 0x14083819C
 * Callers:
 *     IoResolveDependency @ 0x140398320 (IoResolveDependency.c)
 *     PiDeviceDependencyInit @ 0x140B3FA54 (PiDeviceDependencyInit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x1406C992C (PpDevNodeUnlockTree.c)
 */

void PnpReleaseDependencyRelationsLock()
{
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
