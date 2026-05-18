/*
 * XREFs of sub_180066720 @ 0x180066720
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013D44 @ 0x180013D44 (sub_180013D44.c)
 *     sub_180014620 @ 0x180014620 (sub_180014620.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18003D3C8 @ 0x18003D3C8 (sub_18003D3C8.c)
 *     sub_18003D4BC @ 0x18003D4BC (sub_18003D4BC.c)
 *     sub_1800403BC @ 0x1800403BC (sub_1800403BC.c)
 *     sub_1800412EC @ 0x1800412EC (sub_1800412EC.c)
 *     sub_1800446A0 @ 0x1800446A0 (sub_1800446A0.c)
 *     sub_1800446D8 @ 0x1800446D8 (sub_1800446D8.c)
 *     sub_180044798 @ 0x180044798 (sub_180044798.c)
 *     sub_1800448C0 @ 0x1800448C0 (sub_1800448C0.c)
 *     sub_18004CA0C @ 0x18004CA0C (sub_18004CA0C.c)
 *     sub_1800502A4 @ 0x1800502A4 (sub_1800502A4.c)
 *     sub_180060148 @ 0x180060148 (sub_180060148.c)
 *     sub_1800628C8 @ 0x1800628C8 (sub_1800628C8.c)
 *     sub_18008CF88 @ 0x18008CF88 (sub_18008CF88.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180066720(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // r10
  __int64 v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 result; // rax
  __int64 v15; // rsi
  __int64 *v16; // rax
  __int64 *v17; // rdi
  __int64 v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // r10
  __int64 *v21; // rax
  __int64 v22; // rbx
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // [rsp+20h] [rbp-99h] BYREF
  __int64 v26; // [rsp+28h] [rbp-91h]
  __int64 v27; // [rsp+30h] [rbp-89h] BYREF
  __int64 v28; // [rsp+38h] [rbp-81h]
  __int64 v29; // [rsp+40h] [rbp-79h] BYREF
  __int64 v30; // [rsp+48h] [rbp-71h]
  __int64 v31; // [rsp+50h] [rbp-69h] BYREF
  __int64 v32; // [rsp+58h] [rbp-61h]
  __int64 v33; // [rsp+60h] [rbp-59h] BYREF
  __int64 v34; // [rsp+68h] [rbp-51h]
  __int64 v35; // [rsp+70h] [rbp-49h] BYREF
  __int64 v36; // [rsp+78h] [rbp-41h]
  __int64 v37; // [rsp+90h] [rbp-29h] BYREF
  __int64 v38; // [rsp+98h] [rbp-21h]
  __int64 v39; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-11h]
  __int64 v41; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v42; // [rsp+C8h] [rbp+Fh]

  v6 = sub_180017648(&v35, (__int64)&unk_1801D7E88);
  sub_1800502A4(a2, &v33, v6);
  sub_180060148(v33, &v29);
  sub_1800446D8(v29, (__int64)&unk_1801D7D48, 1);
  sub_1800446A0(v29);
  v7 = *a3;
  v8 = sub_180012440(&v35, (__int64)&unk_1801D3FA8);
  sub_1800412EC(v7, (__int64)&v31, v8);
  sub_18008CF88(&v37, a1, 0LL);
  v9 = sub_18001246C(&v27, &v31);
  sub_1800403BC(v10, (__int64)&v35, qword_1801D3F38, v9);
  sub_180010DD0(&v41, (__int64)"PlanarReflection");
  v11 = v35;
  sub_18003D4BC(v35, (void **)&v41);
  sub_180011B24((__int64)&v41);
  sub_180013D44(v11, &v41);
  v12 = sub_18001246C(&v27, &v37);
  sub_180014620(v41, v12);
  v13 = sub_18001246C(&v27, &v29);
  sub_18004CA0C(v41, v13);
  result = sub_18003D3C8(v11, 1, 0);
  if ( (*(_BYTE *)(a1 + 560) & 1) != 0 )
  {
    v15 = sub_1800628C8(*a3);
    v16 = sub_180060148(v33, &v39);
    v17 = (__int64 *)(v15 + 216);
    sub_180011020((_QWORD *)(v15 + 216), v16);
    if ( v40 )
      sub_180010530(v40);
    sub_1800446A0(*v17);
    sub_1800448C0(*v17, 3);
    sub_180044798(*v17, 1, 1, 1);
    LOBYTE(v18) = 1;
    sub_18008CF88(&v27, a1, v18);
    v19 = sub_18001246C(&v39, &v31);
    v21 = (__int64 *)sub_1800403BC(v20, (__int64)&v25, qword_1801D3F60, v19);
    sub_180011020((_QWORD *)(v15 + 200), v21);
    if ( v26 )
      sub_180010530(v26);
    v22 = *(_QWORD *)(v15 + 200);
    sub_180010DD0(&v39, (__int64)"GroundBack");
    sub_18003D4BC(v22, (void **)&v39);
    sub_180011B24((__int64)&v39);
    sub_180013D44(*(_QWORD *)(v15 + 200), &v39);
    v23 = sub_18001246C(&v25, &v27);
    sub_180014620(v39, v23);
    v24 = sub_18001246C(&v25, (_QWORD *)(v15 + 216));
    result = sub_18004CA0C(v39, v24);
    if ( v40 )
      result = sub_180010530(v40);
    if ( v28 )
      result = sub_180010530(v28);
  }
  if ( v42 )
    result = sub_180010530(v42);
  if ( v36 )
    result = sub_180010530(v36);
  if ( v38 )
    result = sub_180010530(v38);
  if ( v32 )
    result = sub_180010530(v32);
  if ( v30 )
    result = sub_180010530(v30);
  if ( v34 )
    return sub_180010530(v34);
  return result;
}
