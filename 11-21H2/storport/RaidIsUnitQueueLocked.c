/*
 * XREFs of RaidIsUnitQueueLocked @ 0x1C001596C
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C0087C34 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidIsUnitQueueLocked(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 693);
}
