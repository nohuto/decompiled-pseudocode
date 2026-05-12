/*
 * XREFs of RaidUnitRestartQueue @ 0x1C0020478
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C0087C34 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     RaidRestartIoQueue @ 0x1C0009220 (RaidRestartIoQueue.c)
 */

void __fastcall RaidUnitRestartQueue(__int64 a1, char a2)
{
  RaidRestartIoQueue(a1, a2);
}
