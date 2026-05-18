/*
 * XREFs of sub_1800A14B0 @ 0x1800A14B0
 * Callers:
 *     sub_1800A1520 @ 0x1800A1520 (sub_1800A1520.c)
 * Callees:
 *     sub_18002A570 @ 0x18002A570 (sub_18002A570.c)
 *     sub_18002A62C @ 0x18002A62C (sub_18002A62C.c)
 *     sub_1800A1464 @ 0x1800A1464 (sub_1800A1464.c)
 *     sub_1800A38B4 @ 0x1800A38B4 (sub_1800A38B4.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_1800A14B0(__int64 a1, __int64 a2)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  sub_18002A570(a1);
  sub_1800A1464(a1, (__int64)v5, a2);
  if ( v5[0] )
  {
    sub_1800A38B4(*(_QWORD *)(a1 + 16 * v6 + 64));
    sub_18002A62C(a1);
    return 1;
  }
  else
  {
    sub_18002A62C(a1);
    return 0;
  }
}
