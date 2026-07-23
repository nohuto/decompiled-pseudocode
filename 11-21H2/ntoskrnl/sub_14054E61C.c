/*
 * XREFs of sub_14054E61C @ 0x14054E61C
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14054E61C(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  qword_140C11550 = a1;
  v3[2] = 0x8000000000LL;
  v3[1] = a1;
  qword_140C11558 = a1 + 0x8000000000LL;
  return sub_140358A20(2u, 214, 0, (__int64)v3);
}
