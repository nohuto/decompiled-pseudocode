/*
 * XREFs of RaUnitStopDeviceIrp @ 0x1C00A97D8
 * Callers:
 *     RaUnitPnpIrp @ 0x1C00076A0 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidLockDeviceQueue @ 0x1C0040380 (RaidLockDeviceQueue.c)
 */

__int64 __fastcall RaUnitStopDeviceIrp(__int64 a1, IRP *a2)
{
  *(_DWORD *)(a1 + 48) = 2;
  RaidLockDeviceQueue(a1 + 656);
  return RaidCompleteRequestEx(a2, 0, 0);
}
