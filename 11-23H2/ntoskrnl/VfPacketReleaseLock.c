/*
 * XREFs of VfPacketReleaseLock @ 0x140ADD188
 * Callers:
 *     ViSetIoBuildRequestFlag @ 0x1405D1F30 (ViSetIoBuildRequestFlag.c)
 * Callees:
 *     VfIrpDatabaseEntryReleaseLock @ 0x140AE191C (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall VfPacketReleaseLock(__int64 a1)
{
  return VfIrpDatabaseEntryReleaseLock(a1);
}
