/*
 * XREFs of sub_1402690B4 @ 0x1402690B4
 * Callers:
 *     sub_140268FB4 @ 0x140268FB4 (sub_140268FB4.c)
 *     sub_1405A54BC @ 0x1405A54BC (sub_1405A54BC.c)
 * Callees:
 *     sub_140269118 @ 0x140269118 (sub_140269118.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     sub_1405A50AC @ 0x1405A50AC (sub_1405A50AC.c)
 */

__int64 __fastcall sub_1402690B4(__int64 a1, _SLIST_HEADER *a2, unsigned int a3, int a4)
{
  __int64 result; // rax
  PSLIST_ENTRY v9; // rax

  while ( 1 )
  {
    result = LOWORD(a2->Alignment);
    if ( (unsigned int)result <= a3 )
      break;
    v9 = ExpInterlockedPopEntrySList(a2);
    if ( v9 )
    {
      if ( a4 )
        sub_1405A50AC(a1, v9, 1LL);
      else
        sub_140269118(v9);
    }
  }
  return result;
}
