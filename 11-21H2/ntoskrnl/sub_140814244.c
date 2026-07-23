/*
 * XREFs of sub_140814244 @ 0x140814244
 * Callers:
 *     sub_1406EDB48 @ 0x1406EDB48 (sub_1406EDB48.c)
 *     sub_1408141A0 @ 0x1408141A0 (sub_1408141A0.c)
 *     sub_1409DEFB8 @ 0x1409DEFB8 (sub_1409DEFB8.c)
 * Callees:
 *     sub_1403AAEF4 @ 0x1403AAEF4 (sub_1403AAEF4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406E1024 @ 0x1406E1024 (sub_1406E1024.c)
 */

__int64 __fastcall sub_140814244(int *a1, char *a2)
{
  _DWORD v5[8]; // [rsp+20h] [rbp-38h] BYREF

  v5[7] = -1;
  v5[0] = 0x1FFFFFFF;
  v5[1] = 0x3FFFFFFF;
  v5[2] = 1610612735;
  v5[3] = 0x7FFFFFFF;
  v5[4] = -1610612737;
  v5[5] = -1073741825;
  v5[6] = -536870913;
  sub_1406E1024((__int64)a2, 1);
  return sub_1403AAEF4(a1, v5, a2);
}
