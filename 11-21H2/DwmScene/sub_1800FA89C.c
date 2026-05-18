/*
 * XREFs of sub_1800FA89C @ 0x1800FA89C
 * Callers:
 *     sub_1800F6284 @ 0x1800F6284 (sub_1800F6284.c)
 *     sub_1800F65D4 @ 0x1800F65D4 (sub_1800F65D4.c)
 *     sub_1800F69A0 @ 0x1800F69A0 (sub_1800F69A0.c)
 *     sub_1800F6DE4 @ 0x1800F6DE4 (sub_1800F6DE4.c)
 *     sub_1800F7060 @ 0x1800F7060 (sub_1800F7060.c)
 *     sub_1800F72B4 @ 0x1800F72B4 (sub_1800F72B4.c)
 *     sub_1800F7508 @ 0x1800F7508 (sub_1800F7508.c)
 *     sub_1800F7828 @ 0x1800F7828 (sub_1800F7828.c)
 *     sub_1800F9280 @ 0x1800F9280 (sub_1800F9280.c)
 *     sub_1800F94D4 @ 0x1800F94D4 (sub_1800F94D4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800FA570 @ 0x1800FA570 (sub_1800FA570.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800FA89C(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rdx
  _BYTE v6[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v7 = a2;
  v3 = *(_QWORD *)sub_1800FA570((float *)(a1 + 64), (__int64)v6, a2);
  v4 = *(_QWORD *)(a2 + 24);
  if ( v4 >= 8 )
    sub_180010884(*(char **)a2, 2 * v4 + 2);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  return v3 + 48;
}
