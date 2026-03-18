/*
 * XREFs of PpResetProblemDevices @ 0x140959854
 * Callers:
 *     PpSystemHiveLimitCallback @ 0x140958580 (PpSystemHiveLimitCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     PpDevNodeUnlockTree @ 0x1406C98FC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406C9990 (PpDevNodeLockTree.c)
 *     PipForDeviceNodeSubtree @ 0x1407CD0F8 (PipForDeviceNodeSubtree.c)
 */

void PpResetProblemDevices()
{
  PVOID v0; // rbx
  _DWORD v1[4]; // [rsp+20h] [rbp-28h] BYREF

  v0 = IopRootDeviceNode;
  v1[1] = 0;
  v1[2] = 0;
  v1[0] = 49;
  PpDevNodeLockTree(1);
  PipForDeviceNodeSubtree((__int64)v0, (__int64)PiResetProblemDevicesWorker, (__int64)v1);
  PpDevNodeUnlockTree(1);
}
