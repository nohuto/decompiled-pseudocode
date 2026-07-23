/*
 * XREFs of sub_14097AC04 @ 0x14097AC04
 * Callers:
 *     sub_14097A228 @ 0x14097A228 (sub_14097A228.c)
 *     sub_14097A714 @ 0x14097A714 (sub_14097A714.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406F8D30 @ 0x1406F8D30 (sub_1406F8D30.c)
 */

__int64 __fastcall sub_14097AC04(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OWORD v6[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v6, 0, sizeof(v6));
  sub_14030D5C0(qword_140D06A30, 0LL, (__int64)v6, a4);
  sub_1406F8D30(qword_140D06A30, a1, 0, 0LL);
  return sub_1402D0930((__int64)v6, 0LL);
}
