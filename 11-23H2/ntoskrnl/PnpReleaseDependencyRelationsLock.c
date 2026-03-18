/*
 * XREFs of PnpReleaseDependencyRelationsLock @ 0x140837E9C
 * Callers:
 *     IoResolveDependency @ 0x140398140 (IoResolveDependency.c)
 *     PiDeviceDependencyInit @ 0x140B3FA54 (PiDeviceDependencyInit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x1406C98FC (PpDevNodeUnlockTree.c)
 */

void PnpReleaseDependencyRelationsLock()
{
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
