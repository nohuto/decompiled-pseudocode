/*
 * XREFs of PnpReleaseDependencyRelationsLock @ 0x14084428C
 * Callers:
 *     IoResolveDependency @ 0x1403CBF80 (IoResolveDependency.c)
 *     PiDeviceDependencyInit @ 0x140B1ADD8 (PiDeviceDependencyInit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 */

void PnpReleaseDependencyRelationsLock()
{
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
