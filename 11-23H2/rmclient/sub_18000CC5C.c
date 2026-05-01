/*
 * XREFs of sub_18000CC5C @ 0x18000CC5C
 * Callers:
 *     sub_18000CB2C @ 0x18000CB2C (sub_18000CB2C.c)
 *     sub_18000F624 @ 0x18000F624 (sub_18000F624.c)
 *     sub_18000FC54 @ 0x18000FC54 (sub_18000FC54.c)
 * Callees:
 *     sub_18000CB9C @ 0x18000CB9C (sub_18000CB9C.c)
 */

__int64 __fastcall sub_18000CC5C(__int64 a1)
{
  __int64 v1; // r11
  __int16 v2; // r8
  char v3; // r9
  __int64 v4; // r11
  __int16 v5; // r8
  char v6; // r9
  __int64 v7; // r11

  sub_18000CB9C(a1, 0, 4, 1, 4, 0);
  sub_18000CB9C(v1 + 64, 0, v2, v3, v2, 2);
  sub_18000CB9C(v4 + 128, 0, v5, v6, 0, v6);
  return v7;
}
