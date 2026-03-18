/*
 * XREFs of VfPacketFindAndLock @ 0x140ADD11C
 * Callers:
 *     ViSetIoBuildRequestFlag @ 0x1405D1F30 (ViSetIoBuildRequestFlag.c)
 * Callees:
 *     VfIrpDatabaseEntryFindAndLock @ 0x140AE1798 (VfIrpDatabaseEntryFindAndLock.c)
 */

__int64 __fastcall VfPacketFindAndLock(__int64 a1)
{
  return VfIrpDatabaseEntryFindAndLock(a1);
}
