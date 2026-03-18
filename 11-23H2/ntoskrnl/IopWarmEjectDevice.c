/*
 * XREFs of IopWarmEjectDevice @ 0x14096F13C
 * Callers:
 *     PnpProcessCompletedEject @ 0x140958FF0 (PnpProcessCompletedEject.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     PpDevNodeUnlockTree @ 0x1406C98FC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406C9990 (PpDevNodeLockTree.c)
 *     PnpSetPowerVetoEvent @ 0x140964900 (PnpSetPowerVetoEvent.c)
 *     NtInitiatePowerAction @ 0x14098B360 (NtInitiatePowerAction.c)
 */

__int64 __fastcall IopWarmEjectDevice(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // r8

  KeWaitForSingleObject(&IopWarmEjectLock, Executive, 0, 0, 0LL);
  PpDevNodeLockTree(1);
  IopWarmEjectPdo = (__int64)a1;
  PpDevNodeUnlockTree(1);
  v5 = NtInitiatePowerAction(7LL, a2, 3LL);
  if ( v5 == -1073741727 )
    PnpSetPowerVetoEvent(7, v4, v6, a1, 12, 0LL);
  PpDevNodeLockTree(1);
  if ( IopWarmEjectPdo )
  {
    if ( v5 >= 0 )
      v5 = -1073741823;
    IopWarmEjectPdo = 0LL;
  }
  PpDevNodeUnlockTree(1);
  KeSetEvent(&IopWarmEjectLock, 0, 0);
  return (unsigned int)v5;
}
