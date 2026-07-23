/*
 * XREFs of sub_1403AEB30 @ 0x1403AEB30
 * Callers:
 *     IoDisconnectInterrupt @ 0x140816AA0 (IoDisconnectInterrupt.c)
 *     sub_140817258 @ 0x140817258 (sub_140817258.c)
 * Callees:
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall sub_1403AEB30(PSLIST_ENTRY ListEntry)
{
  return ExpInterlockedPushEntrySList((PSLIST_HEADER)&ListEntry[18].Next[816], ListEntry);
}
