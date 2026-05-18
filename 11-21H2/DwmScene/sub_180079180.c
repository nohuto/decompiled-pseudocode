/*
 * XREFs of sub_180079180 @ 0x180079180
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

// Hidden C++ exception states: #wind=1
char __fastcall sub_180079180(__int64 a1, char *a2, __int64 a3)
{
  __int64 *v5; // rax
  char v6; // si
  __int64 v7; // rcx
  char v8; // al
  char *v9; // rdx
  __int64 v10; // rcx
  char v11; // al
  char *v12; // rdx
  __int64 v13; // rcx
  char v14; // al
  char *v15; // rdx
  char result; // al
  __int64 v17; // rcx
  char *v18; // rdx
  char v19; // t0
  char v20[8]; // [rsp+20h] [rbp-60h] BYREF
  char v21[8]; // [rsp+28h] [rbp-58h] BYREF
  char v22[8]; // [rsp+30h] [rbp-50h] BYREF
  char *v23[3]; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-30h]
  char *v25; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v26; // [rsp+70h] [rbp-10h]

  sub_18001FB6C((__int64 *)v23, L"Model.", a3);
  v5 = sub_180020E2C(a2, (__int64 *)&v25, 0LL, (unsigned __int64)v23[2]);
  v6 = sub_18001FE44((char *)v5, v23);
  if ( v26 >= 8 )
    sub_180010884(v25, 2 * v26 + 2);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 8) + 1465LL;
    v21[0] = 1;
    sub_1800441CC(v7);
    v8 = sub_1800441E4((__int64)v21);
    *v9 = v8;
  }
  if ( sub_18001FE44(a2, &qword_1801F89B8) )
  {
    v10 = *(_QWORD *)(a1 + 8) + 1466LL;
    v22[0] = 1;
    sub_1800441CC(v10);
    v11 = sub_1800441E4((__int64)v22);
    *v12 = v11;
  }
  if ( sub_18001FE44(a2, &qword_1801F8A18) || sub_18001FE44(a2, &qword_1801F8A38) || sub_18001FE44(a2, &qword_1801F8A58) )
  {
    v13 = *(_QWORD *)(a1 + 8) + 1467LL;
    v20[0] = 1;
    sub_1800441CC(v13);
    v14 = sub_1800441E4((__int64)v20);
    *v15 = v14;
  }
  if ( sub_18001FE44(a2, &qword_1801F8AD8)
    || sub_18001FE44(a2, &qword_1801F8A78)
    || sub_18001FE44(a2, &qword_1801F8A98)
    || (result = sub_18001FE44(a2, &qword_1801F8AB8)) != 0 )
  {
    v17 = *(_QWORD *)(a1 + 8) + 1468LL;
    v20[0] = 1;
    sub_1800441CC(v17);
    v19 = sub_1800441E4((__int64)v20);
    result = *v18;
    *v18 = v19;
  }
  if ( v24 >= 8 )
    return sub_180010884(v23[0], 2 * v24 + 2);
  return result;
}
