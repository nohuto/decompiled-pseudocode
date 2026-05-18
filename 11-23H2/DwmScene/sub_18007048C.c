/*
 * XREFs of sub_18007048C @ 0x18007048C
 * Callers:
 *     sub_180044A1C @ 0x180044A1C (sub_180044A1C.c)
 *     sub_18004BDC0 @ 0x18004BDC0 (sub_18004BDC0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180070010 @ 0x180070010 (sub_180070010.c)
 *     sub_18007006C @ 0x18007006C (sub_18007006C.c)
 *     sub_1800702D0 @ 0x1800702D0 (sub_1800702D0.c)
 *     sub_180070754 @ 0x180070754 (sub_180070754.c)
 *     sub_180097570 @ 0x180097570 (sub_180097570.c)
 *     sub_180097628 @ 0x180097628 (sub_180097628.c)
 *     sub_1800976D4 @ 0x1800976D4 (sub_1800976D4.c)
 *     sub_1800DF794 @ 0x1800DF794 (sub_1800DF794.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18007048C(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  struct _Mtx_internal_imp_t *v8; // rbx
  __int64 v9; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // r9
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD v17[2]; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v18[4]; // [rsp+30h] [rbp-89h] BYREF
  _BYTE v19[128]; // [rsp+50h] [rbp-69h] BYREF

  v18[0] = a2;
  v18[2] = a4;
  v8 = (struct _Mtx_internal_imp_t *)(a1 + 24);
  v18[3] = a1 + 24;
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 24));
  v9 = sub_1800702D0(a1, a3);
  v10 = sub_18007006C(v17, v9);
  sub_180070010(v18, *(_QWORD *)a1, *(_QWORD *)(a1 + 8), *v10);
  if ( v18[0] == *(_QWORD *)(a1 + 8) )
  {
    v13 = sub_18001246C(v17, a4);
    v14 = sub_180097570(v19, v9, v13);
    sub_180070754(a1, v14);
    sub_180097628(v19);
    sub_1800DF794(a2);
  }
  else
  {
    v11 = sub_18001246C(v17, a4);
    sub_1800976D4(v12, a2, v11);
  }
  Mtx_unlock(v8);
  v15 = a4[1];
  if ( v15 )
    sub_180010530(v15);
  return a2;
}
