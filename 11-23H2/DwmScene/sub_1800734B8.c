/*
 * XREFs of sub_1800734B8 @ 0x1800734B8
 * Callers:
 *     sub_180059FD0 @ 0x180059FD0 (sub_180059FD0.c)
 *     sub_18006D0BC @ 0x18006D0BC (sub_18006D0BC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001085C @ 0x18001085C (sub_18001085C.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001C6E8 @ 0x18001C6E8 (sub_18001C6E8.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_180027C80 @ 0x180027C80 (sub_180027C80.c)
 *     sub_1800283EC @ 0x1800283EC (sub_1800283EC.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_180073330 @ 0x180073330 (sub_180073330.c)
 *     sub_180073370 @ 0x180073370 (sub_180073370.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_1800734B8(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rbx
  __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rbx
  void **v11; // rax
  int v13[4]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v14; // [rsp+40h] [rbp-59h] BYREF
  __int64 v15; // [rsp+48h] [rbp-51h]
  _BYTE v16[32]; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v17[4]; // [rsp+80h] [rbp-19h] BYREF
  _QWORD v18[4]; // [rsp+A0h] [rbp+7h] BYREF

  v3 = a3;
  *(_QWORD *)v13 = a2;
  v6 = (__int64 *)(a1 + 16 * (a3 + 5LL));
  if ( !*v6 )
  {
    v7 = sub_180026618(*(_QWORD *)(a1 + 32));
    sub_18001085C(v7, &v14);
    sub_180011020(v6, &v14);
    if ( v15 )
      sub_180010530(v15);
    v8 = (__int64 *)sub_180073330(a1, (float *)&v14, v3);
    sub_180073370(v13, *v8);
    sub_180027C80((__int64)v16, (int)flt_180113078[v3]);
    v9 = sub_18001C6E8(v18, (__int64)"ImageProcessing Scaled ", v16);
    sub_18001C61C(v17, v9, (__int64)"x");
    sub_180011B24((__int64)v18);
    sub_180011B24((__int64)v16);
    v10 = *v6;
    v11 = (void **)sub_180017648(&v14, (__int64)v17);
    sub_180029824(v10, v11);
    sub_1800283EC(*v6, v13[0], v13[1], *(_DWORD *)(a1 + 20), *(_DWORD *)(a1 + 28) & 0xFFFFFFBF, *(_QWORD *)(a1 + 32));
    sub_180011B24((__int64)v17);
  }
  sub_18001246C(a2, v6);
  return a2;
}
