/*
 * XREFs of sub_1405A57F0 @ 0x1405A57F0
 * Callers:
 *     sub_140268FB4 @ 0x140268FB4 (sub_140268FB4.c)
 * Callees:
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     ExpInterlockedFlushSList @ 0x140429900 (ExpInterlockedFlushSList.c)
 *     sub_1405A50AC @ 0x1405A50AC (sub_1405A50AC.c)
 *     sub_1405A5628 @ 0x1405A5628 (sub_1405A5628.c)
 */

PSLIST_ENTRY __fastcall sub_1405A57F0(PSLIST_HEADER ListHead)
{
  PSLIST_ENTRY result; // rax
  _SLIST_ENTRY *v3; // rbx
  _SLIST_ENTRY *v4; // rsi
  int v5; // [rsp+30h] [rbp+8h] BYREF
  _SLIST_HEADER *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v5 = 0;
  result = ExpInterlockedFlushSList(ListHead);
  v3 = result;
  while ( v3 )
  {
    v4 = v3;
    v3 = v3->Next;
    if ( (unsigned int)sub_1405A5628(
                         (((unsigned __int64)v4[1].Next >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                         (((unsigned __int64)v4[1].Next >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL,
                         (__int64)&v6,
                         &v5) )
      result = sub_1405A50AC(v6, v4, 1);
    else
      result = ExpInterlockedPushEntrySList(ListHead, v4);
  }
  return result;
}
