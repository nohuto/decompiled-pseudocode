/*
 * XREFs of sub_1406317F4 @ 0x1406317F4
 * Callers:
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 * Callees:
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall sub_1406317F4(__int64 a1)
{
  return ExpInterlockedPushEntrySList(&stru_140C5A6B0, (PSLIST_ENTRY)(a1 - 16));
}
