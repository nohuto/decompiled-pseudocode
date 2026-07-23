/*
 * XREFs of VfPacketFindAndLock @ 0x140ADD10C
 * Callers:
 *     ViSetIoBuildRequestFlag @ 0x1405D24A0 (ViSetIoBuildRequestFlag.c)
 * Callees:
 *     VfIrpDatabaseEntryFindAndLock @ 0x140AE1788 (VfIrpDatabaseEntryFindAndLock.c)
 */

__int64 __fastcall VfPacketFindAndLock(__int64 a1)
{
  return VfIrpDatabaseEntryFindAndLock(a1);
}
