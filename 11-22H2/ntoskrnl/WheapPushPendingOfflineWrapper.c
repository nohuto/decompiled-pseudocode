/*
 * XREFs of WheapPushPendingOfflineWrapper @ 0x140A09C88
 * Callers:
 *     WheapProcessOfflineList @ 0x1406144E0 (WheapProcessOfflineList.c)
 * Callees:
 *     ExInterlockedPushEntryList @ 0x14060CB90 (ExInterlockedPushEntryList.c)
 */

PSINGLE_LIST_ENTRY __fastcall WheapPushPendingOfflineWrapper(PSINGLE_LIST_ENTRY ListEntry)
{
  PSINGLE_LIST_ENTRY result; // rax

  result = ExInterlockedPushEntryList((PSINGLE_LIST_ENTRY)&WheapOfflineChecker, ListEntry, &qword_140C2A928);
  _InterlockedIncrement(&dword_140C2A930);
  return result;
}
