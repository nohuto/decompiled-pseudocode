/*
 * XREFs of sub_1403B72B4 @ 0x1403B72B4
 * Callers:
 *     sub_1403D981C @ 0x1403D981C (sub_1403D981C.c)
 *     sub_140AF4DB0 @ 0x140AF4DB0 (sub_140AF4DB0.c)
 * Callees:
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall sub_1403B72B4(_SLIST_HEADER *a1, _SLIST_ENTRY *a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  _SLIST_ENTRY *v4; // rbx
  _SLIST_HEADER *v5; // rdi
  PSLIST_ENTRY result; // rax

  v3 = (unsigned __int64)a2 + a3;
  v4 = a2;
  if ( a2 < (_SLIST_ENTRY *)((char *)a2 + a3) )
  {
    v5 = a1 + 28;
    do
    {
      result = ExpInterlockedPushEntrySList(v5, v4);
      v4 += 2;
    }
    while ( (unsigned __int64)v4 < v3 );
  }
  return result;
}
