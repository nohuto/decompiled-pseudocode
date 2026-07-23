/*
 * XREFs of VfPacketReleaseLock @ 0x140ADD178
 * Callers:
 *     ViSetIoBuildRequestFlag @ 0x1405D24A0 (ViSetIoBuildRequestFlag.c)
 * Callees:
 *     VfIrpDatabaseEntryReleaseLock @ 0x140AE190C (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall VfPacketReleaseLock(__int64 a1)
{
  return VfIrpDatabaseEntryReleaseLock(a1);
}
