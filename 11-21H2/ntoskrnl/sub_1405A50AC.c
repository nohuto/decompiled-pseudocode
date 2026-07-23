/*
 * XREFs of sub_1405A50AC @ 0x1405A50AC
 * Callers:
 *     sub_140268E74 @ 0x140268E74 (sub_140268E74.c)
 *     sub_1402690B4 @ 0x1402690B4 (sub_1402690B4.c)
 *     sub_1405A54BC @ 0x1405A54BC (sub_1405A54BC.c)
 *     sub_1405A57F0 @ 0x1405A57F0 (sub_1405A57F0.c)
 * Callees:
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_1405A511C @ 0x1405A511C (sub_1405A511C.c)
 */

PSLIST_ENTRY __fastcall sub_1405A50AC(_SLIST_HEADER *a1, _SLIST_ENTRY *a2, int a3)
{
  PSLIST_ENTRY result; // rax

  result = (PSLIST_ENTRY)sub_1405A511C((((unsigned __int64)a2[1].Next >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL);
  if ( a3 )
    return ExpInterlockedPushEntrySList(a1 + 28, a2);
  return result;
}
