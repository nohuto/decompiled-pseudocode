/*
 * XREFs of sub_1800701E0 @ 0x1800701E0
 * Callers:
 *     sub_180026238 @ 0x180026238 (sub_180026238.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180070010 @ 0x180070010 (sub_180070010.c)
 *     sub_18007006C @ 0x18007006C (sub_18007006C.c)
 *     sub_180070754 @ 0x180070754 (sub_180070754.c)
 *     sub_1800974D4 @ 0x1800974D4 (sub_1800974D4.c)
 *     sub_180097628 @ 0x180097628 (sub_180097628.c)
 *     sub_1800977A8 @ 0x1800977A8 (sub_1800977A8.c)
 */

// Hidden C++ exception states: #wind=3
int __fastcall sub_1800701E0(__int64 a1, _QWORD *a2, __int64 a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rax
  int result; // eax
  __int64 v13; // rcx
  _QWORD v14[2]; // [rsp+20h] [rbp-89h] BYREF
  _QWORD v15[4]; // [rsp+30h] [rbp-79h] BYREF
  _BYTE v16[128]; // [rsp+50h] [rbp-59h] BYREF

  v15[1] = a2;
  v6 = (struct _Mtx_internal_imp_t *)(a1 + 24);
  v15[2] = a1 + 24;
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 24));
  v7 = sub_18007006C(v14, a3);
  sub_180070010(v15, *(_QWORD *)a1, *(_QWORD *)(a1 + 8), *v7);
  if ( v15[0] == *(_QWORD *)(a1 + 8) )
  {
    v10 = sub_18001246C(v14, a2);
    v11 = sub_1800974D4(v16, a3, v10);
    sub_180070754(a1, v11);
    sub_180097628(v16);
  }
  else
  {
    v8 = sub_18001246C(v14, a2);
    sub_1800977A8(v9, v8);
  }
  result = Mtx_unlock(v6);
  v13 = a2[1];
  if ( v13 )
    return sub_180010530(v13);
  return result;
}
