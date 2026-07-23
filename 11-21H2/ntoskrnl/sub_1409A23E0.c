/*
 * XREFs of sub_1409A23E0 @ 0x1409A23E0
 * Callers:
 *     sub_1409A2D68 @ 0x1409A2D68 (sub_1409A2D68.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 */

__int64 __fastcall sub_1409A23E0(__int64 a1)
{
  __int128 v3[6]; // [rsp+30h] [rbp-68h] BYREF

  if ( !a1 )
    return 3221225626LL;
  memset((char *)v3 + 4, 0, 0x5CuLL);
  LODWORD(v3[0]) = 21;
  return sub_14074F950(0x57u, v3, 96, (LUID)(a1 + 24), 8);
}
