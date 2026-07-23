/*
 * XREFs of sub_14051AEFC @ 0x14051AEFC
 * Callers:
 *     sub_14051AA64 @ 0x14051AA64 (sub_14051AA64.c)
 *     sub_14051AC78 @ 0x14051AC78 (sub_14051AC78.c)
 *     sub_14051AD44 @ 0x14051AD44 (sub_14051AD44.c)
 * Callees:
 *     sub_14051AE1C @ 0x14051AE1C (sub_14051AE1C.c)
 */

__int64 __fastcall sub_14051AEFC(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx

  v4 = ((unsigned __int64)(a2 & 0xFFF) + a3 + 4095) >> 12;
  v5 = a2 & 0xFFFFFFFFFFFFF000uLL;
  while ( v4 )
  {
    v6 = 1024LL;
    if ( v4 < 0x400 )
      v6 = v4;
    sub_14051AE1C(a1);
    v4 -= v6;
    v5 += v6 << 12;
  }
  return 0LL;
}
