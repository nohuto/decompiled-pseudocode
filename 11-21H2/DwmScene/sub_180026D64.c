/*
 * XREFs of sub_180026D64 @ 0x180026D64
 * Callers:
 *     sub_180026AE4 @ 0x180026AE4 (sub_180026AE4.c)
 * Callees:
 *     sub_180026A88 @ 0x180026A88 (sub_180026A88.c)
 *     sub_180029710 @ 0x180029710 (sub_180029710.c)
 */

__int64 __fastcall sub_180026D64(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // rsi

  v3 = a3;
  v5 = a1;
  if ( a1 != a2 )
  {
    v6 = a3 - a1;
    do
    {
      *(_QWORD *)(v6 + v5 + 56) = 0LL;
      sub_180029710(v3, v5);
      v3 += 64LL;
      v5 += 64LL;
    }
    while ( v5 != a2 );
  }
  sub_180026A88(v3, v3);
  return v3;
}
