/*
 * XREFs of sub_140460AEA @ 0x140460AEA
 * Callers:
 *     sub_1409EF4C4 @ 0x1409EF4C4 (sub_1409EF4C4.c)
 *     sub_1409EFAE0 @ 0x1409EFAE0 (sub_1409EFAE0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140460AEA(unsigned __int64 a1, __int64 a2)
{
  int v2; // r9d
  int v3; // r10d
  int v4; // r9d
  __int64 v6; // [rsp+10h] [rbp+10h]

  v2 = 16777619 * (a2 ^ (unsigned __int8)a1);
  v3 = 16777619 * (v2 ^ BYTE5(a1) ^ (16777619 * (HIDWORD(a2) ^ BYTE4(a1))));
  v4 = 16777619 * (v3 ^ BYTE2(a1) ^ (16777619 * (v2 ^ BYTE1(a1))));
  HIDWORD(v6) = 16777619 * (v4 ^ HIBYTE(a1) ^ (16777619 * (v3 ^ BYTE6(a1))));
  LODWORD(v6) = HIDWORD(v6) ^ (16777619 * (v4 ^ BYTE3(a1)));
  return v6;
}
