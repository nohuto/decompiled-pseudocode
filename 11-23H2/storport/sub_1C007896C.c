/*
 * XREFs of sub_1C007896C @ 0x1C007896C
 * Callers:
 *     sub_1C00042F0 @ 0x1C00042F0 (sub_1C00042F0.c)
 *     sub_1C00052B0 @ 0x1C00052B0 (sub_1C00052B0.c)
 *     sub_1C0010160 @ 0x1C0010160 (sub_1C0010160.c)
 *     sub_1C0040FA8 @ 0x1C0040FA8 (sub_1C0040FA8.c)
 *     sub_1C004123C @ 0x1C004123C (sub_1C004123C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C007896C(unsigned __int8 *a1, int a2)
{
  __int64 v3; // [rsp+18h] [rbp+18h]

  if ( a2 != 16 )
    return a1[5] | ((a1[4] | ((a1[3] | (a1[2] << 8)) << 8)) << 8);
  HIBYTE(v3) = a1[2];
  BYTE6(v3) = a1[3];
  BYTE5(v3) = a1[4];
  BYTE4(v3) = a1[5];
  BYTE3(v3) = a1[6];
  BYTE2(v3) = a1[7];
  BYTE1(v3) = a1[8];
  LOBYTE(v3) = a1[9];
  return v3;
}
