/*
 * XREFs of sub_140807D78 @ 0x140807D78
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140807E5C @ 0x140807E5C (sub_140807E5C.c)
 *     sub_140811238 @ 0x140811238 (sub_140811238.c)
 */

__int64 __fastcall sub_140807D78(__int64 a1, __int64 a2, int a3, int a4, char a5, char a6)
{
  __int64 v6; // r10
  __int64 v8; // [rsp+20h] [rbp-39h] BYREF
  __int64 v9; // [rsp+28h] [rbp-31h] BYREF
  _QWORD v10[12]; // [rsp+30h] [rbp-29h] BYREF
  int v11; // [rsp+C0h] [rbp+67h] BYREF
  int v12; // [rsp+C8h] [rbp+6Fh] BYREF

  v12 = a4;
  v11 = a3;
  v6 = a2;
  v8 = 0LL;
  v9 = 0LL;
  if ( a1 )
    sub_140807E5C(a1, &v8);
  if ( v6 )
    sub_140807E5C(v6, &v9);
  v10[1] = 8LL;
  v10[0] = &v8;
  v10[3] = 8LL;
  v10[2] = &v9;
  v10[5] = 4LL;
  v10[4] = &v11;
  v10[7] = 4LL;
  v10[6] = &v12;
  v10[8] = &a5;
  v10[10] = &a6;
  v10[9] = 4LL;
  v10[11] = 4LL;
  return sub_140811238(qword_14000FB10, 6LL, v10);
}
