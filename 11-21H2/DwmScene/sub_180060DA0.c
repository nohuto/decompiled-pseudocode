/*
 * XREFs of sub_180060DA0 @ 0x180060DA0
 * Callers:
 *     sub_180060E7C @ 0x180060E7C (sub_180060E7C.c)
 * Callees:
 *     sub_180018924 @ 0x180018924 (sub_180018924.c)
 */

__int64 __fastcall sub_180060DA0(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = a1;
  v3 = 4LL;
  do
  {
    sub_180018924(v2);
    v2 += 64LL;
    --v3;
  }
  while ( v3 );
  return a1;
}
