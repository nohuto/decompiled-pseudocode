/*
 * XREFs of sub_18004F718 @ 0x18004F718
 * Callers:
 *     sub_180045298 @ 0x180045298 (sub_180045298.c)
 *     sub_180045FF8 @ 0x180045FF8 (sub_180045FF8.c)
 *     sub_180046554 @ 0x180046554 (sub_180046554.c)
 *     sub_180046A58 @ 0x180046A58 (sub_180046A58.c)
 *     sub_180046AE8 @ 0x180046AE8 (sub_180046AE8.c)
 *     sub_180050A68 @ 0x180050A68 (sub_180050A68.c)
 *     sub_180060800 @ 0x180060800 (sub_180060800.c)
 *     sub_18007E900 @ 0x18007E900 (sub_18007E900.c)
 *     sub_18007F430 @ 0x18007F430 (sub_18007F430.c)
 *     sub_18007F820 @ 0x18007F820 (sub_18007F820.c)
 *     sub_18007FF54 @ 0x18007FF54 (sub_18007FF54.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18004347C @ 0x18004347C (sub_18004347C.c)
 *     sub_18004E4E8 @ 0x18004E4E8 (sub_18004E4E8.c)
 */

_QWORD *__fastcall sub_18004F718(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  unsigned int v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = a3;
  sub_18004347C(a1, &v5);
  sub_18004E4E8(a2, (__int64)&v5, &v7);
  if ( v6 )
    sub_180010530(v6);
  return a2;
}
