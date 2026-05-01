/*
 * XREFs of ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestFlags@@W4TestQueryOptions@@@Z @ 0x180086408
 * Callers:
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x1800863BC (-complete_without_lock@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?MitigateSpartanSubDomains@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1801EDB50 (-MitigateSpartanSubDomains@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x180086434 (-complete_helper@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 */

__int64 __fastcall tip2::details::shared_data<0,0,0>::complete_helper(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 64) |= a2 | 0x300;
  if ( *(_QWORD *)(a1 + 232) )
    return tip2::details::shared_data<0,0,0>::complete_helper(a1, a3);
  return result;
}
