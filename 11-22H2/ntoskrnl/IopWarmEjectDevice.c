/*
 * XREFs of IopWarmEjectDevice @ 0x14096F1EC
 * Callers:
 *     PnpProcessCompletedEject @ 0x1409590A0 (PnpProcessCompletedEject.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     PpDevNodeUnlockTree @ 0x1406C99AC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406C9A40 (PpDevNodeLockTree.c)
 *     PnpSetPowerVetoEvent @ 0x1409649B0 (PnpSetPowerVetoEvent.c)
 *     NtInitiatePowerAction @ 0x14098B410 (NtInitiatePowerAction.c)
 */

__int64 __fastcall IopWarmEjectDevice(_QWORD *a1, SYSTEM_POWER_STATE a2)
{
  __int64 v4; // rdx
  NTSTATUS v5; // ebx
  __int64 v6; // r8

  KeWaitForSingleObject(&IopWarmEjectLock, Executive, 0, 0, 0LL);
  PpDevNodeLockTree(1);
  IopWarmEjectPdo = (__int64)a1;
  PpDevNodeUnlockTree(1);
  v5 = NtInitiatePowerAction(PowerActionWarmEject, a2, 3u, 0);
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
