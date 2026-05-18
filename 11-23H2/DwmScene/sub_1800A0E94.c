/*
 * XREFs of sub_1800A0E94 @ 0x1800A0E94
 * Callers:
 *     sub_1800A0F9C @ 0x1800A0F9C (sub_1800A0F9C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18002A570 @ 0x18002A570 (sub_18002A570.c)
 *     sub_18002A62C @ 0x18002A62C (sub_18002A62C.c)
 *     sub_1800A1464 @ 0x1800A1464 (sub_1800A1464.c)
 *     sub_1800A29C8 @ 0x1800A29C8 (sub_1800A29C8.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_1800A0E94(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_18002A570((__int64)a1);
  sub_1800A1464(a1, v12, a3);
  if ( LOBYTE(v12[0]) || (v6 = a1[5]) == 0 )
  {
    sub_18002A62C((__int64)a1);
    v11 = a2[1];
    if ( v11 )
      sub_180010530(v11);
    return 0;
  }
  else
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1[2] + 8 * ((a1[4] >> 1) & (a1[3] - 1LL))) + 8 * (a1[4] & 1LL));
    a1[5] = v6 - 1;
    if ( v6 == 1 )
      a1[4] = 0LL;
    else
      ++a1[4];
    a1[v7 + 18] = a3;
    v8 = a1[2 * v7 + 8];
    v12[0] = *a2;
    v12[1] = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    sub_1800A29C8(v8, a3, v12);
    sub_18002A62C((__int64)a1);
    v9 = a2[1];
    if ( v9 )
      sub_180010530(v9);
    return 1;
  }
}
