/*
 * XREFs of sub_140460ED0 @ 0x140460ED0
 * Callers:
 *     sub_140460D60 @ 0x140460D60 (sub_140460D60.c)
 *     sub_1406366B8 @ 0x1406366B8 (sub_1406366B8.c)
 * Callees:
 *     InterlockedPushListSList @ 0x140429930 (InterlockedPushListSList.c)
 */

PSLIST_ENTRY __fastcall sub_140460ED0(_SLIST_HEADER *a1, _SLIST_ENTRY *a2, ULONG *a3)
{
  _SLIST_ENTRY *Next; // r9
  ULONG v5; // ebx
  _SLIST_ENTRY *i; // r8
  PSLIST_ENTRY result; // rax

  Next = a2->Next;
  v5 = 1;
  for ( i = a2; Next; Next = Next->Next )
  {
    ++v5;
    i = Next;
  }
  result = InterlockedPushListSList(a1, a2, i, v5);
  *a3 = v5;
  return result;
}
