/*
 * XREFs of sub_1800A1580 @ 0x1800A1580
 * Callers:
 *     sub_1800A1638 @ 0x1800A1638 (sub_1800A1638.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18002A570 @ 0x18002A570 (sub_18002A570.c)
 *     sub_18002A62C @ 0x18002A62C (sub_18002A62C.c)
 *     sub_1800A1464 @ 0x1800A1464 (sub_1800A1464.c)
 *     sub_1800A3948 @ 0x1800A3948 (sub_1800A3948.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_1800A1580(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  _BYTE v11[8]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v12; // [rsp+28h] [rbp-50h]
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v14[7]; // [rsp+40h] [rbp-38h] BYREF

  sub_18002A570(a1);
  sub_1800A1464(a1, (__int64)v11, a2);
  if ( v11[0] )
  {
    v7 = *(_QWORD *)(a1 + 16 * v12 + 64);
    v8 = sub_18001246C(&v13, a4);
    v9 = sub_180017648(v14, (__int64)&Buf2);
    sub_1800A3948(v7, v9, v8);
    sub_18002A62C(a1);
    return 1;
  }
  else
  {
    sub_18002A62C(a1);
    return 0;
  }
}
