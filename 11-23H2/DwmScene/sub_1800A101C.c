/*
 * XREFs of sub_1800A101C @ 0x1800A101C
 * Callers:
 *     sub_1800A112C @ 0x1800A112C (sub_1800A112C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18002A570 @ 0x18002A570 (sub_18002A570.c)
 *     sub_18002A62C @ 0x18002A62C (sub_18002A62C.c)
 *     sub_1800A1464 @ 0x1800A1464 (sub_1800A1464.c)
 *     sub_1800A2BB0 @ 0x1800A2BB0 (sub_1800A2BB0.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall sub_1800A101C(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 *v9; // r14
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _BYTE v17[8]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v18; // [rsp+40h] [rbp-58h]
  __int64 v19; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v20[5]; // [rsp+58h] [rbp-40h] BYREF

  sub_18002A570(a1);
  sub_1800A1464(a1, v17, a3);
  if ( v17[0] )
  {
    v9 = (__int64 *)(a1 + 64 + 16 * v18);
    v10 = *v9;
    v11 = sub_18001246C(&v19, a5);
    v12 = sub_180017648(v20, a4);
    v13 = sub_1800A2BB0(v10, v12, v11);
    v14 = v9[1];
    if ( v14 )
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    v15 = v9[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( v15 )
    {
      *a2 = v13;
      a2[1] = v15;
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 12));
      sub_180010530(v15);
    }
    sub_18002A62C(a1);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    sub_18002A62C(a1);
  }
  return a2;
}
