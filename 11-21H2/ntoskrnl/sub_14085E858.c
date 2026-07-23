/*
 * XREFs of sub_14085E858 @ 0x14085E858
 * Callers:
 *     sub_14079AADC @ 0x14079AADC (sub_14079AADC.c)
 *     sub_1409EDE34 @ 0x1409EDE34 (sub_1409EDE34.c)
 * Callees:
 *     sub_1402619C4 @ 0x1402619C4 (sub_1402619C4.c)
 *     sub_1402E1C2C @ 0x1402E1C2C (sub_1402E1C2C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406ED114 @ 0x1406ED114 (sub_1406ED114.c)
 *     sub_140798E18 @ 0x140798E18 (sub_140798E18.c)
 */

__int64 __fastcall sub_14085E858(__int64 a1, __int128 *a2)
{
  bool v4; // zf
  __int128 v5; // xmm0
  _QWORD v7[11]; // [rsp+20h] [rbp-58h] BYREF

  memset(v7, 0, 0x48uLL);
  sub_1402619C4((__int16 *)a1, v7);
  WORD2(v7[6]) &= ~0x100u;
  sub_1402E1C2C((__int64)v7, 3);
  v4 = *(_DWORD *)(a1 + 424) == 0;
  v5 = *a2;
  HIDWORD(v7[5]) = 3;
  LODWORD(v7[6]) = 72;
  *(_OWORD *)&v7[7] = v5;
  WORD2(v7[6]) = 1;
  if ( v4 )
    return sub_140798E18(a1, (__int64)v7);
  else
    return sub_1406ED114(a1, (__int64)v7);
}
