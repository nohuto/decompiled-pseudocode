/*
 * XREFs of sub_180045FF8 @ 0x180045FF8
 * Callers:
 *     sub_18007DEA0 @ 0x18007DEA0 (sub_18007DEA0.c)
 *     sub_18007FC90 @ 0x18007FC90 (sub_18007FC90.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001338C @ 0x18001338C (sub_18001338C.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180044E50 @ 0x180044E50 (sub_180044E50.c)
 *     sub_180044EAC @ 0x180044EAC (sub_180044EAC.c)
 *     sub_180044F5C @ 0x180044F5C (sub_180044F5C.c)
 *     sub_18004500C @ 0x18004500C (sub_18004500C.c)
 *     sub_180045120 @ 0x180045120 (sub_180045120.c)
 *     sub_1800451CC @ 0x1800451CC (sub_1800451CC.c)
 *     sub_18004F718 @ 0x18004F718 (sub_18004F718.c)
 *     sub_1800613A4 @ 0x1800613A4 (sub_1800613A4.c)
 *     sub_1800824CC @ 0x1800824CC (sub_1800824CC.c)
 *     sub_180082B30 @ 0x180082B30 (sub_180082B30.c)
 */

// Hidden C++ exception states: #wind=32
__int64 __fastcall sub_180045FF8(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // r8
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // r8
  void *v9; // rax
  void *v10; // rax
  void *v11; // rax
  void *v12; // rax
  void *v13; // rax
  void *v14; // rax
  void *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // r8
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // r8
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // r8
  _QWORD *v26; // rax
  __int64 v27; // r8
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // r9
  __int64 result; // rax
  __int64 v43; // rcx
  _QWORD v44[4]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v45[4]; // [rsp+48h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+68h] [rbp-98h] BYREF
  __int64 v47; // [rsp+78h] [rbp-88h] BYREF
  __int64 v48; // [rsp+80h] [rbp-80h]
  __int64 v49; // [rsp+88h] [rbp-78h]
  _BYTE v50[64]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v51[64]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v52[64]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v53[64]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v54[64]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v55[64]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v56[64]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v57[64]; // [rsp+250h] [rbp+150h] BYREF
  _BYTE v58[64]; // [rsp+290h] [rbp+190h] BYREF
  _BYTE v59[64]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _BYTE v60[64]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE v61[64]; // [rsp+350h] [rbp+250h] BYREF
  _BYTE v62[64]; // [rsp+390h] [rbp+290h] BYREF
  _BYTE v63[64]; // [rsp+3D0h] [rbp+2D0h] BYREF
  _BYTE v64[64]; // [rsp+410h] [rbp+310h] BYREF
  _BYTE v65[64]; // [rsp+450h] [rbp+350h] BYREF
  _BYTE v66[64]; // [rsp+490h] [rbp+390h] BYREF
  _BYTE v67[64]; // [rsp+4D0h] [rbp+3D0h] BYREF
  _BYTE v68[64]; // [rsp+510h] [rbp+410h] BYREF
  _BYTE v69[64]; // [rsp+550h] [rbp+450h] BYREF
  _BYTE v70[64]; // [rsp+590h] [rbp+490h] BYREF
  _BYTE v71[64]; // [rsp+5D0h] [rbp+4D0h] BYREF
  _BYTE v72[64]; // [rsp+610h] [rbp+510h] BYREF
  _BYTE v73[64]; // [rsp+650h] [rbp+550h] BYREF
  _BYTE v74[64]; // [rsp+690h] [rbp+590h] BYREF
  _BYTE v75[64]; // [rsp+6D0h] [rbp+5D0h] BYREF
  _BYTE v76[64]; // [rsp+710h] [rbp+610h] BYREF
  _BYTE v77[64]; // [rsp+750h] [rbp+650h] BYREF
  _BYTE v78[64]; // [rsp+790h] [rbp+690h] BYREF
  _BYTE v79[64]; // [rsp+7D0h] [rbp+6D0h] BYREF

  v49 = a2;
  sub_18004F718(a1, &v47, 2LL);
  si128 = (__m128i)xmmword_18019BA20;
  v3 = sub_180017648(v44, (__int64)&unk_1801D6CC8);
  sub_180044EAC((__int64)v50, (__int64)v3, v4, (__int128 *)si128.m128i_i8);
  si128 = (__m128i)xmmword_18019B970;
  v5 = sub_180017648(v45, (__int64)&unk_1801D6CE8);
  sub_180044EAC((__int64)v51, (__int64)v5, v6, (__int128 *)si128.m128i_i8);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18019BA40);
  v7 = sub_180017648(v44, (__int64)&unk_1801D6D08);
  sub_180044F5C((__int64)v52, (__int64)v7, v8, (__int128 *)si128.m128i_i8);
  v9 = sub_18001338C(v45, (__int64)&unk_1801D6D88, qword_1801D6CA8);
  sub_1800451CC((__int64)v53, (__int64)v9);
  v10 = sub_18001338C(v44, (__int64)&unk_1801D6DA8, qword_1801D6CA8);
  sub_1800451CC((__int64)v54, (__int64)v10);
  v11 = sub_18001338C(v45, (__int64)&unk_1801D6DC8, qword_1801D6CA8);
  sub_1800451CC((__int64)v55, (__int64)v11);
  v12 = sub_18001338C(v44, (__int64)&unk_1801D6DE8, qword_1801D6CA8);
  sub_1800451CC((__int64)v56, (__int64)v12);
  v13 = sub_18001338C(v45, (__int64)&unk_1801D6E08, qword_1801D6CA8);
  sub_1800451CC((__int64)v57, (__int64)v13);
  v14 = sub_18001338C(v44, (__int64)&unk_1801D6E28, qword_1801D6CA8);
  sub_1800451CC((__int64)v58, (__int64)v14);
  v15 = sub_18001338C(v45, (__int64)&unk_1801D6E48, qword_1801D6CA8);
  sub_1800451CC((__int64)v59, (__int64)v15);
  v16 = sub_180017648(v44, (__int64)&unk_1801D6E68);
  sub_180044E50((__int64)v60, (__int64)v16, 0);
  v17 = sub_180017648(v45, (__int64)&unk_1801D6E88);
  sub_180044E50((__int64)v61, (__int64)v17, 0);
  v18 = sub_180017648(v44, (__int64)&unk_1801D6D48);
  sub_180045120((__int64)v62, (__int64)v18, v19, 1.0);
  v20 = sub_180017648(v45, (__int64)&unk_1801D6EA8);
  sub_18004500C((__int64)v63, (__int64)v20);
  v21 = sub_180017648(v44, (__int64)&unk_1801D6EC8);
  sub_180045120((__int64)v64, (__int64)v21, v22, 0.5);
  v23 = sub_180017648(v45, (__int64)&unk_1801D6EE8);
  sub_180044E50((__int64)v65, (__int64)v23, 5);
  si128 = 0LL;
  v24 = sub_180017648(v44, (__int64)&unk_1801D6D68);
  sub_180044EAC((__int64)v66, (__int64)v24, v25, (__int128 *)si128.m128i_i8);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18019BA40);
  v26 = sub_180017648(v45, (__int64)&unk_1801D6D28);
  sub_180044F5C((__int64)v67, (__int64)v26, v27, (__int128 *)si128.m128i_i8);
  v28 = sub_180017648(v44, (__int64)&unk_1801D6F08);
  sub_1800451CC((__int64)v68, (__int64)v28);
  v29 = sub_180017648(v45, (__int64)&unk_1801D6F28);
  sub_1800451CC((__int64)v69, (__int64)v29);
  v30 = sub_180017648(v44, (__int64)&unk_1801D6F48);
  sub_1800451CC((__int64)v70, (__int64)v30);
  v31 = sub_180017648(v45, (__int64)&unk_1801D6F68);
  sub_1800451CC((__int64)v71, (__int64)v31);
  v32 = sub_180017648(v44, (__int64)&unk_1801D6F88);
  sub_1800451CC((__int64)v72, (__int64)v32);
  v33 = sub_180017648(v45, (__int64)&unk_1801D6D88);
  sub_180044E50((__int64)v73, (__int64)v33, 8);
  v34 = sub_180017648(v44, (__int64)&unk_1801D6DA8);
  sub_180044E50((__int64)v74, (__int64)v34, 8);
  v35 = sub_180017648(v45, (__int64)&unk_1801D6DC8);
  sub_180044E50((__int64)v75, (__int64)v35, 8);
  v36 = sub_180017648(v44, (__int64)&unk_1801D6DE8);
  sub_180044E50((__int64)v76, (__int64)v36, 8);
  v37 = sub_180017648(v45, (__int64)&unk_1801D6E28);
  sub_180044E50((__int64)v77, (__int64)v37, 8);
  v38 = sub_180017648(v44, (__int64)&unk_1801D6E08);
  sub_180044E50((__int64)v78, (__int64)v38, 8);
  v39 = sub_180017648(v45, (__int64)&unk_1801D6E48);
  sub_180044E50((__int64)v79, (__int64)v39, 8);
  sub_1800824CC(v47, v50, 30LL, 0LL);
  sub_180082B30(v47);
  v40 = sub_18001246C(&si128, &v47);
  sub_1800613A4(v41, v40);
  result = sub_18000B4B0((__int64)v50, 64LL, 30LL);
  if ( v48 )
    result = sub_180010530(v48);
  v43 = *(_QWORD *)(a2 + 8);
  if ( v43 )
    return sub_180010530(v43);
  return result;
}
