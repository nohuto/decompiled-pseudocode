/*
 * XREFs of WheapPushPendingOfflineWrapper @ 0x140A0A460
 * Callers:
 *     WheapProcessOfflineList @ 0x140646C90 (WheapProcessOfflineList.c)
 * Callees:
 *     ExInterlockedPushEntryList @ 0x14063F2E0 (ExInterlockedPushEntryList.c)
 */

PSINGLE_LIST_ENTRY __fastcall WheapPushPendingOfflineWrapper(PSINGLE_LIST_ENTRY ListEntry)
{
  PSINGLE_LIST_ENTRY result; // rax

  result = ExInterlockedPushEntryList((PSINGLE_LIST_ENTRY)&WheapOfflineChecker, ListEntry, &qword_140C0E988);
  _InterlockedIncrement(&dword_140C0E990);
  return result;
}
