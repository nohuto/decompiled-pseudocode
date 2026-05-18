/*
 * XREFs of sub_1800A1248 @ 0x1800A1248
 * Callers:
 *     sub_1800A12D4 @ 0x1800A12D4 (sub_1800A12D4.c)
 * Callees:
 *     sub_18002A570 @ 0x18002A570 (sub_18002A570.c)
 *     sub_18002A62C @ 0x18002A62C (sub_18002A62C.c)
 *     sub_1800A09BC @ 0x1800A09BC (sub_1800A09BC.c)
 *     sub_1800A1464 @ 0x1800A1464 (sub_1800A1464.c)
 *     sub_1800A2DA0 @ 0x1800A2DA0 (sub_1800A2DA0.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_1800A1248(__int64 a1, __int64 a2)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-10h]
  unsigned __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h]

  v8 = a1;
  sub_18002A570(a1);
  sub_1800A1464(a1, v5, a2);
  if ( v5[0] )
  {
    v7 = v6;
    sub_1800A09BC((__int64 *)(a1 + 48), (__int64)v5, &v7);
    sub_1800A2DA0(*(_QWORD *)(a1 + 16 * v7 + 64));
    sub_18002A62C(a1);
    return 1;
  }
  else
  {
    sub_18002A62C(a1);
    return 0;
  }
}
