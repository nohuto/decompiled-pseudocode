/*
 * XREFs of sub_1800FAB78 @ 0x1800FAB78
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
 *     sub_1800F9670 @ 0x1800F9670 (sub_1800F9670.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001FB6C @ 0x18001FB6C (sub_18001FB6C.c)
 *     sub_18001FFD8 @ 0x18001FFD8 (sub_18001FFD8.c)
 *     sub_18006B90C @ 0x18006B90C (sub_18006B90C.c)
 */

bool __fastcall sub_1800FAB78(__int64 a1, _WORD *a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  char **v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  bool v8; // di
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  char *v11[3]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-20h]

  sub_18001FB6C((__int64 *)v11, a2, a3);
  v4 = v12;
  v5 = v11;
  if ( v12 >= 8 )
    v5 = (char **)v11[0];
  v6 = sub_18001FFD8((__int64)v5, (__int64)v11[2]);
  v7 = sub_18006B90C((_QWORD *)(a1 + 64), &v10, (char *)v11, v6)[1];
  if ( !v7 )
    v7 = *(_QWORD *)(a1 + 72);
  v8 = v7 != *(_QWORD *)(a1 + 72);
  if ( v4 >= 8 )
    sub_180010884(v11[0], 2 * v4 + 2);
  return v8;
}
