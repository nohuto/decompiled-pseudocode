/*
 * XREFs of sub_180081618 @ 0x180081618
 * Callers:
 *     sub_180081B70 @ 0x180081B70 (sub_180081B70.c)
 *     sub_180083A24 @ 0x180083A24 (sub_180083A24.c)
 *     sub_180083B60 @ 0x180083B60 (sub_180083B60.c)
 * Callees:
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 */

__int64 __fastcall sub_180081618(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180011B24(v3);
      v3 += 56LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
