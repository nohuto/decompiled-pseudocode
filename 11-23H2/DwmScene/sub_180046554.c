/*
 * XREFs of sub_180046554 @ 0x180046554
 * Callers:
 *     sub_18007DEA0 @ 0x18007DEA0 (sub_18007DEA0.c)
 *     sub_18007FC90 @ 0x18007FC90 (sub_18007FC90.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180044C30 @ 0x180044C30 (sub_180044C30.c)
 *     sub_180044E50 @ 0x180044E50 (sub_180044E50.c)
 *     sub_180044F5C @ 0x180044F5C (sub_180044F5C.c)
 *     sub_18004F718 @ 0x18004F718 (sub_18004F718.c)
 *     sub_1800613A4 @ 0x1800613A4 (sub_1800613A4.c)
 *     sub_18008214C @ 0x18008214C (sub_18008214C.c)
 *     sub_1800824CC @ 0x1800824CC (sub_1800824CC.c)
 *     sub_180082B30 @ 0x180082B30 (sub_180082B30.c)
 *     sub_180082CD8 @ 0x180082CD8 (sub_180082CD8.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_180046554(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // r8
  _QWORD *v25; // rax
  __int64 v26; // r8
  _QWORD *v27; // rax
  __int64 v28; // r8
  _QWORD *v29; // rax
  __int64 v30; // r8
  _QWORD *v31; // rax
  __int64 v32; // r10
  __int64 result; // rax
  __int64 v34; // rcx
  __int64 v35; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v36; // [rsp+28h] [rbp-D8h]
  __int64 v37; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v38[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v39[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v40; // [rsp+80h] [rbp-80h] BYREF
  __int128 v41; // [rsp+90h] [rbp-70h]
  __int128 v42; // [rsp+A0h] [rbp-60h]
  __int128 v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+C0h] [rbp-40h]
  _BYTE v45[64]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v46[64]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v47[64]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v48[64]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v49[64]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v50[64]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v51[64]; // [rsp+250h] [rbp+150h] BYREF
  _BYTE v52[64]; // [rsp+290h] [rbp+190h] BYREF
  _BYTE v53[64]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _BYTE v54[64]; // [rsp+310h] [rbp+210h] BYREF

  v44 = a2;
  sub_18004F718(a1, &v35, 0LL);
  v4 = sub_180017648(v38, (__int64)&unk_1801D6FA8);
  sub_180044E50((__int64)v45, (__int64)v4, 7);
  v5 = sub_180017648(v39, (__int64)&unk_1801D6FC8);
  sub_180044E50((__int64)v46, (__int64)v5, 7);
  v6 = sub_180017648(v38, (__int64)&unk_1801D6FE8);
  sub_180044E50((__int64)v47, (__int64)v6, 2);
  v7 = sub_180017648(v39, (__int64)&unk_1801D7008);
  sub_180044E50((__int64)v48, (__int64)v7, 2);
  v8 = sub_180017648(v38, (__int64)&unk_1801D7028);
  sub_180044E50((__int64)v49, (__int64)v8, 2);
  sub_1800824CC(v35, v45, 5LL, 0LL);
  sub_180082CD8(v35, &unk_1801D6FA8);
  v40 = xmmword_180106A40;
  v41 = xmmword_180106A50;
  v42 = xmmword_180106A60;
  v43 = xmmword_180106A70;
  sub_180044C30();
  sub_180082CD8(v35, &unk_1801D6FC8);
  v40 = xmmword_180106A40;
  v41 = xmmword_180106A50;
  v42 = xmmword_180106A60;
  v43 = xmmword_180106A70;
  sub_180044C30();
  sub_180082B30(v35);
  v9 = sub_18001246C(&v37, &v35);
  sub_1800613A4(v10, v9);
  sub_18000B4B0((__int64)v45, 64LL, 5LL);
  if ( v36 )
    sub_180010530(v36);
  sub_18004F718(a1, &v35, 9LL);
  sub_18008214C(v35, &unk_1801D71C8, 7LL, 3LL);
  v38[0] = 0LL;
  v11 = sub_180017648(v39, (__int64)&unk_1801D7048);
  sub_180044F5C((__int64)v45, (__int64)v11, v12, v38);
  v38[0] = 0LL;
  v13 = sub_180017648(&v40, (__int64)&unk_1801D7068);
  sub_180044F5C((__int64)v46, (__int64)v13, v14, v38);
  v38[0] = 0LL;
  v15 = sub_180017648(v39, (__int64)&unk_1801D7088);
  sub_180044F5C((__int64)v47, (__int64)v15, v16, v38);
  v38[0] = 0LL;
  v17 = sub_180017648(&v40, (__int64)&unk_1801D70A8);
  sub_180044F5C((__int64)v48, (__int64)v17, v18, v38);
  v38[0] = 0LL;
  v19 = sub_180017648(v39, (__int64)&unk_1801D70C8);
  sub_180044F5C((__int64)v49, (__int64)v19, v20, v38);
  v38[0] = 0LL;
  v21 = sub_180017648(&v40, (__int64)&unk_1801D70E8);
  sub_180044F5C((__int64)v50, (__int64)v21, v22, v38);
  v38[0] = 0LL;
  v23 = sub_180017648(v39, (__int64)&unk_1801D7108);
  sub_180044F5C((__int64)v51, (__int64)v23, v24, v38);
  v38[0] = 0LL;
  v25 = sub_180017648(&v40, (__int64)&unk_1801D7128);
  sub_180044F5C((__int64)v52, (__int64)v25, v26, v38);
  v38[0] = 0LL;
  v27 = sub_180017648(v39, (__int64)&unk_1801D7148);
  sub_180044F5C((__int64)v53, (__int64)v27, v28, v38);
  v38[0] = 0LL;
  v29 = sub_180017648(&v40, (__int64)&unk_1801D7168);
  sub_180044F5C((__int64)v54, (__int64)v29, v30, v38);
  sub_1800824CC(v35, v45, 10LL, 0LL);
  sub_18008214C(v35, &unk_1801D71E8, 5LL, 3LL);
  sub_18008214C(v35, &unk_1801D7208, 5LL, 3LL);
  sub_18008214C(v35, &unk_1801D7228, 5LL, 3LL);
  sub_18008214C(v35, &unk_1801D7188, 5LL, 3LL);
  sub_18008214C(v35, &unk_1801D71A8, 5LL, 3LL);
  sub_180082B30(v35);
  v31 = sub_18001246C(v38, &v35);
  sub_1800613A4(v32, v31);
  result = sub_18000B4B0((__int64)v45, 64LL, 10LL);
  if ( v36 )
    result = sub_180010530(v36);
  v34 = *(_QWORD *)(a2 + 8);
  if ( v34 )
    return sub_180010530(v34);
  return result;
}
