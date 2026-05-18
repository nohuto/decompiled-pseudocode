/*
 * XREFs of sub_180089950 @ 0x180089950
 * Callers:
 *     sub_180089820 @ 0x180089820 (sub_180089820.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18005470C @ 0x18005470C (sub_18005470C.c)
 *     sub_180056C78 @ 0x180056C78 (sub_180056C78.c)
 *     sub_180067498 @ 0x180067498 (sub_180067498.c)
 *     sub_180068694 @ 0x180068694 (sub_180068694.c)
 *     sub_18006C3A8 @ 0x18006C3A8 (sub_18006C3A8.c)
 *     sub_180095740 @ 0x180095740 (sub_180095740.c)
 *     sub_180095F34 @ 0x180095F34 (sub_180095F34.c)
 */

// Hidden C++ exception states: #wind=38
__int64 __fastcall sub_180089950(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rax
  __int64 *v6; // rax
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 *v12; // rax
  __int64 v13; // r14
  __int64 *v14; // rax
  __m128i *v15; // r12
  __int64 v16; // r15
  __int64 *v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 *v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 *v37; // rax
  __int64 v38; // rdi
  __int64 v39; // r14
  __int64 v40; // rax
  __int64 *v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 *v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // rax
  __m128i v50; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v51; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v52[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v53; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+68h] [rbp-98h]
  __int64 v55; // [rsp+70h] [rbp-90h]
  __int64 v56; // [rsp+78h] [rbp-88h]
  __int64 v57; // [rsp+80h] [rbp-80h]
  __int64 v58; // [rsp+88h] [rbp-78h]
  __int64 v59; // [rsp+90h] [rbp-70h]
  __int64 v60; // [rsp+98h] [rbp-68h]
  __int64 v61; // [rsp+A0h] [rbp-60h]
  __int64 v62; // [rsp+A8h] [rbp-58h]
  __int64 v63[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v64[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v65[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v66[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v67[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v68[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v69[2]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v70[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v71[2]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v72[2]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v73[2]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v74[2]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v75[2]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v76[2]; // [rsp+180h] [rbp+80h] BYREF
  _QWORD v77[2]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v78[3]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v79[2]; // [rsp+1B8h] [rbp+B8h] BYREF
  _QWORD v80[2]; // [rsp+1C8h] [rbp+C8h] BYREF
  _QWORD v81[2]; // [rsp+1D8h] [rbp+D8h] BYREF
  _QWORD v82[2]; // [rsp+1E8h] [rbp+E8h] BYREF
  _QWORD v83[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  _QWORD v84[2]; // [rsp+208h] [rbp+108h] BYREF
  _QWORD v85[3]; // [rsp+218h] [rbp+118h] BYREF
  __int64 v86; // [rsp+230h] [rbp+130h] BYREF
  __int64 v87; // [rsp+238h] [rbp+138h]
  __int128 v88; // [rsp+240h] [rbp+140h]
  __int64 v89; // [rsp+250h] [rbp+150h] BYREF
  __int64 v90; // [rsp+258h] [rbp+158h]
  __int64 v91[4]; // [rsp+270h] [rbp+170h] BYREF
  __int64 v92[4]; // [rsp+290h] [rbp+190h] BYREF
  __int64 v93[4]; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 v94[4]; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int64 v95[4]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v96[4]; // [rsp+310h] [rbp+210h] BYREF
  __int64 v97; // [rsp+330h] [rbp+230h] BYREF

  sub_18001875C(v92, (__int64)&qword_1801F5BF8);
  v50.m128i_i64[0] = (__int64)v92;
  v50.m128i_i64[1] = (__int64)v93;
  sub_18006C3A8((__int64)v71, &v50);
  sub_18000B4C0((__int64)v92, 32LL, 1LL);
  sub_18001875C(&v86, (__int64)&qword_1801F5BF8);
  sub_18001875C(&v89, (__int64)&qword_1801F5C58);
  v50.m128i_i64[0] = (__int64)&v86;
  v50.m128i_i64[1] = (__int64)v91;
  sub_18006C3A8((__int64)v70, &v50);
  sub_18000B4C0((__int64)&v86, 32LL, 2LL);
  sub_18001875C(v92, (__int64)&qword_1801F5BD8);
  v50.m128i_i64[0] = (__int64)v92;
  v50.m128i_i64[1] = (__int64)v93;
  sub_18006C3A8((__int64)v69, &v50);
  sub_18000B4C0((__int64)v92, 32LL, 1LL);
  sub_18001875C(&v86, (__int64)&qword_1801F5BF8);
  sub_18001875C(&v89, (__int64)&qword_1801F5BD8);
  v50.m128i_i64[0] = (__int64)&v86;
  v50.m128i_i64[1] = (__int64)v91;
  sub_18006C3A8((__int64)v68, &v50);
  sub_18000B4C0((__int64)&v86, 32LL, 2LL);
  sub_18001875C(v93, (__int64)&qword_1801F5BF8);
  sub_18001875C(v94, (__int64)&qword_1801F5B18);
  v50.m128i_i64[0] = (__int64)v93;
  v50.m128i_i64[1] = (__int64)v95;
  sub_18006C3A8((__int64)v67, &v50);
  sub_18000B4C0((__int64)v93, 32LL, 2LL);
  sub_18001875C(&v86, (__int64)&qword_1801F5BF8);
  sub_18001875C(&v89, (__int64)&qword_1801F5BD8);
  sub_18001875C(v91, (__int64)&qword_1801F5B38);
  v50.m128i_i64[0] = (__int64)&v86;
  v50.m128i_i64[1] = (__int64)v92;
  sub_18006C3A8((__int64)v66, &v50);
  sub_18000B4C0((__int64)&v86, 32LL, 3LL);
  sub_18001875C(v93, (__int64)&qword_1801F5BF8);
  sub_18001875C(v94, (__int64)&qword_1801F5BD8);
  sub_18001875C(v95, (__int64)&qword_1801F5B18);
  sub_18001875C(v96, (__int64)&qword_1801F5B38);
  v50.m128i_i64[0] = (__int64)v93;
  v50.m128i_i64[1] = (__int64)&v97;
  sub_18006C3A8((__int64)v65, &v50);
  sub_18000B4C0((__int64)v93, 32LL, 4LL);
  sub_18001875C(&v86, (__int64)&qword_1801F5BF8);
  sub_18001875C(&v89, (__int64)&qword_1801F5BD8);
  sub_18001875C(v91, (__int64)&qword_1801F5B18);
  v50.m128i_i64[0] = (__int64)&v86;
  v50.m128i_i64[1] = (__int64)v92;
  sub_18006C3A8((__int64)v64, &v50);
  sub_18000B4C0((__int64)&v86, 32LL, 3LL);
  v4 = sub_180067498(v52, v71);
  v59 = sub_180056C78(a2, v4);
  v5 = sub_180067498(v52, v70);
  v61 = sub_180056C78(a2, v5);
  v6 = sub_180067498(v52, v69);
  v60 = sub_180056C78(a2, v6);
  v7 = sub_180067498(v52, v68);
  v57 = sub_180056C78(a2, v7);
  v8 = sub_180067498(v52, v67);
  v58 = sub_180056C78(a2, v8);
  v9 = sub_180067498(v52, v66);
  v56 = sub_180056C78(a2, v9);
  v10 = sub_180067498(v52, v65);
  v11 = sub_180056C78(a2, v10);
  v62 = v11;
  v12 = sub_180067498(v52, v64);
  v13 = sub_180056C78(a2, v12);
  v54 = v13;
  v53 = 0LL;
  sub_18001875C(v93, (__int64)&qword_1801F5D98);
  v50.m128i_i64[0] = (__int64)v93;
  v50.m128i_i64[1] = (__int64)v94;
  sub_18006C3A8((__int64)v63, &v50);
  sub_18000B4C0((__int64)v93, 32LL, 1LL);
  v14 = sub_180067498(v52, v63);
  v50 = (__m128i)(unsigned __int64)sub_180056C78(a2, v14);
  v15 = &v50;
  v51 = *((_QWORD *)&v53 + 1);
  v55 = v53;
  do
  {
    v16 = v15->m128i_i64[0];
    v17 = sub_180068694(*(_QWORD *)(a1 + 56), v79, v11 | v15->m128i_i64[0], 0LL, 1);
    v18 = *v17;
    v19 = v17[1];
    *v17 = 0LL;
    v17[1] = 0LL;
    v72[0] = v55;
    *(_QWORD *)&v53 = v18;
    v72[1] = v51;
    *((_QWORD *)&v53 + 1) = v19;
    sub_180010910((__int64)v72);
    sub_180010910((__int64)v79);
    v20 = *(_QWORD *)(a1 + 112);
    LODWORD(v86) = 0;
    v87 = v20;
    v88 = 0LL;
    v89 = 0LL;
    v90 = 0LL;
    sub_180095F34(v18, &v86);
    sub_180095740(v18, 15, 2, 1, 1);
    v21 = sub_180068694(*(_QWORD *)(a1 + 56), v80, v13 | v16, 0LL, 1);
    v22 = *v21;
    v23 = v21[1];
    *v21 = 0LL;
    v21[1] = 0LL;
    v73[0] = v18;
    *(_QWORD *)&v53 = v22;
    v73[1] = v19;
    *((_QWORD *)&v53 + 1) = v23;
    sub_180010910((__int64)v73);
    sub_180010910((__int64)v80);
    v24 = *(_QWORD *)(a1 + 112);
    LODWORD(v86) = 0;
    v87 = v24;
    v88 = 0LL;
    v89 = 0LL;
    v90 = 0LL;
    sub_180095F34(v22, &v86);
    sub_180095740(v22, 15, 2, 1, 1);
    v25 = sub_180068694(*(_QWORD *)(a1 + 56), v81, v56 | v16, 0LL, 1);
    v26 = *v25;
    v27 = v25[1];
    *v25 = 0LL;
    v25[1] = 0LL;
    v74[0] = v22;
    *(_QWORD *)&v53 = v26;
    v74[1] = v23;
    *((_QWORD *)&v53 + 1) = v27;
    sub_180010910((__int64)v74);
    sub_180010910((__int64)v81);
    v28 = *(_QWORD *)(a1 + 112);
    LODWORD(v86) = 0;
    v87 = v28;
    v88 = 0LL;
    v89 = 0LL;
    v90 = 0LL;
    sub_180095F34(v26, &v86);
    sub_180095740(v26, 15, 2, 1, 1);
    v29 = sub_180068694(*(_QWORD *)(a1 + 56), v82, v57 | v16, 0LL, 1);
    v30 = *v29;
    v31 = v29[1];
    *v29 = 0LL;
    v29[1] = 0LL;
    v75[0] = v26;
    *(_QWORD *)&v53 = v30;
    v75[1] = v27;
    *((_QWORD *)&v53 + 1) = v31;
    sub_180010910((__int64)v75);
    sub_180010910((__int64)v82);
    v32 = *(_QWORD *)(a1 + 112);
    LODWORD(v86) = 0;
    v87 = v32;
    v88 = 0LL;
    v89 = 0LL;
    v90 = 0LL;
    sub_180095F34(v30, &v86);
    sub_180095740(v30, 15, 2, 1, 1);
    v33 = sub_180068694(*(_QWORD *)(a1 + 56), v83, v58 | v16, 0LL, 1);
    v34 = *v33;
    v35 = v33[1];
    *v33 = 0LL;
    v33[1] = 0LL;
    v76[0] = v30;
    *(_QWORD *)&v53 = v34;
    v76[1] = v31;
    *((_QWORD *)&v53 + 1) = v35;
    sub_180010910((__int64)v76);
    sub_180010910((__int64)v83);
    v36 = *(_QWORD *)(a1 + 112);
    LODWORD(v86) = 0;
    v87 = v36;
    v88 = 0LL;
    v89 = 0LL;
    v90 = 0LL;
    sub_180095F34(v34, &v86);
    sub_180095740(v34, 15, 2, 3, 1);
    v37 = sub_180068694(*(_QWORD *)(a1 + 56), v84, v59 | v16, 0LL, 1);
    v38 = *v37;
    v39 = v37[1];
    *v37 = 0LL;
    v37[1] = 0LL;
    v77[0] = v34;
    *(_QWORD *)&v53 = v38;
    v77[1] = v35;
    *((_QWORD *)&v53 + 1) = v39;
    sub_180010910((__int64)v77);
    sub_180010910((__int64)v84);
    v40 = *(_QWORD *)(a1 + 112);
    LODWORD(v86) = 0;
    v87 = v40;
    v88 = 0LL;
    v89 = 0LL;
    v90 = 0LL;
    sub_180095F34(v38, &v86);
    sub_180095740(v38, 0, 2, 3, 1);
    v41 = sub_180068694(*(_QWORD *)(a1 + 56), v85, v60 | v16, 0LL, 1);
    v42 = *v41;
    v43 = v41[1];
    *v41 = 0LL;
    v41[1] = 0LL;
    v78[0] = v38;
    *(_QWORD *)&v53 = v42;
    v78[1] = v39;
    *((_QWORD *)&v53 + 1) = v43;
    sub_180010910((__int64)v78);
    sub_180010910((__int64)v85);
    v44 = *(_QWORD *)(a1 + 112);
    LODWORD(v86) = 0;
    v87 = v44;
    v88 = 0LL;
    v89 = 0LL;
    v90 = 0LL;
    sub_180095F34(v42, &v86);
    sub_180095740(v42, 15, 2, 1, 1);
    v45 = sub_180068694(*(_QWORD *)(a1 + 56), v92, v61 | v16, 0LL, 1);
    v55 = *v45;
    v46 = v55;
    v51 = v45[1];
    v47 = v51;
    *v45 = 0LL;
    v45[1] = 0LL;
    v52[0] = v42;
    *(_QWORD *)&v53 = v46;
    v52[1] = v43;
    *((_QWORD *)&v53 + 1) = v47;
    sub_180010910((__int64)v52);
    sub_180010910((__int64)v92);
    v48 = *(_QWORD *)(a1 + 112);
    LODWORD(v86) = 0;
    v87 = v48;
    v88 = 0LL;
    v89 = 0LL;
    v90 = 0LL;
    sub_180095F34(v46, &v86);
    sub_180095740(v46, 0, 2, 3, 1);
    v15 = (__m128i *)((char *)v15 + 8);
    v11 = v62;
    v13 = v54;
  }
  while ( v15 != (__m128i *)&v51 );
  sub_18005470C(v63, (__int64)v63);
  sub_180010910((__int64)&v53);
  sub_18005470C(v64, (__int64)v64);
  sub_18005470C(v65, (__int64)v65);
  sub_18005470C(v66, (__int64)v66);
  sub_18005470C(v67, (__int64)v67);
  sub_18005470C(v68, (__int64)v68);
  sub_18005470C(v69, (__int64)v69);
  sub_18005470C(v70, (__int64)v70);
  return sub_18005470C(v71, (__int64)v71);
}
