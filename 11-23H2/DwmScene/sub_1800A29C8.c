/*
 * XREFs of sub_1800A29C8 @ 0x1800A29C8
 * Callers:
 *     sub_1800A0E94 @ 0x1800A0E94 (sub_1800A0E94.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180026844 @ 0x180026844 (sub_180026844.c)
 *     sub_18002AE4C @ 0x18002AE4C (sub_18002AE4C.c)
 *     sub_18002B3C0 @ 0x18002B3C0 (sub_18002B3C0.c)
 *     sub_1800A1C58 @ 0x1800A1C58 (sub_1800A1C58.c)
 *     sub_1800A1CB4 @ 0x1800A1CB4 (sub_1800A1CB4.c)
 *     sub_1800A1DF4 @ 0x1800A1DF4 (sub_1800A1DF4.c)
 *     sub_1800A1E10 @ 0x1800A1E10 (sub_1800A1E10.c)
 *     sub_1800A1E84 @ 0x1800A1E84 (sub_1800A1E84.c)
 *     sub_1800A2938 @ 0x1800A2938 (sub_1800A2938.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800A29C8(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v6; // rax
  _QWORD *v7; // rax
  __int64 *v8; // rax
  _QWORD *v9; // rax
  __int64 *v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // r8
  _QWORD *result; // rax
  __int64 v15; // rcx
  _QWORD v16[2]; // [rsp+28h] [rbp-89h] BYREF
  _OWORD v17[2]; // [rsp+38h] [rbp-79h] BYREF
  __int64 v18; // [rsp+58h] [rbp-59h]
  __int64 v19; // [rsp+60h] [rbp-51h]
  __int64 v20; // [rsp+68h] [rbp-49h]
  __int64 v21; // [rsp+70h] [rbp-41h]
  __int64 v22; // [rsp+78h] [rbp-39h]
  __int64 v23; // [rsp+80h] [rbp-31h]
  __int64 v24; // [rsp+88h] [rbp-29h]
  __int64 v25; // [rsp+90h] [rbp-21h]
  __int64 v26; // [rsp+98h] [rbp-19h]
  __int64 v27; // [rsp+A0h] [rbp-11h]
  __int64 v28; // [rsp+A8h] [rbp-9h]
  char v29; // [rsp+B0h] [rbp-1h]
  __int64 v30; // [rsp+B8h] [rbp+7h]
  void *v31[5]; // [rsp+C0h] [rbp+Fh] BYREF
  __int64 v32; // [rsp+E8h] [rbp+37h] BYREF

  memset(v17, 0, sizeof(v17));
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0;
  v30 = 0LL;
  sub_18002B3C0((__int64 *)v31);
  sub_1800A2938(a1 + 928, (__int64)v17);
  sub_18002AE4C(v31, (__int64)v31);
  *(_QWORD *)(a1 + 1056) = a2;
  v6 = (__int64 *)sub_180026844(*(_QWORD *)(a1 + 912), (__int64)v17, 0);
  sub_1800A1CB4(a1, v6);
  sub_1800A1C58(v17);
  if ( sub_1800A1DF4() )
  {
    v7 = sub_18001246C(v16, a3);
    sub_1800A1E10(a1, v7);
  }
  v8 = (__int64 *)sub_180026844(*(_QWORD *)(a1 + 912), (__int64)v17, 2u);
  sub_1800A1CB4(a1 + 704, v8);
  sub_1800A1C58(v17);
  if ( sub_1800A1DF4() )
  {
    v9 = sub_18001246C(v16, a3);
    sub_1800A1E10(a1 + 704, v9);
  }
  v10 = (__int64 *)sub_180026844(*(_QWORD *)(a1 + 912), (__int64)v17, 1u);
  sub_1800A1CB4(a1 + 176, v10);
  sub_1800A1C58(v17);
  if ( sub_1800A1DF4() )
  {
    sub_18001246C(v16, a3);
    v12 = sub_18001246C(&v32, v11);
    sub_1800A1E84(a1 + 176, v12, v13);
  }
  *(_DWORD *)(a1 + 920) = 1;
  result = sub_180011020((_QWORD *)(a1 + 896), a3);
  v15 = a3[1];
  if ( v15 )
    return (_QWORD *)sub_180010530(v15);
  return result;
}
