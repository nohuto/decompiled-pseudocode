/*
 * XREFs of sub_1408063DC @ 0x1408063DC
 * Callers:
 *     sub_140811764 @ 0x140811764 (sub_140811764.c)
 * Callees:
 *     sub_140806424 @ 0x140806424 (sub_140806424.c)
 *     sub_140809458 @ 0x140809458 (sub_140809458.c)
 */

__int64 __fastcall sub_1408063DC(__int64 a1)
{
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+34h] [rbp+Ch]
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v5; // [rsp+40h] [rbp+18h] BYREF

  v3 = HIDWORD(a1);
  v4 = 0;
  v5 = 0;
  v2 = 0;
  sub_140809458(&v5, &v4, &v2);
  return sub_140806424(v5, v4, v2);
}
