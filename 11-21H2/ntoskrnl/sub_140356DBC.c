/*
 * XREFs of sub_140356DBC @ 0x140356DBC
 * Callers:
 *     sub_140355EE8 @ 0x140355EE8 (sub_140355EE8.c)
 *     sub_140356698 @ 0x140356698 (sub_140356698.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140356DBC(__int64 a1, unsigned int a2, int a3)
{
  int **i; // rcx
  int v5; // r8d

  if ( (int)a2 > a3 )
  {
    return 6;
  }
  else
  {
    for ( i = (int **)(a1 + 8LL * (int)a2); ; ++i )
    {
      v5 = **i;
      if ( (v5 & 2) != 0 || (v5 & 8) != 0 )
        break;
      if ( (int)++a2 > a3 )
        return 6;
    }
  }
  return a2;
}
