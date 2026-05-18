/*
 * XREFs of sub_180078F40 @ 0x180078F40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001FB6C @ 0x18001FB6C (sub_18001FB6C.c)
 *     sub_18001FE44 @ 0x18001FE44 (sub_18001FE44.c)
 *     sub_180020E2C @ 0x180020E2C (sub_180020E2C.c)
 *     sub_1800441CC @ 0x1800441CC (sub_1800441CC.c)
 *     sub_1800441E4 @ 0x1800441E4 (sub_1800441E4.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180078F40(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 *v6; // rax
  int v7; // ebx
  char result; // al
  __int64 *v9; // rax
  char v10; // di
  __int64 v11; // rcx
  char *v12; // rdx
  char v13; // t0
  char v14[8]; // [rsp+20h] [rbp-59h] BYREF
  int v15; // [rsp+28h] [rbp-51h]
  char *v16[2]; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-39h]
  unsigned __int64 v18; // [rsp+48h] [rbp-31h]
  char *v19[3]; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v20; // [rsp+68h] [rbp-11h]
  char *v21[3]; // [rsp+70h] [rbp-9h] BYREF
  unsigned __int64 v22; // [rsp+88h] [rbp+Fh]
  char *v23; // [rsp+90h] [rbp+17h] BYREF
  unsigned __int64 v24; // [rsp+A8h] [rbp+2Fh]

  sub_18001FB6C((__int64 *)v21, L"Lighting.", a3);
  sub_18001FB6C((__int64 *)v16, L"/Internal/Lighting.", v5);
  v6 = sub_180020E2C(a2, (__int64 *)&v23, 0LL, (unsigned __int64)v21[2]);
  v7 = 1;
  v15 = 1;
  result = sub_18001FE44((char *)v6, v21);
  if ( result
    || (v9 = sub_180020E2C(a2, (__int64 *)v19, 0LL, v17),
        v7 = 3,
        v15 = 3,
        result = sub_18001FE44((char *)v9, v16),
        v10 = 0,
        result) )
  {
    v10 = 1;
  }
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    v15 = v7;
    if ( v20 >= 8 )
      result = sub_180010884(v19[0], 2 * v20 + 2);
    v19[2] = 0LL;
    v20 = 7LL;
    LOWORD(v19[0]) = 0;
  }
  if ( (v7 & 1) != 0 && v24 >= 8 )
    result = sub_180010884(v23, 2 * v24 + 2);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 8) + 1464LL;
    v14[0] = 1;
    sub_1800441CC(v11);
    v13 = sub_1800441E4((__int64)v14);
    result = *v12;
    *v12 = v13;
  }
  if ( v18 >= 8 )
    result = sub_180010884(v16[0], 2 * v18 + 2);
  v17 = 0LL;
  v18 = 7LL;
  LOWORD(v16[0]) = 0;
  if ( v22 >= 8 )
    return sub_180010884(v21[0], 2 * v22 + 2);
  return result;
}
