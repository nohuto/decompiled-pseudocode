/*
 * XREFs of ExInterlockedPushEntryList @ 0x14063F2E0
 * Callers:
 *     sub_140A0A460 @ 0x140A0A460 (sub_140A0A460.c)
 *     sub_140A0A490 @ 0x140A0A490 (sub_140A0A490.c)
 * Callees:
 *     sub_140243164 @ 0x140243164 (sub_140243164.c)
 *     sub_14024319C @ 0x14024319C (sub_14024319C.c)
 */

PSINGLE_LIST_ENTRY __stdcall ExInterlockedPushEntryList(
        PSINGLE_LIST_ENTRY ListHead,
        PSINGLE_LIST_ENTRY ListEntry,
        PKSPIN_LOCK Lock)
{
  char v6; // al
  _SINGLE_LIST_ENTRY *Next; // rbx

  v6 = sub_14024319C((volatile signed __int32 *)Lock);
  Next = ListHead->Next;
  ListEntry->Next = ListHead->Next;
  ListHead->Next = ListEntry;
  sub_140243164((volatile signed __int64 *)Lock, v6);
  return Next;
}
