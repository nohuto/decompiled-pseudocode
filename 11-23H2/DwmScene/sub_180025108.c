/*
 * XREFs of sub_180025108 @ 0x180025108
 * Callers:
 *     sub_180024C1C @ 0x180024C1C (sub_180024C1C.c)
 * Callees:
 *     sub_180024BE4 @ 0x180024BE4 (sub_180024BE4.c)
 *     sub_18002771C @ 0x18002771C (sub_18002771C.c)
 */

__int64 __fastcall sub_180025108(__int64 a1, __int64 a2, __int64 a3)
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
      sub_18002771C(v3, v5);
      v3 += 64LL;
      v5 += 64LL;
    }
    while ( v5 != a2 );
  }
  sub_180024BE4(v3, v3);
  return v3;
}
