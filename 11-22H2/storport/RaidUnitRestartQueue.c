/*
 * XREFs of RaidUnitRestartQueue @ 0x1C002205C
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C00A15D8 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     RaidRestartIoQueue @ 0x1C00194E0 (RaidRestartIoQueue.c)
 */

void __fastcall RaidUnitRestartQueue(__int64 a1, char a2)
{
  RaidRestartIoQueue(a1, a2);
}
