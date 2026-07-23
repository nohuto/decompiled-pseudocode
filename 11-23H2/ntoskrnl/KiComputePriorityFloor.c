/*
 * XREFs of KiComputePriorityFloor @ 0x1402B10CC
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KeYieldExecution @ 0x140246AC0 (KeYieldExecution.c)
 *     KiDirectSwitchThread @ 0x1402B1B30 (KiDirectSwitchThread.c)
 *     KiRemoveBoostThread @ 0x1402BB4E0 (KiRemoveBoostThread.c)
 *     KiUpdateVPBackingThreadPriority @ 0x14034E478 (KiUpdateVPBackingThreadPriority.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14056EBDC (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 * Callees:
 *     <none>
 */

char __fastcall KiComputePriorityFloor(__int64 a1, char a2)
{
  unsigned int v2; // eax
  char v3; // r9

  v2 = *(_DWORD *)(a1 + 856);
  v3 = a2;
  if ( v2 )
  {
    _BitScanReverse(&v2, v2);
    if ( a2 < (char)v2 )
      return v2;
  }
  return v3;
}
