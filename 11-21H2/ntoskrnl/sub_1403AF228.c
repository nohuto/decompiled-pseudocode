/*
 * XREFs of sub_1403AF228 @ 0x1403AF228
 * Callers:
 *     sub_140817258 @ 0x140817258 (sub_140817258.c)
 * Callees:
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_140829AB0 @ 0x140829AB0 (sub_140829AB0.c)
 */

PSLIST_ENTRY __fastcall sub_1403AF228(_SLIST_HEADER *a1)
{
  _SLIST_HEADER *v1; // rbp
  unsigned int v3; // ebx
  PSLIST_ENTRY result; // rax
  unsigned int v5; // r14d
  _SLIST_ENTRY *v6; // rbx
  __int64 v7; // rsi

  v1 = a1 + 816;
  v3 = *(unsigned __int16 *)(a1[12].Alignment + 138);
  result = ExpInterlockedPopEntrySList(a1 + 816);
  if ( result )
  {
LABEL_2:
    result[18].Next = (_SLIST_ENTRY *)a1;
  }
  else
  {
    v5 = v3;
    while ( 1 )
    {
      result = (PSLIST_ENTRY)sub_140829AB0(4096LL, v5);
      v6 = result;
      if ( !result )
        break;
      v7 = 12LL;
      do
      {
        ExpInterlockedPushEntrySList(v1, v6);
        v6 += 20;
        --v7;
      }
      while ( v7 );
      result = ExpInterlockedPopEntrySList(v1);
      if ( result )
        goto LABEL_2;
    }
  }
  return result;
}
