/*
 * XREFs of IoLockUnlockPnpDeviceTree @ 0x140954E10
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x1405891E4 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x140984D94 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x14099FA54 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x1406C992C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406C99C0 (PpDevNodeLockTree.c)
 */

void __fastcall IoLockUnlockPnpDeviceTree(char a1)
{
  if ( a1 )
    PpDevNodeLockTree(0);
  else
    PpDevNodeUnlockTree(0);
}
