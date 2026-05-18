/*
 * XREFs of sub_180073DDC @ 0x180073DDC
 * Callers:
 *     sub_18009A23C @ 0x18009A23C (sub_18009A23C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180027B38 @ 0x180027B38 (sub_180027B38.c)
 *     sub_180027E0C @ 0x180027E0C (sub_180027E0C.c)
 */

__int64 __fastcall sub_180073DDC(__int64 a1, unsigned int a2)
{
  _BYTE *v3; // rax
  _BYTE v5[3]; // [rsp+45h] [rbp-13h] BYREF

  v3 = (_BYTE *)sub_180027E0C((__int64)v5, a2);
  sub_180027B38(a1, v3, v5);
  return a1;
}
