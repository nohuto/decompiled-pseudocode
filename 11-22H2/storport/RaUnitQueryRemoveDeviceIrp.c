/*
 * XREFs of RaUnitQueryRemoveDeviceIrp @ 0x1C00A9754
 * Callers:
 *     RaUnitPnpIrp @ 0x1C00076A0 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitQueryRemoveDeviceIrp(_DWORD *a1, IRP *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( a1[243] || a1[245] || a1[244] )
    v2 = -2147483631;
  else
    a1[12] = 4;
  return RaidCompleteRequestEx(a2, 0, v2);
}
