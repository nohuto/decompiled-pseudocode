/*
 * XREFs of sub_18002C8A4 @ 0x18002C8A4
 * Callers:
 *     sub_18002C6A0 @ 0x18002C6A0 (sub_18002C6A0.c)
 *     sub_18002C6F4 @ 0x18002C6F4 (sub_18002C6F4.c)
 *     sub_18002C864 @ 0x18002C864 (sub_18002C864.c)
 * Callees:
 *     sub_18002C3A0 @ 0x18002C3A0 (sub_18002C3A0.c)
 *     sub_18002C574 @ 0x18002C574 (sub_18002C574.c)
 */

bool __fastcall sub_18002C8A4(__int64 a1, char a2)
{
  __int64 *v2; // rbx
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = sub_18002C3A0(a1, &v4, a2);
  return *v2 != sub_18002C574()[1];
}
