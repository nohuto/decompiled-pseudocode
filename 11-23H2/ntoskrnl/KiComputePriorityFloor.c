/*
 * XREFs of KiComputePriorityFloor @ 0x1402B0E3C
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14023A2D0 (KiDeferredReadySingleThread.c)
 *     KeYieldExecution @ 0x1402469F0 (KeYieldExecution.c)
 *     KiDirectSwitchThread @ 0x1402B18A0 (KiDirectSwitchThread.c)
 *     KiRemoveBoostThread @ 0x1402BB250 (KiRemoveBoostThread.c)
 *     KiUpdateVPBackingThreadPriority @ 0x14034E2D8 (KiUpdateVPBackingThreadPriority.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14056E69C (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
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
