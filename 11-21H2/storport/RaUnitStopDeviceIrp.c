/*
 * XREFs of RaUnitStopDeviceIrp @ 0x1C008F094
 * Callers:
 *     RaUnitPnpIrp @ 0x1C000CA00 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitStopDeviceIrp(__int64 a1, IRP *a2)
{
  *(_DWORD *)(a1 + 48) = 2;
  *(_BYTE *)(a1 + 693) = 1;
  return RaidCompleteRequestEx(a2, 0, 0);
}
