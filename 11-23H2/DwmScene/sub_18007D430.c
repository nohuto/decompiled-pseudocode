/*
 * XREFs of sub_18007D430 @ 0x18007D430
 * Callers:
 *     sub_18007D310 @ 0x18007D310 (sub_18007D310.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18004D8C4 @ 0x18004D8C4 (sub_18004D8C4.c)
 *     sub_18004FBD8 @ 0x18004FBD8 (sub_18004FBD8.c)
 *     sub_18005EA14 @ 0x18005EA14 (sub_18005EA14.c)
 *     sub_180060378 @ 0x180060378 (sub_180060378.c)
 *     sub_180063D24 @ 0x180063D24 (sub_180063D24.c)
 *     sub_180087698 @ 0x180087698 (sub_180087698.c)
 *     sub_180087C3C @ 0x180087C3C (sub_180087C3C.c)
 */

// Hidden C++ exception states: #wind=38
__int64 __fastcall sub_18007D430(__int64 a1, __int64 a2)
{
  char v4; // r8
  __int64 v5; // r15
  char v6; // r8
  __int64 v7; // r12
  char v8; // r8
  __int64 v9; // r13
  char v10; // r8
  char v11; // r8
  char v12; // r8
  char v13; // r8
  __int64 v14; // r14
  char v15; // r8
  char v16; // r8
  __m128i *v17; // rsi
  __int64 v18; // rbx
  __int64 *v19; // rax
  __int64 v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rax
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 *v25; // rax
  __int64 v26; // rax
  __int64 *v27; // rax
  __int64 v28; // rax
  __int64 *v29; // rax
  __int64 v30; // rax
  __int64 *v31; // rax
  __int64 v32; // rax
  __int64 *v33; // rax
  __int64 v34; // rax
  __m128i v36; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v37; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h]
  __int64 v39; // [rsp+60h] [rbp-A0h]
  __int64 v40; // [rsp+68h] [rbp-98h]
  __int64 v41; // [rsp+70h] [rbp-90h]
  void *v42[2]; // [rsp+78h] [rbp-88h] BYREF
  void *v43[2]; // [rsp+88h] [rbp-78h] BYREF
  void *v44[2]; // [rsp+98h] [rbp-68h] BYREF
  void *v45[2]; // [rsp+A8h] [rbp-58h] BYREF
  void *v46[2]; // [rsp+B8h] [rbp-48h] BYREF
  void *v47[2]; // [rsp+C8h] [rbp-38h] BYREF
  void *v48[2]; // [rsp+D8h] [rbp-28h] BYREF
  void *v49[2]; // [rsp+E8h] [rbp-18h] BYREF
  void *v50[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v51; // [rsp+108h] [rbp+8h] BYREF
  __int64 v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+118h] [rbp+18h] BYREF
  __int64 v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+128h] [rbp+28h] BYREF
  __int64 v56; // [rsp+130h] [rbp+30h]
  __int64 v57; // [rsp+138h] [rbp+38h] BYREF
  __int64 v58; // [rsp+140h] [rbp+40h]
  __int64 v59; // [rsp+148h] [rbp+48h] BYREF
  __int64 v60; // [rsp+150h] [rbp+50h]
  __int64 v61; // [rsp+158h] [rbp+58h] BYREF
  __int64 v62; // [rsp+160h] [rbp+60h]
  __int64 v63; // [rsp+168h] [rbp+68h] BYREF
  __int64 v64; // [rsp+170h] [rbp+70h]
  __int64 v65; // [rsp+180h] [rbp+80h] BYREF
  __int64 v66; // [rsp+188h] [rbp+88h]
  __int128 v67; // [rsp+190h] [rbp+90h]
  __int64 v68; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v69; // [rsp+1A8h] [rbp+A8h]
  _QWORD v70[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v71; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v72; // [rsp+1E8h] [rbp+E8h]
  _QWORD v73[4]; // [rsp+200h] [rbp+100h] BYREF
  _QWORD v74[4]; // [rsp+220h] [rbp+120h] BYREF
  _QWORD v75[4]; // [rsp+240h] [rbp+140h] BYREF
  _QWORD v76[4]; // [rsp+260h] [rbp+160h] BYREF
  __int64 v77; // [rsp+280h] [rbp+180h] BYREF

  sub_180017648(&v71, (__int64)&unk_1801D7DE8);
  v36.m128i_i64[0] = (__int64)&v71;
  v36.m128i_i64[1] = (__int64)v73;
  sub_180063D24((__int64 *)v50, &v36);
  sub_18000B4B0((__int64)&v71, 32LL, 1LL);
  sub_180017648(&v65, (__int64)&unk_1801D7DE8);
  sub_180017648(&v68, (__int64)&unk_1801D7E48);
  v36.m128i_i64[0] = (__int64)&v65;
  v36.m128i_i64[1] = (__int64)v70;
  sub_180063D24((__int64 *)v49, &v36);
  sub_18000B4B0((__int64)&v65, 32LL, 2LL);
  sub_180017648(&v71, (__int64)&unk_1801D7DC8);
  v36.m128i_i64[0] = (__int64)&v71;
  v36.m128i_i64[1] = (__int64)v73;
  sub_180063D24((__int64 *)v48, &v36);
  sub_18000B4B0((__int64)&v71, 32LL, 1LL);
  sub_180017648(&v65, (__int64)&unk_1801D7DE8);
  sub_180017648(&v68, (__int64)&unk_1801D7DC8);
  v36.m128i_i64[0] = (__int64)&v65;
  v36.m128i_i64[1] = (__int64)v70;
  sub_180063D24((__int64 *)v47, &v36);
  sub_18000B4B0((__int64)&v65, 32LL, 2LL);
  sub_180017648(v73, (__int64)&unk_1801D7DE8);
  sub_180017648(v74, (__int64)&unk_1801D7D08);
  v36.m128i_i64[0] = (__int64)v73;
  v36.m128i_i64[1] = (__int64)v75;
  sub_180063D24((__int64 *)v46, &v36);
  sub_18000B4B0((__int64)v73, 32LL, 2LL);
  sub_180017648(&v65, (__int64)&unk_1801D7DE8);
  sub_180017648(&v68, (__int64)&unk_1801D7DC8);
  sub_180017648(v70, (__int64)&unk_1801D7D28);
  v36.m128i_i64[0] = (__int64)&v65;
  v36.m128i_i64[1] = (__int64)&v71;
  sub_180063D24((__int64 *)v45, &v36);
  sub_18000B4B0((__int64)&v65, 32LL, 3LL);
  sub_180017648(v73, (__int64)&unk_1801D7DE8);
  sub_180017648(v74, (__int64)&unk_1801D7DC8);
  sub_180017648(v75, (__int64)&unk_1801D7D08);
  sub_180017648(v76, (__int64)&unk_1801D7D28);
  v36.m128i_i64[0] = (__int64)v73;
  v36.m128i_i64[1] = (__int64)&v77;
  sub_180063D24((__int64 *)v44, &v36);
  sub_18000B4B0((__int64)v73, 32LL, 4LL);
  sub_180017648(&v65, (__int64)&unk_1801D7DE8);
  sub_180017648(&v68, (__int64)&unk_1801D7DC8);
  sub_180017648(v70, (__int64)&unk_1801D7D08);
  v36.m128i_i64[0] = (__int64)&v65;
  v36.m128i_i64[1] = (__int64)&v71;
  sub_180063D24((__int64 *)v43, &v36);
  sub_18000B4B0((__int64)&v65, 32LL, 3LL);
  sub_18005EA14(v36.m128i_i64, v50, v4);
  v5 = sub_18004FBD8(a2, (void **)&v36);
  sub_18005EA14(v36.m128i_i64, v49, v6);
  v7 = sub_18004FBD8(a2, (void **)&v36);
  sub_18005EA14(v36.m128i_i64, v48, v8);
  v9 = sub_18004FBD8(a2, (void **)&v36);
  sub_18005EA14(v36.m128i_i64, v47, v10);
  v41 = sub_18004FBD8(a2, (void **)&v36);
  sub_18005EA14(v36.m128i_i64, v46, v11);
  v38 = sub_18004FBD8(a2, (void **)&v36);
  sub_18005EA14(v36.m128i_i64, v45, v12);
  v40 = sub_18004FBD8(a2, (void **)&v36);
  sub_18005EA14(v36.m128i_i64, v44, v13);
  v14 = sub_18004FBD8(a2, (void **)&v36);
  sub_18005EA14(v36.m128i_i64, v43, v15);
  v39 = sub_18004FBD8(a2, (void **)&v36);
  v37 = 0LL;
  sub_180017648(v73, (__int64)&unk_1801D7E68);
  v36.m128i_i64[0] = (__int64)v73;
  v36.m128i_i64[1] = (__int64)v74;
  sub_180063D24((__int64 *)v42, &v36);
  sub_18000B4B0((__int64)v73, 32LL, 1LL);
  sub_18005EA14(v36.m128i_i64, v42, v16);
  v36 = (__m128i)(unsigned __int64)sub_18004FBD8(a2, (void **)&v36);
  v17 = &v36;
  do
  {
    v18 = v17->m128i_i64[0];
    v19 = sub_180060378(*(_QWORD *)(a1 + 56), &v51, v14 | v17->m128i_i64[0], 0LL, 1);
    sub_180011020(&v37, v19);
    if ( v52 )
      sub_180010530(v52);
    v20 = *(_QWORD *)(a1 + 112);
    LODWORD(v65) = 0;
    v66 = v20;
    v67 = 0LL;
    v68 = 0LL;
    v69 = 0LL;
    sub_180087C3C(v37, &v65);
    sub_180087698(v37, 15, 2, 1, 1);
    v21 = sub_180060378(*(_QWORD *)(a1 + 56), &v53, v39 | v18, 0LL, 1);
    sub_180011020(&v37, v21);
    if ( v54 )
      sub_180010530(v54);
    v22 = *(_QWORD *)(a1 + 112);
    LODWORD(v65) = 0;
    v66 = v22;
    v67 = 0LL;
    v68 = 0LL;
    v69 = 0LL;
    sub_180087C3C(v37, &v65);
    sub_180087698(v37, 15, 2, 1, 1);
    v23 = sub_180060378(*(_QWORD *)(a1 + 56), &v55, v40 | v18, 0LL, 1);
    sub_180011020(&v37, v23);
    if ( v56 )
      sub_180010530(v56);
    v24 = *(_QWORD *)(a1 + 112);
    LODWORD(v65) = 0;
    v66 = v24;
    v67 = 0LL;
    v68 = 0LL;
    v69 = 0LL;
    sub_180087C3C(v37, &v65);
    sub_180087698(v37, 15, 2, 1, 1);
    v25 = sub_180060378(*(_QWORD *)(a1 + 56), &v57, v41 | v18, 0LL, 1);
    sub_180011020(&v37, v25);
    if ( v58 )
      sub_180010530(v58);
    v26 = *(_QWORD *)(a1 + 112);
    LODWORD(v65) = 0;
    v66 = v26;
    v67 = 0LL;
    v68 = 0LL;
    v69 = 0LL;
    sub_180087C3C(v37, &v65);
    sub_180087698(v37, 15, 2, 1, 1);
    v27 = sub_180060378(*(_QWORD *)(a1 + 56), &v59, v38 | v18, 0LL, 1);
    sub_180011020(&v37, v27);
    if ( v60 )
      sub_180010530(v60);
    v28 = *(_QWORD *)(a1 + 112);
    LODWORD(v65) = 0;
    v66 = v28;
    v67 = 0LL;
    v68 = 0LL;
    v69 = 0LL;
    sub_180087C3C(v37, &v65);
    sub_180087698(v37, 15, 2, 3, 1);
    v29 = sub_180060378(*(_QWORD *)(a1 + 56), &v61, v5 | v18, 0LL, 1);
    sub_180011020(&v37, v29);
    if ( v62 )
      sub_180010530(v62);
    v30 = *(_QWORD *)(a1 + 112);
    LODWORD(v65) = 0;
    v66 = v30;
    v67 = 0LL;
    v68 = 0LL;
    v69 = 0LL;
    sub_180087C3C(v37, &v65);
    sub_180087698(v37, 0, 2, 3, 1);
    v31 = sub_180060378(*(_QWORD *)(a1 + 56), &v63, v9 | v18, 0LL, 1);
    sub_180011020(&v37, v31);
    if ( v64 )
      sub_180010530(v64);
    v32 = *(_QWORD *)(a1 + 112);
    LODWORD(v65) = 0;
    v66 = v32;
    v67 = 0LL;
    v68 = 0LL;
    v69 = 0LL;
    sub_180087C3C(v37, &v65);
    sub_180087698(v37, 15, 2, 1, 1);
    v33 = sub_180060378(*(_QWORD *)(a1 + 56), &v71, v7 | v18, 0LL, 1);
    sub_180011020(&v37, v33);
    if ( v72 )
      sub_180010530(v72);
    v34 = *(_QWORD *)(a1 + 112);
    LODWORD(v65) = 0;
    v66 = v34;
    v67 = 0LL;
    v68 = 0LL;
    v69 = 0LL;
    sub_180087C3C(v37, &v65);
    sub_180087698(v37, 0, 2, 3, 1);
    v17 = (__m128i *)((char *)v17 + 8);
  }
  while ( v17 != (__m128i *)&v37 );
  sub_18004D8C4(v42, (__int64)v42);
  if ( *((_QWORD *)&v37 + 1) )
    sub_180010530(*((__int64 *)&v37 + 1));
  sub_18004D8C4(v43, (__int64)v43);
  sub_18004D8C4(v44, (__int64)v44);
  sub_18004D8C4(v45, (__int64)v45);
  sub_18004D8C4(v46, (__int64)v46);
  sub_18004D8C4(v47, (__int64)v47);
  sub_18004D8C4(v48, (__int64)v48);
  sub_18004D8C4(v49, (__int64)v49);
  return sub_18004D8C4(v50, (__int64)v50);
}
