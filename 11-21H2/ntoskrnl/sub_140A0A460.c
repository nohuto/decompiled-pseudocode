/*
 * XREFs of sub_140A0A460 @ 0x140A0A460
 * Callers:
 *     sub_140646C90 @ 0x140646C90 (sub_140646C90.c)
 * Callees:
 *     ExInterlockedPushEntryList @ 0x14063F2E0 (ExInterlockedPushEntryList.c)
 */

PSINGLE_LIST_ENTRY __fastcall sub_140A0A460(PSINGLE_LIST_ENTRY ListEntry)
{
  PSINGLE_LIST_ENTRY result; // rax

  result = ExInterlockedPushEntryList(&stru_140C0E980, ListEntry, &qword_140C0E988);
  _InterlockedIncrement(&dword_140C0E990);
  return result;
}
