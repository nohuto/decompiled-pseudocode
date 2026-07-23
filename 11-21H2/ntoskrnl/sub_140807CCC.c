/*
 * XREFs of sub_140807CCC @ 0x140807CCC
 * Callers:
 *     sub_140807BE0 @ 0x140807BE0 (sub_140807BE0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140811238 @ 0x140811238 (sub_140811238.c)
 */

__int64 __fastcall sub_140807CCC(int a1, int a2, int a3, int a4, char a5)
{
  _QWORD v6[10]; // [rsp+20h] [rbp-60h] BYREF
  int v7; // [rsp+90h] [rbp+10h] BYREF
  int v8; // [rsp+98h] [rbp+18h] BYREF
  int v9; // [rsp+A0h] [rbp+20h] BYREF
  int v10; // [rsp+A8h] [rbp+28h] BYREF

  v10 = a4;
  v9 = a3;
  v8 = a2;
  v7 = a1;
  v6[1] = 4LL;
  v6[0] = &v7;
  v6[3] = 4LL;
  v6[2] = &v8;
  v6[5] = 4LL;
  v6[4] = &v9;
  v6[7] = 4LL;
  v6[6] = &v10;
  v6[8] = &a5;
  v6[9] = 4LL;
  return sub_140811238(qword_14000FB00, 5LL, v6);
}
