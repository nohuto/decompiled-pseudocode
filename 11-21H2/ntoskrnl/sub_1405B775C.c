/*
 * XREFs of sub_1405B775C @ 0x1405B775C
 * Callers:
 *     sub_1405B7B38 @ 0x1405B7B38 (sub_1405B7B38.c)
 * Callees:
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY sub_1405B775C()
{
  PSLIST_ENTRY result; // rax
  PSLIST_ENTRY v1; // rdx
  signed __int32 v2; // eax
  signed __int32 v3; // ett

  result = ExpInterlockedPopEntrySList(&stru_140C52E60);
  v1 = result;
  if ( result )
  {
    HIDWORD(result->Next) = 0;
    LODWORD(result->Next) = 1;
  }
  else
  {
    v2 = dword_140C52E70;
    while ( v2 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange(&dword_140C52E70, v2 - 1, v2);
      if ( v3 == v2 )
        return v1;
    }
    return (PSLIST_ENTRY)-1LL;
  }
  return result;
}
