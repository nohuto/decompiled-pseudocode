/*
 * XREFs of sub_14080A488 @ 0x14080A488
 * Callers:
 *     sub_140809614 @ 0x140809614 (sub_140809614.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140811238 @ 0x140811238 (sub_140811238.c)
 */

__int64 __fastcall sub_14080A488(__int64 a1)
{
  _QWORD v2[10]; // [rsp+20h] [rbp-60h] BYREF

  v2[1] = 4LL;
  v2[0] = a1 + 32;
  v2[3] = 4LL;
  v2[2] = a1 + 40;
  v2[5] = 4LL;
  v2[4] = a1 + 48;
  v2[6] = a1 + 8;
  v2[7] = 8LL;
  v2[8] = 0xFFFFF780000002C4uLL;
  v2[9] = 4LL;
  return sub_140811238(qword_140011D48, 5LL, v2);
}
