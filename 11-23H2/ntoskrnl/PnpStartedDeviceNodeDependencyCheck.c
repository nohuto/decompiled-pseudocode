/*
 * XREFs of PnpStartedDeviceNodeDependencyCheck @ 0x14079C174
 * Callers:
 *     PipProcessStartPhase3 @ 0x14079B9C4 (PipProcessStartPhase3.c)
 *     PnpCancelRemoveLockedDeviceNode @ 0x140958F3C (PnpCancelRemoveLockedDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x14096F408 (PipProcessRestartPhase2.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x1406C98FC (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406C9958 (PnpAcquireDependencyRelationsLock.c)
 *     PipAttemptDependentsStart @ 0x14079C1AC (PipAttemptDependentsStart.c)
 */

void __fastcall PnpStartedDeviceNodeDependencyCheck(__int64 a1)
{
  PnpAcquireDependencyRelationsLock(0);
  PipAttemptDependentsStart(a1);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
