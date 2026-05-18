/*
 * XREFs of sub_18007F820 @ 0x18007F820
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180017C9C @ 0x180017C9C (sub_180017C9C.c)
 *     sub_18004347C @ 0x18004347C (sub_18004347C.c)
 *     sub_180044E50 @ 0x180044E50 (sub_180044E50.c)
 *     sub_18004F718 @ 0x18004F718 (sub_18004F718.c)
 *     sub_18004F760 @ 0x18004F760 (sub_18004F760.c)
 *     sub_180060138 @ 0x180060138 (sub_180060138.c)
 *     sub_180060378 @ 0x180060378 (sub_180060378.c)
 *     sub_180060800 @ 0x180060800 (sub_180060800.c)
 *     sub_180060980 @ 0x180060980 (sub_180060980.c)
 *     sub_1800613A4 @ 0x1800613A4 (sub_1800613A4.c)
 *     sub_18007F33C @ 0x18007F33C (sub_18007F33C.c)
 *     sub_1800824CC @ 0x1800824CC (sub_1800824CC.c)
 *     sub_180082B30 @ 0x180082B30 (sub_180082B30.c)
 *     sub_180087698 @ 0x180087698 (sub_180087698.c)
 *     sub_1800878E8 @ 0x1800878E8 (sub_1800878E8.c)
 *     sub_180087C3C @ 0x180087C3C (sub_180087C3C.c)
 *     sub_18008C150 @ 0x18008C150 (sub_18008C150.c)
 *     sub_18008C460 @ 0x18008C460 (sub_18008C460.c)
 *     sub_18008C480 @ 0x18008C480 (sub_18008C480.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18007F820(__int64 a1, __int64 a2, int **a3)
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
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // r9
  __int64 result; // rax
  __int128 *v30; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+40h] [rbp-C0h]
  __int128 v32; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h]
  _QWORD v35[4]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v36[2]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v37; // [rsp+98h] [rbp-68h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  __int64 v39; // [rsp+B0h] [rbp-50h]
  _BYTE v40[64]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v41[64]; // [rsp+100h] [rbp+0h] BYREF

  v30 = &v32;
  v6 = sub_18004347C(a1 + 8, &v32);
  v7 = sub_180017648(v35, (__int64)&unk_1801D83A8);
  v8 = sub_18004F760(a2, &v33, v7, v6);
  sub_180011020((_QWORD *)(a1 + 56), v8);
  if ( v34 )
    sub_180010530(v34);
  v9 = *(_QWORD *)(a1 + 56);
  v10 = (void **)sub_180010DD0(v35, (__int64)"Font");
  sub_18007F33C(v9, v10);
  sub_180017C9C((_QWORD *)(*(_QWORD *)(a1 + 56) + 528LL), (__int64)a3);
  v11 = sub_18008C460();
  v14 = sub_18008C480(v13, v12) | v11;
  v17 = sub_18008C150(v16, v15) | v14;
  v32 = 0LL;
  v18 = *a3;
  v19 = a3[1];
  while ( v18 != v19 )
  {
    sub_180060138(*(_QWORD *)(a1 + 56), *v18);
    v20 = sub_180060378(*(_QWORD *)(a1 + 56), &v33, 0LL, 0LL, 1);
    sub_180011020(&v32, v20);
    if ( v34 )
      sub_180010530(v34);
    v21 = sub_180010DD0(v35, (__int64)byte_180106082);
    v22 = sub_180010DD0(v36, (__int64)"Font");
    v23 = v21;
    v24 = v32;
    sub_1800878E8(v32, v22, 0LL, v23);
    sub_180087698(v24, 8, 2, 0, 1);
    LODWORD(v36[0]) = 0;
    v36[1] = v17;
    v37 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    sub_180087C3C(v24, v36);
    sub_180060980(*(_QWORD *)(a1 + 56));
    ++v18;
  }
  sub_18004F718(a2, &v30, 2u);
  v25 = sub_180017648(v36, (__int64)&unk_1801D83E8);
  sub_180044E50((__int64)v40, (__int64)v25, 5);
  v26 = sub_180017648(v35, (__int64)&unk_1801D83C8);
  sub_180044E50((__int64)v41, (__int64)v26, 8);
  sub_1800824CC(v30, v40, 2LL, 0LL);
  sub_180082B30(v30);
  v27 = sub_18001246C(&v33, &v30);
  sub_1800613A4(v28, v27);
  sub_18000B4B0((__int64)v40, 64LL, 2LL);
  if ( v31 )
    sub_180010530(v31);
  result = sub_180060800(*(_QWORD *)(a1 + 56));
  if ( *((_QWORD *)&v32 + 1) )
    return sub_180010530(*((__int64 *)&v32 + 1));
  return result;
}
