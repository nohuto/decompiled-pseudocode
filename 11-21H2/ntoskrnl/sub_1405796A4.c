/*
 * XREFs of sub_1405796A4 @ 0x1405796A4
 * Callers:
 *     sub_1405788B0 @ 0x1405788B0 (sub_1405788B0.c)
 * Callees:
 *     sub_140552C20 @ 0x140552C20 (sub_140552C20.c)
 *     sub_140579B48 @ 0x140579B48 (sub_140579B48.c)
 */

__int64 __fastcall sub_1405796A4(unsigned __int8 a1, int a2)
{
  __int64 v3; // [rsp+20h] [rbp-20h] BYREF
  int v4; // [rsp+28h] [rbp-18h]
  __int64 v5; // [rsp+2Ch] [rbp-14h]

  v4 = a2;
  HIDWORD(v3) = a1;
  LODWORD(v3) = 1;
  sub_140552C20((int *)&v3);
  v5 = 0LL;
  v3 = 1LL;
  v4 = 193;
  return sub_140579B48(&v3);
}
