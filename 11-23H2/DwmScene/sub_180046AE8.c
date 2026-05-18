/*
 * XREFs of sub_180046AE8 @ 0x180046AE8
 * Callers:
 *     sub_18007DEA0 @ 0x18007DEA0 (sub_18007DEA0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180044C24 @ 0x180044C24 (sub_180044C24.c)
 *     sub_180044C48 @ 0x180044C48 (sub_180044C48.c)
 *     sub_180044E50 @ 0x180044E50 (sub_180044E50.c)
 *     sub_180045270 @ 0x180045270 (sub_180045270.c)
 *     sub_18004F718 @ 0x18004F718 (sub_18004F718.c)
 *     sub_1800613A4 @ 0x1800613A4 (sub_1800613A4.c)
 *     sub_1800824CC @ 0x1800824CC (sub_1800824CC.c)
 *     sub_180082598 @ 0x180082598 (sub_180082598.c)
 *     sub_180082B30 @ 0x180082B30 (sub_180082B30.c)
 *     sub_180082CD8 @ 0x180082CD8 (sub_180082CD8.c)
 *     sub_1800838E4 @ 0x1800838E4 (sub_1800838E4.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall sub_180046AE8(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // rbx
  _QWORD *v22; // rax
  __int64 v23; // rbx
  _QWORD *v24; // rax
  __int64 v25; // rbx
  _QWORD *v26; // rax
  __int64 v27; // rbx
  _QWORD *v28; // rax
  __int64 v29; // rbx
  _QWORD *v30; // rax
  __int64 v31; // rbx
  _QWORD *v32; // rax
  unsigned __int16 v33; // r14
  __int64 v34; // rbx
  _QWORD *v35; // rax
  unsigned __int16 v36; // si
  __int64 v37; // rbx
  _QWORD *v38; // rax
  unsigned __int16 v39; // di
  __int64 v40; // rbx
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // r9
  __int64 result; // rax
  __int64 v45; // rcx
  __int64 v46; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v47; // [rsp+28h] [rbp-D8h]
  _QWORD v48[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v49[6]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v50[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v51[64]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v52[64]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v53[64]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v54[64]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v55[64]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v56[64]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v57[64]; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v58[64]; // [rsp+270h] [rbp+170h] BYREF
  _BYTE v59[64]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v60[64]; // [rsp+2F0h] [rbp+1F0h] BYREF
  _BYTE v61[64]; // [rsp+330h] [rbp+230h] BYREF
  _BYTE v62[64]; // [rsp+370h] [rbp+270h] BYREF

  v49[4] = a2;
  sub_18004F718(a1, &v46, 7LL);
  v3 = sub_180017648(v50, (__int64)&unk_1801D79E8);
  sub_180044E50((__int64)v51, (__int64)v3, 7);
  v4 = sub_180017648(v49, (__int64)&unk_1801D7A08);
  sub_180044E50((__int64)v52, (__int64)v4, 7);
  v5 = sub_180017648(v50, (__int64)&unk_1801D7A28);
  sub_180044E50((__int64)v53, (__int64)v5, 5);
  v6 = sub_180017648(v49, (__int64)&unk_1801D7A48);
  sub_180044E50((__int64)v54, (__int64)v6, 5);
  v7 = sub_180017648(v50, (__int64)&unk_1801D7A68);
  sub_180044E50((__int64)v55, (__int64)v7, 5);
  v8 = sub_180017648(v49, (__int64)&unk_1801D7A88);
  sub_180044E50((__int64)v56, (__int64)v8, 5);
  v9 = sub_180017648(v50, (__int64)&unk_1801D7AA8);
  sub_180044E50((__int64)v57, (__int64)v9, 5);
  v10 = sub_180017648(v49, (__int64)&unk_1801D7AC8);
  sub_180044E50((__int64)v58, (__int64)v10, 7);
  v11 = sub_180017648(v50, (__int64)&unk_1801D7AE8);
  sub_180044E50((__int64)v59, (__int64)v11, 7);
  v12 = sub_180017648(v49, (__int64)&unk_1801D7B08);
  sub_180044E50((__int64)v60, (__int64)v12, 5);
  v13 = sub_180017648(v50, (__int64)&unk_1801D7B28);
  sub_180044E50((__int64)v61, (__int64)v13, 6);
  v14 = sub_180017648(v49, (__int64)&unk_1801D7B88);
  sub_180044E50((__int64)v62, (__int64)v14, 6);
  sub_1800824CC(v46, v51, 12LL, 0LL);
  v15 = v46;
  v16 = sub_180017648(v49, (__int64)&unk_1801D7BE8);
  sub_180044E50((__int64)v50, (__int64)v16, 5);
  sub_180082598(v15, v50, 1LL);
  sub_180045270((__int64)v50);
  v17 = v46;
  v18 = sub_180017648(v49, (__int64)&unk_1801D7BC8);
  sub_180044E50((__int64)v50, (__int64)v18, 2);
  sub_180082598(v17, v50, 1LL);
  sub_180045270((__int64)v50);
  v19 = v46;
  v20 = sub_180017648(v49, (__int64)&unk_1801D7BA8);
  sub_180044E50((__int64)v50, (__int64)v20, 2);
  sub_180082598(v19, v50, 0LL);
  sub_180045270((__int64)v50);
  v21 = v46;
  v22 = sub_180017648(v49, (__int64)&unk_1801D7C08);
  sub_180044E50((__int64)v50, (__int64)v22, 2);
  sub_180082598(v21, v50, 0LL);
  sub_180045270((__int64)v50);
  v23 = v46;
  v24 = sub_180017648(v49, (__int64)&unk_1801D7C28);
  sub_180044E50((__int64)v50, (__int64)v24, 2);
  sub_180082598(v23, v50, 0LL);
  sub_180045270((__int64)v50);
  v25 = v46;
  v26 = sub_180017648(v49, (__int64)&unk_1801D7C48);
  sub_180044E50((__int64)v50, (__int64)v26, 6);
  sub_180082598(v25, v50, 0LL);
  sub_180045270((__int64)v50);
  v27 = v46;
  v28 = sub_180017648(v49, (__int64)&unk_1801D7B48);
  sub_180044E50((__int64)v50, (__int64)v28, 2);
  sub_180082598(v27, v50, 0LL);
  sub_180045270((__int64)v50);
  v29 = v46;
  v30 = sub_180017648(v49, (__int64)&unk_1801D7B68);
  sub_180044E50((__int64)v50, (__int64)v30, 2);
  sub_180082598(v29, v50, 0LL);
  sub_180045270((__int64)v50);
  sub_180082CD8(v46, &unk_1801D7BA8);
  sub_180044C24();
  sub_180082CD8(v46, &unk_1801D7BC8);
  sub_180044C24();
  sub_180082CD8(v46, &unk_1801D7BE8);
  v48[0] = 0LL;
  v48[1] = _mm_srli_si128((__m128i)xmmword_18019BA90, 8).m128i_u64[0];
  sub_180044C48();
  sub_180082CD8(v46, &unk_1801D7C08);
  sub_180044C24();
  sub_180082CD8(v46, &unk_1801D7C28);
  sub_180044C24();
  sub_180082CD8(v46, &unk_1801D7B68);
  sub_180044C24();
  v31 = v46;
  v32 = sub_180017648(v49, (__int64)&unk_1801D7C88);
  sub_180044E50((__int64)v50, (__int64)v32, 8);
  v33 = sub_180082598(v31, v50, 0LL);
  sub_180045270((__int64)v50);
  v34 = v46;
  v35 = sub_180017648(v49, (__int64)&unk_1801D7CA8);
  sub_180044E50((__int64)v50, (__int64)v35, 8);
  v36 = sub_180082598(v34, v50, 0LL);
  sub_180045270((__int64)v50);
  v37 = v46;
  v38 = sub_180017648(v49, (__int64)&unk_1801D7CC8);
  sub_180044E50((__int64)v50, (__int64)v38, 8);
  v39 = sub_180082598(v37, v50, 0LL);
  sub_180045270((__int64)v50);
  v40 = v46;
  v41 = sub_180017648(v49, (__int64)&unk_1801D7C68);
  sub_180044E50((__int64)v50, (__int64)v41, 8);
  LOWORD(v40) = sub_180082598(v40, v50, 0LL);
  sub_180045270((__int64)v50);
  sub_1800838E4(v46, v33, 0LL);
  sub_1800838E4(v46, v36, 2LL);
  sub_1800838E4(v46, v39, 13LL);
  sub_1800838E4(v46, (unsigned __int16)v40, 12LL);
  sub_180082B30(v46);
  v42 = sub_18001246C(v48, &v46);
  sub_1800613A4(v43, v42);
  result = sub_18000B4B0((__int64)v51, 64LL, 12LL);
  if ( v47 )
    result = sub_180010530(v47);
  v45 = *(_QWORD *)(a2 + 8);
  if ( v45 )
    return sub_180010530(v45);
  return result;
}
