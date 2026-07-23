/*
 * XREFs of sub_1409EA348 @ 0x1409EA348
 * Callers:
 *     sub_140814360 @ 0x140814360 (sub_140814360.c)
 * Callees:
 *     sub_140257E80 @ 0x140257E80 (sub_140257E80.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14062EED8 @ 0x14062EED8 (sub_14062EED8.c)
 *     sub_1409E2E90 @ 0x1409E2E90 (sub_1409E2E90.c)
 */

void __fastcall sub_1409EA348(__int64 a1)
{
  _OWORD v2[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v2, 0, sizeof(v2));
  sub_140257E80(v2);
  sub_14062EED8(a1, (__int64)v2);
  sub_1409E2E90(a1, *(unsigned __int64 *)&v2[0]);
}
