/*
 * XREFs of sub_140A81A34 @ 0x140A81A34
 * Callers:
 *     sub_1406015D4 @ 0x1406015D4 (sub_1406015D4.c)
 *     sub_140601734 @ 0x140601734 (sub_140601734.c)
 *     sub_140A99F58 @ 0x140A99F58 (sub_140A99F58.c)
 *     sub_140A9A000 @ 0x140A9A000 (sub_140A9A000.c)
 *     sub_140AA5DA4 @ 0x140AA5DA4 (sub_140AA5DA4.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140A81A34(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned int v4; // r9d

  result = *a1;
  v4 = 0;
  if ( *a1 )
  {
    if ( a2 <= result )
    {
      if ( a3 >= a1[1] )
        return 1;
      if ( a2 < result )
      {
LABEL_6:
        if ( a3 <= result || a3 > a1[1] )
          return v4;
        return 1;
      }
    }
    if ( a2 >= a1[1] )
      goto LABEL_6;
    return 1;
  }
  return result;
}
