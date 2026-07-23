/*
 * XREFs of sub_140261818 @ 0x140261818
 * Callers:
 *     sub_14037EEA8 @ 0x14037EEA8 (sub_14037EEA8.c)
 *     sub_1403800F0 @ 0x1403800F0 (sub_1403800F0.c)
 *     sub_14039050C @ 0x14039050C (sub_14039050C.c)
 *     sub_1405F8978 @ 0x1405F8978 (sub_1405F8978.c)
 *     sub_1405F903C @ 0x1405F903C (sub_1405F903C.c)
 *     sub_1405F91C4 @ 0x1405F91C4 (sub_1405F91C4.c)
 *     sub_1405F9B18 @ 0x1405F9B18 (sub_1405F9B18.c)
 *     sub_1405F9C9C @ 0x1405F9C9C (sub_1405F9C9C.c)
 *     sub_1405FA31C @ 0x1405FA31C (sub_1405FA31C.c)
 *     sub_1405FBC00 @ 0x1405FBC00 (sub_1405FBC00.c)
 *     sub_1406ECC60 @ 0x1406ECC60 (sub_1406ECC60.c)
 *     sub_1406ED88C @ 0x1406ED88C (sub_1406ED88C.c)
 *     sub_140847F40 @ 0x140847F40 (sub_140847F40.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

ULONGLONG *__fastcall sub_140261818(int a1)
{
  _DWORD v2[4]; // [rsp+0h] [rbp-28h]

  v2[1] = 0;
  v2[0] = 16;
  v2[2] = 64;
  v2[3] = 128;
  if ( (v2[a1] & dword_140D3253C) != 0 )
    return &qword_140D32530;
  else
    return 0LL;
}
