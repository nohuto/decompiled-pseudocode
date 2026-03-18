/*
 * XREFs of IoLockUnlockPnpDeviceTree @ 0x140943144
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x1405CB06C (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x14098D024 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x14099F0A0 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14077572C (PpDevNodeLockTree.c)
 */

void __fastcall IoLockUnlockPnpDeviceTree(char a1)
{
  if ( a1 )
    PpDevNodeLockTree(0);
  else
    PpDevNodeUnlockTree(0);
}
