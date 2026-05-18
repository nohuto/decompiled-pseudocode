/*
 * XREFs of sub_180024BE4 @ 0x180024BE4
 * Callers:
 *     sub_180025108 @ 0x180025108 (sub_180025108.c)
 *     sub_180027568 @ 0x180027568 (sub_180027568.c)
 *     sub_180027804 @ 0x180027804 (sub_180027804.c)
 *     sub_180027938 @ 0x180027938 (sub_180027938.c)
 * Callees:
 *     sub_18001DE1C @ 0x18001DE1C (sub_18001DE1C.c)
 */

__int64 __fastcall sub_180024BE4(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_18001DE1C(v3, a2);
      v3 += 64LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
