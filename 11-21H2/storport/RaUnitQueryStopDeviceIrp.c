/*
 * XREFs of RaUnitQueryStopDeviceIrp @ 0x1C008F05C
 * Callers:
 *     RaUnitPnpIrp @ 0x1C000CA00 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitQueryStopDeviceIrp(__int64 a1, IRP *a2)
{
  *(_DWORD *)(a1 + 48) = 3;
  return RaidCompleteRequestEx(a2, 0, *(_DWORD *)(a1 + 916) != 0 ? 0x80000011 : 0);
}
