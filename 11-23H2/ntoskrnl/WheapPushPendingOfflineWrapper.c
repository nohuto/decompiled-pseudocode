/*
 * XREFs of WheapPushPendingOfflineWrapper @ 0x140A09E88
 * Callers:
 *     WheapProcessOfflineList @ 0x1406149C0 (WheapProcessOfflineList.c)
 * Callees:
 *     ExInterlockedPushEntryList @ 0x14060D070 (ExInterlockedPushEntryList.c)
 */

PSINGLE_LIST_ENTRY __fastcall WheapPushPendingOfflineWrapper(PSINGLE_LIST_ENTRY ListEntry)
{
  PSINGLE_LIST_ENTRY result; // rax

  result = ExInterlockedPushEntryList((PSINGLE_LIST_ENTRY)&WheapOfflineChecker, ListEntry, &qword_140C2A8E8);
  _InterlockedIncrement(&dword_140C2A8F0);
  return result;
}
