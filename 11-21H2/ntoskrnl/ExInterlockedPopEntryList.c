/*
 * XREFs of ExInterlockedPopEntryList @ 0x14063F290
 * Callers:
 *     <none>
 * Callees:
 *     sub_140243164 @ 0x140243164 (sub_140243164.c)
 *     sub_14024319C @ 0x14024319C (sub_14024319C.c)
 */

PSINGLE_LIST_ENTRY __stdcall ExInterlockedPopEntryList(PSINGLE_LIST_ENTRY ListHead, PKSPIN_LOCK Lock)
{
  char v4; // al
  _SINGLE_LIST_ENTRY *Next; // rbx

  v4 = sub_14024319C((volatile signed __int32 *)Lock);
  Next = ListHead->Next;
  if ( ListHead->Next )
    ListHead->Next = Next->Next;
  sub_140243164((volatile signed __int64 *)Lock, v4);
  return Next;
}
