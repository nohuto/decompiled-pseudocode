/*
 * XREFs of sub_1405796F8 @ 0x1405796F8
 * Callers:
 *     sub_140579150 @ 0x140579150 (sub_140579150.c)
 * Callees:
 *     sub_140552C20 @ 0x140552C20 (sub_140552C20.c)
 *     sub_140579B48 @ 0x140579B48 (sub_140579B48.c)
 */

__int64 __fastcall sub_1405796F8(unsigned __int8 a1)
{
  __int64 v2; // [rsp+20h] [rbp-28h] BYREF
  int v3; // [rsp+28h] [rbp-20h]
  __int64 v4; // [rsp+2Ch] [rbp-1Ch]

  HIDWORD(v2) = a1;
  v3 = 0;
  LODWORD(v2) = 2;
  sub_140552C20((int *)&v2);
  v4 = 0LL;
  v2 = 1LL;
  v3 = 196;
  return sub_140579B48(&v2);
}
