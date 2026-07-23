/*
 * XREFs of sub_1404617FE @ 0x1404617FE
 * Callers:
 *     sub_14041A410 @ 0x14041A410 (sub_14041A410.c)
 *     sub_140461038 @ 0x140461038 (sub_140461038.c)
 *     sub_14062CE84 @ 0x14062CE84 (sub_14062CE84.c)
 * Callees:
 *     strnlen @ 0x1403E2F80 (strnlen.c)
 */

const char *__fastcall sub_1404617FE(__int64 a1, unsigned int a2, _WORD *a3)
{
  const char *v4; // rbx
  const char *v5; // rdi
  unsigned __int16 v6; // di
  __int16 v7; // ax

  *a3 = 0;
  if ( a2 >= 3 )
  {
    v4 = (const char *)(a1 + 2);
    v5 = (const char *)(a1 + a2);
    while ( v4 != v5 )
    {
      if ( *v4++ >= 0 )
      {
        if ( v4 == v5 )
          return 0LL;
        v6 = (_WORD)v5 - (_WORD)v4;
        if ( v4 )
          v7 = strnlen(v4, v6);
        else
          v7 = 0;
        *a3 = v7;
        if ( v7 == v6 )
        {
          *a3 = 0;
          return 0LL;
        }
        return v4;
      }
    }
  }
  return 0LL;
}
