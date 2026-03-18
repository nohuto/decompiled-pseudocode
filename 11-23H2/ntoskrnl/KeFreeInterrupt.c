/*
 * XREFs of KeFreeInterrupt @ 0x14031F370
 * Callers:
 *     IoDisconnectInterrupt @ 0x14078E1D0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14078E760 (IopConnectInterrupt.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140428EF0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall KeFreeInterrupt(PSLIST_ENTRY ListEntry)
{
  return RtlpInterlockedPushEntrySList((PSLIST_HEADER)&ListEntry[18].Next[816], ListEntry);
}
