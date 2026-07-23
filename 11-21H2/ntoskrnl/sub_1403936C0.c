/*
 * XREFs of sub_1403936C0 @ 0x1403936C0
 * Callers:
 *     sub_140321F70 @ 0x140321F70 (sub_140321F70.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     sub_140594F80 @ 0x140594F80 (sub_140594F80.c)
 *     sub_1405B4BA8 @ 0x1405B4BA8 (sub_1405B4BA8.c)
 * Callees:
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 */

unsigned __int64 __fastcall sub_1403936C0(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFLL;
      sub_140268408(a1);
      result = 0x3FFFFFFFFFLL;
      if ( v1 == 0x3FFFFFFFFFLL )
        break;
      result = 0xFFFFDE0000000000uLL;
      a1 = 48 * v1 - 0x220000000000LL;
    }
    while ( 48 * v1 != 0x220000000000LL );
  }
  return result;
}
