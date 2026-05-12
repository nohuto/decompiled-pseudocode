/*
 * XREFs of RaUnitCancelStopDeviceIrp @ 0x1C00A9724
 * Callers:
 *     RaUnitPnpIrp @ 0x1C00076A0 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidUnitConvertToNormalUnit @ 0x1C0022014 (RaidUnitConvertToNormalUnit.c)
 */

__int64 __fastcall RaUnitCancelStopDeviceIrp(__int64 a1, IRP *a2)
{
  *(_DWORD *)(a1 + 48) = 1;
  RaidUnitConvertToNormalUnit(a1);
  return RaidCompleteRequestEx(a2, 0, 0);
}
