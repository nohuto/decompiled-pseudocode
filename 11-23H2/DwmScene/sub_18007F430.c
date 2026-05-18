/*
 * XREFs of sub_18007F430 @ 0x18007F430
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180017C9C @ 0x180017C9C (sub_180017C9C.c)
 *     sub_18004347C @ 0x18004347C (sub_18004347C.c)
 *     sub_180044E50 @ 0x180044E50 (sub_180044E50.c)
 *     sub_180045270 @ 0x180045270 (sub_180045270.c)
 *     sub_18004F718 @ 0x18004F718 (sub_18004F718.c)
 *     sub_18004F760 @ 0x18004F760 (sub_18004F760.c)
 *     sub_180060138 @ 0x180060138 (sub_180060138.c)
 *     sub_180060378 @ 0x180060378 (sub_180060378.c)
 *     sub_180060800 @ 0x180060800 (sub_180060800.c)
 *     sub_180060980 @ 0x180060980 (sub_180060980.c)
 *     sub_1800613A4 @ 0x1800613A4 (sub_1800613A4.c)
 *     sub_18007F33C @ 0x18007F33C (sub_18007F33C.c)
 *     sub_180082598 @ 0x180082598 (sub_180082598.c)
 *     sub_180082B30 @ 0x180082B30 (sub_180082B30.c)
 *     sub_180087698 @ 0x180087698 (sub_180087698.c)
 *     sub_1800878E8 @ 0x1800878E8 (sub_1800878E8.c)
 *     sub_180087C3C @ 0x180087C3C (sub_180087C3C.c)
 *     sub_18008C150 @ 0x18008C150 (sub_18008C150.c)
 *     sub_18008C460 @ 0x18008C460 (sub_18008C460.c)
 *     sub_18008C470 @ 0x18008C470 (sub_18008C470.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18007F430(__int64 a1, __int64 a2, int **a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rbx
  void **v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  int *v18; // r14
  int *v19; // r15
  __int64 *v20; // rax
  _QWORD *v21; // rbx
  _QWORD *v22; // rax
  _QWORD *v23; // r9
  __int64 v24; // rbx
  __int128 *v25; // rbx
  _QWORD *v26; // rax
  __int128 *v27; // rbx
  _QWORD *v28; // rax
  __int128 *v29; // rbx
  _QWORD *v30; // rax
  __int128 *v31; // rbx
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // r8
  __int64 result; // rax
  __int128 *v36; // [rsp+38h] [rbp-91h] BYREF
  __int64 v37; // [rsp+40h] [rbp-89h]
  __int128 v38; // [rsp+48h] [rbp-81h] BYREF
  __int64 v39; // [rsp+58h] [rbp-71h] BYREF
  __int64 v40; // [rsp+60h] [rbp-69h]
  _QWORD v41[2]; // [rsp+68h] [rbp-61h] BYREF
  __int128 v42; // [rsp+78h] [rbp-51h]
  __int64 v43; // [rsp+88h] [rbp-41h]
  __int64 v44; // [rsp+90h] [rbp-39h]
  _QWORD v45[8]; // [rsp+A0h] [rbp-29h] BYREF

  v36 = &v38;
  v6 = sub_18004347C(a1 + 8, &v38);
  v7 = sub_180017648(v45, (__int64)&unk_1801D82A8);
  v8 = sub_18004F760(a2, &v39, v7, v6);
  sub_180011020((_QWORD *)(a1 + 56), v8);
  if ( v40 )
    sub_180010530(v40);
  v9 = *(_QWORD *)(a1 + 56);
  v10 = (void **)sub_180010DD0(v45, (__int64)"Symbol");
  sub_18007F33C(v9, v10);
  sub_180017C9C((_QWORD *)(*(_QWORD *)(a1 + 56) + 528LL), (__int64)a3);
  v11 = sub_18008C460();
  v14 = sub_18008C150(v13, v12) | v11;
  v17 = sub_18008C470(v16, v15) | v14;
  v38 = 0LL;
  v18 = *a3;
  v19 = a3[1];
  while ( v18 != v19 )
  {
    sub_180060138(*(_QWORD *)(a1 + 56), *v18);
    v20 = sub_180060378(*(_QWORD *)(a1 + 56), &v39, 0LL, 0LL, 1);
    sub_180011020(&v38, v20);
    if ( v40 )
      sub_180010530(v40);
    v21 = sub_180010DD0(v45, (__int64)byte_180106082);
    v22 = sub_180010DD0(v41, (__int64)"Symbol");
    v23 = v21;
    v24 = v38;
    sub_1800878E8(v38, v22, 0LL, v23);
    sub_180087698(v24, 8, 2, 0, 1);
    LODWORD(v41[0]) = 0;
    v41[1] = v17;
    v42 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    sub_180087C3C(v24, v41);
    sub_180060980(*(_QWORD *)(a1 + 56));
    ++v18;
  }
  sub_18004F718(a2, &v36, 4u);
  v25 = v36;
  v26 = sub_180017648(v41, (__int64)&unk_1801D82C8);
  sub_180044E50((__int64)v45, (__int64)v26, 7);
  sub_180082598(v25, v45, 0LL);
  sub_180045270((__int64)v45);
  v27 = v36;
  v28 = sub_180017648(v41, (__int64)&unk_1801D82E8);
  sub_180044E50((__int64)v45, (__int64)v28, 5);
  sub_180082598(v27, v45, 0LL);
  sub_180045270((__int64)v45);
  v29 = v36;
  v30 = sub_180017648(v41, (__int64)&unk_1801D8308);
  sub_180044E50((__int64)v45, (__int64)v30, 2);
  sub_180082598(v29, v45, 0LL);
  sub_180045270((__int64)v45);
  v31 = v36;
  v32 = sub_180017648(v41, (__int64)&unk_1801D8328);
  sub_180044E50((__int64)v45, (__int64)v32, 2);
  sub_180082598(v31, v45, 0LL);
  sub_180045270((__int64)v45);
  sub_180082B30(v36);
  v33 = sub_18001246C(&v39, &v36);
  sub_1800613A4(v34, v33);
  if ( v37 )
    sub_180010530(v37);
  result = sub_180060800(*(_QWORD *)(a1 + 56));
  if ( *((_QWORD *)&v38 + 1) )
    return sub_180010530(*((__int64 *)&v38 + 1));
  return result;
}
