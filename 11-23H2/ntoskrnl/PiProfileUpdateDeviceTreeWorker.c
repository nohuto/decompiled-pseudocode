/*
 * XREFs of PiProfileUpdateDeviceTreeWorker @ 0x140963A10
 * Callers:
 *     <none>
 * Callees:
 *     PpDevNodeUnlockTree @ 0x1406C992C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406C99C0 (PpDevNodeLockTree.c)
 *     PipForDeviceNodeSubtree @ 0x1407CD3C8 (PipForDeviceNodeSubtree.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PiProfileUpdateDeviceTreeWorker(PVOID P)
{
  PpDevNodeLockTree(1);
  PipForDeviceNodeSubtree((__int64)IopRootDeviceNode, (__int64)PiProfileUpdateDeviceTreeCallback, 0LL);
  PpDevNodeUnlockTree(1);
  ExFreePoolWithTag(P, 0);
}
