/*
 * XREFs of sub_1800C3AE8 @ 0x1800C3AE8
 * Callers:
 *     sub_1800C5D20 @ 0x1800C5D20 (sub_1800C5D20.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180027B38 @ 0x180027B38 (sub_180027B38.c)
 *     sub_1800C3A68 @ 0x1800C3A68 (sub_1800C3A68.c)
 */

__int64 __fastcall sub_1800C3AE8(__int64 a1, unsigned __int64 a2)
{
  _BYTE *v3; // rax
  _BYTE v5[3]; // [rsp+45h] [rbp-13h] BYREF

  v3 = (_BYTE *)sub_1800C3A68((__int64)v5, a2);
  sub_180027B38(a1, v3, v5);
  return a1;
}
