/*
 * XREFs of sub_18007FF54 @ 0x18007FF54
 * Callers:
 *     sub_1800808B0 @ 0x1800808B0 (sub_1800808B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180044C30 @ 0x180044C30 (sub_180044C30.c)
 *     sub_180044E50 @ 0x180044E50 (sub_180044E50.c)
 *     sub_180044EAC @ 0x180044EAC (sub_180044EAC.c)
 *     sub_180044F5C @ 0x180044F5C (sub_180044F5C.c)
 *     sub_180045120 @ 0x180045120 (sub_180045120.c)
 *     sub_180045270 @ 0x180045270 (sub_180045270.c)
 *     sub_18004F718 @ 0x18004F718 (sub_18004F718.c)
 *     sub_1800613A4 @ 0x1800613A4 (sub_1800613A4.c)
 *     sub_18007FECC @ 0x18007FECC (sub_18007FECC.c)
 *     sub_18008214C @ 0x18008214C (sub_18008214C.c)
 *     sub_1800824CC @ 0x1800824CC (sub_1800824CC.c)
 *     sub_180082598 @ 0x180082598 (sub_180082598.c)
 *     sub_180082B30 @ 0x180082B30 (sub_180082B30.c)
 *     sub_180082CD8 @ 0x180082CD8 (sub_180082CD8.c)
 *     sub_1800838E4 @ 0x1800838E4 (sub_1800838E4.c)
 */

// Hidden C++ exception states: #wind=22
char __fastcall sub_18007FF54(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // r8
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // r8
  _QWORD *v24; // rax
  __int64 v25; // r8
  _QWORD *v26; // rax
  __int64 v27; // r8
  _QWORD *v28; // rax
  __int64 v29; // r8
  _QWORD *v30; // rax
  __int64 v31; // r8
  _QWORD *v32; // rax
  __int64 v33; // r8
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // r8
  _QWORD *v40; // rax
  __int64 v41; // r8
  _QWORD *v42; // rax
  __int64 v43; // r8
  _QWORD *v44; // rax
  __int64 v45; // r8
  _QWORD *v46; // rax
  __int64 v47; // r8
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rbx
  _QWORD *v53; // rax
  unsigned __int16 v54; // si
  __int64 v55; // rbx
  _QWORD *v56; // rax
  unsigned __int16 v57; // di
  __int64 v58; // rbx
  _QWORD *v59; // rax
  int v60; // r8d
  unsigned int v61; // edi
  _QWORD *v62; // rax
  __int64 v63; // r8
  _QWORD *v64; // rax
  __int64 v65; // r8
  char result; // al
  __int64 v67; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v68; // [rsp+40h] [rbp-C0h]
  __int128 v69[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v70; // [rsp+68h] [rbp-98h] BYREF
  __int128 v71; // [rsp+78h] [rbp-88h] BYREF
  __m128i si128; // [rsp+88h] [rbp-78h] BYREF
  __m128i v73; // [rsp+98h] [rbp-68h] BYREF
  __m128i v74; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v75; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v76; // [rsp+D0h] [rbp-30h]
  __int128 v77; // [rsp+E0h] [rbp-20h]
  __int128 v78; // [rsp+F0h] [rbp-10h]
  _QWORD v79[8]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v80[64]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v81[64]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v82[64]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v83[64]; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v84[64]; // [rsp+240h] [rbp+140h] BYREF
  _BYTE v85[64]; // [rsp+280h] [rbp+180h] BYREF
  _BYTE v86[64]; // [rsp+2C0h] [rbp+1C0h] BYREF
  _BYTE v87[64]; // [rsp+300h] [rbp+200h] BYREF
  _BYTE v88[64]; // [rsp+340h] [rbp+240h] BYREF
  _BYTE v89[64]; // [rsp+380h] [rbp+280h] BYREF
  _BYTE v90[64]; // [rsp+3C0h] [rbp+2C0h] BYREF
  _BYTE v91[64]; // [rsp+400h] [rbp+300h] BYREF
  _BYTE v92[64]; // [rsp+440h] [rbp+340h] BYREF
  _BYTE v93[64]; // [rsp+480h] [rbp+380h] BYREF
  _BYTE v94[64]; // [rsp+4C0h] [rbp+3C0h] BYREF
  _BYTE v95[64]; // [rsp+500h] [rbp+400h] BYREF
  _BYTE v96[64]; // [rsp+540h] [rbp+440h] BYREF
  _BYTE v97[64]; // [rsp+580h] [rbp+480h] BYREF

  sub_18004F718(a2, &v67, 0);
  v3 = v67;
  v4 = sub_180017648(v69, (__int64)&unk_1801D8528);
  sub_180044E50((__int64)&v75, (__int64)v4, 7);
  sub_180082598(v3, &v75, 0LL);
  sub_180045270((__int64)&v75);
  sub_180082CD8(v67, &unk_1801D8528);
  v75 = xmmword_180106A40;
  v76 = xmmword_180106A50;
  v77 = xmmword_180106A60;
  v78 = xmmword_180106A70;
  sub_180044C30();
  sub_180082B30(v67);
  v5 = sub_18001246C(&v70, &v67);
  sub_1800613A4(v6, v5);
  if ( v68 )
    sub_180010530(v68);
  sub_18004F718(a2, &v67, 4u);
  v7 = v67;
  v8 = sub_180017648(v69, (__int64)&unk_1801D7908);
  sub_180044E50((__int64)&v75, (__int64)v8, 7);
  sub_180082598(v7, &v75, 1LL);
  sub_180045270((__int64)&v75);
  sub_180082CD8(v67, &unk_1801D7908);
  v75 = xmmword_180106A40;
  v76 = xmmword_180106A50;
  v77 = xmmword_180106A60;
  v78 = xmmword_180106A70;
  sub_180044C30();
  v9 = v67;
  v10 = sub_180017648(v69, (__int64)&unk_1801D7928);
  sub_180044E50((__int64)&v75, (__int64)v10, 5);
  sub_180082598(v9, &v75, 1LL);
  sub_180045270((__int64)&v75);
  sub_180082B30(v67);
  v11 = sub_18001246C(&v70, &v67);
  sub_1800613A4(v12, v11);
  if ( v68 )
    sub_180010530(v68);
  sub_18004F718(a2, &v67, 2u);
  v13 = v67;
  v14 = sub_180017648(v69, (__int64)&unk_1801D8548);
  sub_180044E50((__int64)&v75, (__int64)v14, 8);
  LOWORD(v13) = sub_180082598(v13, &v75, 0LL);
  sub_180045270((__int64)&v75);
  sub_1800838E4(v67, (unsigned __int16)v13, 11LL);
  v15 = v67;
  v16 = sub_180017648(v69, (__int64)&unk_1801D8728);
  sub_180044E50((__int64)&v75, (__int64)v16, 8);
  LOWORD(v15) = sub_180082598(v15, &v75, 0LL);
  sub_180045270((__int64)&v75);
  sub_1800838E4(v67, (unsigned __int16)v15, 12LL);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18019BA40);
  v73 = si128;
  v74 = si128;
  v69[0] = (__int128)si128;
  v71 = 0LL;
  v70 = 0LL;
  sub_18007FECC(0.25, 0.25, 0.25, (__int64)&v71, (__int64)&v70);
  v17 = sub_180017648(v79, (__int64)&unk_1801D8568);
  sub_180044E50((__int64)v80, (__int64)v17, 2);
  v18 = sub_180017648(&v75, (__int64)&unk_1801D8588);
  sub_180045120((__int64)v81, (__int64)v18, v19, 1.0);
  v20 = sub_180017648(v79, (__int64)&unk_1801D85A8);
  sub_180044E50((__int64)v82, (__int64)v20, 2);
  v21 = sub_180017648(&v75, (__int64)&unk_1801D85C8);
  sub_180044E50((__int64)v83, (__int64)v21, 2);
  v22 = sub_180017648(v79, (__int64)&unk_1801D85E8);
  sub_180044F5C((__int64)v84, (__int64)v22, v23, &v71);
  v24 = sub_180017648(&v75, (__int64)&unk_1801D8608);
  sub_180044F5C((__int64)v85, (__int64)v24, v25, &v70);
  v26 = sub_180017648(v79, (__int64)&unk_1801D8628);
  sub_180044EAC((__int64)v86, (__int64)v26, v27, (__int128 *)si128.m128i_i8);
  v28 = sub_180017648(&v75, (__int64)&unk_1801D8648);
  sub_180044EAC((__int64)v87, (__int64)v28, v29, (__int128 *)v73.m128i_i8);
  v30 = sub_180017648(v79, (__int64)&unk_1801D8668);
  sub_180044EAC((__int64)v88, (__int64)v30, v31, (__int128 *)v74.m128i_i8);
  v32 = sub_180017648(&v75, (__int64)&unk_1801D8688);
  sub_180044EAC((__int64)v89, (__int64)v32, v33, v69);
  v34 = sub_180017648(v79, (__int64)&unk_1801D86A8);
  sub_180044E50((__int64)v90, (__int64)v34, 5);
  v35 = sub_180017648(&v75, (__int64)&unk_1801D86C8);
  sub_180044E50((__int64)v91, (__int64)v35, 5);
  v36 = sub_180017648(v79, (__int64)&unk_1801D86E8);
  sub_180044E50((__int64)v92, (__int64)v36, 5);
  v37 = sub_180017648(&v75, (__int64)&unk_1801D8708);
  sub_180044E50((__int64)v93, (__int64)v37, 5);
  v69[0] = 0LL;
  v38 = sub_180017648(v79, (__int64)&unk_1801D8748);
  sub_180044F5C((__int64)v94, (__int64)v38, v39, v69);
  v69[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_18019BA40);
  v40 = sub_180017648(&v75, (__int64)&unk_1801D8768);
  sub_180044EAC((__int64)v95, (__int64)v40, v41, v69);
  v69[0] = 0LL;
  v42 = sub_180017648(v79, (__int64)&unk_1801D8788);
  sub_180044EAC((__int64)v96, (__int64)v42, v43, v69);
  v69[0] = 0LL;
  v44 = sub_180017648(&v75, (__int64)&unk_1801D87A8);
  sub_180044EAC((__int64)v97, (__int64)v44, v45, v69);
  sub_1800824CC(v67, v80, 18LL, 0LL);
  sub_180082B30(v67);
  v46 = sub_18001246C(v69, &v67);
  sub_1800613A4(v47, v46);
  sub_18000B4B0((__int64)v80, 64LL, 18LL);
  if ( v68 )
    sub_180010530(v68);
  sub_18004F718(a2, &v67, 6u);
  v48 = sub_180017648(&v75, (__int64)&unk_1801D7408);
  sub_180044E50((__int64)v80, (__int64)v48, 2);
  v49 = sub_180017648(v79, (__int64)&unk_1801D7428);
  sub_180044E50((__int64)v81, (__int64)v49, 2);
  v50 = sub_180017648(&v75, (__int64)&unk_1801D7448);
  sub_180044E50((__int64)v82, (__int64)v50, 2);
  v51 = sub_180017648(v79, (__int64)&unk_1801D74A8);
  sub_180044E50((__int64)v83, (__int64)v51, 2);
  sub_1800824CC(v67, v80, 4LL, 1LL);
  v52 = v67;
  v53 = sub_180017648(&v75, (__int64)&unk_1801D7788);
  sub_180044E50((__int64)v79, (__int64)v53, 8);
  v54 = sub_180082598(v52, v79, 1LL);
  sub_180045270((__int64)v79);
  v55 = v67;
  v56 = sub_180017648(&v75, (__int64)&unk_1801D77A8);
  sub_180044E50((__int64)v79, (__int64)v56, 8);
  v57 = sub_180082598(v55, v79, 1LL);
  sub_180045270((__int64)v79);
  v58 = v67;
  v59 = sub_180017648(&v75, (__int64)&unk_1801D77C8);
  sub_180044E50((__int64)v79, (__int64)v59, 8);
  LOWORD(v58) = sub_180082598(v58, v79, 1LL);
  sub_180045270((__int64)v79);
  sub_1800838E4(v67, v54, 5LL);
  sub_1800838E4(v67, v57, 6LL);
  v61 = v60 + 1;
  sub_1800838E4(v67, (unsigned __int16)v58, (unsigned int)(v60 + 1));
  sub_180082B30(v67);
  v62 = sub_18001246C(v69, &v67);
  sub_1800613A4(v63, v62);
  sub_18000B4B0((__int64)v80, v61 + 57, v61 - 3);
  if ( v68 )
    sub_180010530(v68);
  sub_18004F718(a2, &v67, 9u);
  sub_18008214C(v67, &unk_1801D71C8, v61, 3LL);
  sub_18008214C(v67, &unk_1801D71E8, 5LL, 3LL);
  sub_18008214C(v67, &unk_1801D7228, 5LL, 3LL);
  sub_18008214C(v67, &unk_1801D7188, 5LL, 3LL);
  sub_18008214C(v67, &unk_1801D71A8, 5LL, 3LL);
  sub_180082B30(v67);
  v64 = sub_18001246C(v69, &v67);
  result = sub_1800613A4(v65, v64);
  if ( v68 )
    return sub_180010530(v68);
  return result;
}
