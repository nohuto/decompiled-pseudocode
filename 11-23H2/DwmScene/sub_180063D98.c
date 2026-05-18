/*
 * XREFs of sub_180063D98 @ 0x180063D98
 * Callers:
 *     sub_180063DC8 @ 0x180063DC8 (sub_180063DC8.c)
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 * Callees:
 *     sub_180063C6C @ 0x180063C6C (sub_180063C6C.c)
 */

__int64 __fastcall sub_180063D98(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  sub_180063C6C(a1, &v3);
  return a1;
}
