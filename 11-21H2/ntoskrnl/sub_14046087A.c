/*
 * XREFs of sub_14046087A @ 0x14046087A
 * Callers:
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_140633B20 @ 0x140633B20 (sub_140633B20.c)
 *     sub_140634044 @ 0x140634044 (sub_140634044.c)
 *     sub_1406342C8 @ 0x1406342C8 (sub_1406342C8.c)
 *     sub_1407B4D70 @ 0x1407B4D70 (sub_1407B4D70.c)
 * Callees:
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_1406341F0 @ 0x1406341F0 (sub_1406341F0.c)
 */

PSLIST_ENTRY __fastcall sub_14046087A(PSLIST_ENTRY ListEntry, unsigned int **a2)
{
  PSLIST_ENTRY v3; // rdi
  PSLIST_ENTRY result; // rax
  _SLIST_HEADER *v5; // rsi
  _SLIST_ENTRY *Next; // rbx

  v3 = ListEntry;
  result = (PSLIST_ENTRY)(unsigned int)_InterlockedExchangeAdd(
                                         (volatile signed __int32 *)&ListEntry[1].Next + 2,
                                         0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    sub_1406341F0(*((_QWORD *)*a2 + 137), **a2, 6179LL, ListEntry);
    v5 = (_SLIST_HEADER *)(a2 + 2);
    do
    {
      Next = v3[1].Next;
      result = ExpInterlockedPushEntrySList(v5, v3);
      v3 = Next;
    }
    while ( Next );
  }
  return result;
}
