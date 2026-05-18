/*
 * XREFs of sub_18004C658 @ 0x18004C658
 * Callers:
 *     sub_18008A4C0 @ 0x18008A4C0 (sub_18008A4C0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18004A1E0 @ 0x18004A1E0 (sub_18004A1E0.c)
 *     sub_18004A204 @ 0x18004A204 (sub_18004A204.c)
 *     sub_18004A344 @ 0x18004A344 (sub_18004A344.c)
 *     sub_180056524 @ 0x180056524 (sub_180056524.c)
 *     sub_180069D0C @ 0x180069D0C (sub_180069D0C.c)
 *     sub_18008FB1C @ 0x18008FB1C (sub_18008FB1C.c)
 *     sub_18008FBE8 @ 0x18008FBE8 (sub_18008FBE8.c)
 *     sub_180090304 @ 0x180090304 (sub_180090304.c)
 *     sub_1800904AC @ 0x1800904AC (sub_1800904AC.c)
 *     sub_180091194 @ 0x180091194 (sub_180091194.c)
 */

// Hidden C++ exception states: #wind=26
__int64 __fastcall sub_18004C658(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 *v4; // rax
  __int64 *v5; // rax
  __int64 *v6; // rax
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // rax
  __int64 *v12; // rax
  __int64 *v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rbx
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int64 *v18; // rax
  __int64 *v19; // rax
  __int64 *v20; // rax
  __int64 *v21; // rax
  __int64 *v22; // rax
  __int64 *v23; // rax
  __int64 *v24; // rax
  unsigned __int16 v25; // r12
  __int64 *v26; // rax
  unsigned __int16 v27; // r14
  __int64 *v28; // rax
  unsigned __int16 v29; // si
  __int64 *v30; // rax
  unsigned __int16 v31; // di
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // r8d
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int128 v40; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v41; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v42; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v43; // [rsp+48h] [rbp-B8h]
  _QWORD *v44; // [rsp+50h] [rbp-B0h]
  __int64 v45[4]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v46[4]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v47[4]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v48[4]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v49[4]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v50[4]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v51[4]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v52[4]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v53[4]; // [rsp+158h] [rbp+58h] BYREF
  __int64 v54[4]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v55[4]; // [rsp+198h] [rbp+98h] BYREF
  __int64 v56[4]; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v57[4]; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v58[4]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v59[4]; // [rsp+218h] [rbp+118h] BYREF
  __int64 v60[4]; // [rsp+238h] [rbp+138h] BYREF
  __int64 v61[4]; // [rsp+258h] [rbp+158h] BYREF
  __int64 v62[4]; // [rsp+278h] [rbp+178h] BYREF
  __int64 v63[4]; // [rsp+298h] [rbp+198h] BYREF
  __int64 v64[4]; // [rsp+2B8h] [rbp+1B8h] BYREF
  __int64 v65[4]; // [rsp+2D8h] [rbp+1D8h] BYREF
  __int64 v66[4]; // [rsp+2F8h] [rbp+1F8h] BYREF
  __int64 v67[4]; // [rsp+318h] [rbp+218h] BYREF
  __int64 v68[5]; // [rsp+338h] [rbp+238h] BYREF
  char *v69[3]; // [rsp+360h] [rbp+260h] BYREF
  unsigned __int64 v70; // [rsp+378h] [rbp+278h]
  char *v71; // [rsp+388h] [rbp+288h]
  __int128 v72; // [rsp+390h] [rbp+290h]
  char *v73[3]; // [rsp+3A0h] [rbp+2A0h] BYREF
  unsigned __int64 v74; // [rsp+3B8h] [rbp+2B8h]
  char *v75; // [rsp+3C8h] [rbp+2C8h]
  __int128 v76; // [rsp+3D0h] [rbp+2D0h]
  char *v77[3]; // [rsp+3E0h] [rbp+2E0h] BYREF
  unsigned __int64 v78; // [rsp+3F8h] [rbp+2F8h]
  char *v79; // [rsp+408h] [rbp+308h]
  __int128 v80; // [rsp+410h] [rbp+310h]
  char *v81[3]; // [rsp+420h] [rbp+320h] BYREF
  unsigned __int64 v82; // [rsp+438h] [rbp+338h]
  char *v83; // [rsp+448h] [rbp+348h]
  __int128 v84; // [rsp+450h] [rbp+350h]
  char *v85[3]; // [rsp+460h] [rbp+360h] BYREF
  unsigned __int64 v86; // [rsp+478h] [rbp+378h]
  char *v87; // [rsp+488h] [rbp+388h]
  __int128 v88; // [rsp+490h] [rbp+390h]
  char *v89[3]; // [rsp+4A0h] [rbp+3A0h] BYREF
  unsigned __int64 v90; // [rsp+4B8h] [rbp+3B8h]
  char *v91; // [rsp+4C8h] [rbp+3C8h]
  __int128 v92; // [rsp+4D0h] [rbp+3D0h]
  char *v93[3]; // [rsp+4E0h] [rbp+3E0h] BYREF
  unsigned __int64 v94; // [rsp+4F8h] [rbp+3F8h]
  char *v95; // [rsp+508h] [rbp+408h]
  __int128 v96; // [rsp+510h] [rbp+410h]
  char *v97[3]; // [rsp+520h] [rbp+420h] BYREF
  unsigned __int64 v98; // [rsp+538h] [rbp+438h]
  char *v99; // [rsp+548h] [rbp+448h]
  __int128 v100; // [rsp+550h] [rbp+450h]
  char *v101[3]; // [rsp+560h] [rbp+460h] BYREF
  unsigned __int64 v102; // [rsp+578h] [rbp+478h]
  char *v103; // [rsp+588h] [rbp+488h]
  __int128 v104; // [rsp+590h] [rbp+490h]
  char *v105[3]; // [rsp+5A0h] [rbp+4A0h] BYREF
  unsigned __int64 v106; // [rsp+5B8h] [rbp+4B8h]
  char *v107; // [rsp+5C8h] [rbp+4C8h]
  __int128 v108; // [rsp+5D0h] [rbp+4D0h]
  char *v109[3]; // [rsp+5E0h] [rbp+4E0h] BYREF
  unsigned __int64 v110; // [rsp+5F8h] [rbp+4F8h]
  char *v111; // [rsp+608h] [rbp+508h]
  __int128 v112; // [rsp+610h] [rbp+510h]
  char *v113[3]; // [rsp+620h] [rbp+520h] BYREF
  unsigned __int64 v114; // [rsp+638h] [rbp+538h]
  char *v115; // [rsp+648h] [rbp+548h]
  __int128 v116; // [rsp+650h] [rbp+550h]
  _BYTE v117[64]; // [rsp+660h] [rbp+560h] BYREF
  _BYTE v118[64]; // [rsp+6A0h] [rbp+5A0h] BYREF
  _BYTE v119[64]; // [rsp+6E0h] [rbp+5E0h] BYREF
  _BYTE v120[64]; // [rsp+720h] [rbp+620h] BYREF
  _BYTE v121[64]; // [rsp+760h] [rbp+660h] BYREF
  _BYTE v122[64]; // [rsp+7A0h] [rbp+6A0h] BYREF
  _BYTE v123[64]; // [rsp+7E0h] [rbp+6E0h] BYREF
  _BYTE v124[64]; // [rsp+820h] [rbp+720h] BYREF
  _BYTE v125[64]; // [rsp+860h] [rbp+760h] BYREF
  _BYTE v126[64]; // [rsp+8A0h] [rbp+7A0h] BYREF
  _BYTE v127[64]; // [rsp+8E0h] [rbp+7E0h] BYREF
  _BYTE v128[64]; // [rsp+920h] [rbp+820h] BYREF

  v44 = a2;
  sub_180056524(a1, &v41, 7LL);
  v3 = sub_18001875C(v45, (__int64)&qword_1801F57F8);
  sub_18004A344((__int64)v117, (__int64)v3, 7);
  v4 = sub_18001875C(v46, (__int64)&qword_1801F5818);
  sub_18004A344((__int64)v118, (__int64)v4, 7);
  v5 = sub_18001875C(v47, (__int64)&qword_1801F5838);
  sub_18004A344((__int64)v119, (__int64)v5, 5);
  v6 = sub_18001875C(v48, (__int64)&qword_1801F5858);
  sub_18004A344((__int64)v120, (__int64)v6, 5);
  v7 = sub_18001875C(v49, (__int64)&qword_1801F5878);
  sub_18004A344((__int64)v121, (__int64)v7, 5);
  v8 = sub_18001875C(v50, (__int64)&qword_1801F5898);
  sub_18004A344((__int64)v122, (__int64)v8, 5);
  v9 = sub_18001875C(v51, (__int64)&qword_1801F58B8);
  sub_18004A344((__int64)v123, (__int64)v9, 5);
  v10 = sub_18001875C(v52, (__int64)&qword_1801F58D8);
  sub_18004A344((__int64)v124, (__int64)v10, 7);
  v11 = sub_18001875C(v53, (__int64)&qword_1801F58F8);
  sub_18004A344((__int64)v125, (__int64)v11, 7);
  v12 = sub_18001875C(v54, (__int64)&qword_1801F5918);
  sub_18004A344((__int64)v126, (__int64)v12, 5);
  v13 = sub_18001875C(v55, (__int64)&qword_1801F5938);
  sub_18004A344((__int64)v127, (__int64)v13, 6);
  v14 = sub_18001875C(v56, (__int64)&qword_1801F5998);
  sub_18004A344((__int64)v128, (__int64)v14, 6);
  v15 = v41;
  sub_18008FB1C(v41, v117, 12LL, 0LL);
  v16 = sub_18001875C(v57, (__int64)&qword_1801F59F8);
  sub_18004A344((__int64)v69, (__int64)v16, 5);
  sub_18008FBE8(v15, v69, 1LL);
  if ( v71 )
  {
    sub_180010884(v71, (*((_QWORD *)&v72 + 1) - (_QWORD)v71) & 0xFFFFFFFFFFFFFFFCuLL);
    v71 = 0LL;
    v72 = 0LL;
  }
  if ( v70 >= 0x10 )
    sub_180010884(v69[0], v70 + 1);
  v17 = sub_18001875C(v58, (__int64)&qword_1801F59D8);
  sub_18004A344((__int64)v73, (__int64)v17, 2);
  sub_18008FBE8(v15, v73, 1LL);
  if ( v75 )
  {
    sub_180010884(v75, (*((_QWORD *)&v76 + 1) - (_QWORD)v75) & 0xFFFFFFFFFFFFFFFCuLL);
    v75 = 0LL;
    v76 = 0LL;
  }
  if ( v74 >= 0x10 )
    sub_180010884(v73[0], v74 + 1);
  v18 = sub_18001875C(v59, (__int64)&qword_1801F59B8);
  sub_18004A344((__int64)v77, (__int64)v18, 2);
  sub_18008FBE8(v15, v77, 0LL);
  if ( v79 )
  {
    sub_180010884(v79, (*((_QWORD *)&v80 + 1) - (_QWORD)v79) & 0xFFFFFFFFFFFFFFFCuLL);
    v79 = 0LL;
    v80 = 0LL;
  }
  if ( v78 >= 0x10 )
    sub_180010884(v77[0], v78 + 1);
  v19 = sub_18001875C(v60, (__int64)&qword_1801F5A18);
  sub_18004A344((__int64)v81, (__int64)v19, 2);
  sub_18008FBE8(v15, v81, 0LL);
  if ( v83 )
  {
    sub_180010884(v83, (*((_QWORD *)&v84 + 1) - (_QWORD)v83) & 0xFFFFFFFFFFFFFFFCuLL);
    v83 = 0LL;
    v84 = 0LL;
  }
  if ( v82 >= 0x10 )
    sub_180010884(v81[0], v82 + 1);
  v20 = sub_18001875C(v61, (__int64)&qword_1801F5A38);
  sub_18004A344((__int64)v85, (__int64)v20, 2);
  sub_18008FBE8(v15, v85, 0LL);
  if ( v87 )
  {
    sub_180010884(v87, (*((_QWORD *)&v88 + 1) - (_QWORD)v87) & 0xFFFFFFFFFFFFFFFCuLL);
    v87 = 0LL;
    v88 = 0LL;
  }
  if ( v86 >= 0x10 )
    sub_180010884(v85[0], v86 + 1);
  v21 = sub_18001875C(v62, (__int64)&qword_1801F5A58);
  sub_18004A344((__int64)v89, (__int64)v21, 6);
  sub_18008FBE8(v15, v89, 0LL);
  if ( v91 )
  {
    sub_180010884(v91, (*((_QWORD *)&v92 + 1) - (_QWORD)v91) & 0xFFFFFFFFFFFFFFFCuLL);
    v91 = 0LL;
    v92 = 0LL;
  }
  if ( v90 >= 0x10 )
    sub_180010884(v89[0], v90 + 1);
  v22 = sub_18001875C(v63, (__int64)&qword_1801F5958);
  sub_18004A344((__int64)v93, (__int64)v22, 2);
  sub_18008FBE8(v15, v93, 0LL);
  if ( v95 )
  {
    sub_180010884(v95, (*((_QWORD *)&v96 + 1) - (_QWORD)v95) & 0xFFFFFFFFFFFFFFFCuLL);
    v95 = 0LL;
    v96 = 0LL;
  }
  if ( v94 >= 0x10 )
    sub_180010884(v93[0], v94 + 1);
  v23 = sub_18001875C(v64, (__int64)&qword_1801F5978);
  sub_18004A344((__int64)v97, (__int64)v23, 2);
  sub_18008FBE8(v15, v97, 0LL);
  if ( v99 )
  {
    sub_180010884(v99, (*((_QWORD *)&v100 + 1) - (_QWORD)v99) & 0xFFFFFFFFFFFFFFFCuLL);
    v99 = 0LL;
    v100 = 0LL;
  }
  if ( v98 >= 0x10 )
    sub_180010884(v97[0], v98 + 1);
  sub_1800904AC(v15, &qword_1801F59B8);
  sub_18004A1E0();
  sub_1800904AC(v15, &qword_1801F59D8);
  sub_18004A1E0();
  sub_1800904AC(v15, &qword_1801F59F8);
  v42 = 0LL;
  v43 = _mm_srli_si128((__m128i)xmmword_1801BDA10, 8).m128i_u64[0];
  sub_18004A204();
  sub_1800904AC(v15, &qword_1801F5A18);
  sub_18004A1E0();
  sub_1800904AC(v15, &qword_1801F5A38);
  sub_18004A1E0();
  sub_1800904AC(v15, &qword_1801F5978);
  sub_18004A1E0();
  v24 = sub_18001875C(v65, (__int64)&qword_1801F5A98);
  sub_18004A344((__int64)v101, (__int64)v24, 8);
  v25 = sub_18008FBE8(v15, v101, 0LL);
  if ( v103 )
  {
    sub_180010884(v103, (*((_QWORD *)&v104 + 1) - (_QWORD)v103) & 0xFFFFFFFFFFFFFFFCuLL);
    v103 = 0LL;
    v104 = 0LL;
  }
  if ( v102 >= 0x10 )
    sub_180010884(v101[0], v102 + 1);
  v26 = sub_18001875C(v66, (__int64)&qword_1801F5AB8);
  sub_18004A344((__int64)v105, (__int64)v26, 8);
  v27 = sub_18008FBE8(v15, v105, 0LL);
  if ( v107 )
  {
    sub_180010884(v107, (*((_QWORD *)&v108 + 1) - (_QWORD)v107) & 0xFFFFFFFFFFFFFFFCuLL);
    v107 = 0LL;
    v108 = 0LL;
  }
  if ( v106 >= 0x10 )
    sub_180010884(v105[0], v106 + 1);
  v28 = sub_18001875C(v67, (__int64)&qword_1801F5AD8);
  sub_18004A344((__int64)v109, (__int64)v28, 8);
  v29 = sub_18008FBE8(v15, v109, 0LL);
  if ( v111 )
  {
    sub_180010884(v111, (*((_QWORD *)&v112 + 1) - (_QWORD)v111) & 0xFFFFFFFFFFFFFFFCuLL);
    v111 = 0LL;
    v112 = 0LL;
  }
  if ( v110 >= 0x10 )
    sub_180010884(v109[0], v110 + 1);
  v30 = sub_18001875C(v68, (__int64)&qword_1801F5A78);
  sub_18004A344((__int64)v113, (__int64)v30, 8);
  v31 = sub_18008FBE8(v15, v113, 0LL);
  if ( v115 )
  {
    sub_180010884(v115, (*((_QWORD *)&v116 + 1) - (_QWORD)v115) & 0xFFFFFFFFFFFFFFFCuLL);
    v115 = 0LL;
    v116 = 0LL;
  }
  if ( v114 >= 0x10 )
    sub_180010884(v113[0], v114 + 1);
  sub_180091194(v15, v25, 0LL);
  sub_180091194(v32, v27, 2LL);
  sub_180091194(v33, v29, 13LL);
  v35 = (unsigned int)(v34 - 1);
  sub_180091194(v36, v31, v35);
  sub_180090304(v37);
  v38 = *a2;
  v40 = 0LL;
  if ( *((_QWORD *)&v41 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v41 + 1) + 8LL));
  v40 = v41;
  sub_180069D0C(v38, &v40);
  sub_18000B4C0((__int64)v117, 64LL, v35);
  sub_180010910((__int64)&v41);
  return sub_180010910((__int64)a2);
}
