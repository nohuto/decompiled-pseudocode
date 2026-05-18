/*
 * XREFs of sub_18008CCE4 @ 0x18008CCE4
 * Callers:
 *     sub_18008D920 @ 0x18008D920 (sub_18008D920.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18004A1EC @ 0x18004A1EC (sub_18004A1EC.c)
 *     sub_18004A344 @ 0x18004A344 (sub_18004A344.c)
 *     sub_18004A3CC @ 0x18004A3CC (sub_18004A3CC.c)
 *     sub_18004A498 @ 0x18004A498 (sub_18004A498.c)
 *     sub_18004A564 @ 0x18004A564 (sub_18004A564.c)
 *     sub_180056524 @ 0x180056524 (sub_180056524.c)
 *     sub_180069D0C @ 0x180069D0C (sub_180069D0C.c)
 *     sub_18008CC5C @ 0x18008CC5C (sub_18008CC5C.c)
 *     sub_18008F6BC @ 0x18008F6BC (sub_18008F6BC.c)
 *     sub_18008FB1C @ 0x18008FB1C (sub_18008FB1C.c)
 *     sub_18008FBE8 @ 0x18008FBE8 (sub_18008FBE8.c)
 *     sub_180090304 @ 0x180090304 (sub_180090304.c)
 *     sub_1800904AC @ 0x1800904AC (sub_1800904AC.c)
 *     sub_180091194 @ 0x180091194 (sub_180091194.c)
 */

// Hidden C++ exception states: #wind=35
__int64 __fastcall sub_18008CCE4(__int64 a1, __int128 *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rbx
  unsigned __int16 v13; // r14
  __int64 *v14; // rax
  unsigned __int16 v15; // r14
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int64 v18; // r8
  __int64 *v19; // rax
  __int64 *v20; // rax
  __int64 *v21; // rax
  __int64 v22; // r8
  __int64 *v23; // rax
  __int64 v24; // r8
  __int64 *v25; // rax
  __int64 v26; // r8
  __int64 *v27; // rax
  __int64 v28; // r8
  __int64 *v29; // rax
  __int64 v30; // r8
  __int64 *v31; // rax
  __int64 v32; // r8
  __int64 *v33; // rax
  __int64 *v34; // rax
  __int64 *v35; // rax
  __int64 *v36; // rax
  __int64 *v37; // rax
  __int64 v38; // r8
  __int64 *v39; // rax
  __int64 v40; // r8
  __int64 *v41; // rax
  __int64 v42; // r8
  __int64 *v43; // rax
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 *v46; // rax
  __int64 *v47; // rax
  __int64 *v48; // rax
  __int64 *v49; // rax
  __int64 v50; // rbx
  __int64 *v51; // rax
  unsigned __int16 v52; // r12
  __int64 *v53; // rax
  unsigned __int16 v54; // r15
  __int64 *v55; // rax
  unsigned __int16 v56; // r14
  __int64 v57; // rcx
  int v58; // r8d
  unsigned int v59; // r15d
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // rcx
  __int128 v66; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v67; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v68; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v69; // [rsp+70h] [rbp-90h] BYREF
  __int128 v70; // [rsp+80h] [rbp-80h] BYREF
  __int128 v71; // [rsp+90h] [rbp-70h] BYREF
  __int128 v72; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v73; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v74; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v75; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v76; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v77; // [rsp+F0h] [rbp-10h] BYREF
  __m128i si128; // [rsp+100h] [rbp+0h] BYREF
  __m128i v79; // [rsp+110h] [rbp+10h] BYREF
  __m128i v80; // [rsp+120h] [rbp+20h] BYREF
  __m128i v81; // [rsp+130h] [rbp+30h] BYREF
  __int128 v82; // [rsp+140h] [rbp+40h] BYREF
  __m128i v83; // [rsp+150h] [rbp+50h] BYREF
  __int128 v84; // [rsp+160h] [rbp+60h] BYREF
  __int128 v85[9]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v86[4]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v87[4]; // [rsp+220h] [rbp+120h] BYREF
  __int64 v88[4]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v89[4]; // [rsp+260h] [rbp+160h] BYREF
  __int64 v90[4]; // [rsp+280h] [rbp+180h] BYREF
  __int64 v91[4]; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v92[4]; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 v93[4]; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int64 v94[4]; // [rsp+300h] [rbp+200h] BYREF
  __int64 v95[4]; // [rsp+320h] [rbp+220h] BYREF
  __int64 v96[4]; // [rsp+340h] [rbp+240h] BYREF
  __int64 v97[4]; // [rsp+360h] [rbp+260h] BYREF
  __int64 v98[4]; // [rsp+380h] [rbp+280h] BYREF
  __int64 v99[4]; // [rsp+3A0h] [rbp+2A0h] BYREF
  __int64 v100[4]; // [rsp+3C0h] [rbp+2C0h] BYREF
  __int64 v101[4]; // [rsp+3E0h] [rbp+2E0h] BYREF
  __int64 v102[4]; // [rsp+400h] [rbp+300h] BYREF
  __int64 v103[4]; // [rsp+420h] [rbp+320h] BYREF
  __int64 v104[4]; // [rsp+440h] [rbp+340h] BYREF
  __int64 v105[4]; // [rsp+460h] [rbp+360h] BYREF
  __int64 v106[4]; // [rsp+480h] [rbp+380h] BYREF
  __int64 v107[4]; // [rsp+4A0h] [rbp+3A0h] BYREF
  __int64 v108[4]; // [rsp+4C0h] [rbp+3C0h] BYREF
  __int64 v109[4]; // [rsp+4E0h] [rbp+3E0h] BYREF
  __int64 v110[4]; // [rsp+500h] [rbp+400h] BYREF
  __int64 v111[4]; // [rsp+520h] [rbp+420h] BYREF
  __int64 v112[4]; // [rsp+540h] [rbp+440h] BYREF
  __int64 v113[4]; // [rsp+560h] [rbp+460h] BYREF
  __int64 v114[4]; // [rsp+580h] [rbp+480h] BYREF
  __int64 v115[4]; // [rsp+5A0h] [rbp+4A0h] BYREF
  char *v116[3]; // [rsp+5C0h] [rbp+4C0h] BYREF
  unsigned __int64 v117; // [rsp+5D8h] [rbp+4D8h]
  char *v118; // [rsp+5E8h] [rbp+4E8h]
  __int128 v119; // [rsp+5F0h] [rbp+4F0h]
  char *v120[3]; // [rsp+600h] [rbp+500h] BYREF
  unsigned __int64 v121; // [rsp+618h] [rbp+518h]
  char *v122; // [rsp+628h] [rbp+528h]
  __int128 v123; // [rsp+630h] [rbp+530h]
  char *v124[3]; // [rsp+640h] [rbp+540h] BYREF
  unsigned __int64 v125; // [rsp+658h] [rbp+558h]
  char *v126; // [rsp+668h] [rbp+568h]
  __int128 v127; // [rsp+670h] [rbp+570h]
  char *v128[3]; // [rsp+680h] [rbp+580h] BYREF
  unsigned __int64 v129; // [rsp+698h] [rbp+598h]
  char *v130; // [rsp+6A8h] [rbp+5A8h]
  __int128 v131; // [rsp+6B0h] [rbp+5B0h]
  char *v132[3]; // [rsp+6C0h] [rbp+5C0h] BYREF
  unsigned __int64 v133; // [rsp+6D8h] [rbp+5D8h]
  char *v134; // [rsp+6E8h] [rbp+5E8h]
  __int128 v135; // [rsp+6F0h] [rbp+5F0h]
  char *v136[3]; // [rsp+700h] [rbp+600h] BYREF
  unsigned __int64 v137; // [rsp+718h] [rbp+618h]
  char *v138; // [rsp+728h] [rbp+628h]
  __int128 v139; // [rsp+730h] [rbp+630h]
  char *v140[3]; // [rsp+740h] [rbp+640h] BYREF
  unsigned __int64 v141; // [rsp+758h] [rbp+658h]
  char *v142; // [rsp+768h] [rbp+668h]
  __int128 v143; // [rsp+770h] [rbp+670h]
  char *v144[3]; // [rsp+780h] [rbp+680h] BYREF
  unsigned __int64 v145; // [rsp+798h] [rbp+698h]
  char *v146; // [rsp+7A8h] [rbp+6A8h]
  __int128 v147; // [rsp+7B0h] [rbp+6B0h]
  _BYTE v148[64]; // [rsp+7C0h] [rbp+6C0h] BYREF
  _BYTE v149[64]; // [rsp+800h] [rbp+700h] BYREF
  _BYTE v150[64]; // [rsp+840h] [rbp+740h] BYREF
  _BYTE v151[64]; // [rsp+880h] [rbp+780h] BYREF
  _BYTE v152[64]; // [rsp+8C0h] [rbp+7C0h] BYREF
  _BYTE v153[64]; // [rsp+900h] [rbp+800h] BYREF
  _BYTE v154[64]; // [rsp+940h] [rbp+840h] BYREF
  _BYTE v155[64]; // [rsp+980h] [rbp+880h] BYREF
  _BYTE v156[64]; // [rsp+9C0h] [rbp+8C0h] BYREF
  _BYTE v157[64]; // [rsp+A00h] [rbp+900h] BYREF
  _BYTE v158[64]; // [rsp+A40h] [rbp+940h] BYREF
  _BYTE v159[64]; // [rsp+A80h] [rbp+980h] BYREF
  _BYTE v160[64]; // [rsp+AC0h] [rbp+9C0h] BYREF
  _BYTE v161[64]; // [rsp+B00h] [rbp+A00h] BYREF
  _BYTE v162[64]; // [rsp+B40h] [rbp+A40h] BYREF
  _BYTE v163[64]; // [rsp+B80h] [rbp+A80h] BYREF
  _BYTE v164[64]; // [rsp+BC0h] [rbp+AC0h] BYREF
  _BYTE v165[64]; // [rsp+C00h] [rbp+B00h] BYREF
  _BYTE v166[64]; // [rsp+C40h] [rbp+B40h] BYREF
  _BYTE v167[64]; // [rsp+C80h] [rbp+B80h] BYREF
  _BYTE v168[64]; // [rsp+CC0h] [rbp+BC0h] BYREF
  _BYTE v169[64]; // [rsp+D00h] [rbp+C00h] BYREF

  sub_180056524(a2, &v66, 0);
  v4 = sub_18001875C(v114, (__int64)&qword_1801F6418);
  sub_18004A344((__int64)v140, (__int64)v4, 7);
  v5 = v66;
  sub_18008FBE8(v66, v140, 0LL);
  if ( v142 )
  {
    sub_180010884(v142, (*((_QWORD *)&v143 + 1) - (_QWORD)v142) & 0xFFFFFFFFFFFFFFFCuLL);
    v142 = 0LL;
    v143 = 0LL;
  }
  if ( v141 >= 0x10 )
    sub_180010884(v140[0], v141 + 1);
  sub_1800904AC(v5, &qword_1801F6418);
  v85[1] = xmmword_1801289D0;
  v85[2] = xmmword_1801289E0;
  v85[3] = xmmword_1801289F0;
  v85[4] = xmmword_180128A00;
  sub_18004A1EC();
  sub_180090304(v5);
  v6 = *(_QWORD *)(a1 + 56);
  v71 = 0LL;
  if ( *((_QWORD *)&v66 + 1) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v66 + 1) + 8LL), 1u);
  v71 = v66;
  sub_180069D0C(v6, &v71);
  sub_180010910((__int64)&v66);
  sub_180056524(a2, &v67, 4u);
  v7 = sub_18001875C(v115, (__int64)&qword_1801F5718);
  sub_18004A344((__int64)v144, (__int64)v7, 7);
  v8 = v67;
  sub_18008FBE8(v67, v144, 1LL);
  if ( v146 )
  {
    sub_180010884(v146, (*((_QWORD *)&v147 + 1) - (_QWORD)v146) & 0xFFFFFFFFFFFFFFFCuLL);
    v146 = 0LL;
    v147 = 0LL;
  }
  if ( v145 >= 0x10 )
    sub_180010884(v144[0], v145 + 1);
  sub_1800904AC(v8, &qword_1801F5718);
  v85[5] = xmmword_1801289D0;
  v85[6] = xmmword_1801289E0;
  v85[7] = xmmword_1801289F0;
  v85[8] = xmmword_180128A00;
  sub_18004A1EC();
  v9 = sub_18001875C(v86, (__int64)&qword_1801F5738);
  sub_18004A344((__int64)v116, (__int64)v9, 5);
  sub_18008FBE8(v8, v116, 1LL);
  if ( v118 )
  {
    sub_180010884(v118, (*((_QWORD *)&v119 + 1) - (_QWORD)v118) & 0xFFFFFFFFFFFFFFFCuLL);
    v118 = 0LL;
    v119 = 0LL;
  }
  if ( v117 >= 0x10 )
    sub_180010884(v116[0], v117 + 1);
  sub_180090304(v8);
  v10 = *(_QWORD *)(a1 + 56);
  v72 = 0LL;
  if ( *((_QWORD *)&v67 + 1) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v67 + 1) + 8LL), 1u);
  v72 = v67;
  sub_180069D0C(v10, &v72);
  sub_180010910((__int64)&v67);
  sub_180056524(a2, &v68, 2u);
  v11 = sub_18001875C(v87, (__int64)&qword_1801F6598);
  sub_18004A344((__int64)v120, (__int64)v11, 8);
  v12 = v68;
  v13 = sub_18008FBE8(v68, v120, 0LL);
  if ( v122 )
  {
    sub_180010884(v122, (*((_QWORD *)&v123 + 1) - (_QWORD)v122) & 0xFFFFFFFFFFFFFFFCuLL);
    v122 = 0LL;
    v123 = 0LL;
  }
  if ( v121 >= 0x10 )
    sub_180010884(v120[0], v121 + 1);
  sub_180091194(v12, v13, 11LL);
  v14 = sub_18001875C(v88, (__int64)&qword_1801F6438);
  sub_18004A344((__int64)v124, (__int64)v14, 8);
  v15 = sub_18008FBE8(v12, v124, 0LL);
  if ( v126 )
  {
    sub_180010884(v126, (*((_QWORD *)&v127 + 1) - (_QWORD)v126) & 0xFFFFFFFFFFFFFFFCuLL);
    v126 = 0LL;
    v127 = 0LL;
  }
  if ( v125 >= 0x10 )
    sub_180010884(v124[0], v125 + 1);
  sub_180091194(v12, v15, 12LL);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801BD9C0);
  v79 = si128;
  v80 = si128;
  v81 = si128;
  v76 = 0LL;
  v77 = 0LL;
  sub_18008CC5C(0.25, 0.25, 0.25, (__int64)&v76, (__int64)&v77);
  v16 = sub_18001875C(v89, (__int64)&qword_1801F65B8);
  sub_18004A344((__int64)v152, (__int64)v16, 2);
  v17 = sub_18001875C(v90, (__int64)&qword_1801F66D8);
  sub_18004A564((__int64)v153, (__int64)v17, v18, 1.0);
  v19 = sub_18001875C(v91, (__int64)&qword_1801F66B8);
  sub_18004A344((__int64)v154, (__int64)v19, 2);
  v20 = sub_18001875C(v92, (__int64)&qword_1801F64B8);
  sub_18004A344((__int64)v155, (__int64)v20, 2);
  v21 = sub_18001875C(v93, (__int64)&qword_1801F64D8);
  sub_18004A498((__int64)v156, (__int64)v21, v22, &v76);
  v23 = sub_18001875C(v94, (__int64)&qword_1801F64F8);
  sub_18004A498((__int64)v157, (__int64)v23, v24, &v77);
  v25 = sub_18001875C(v95, (__int64)&qword_1801F6518);
  sub_18004A3CC((__int64)v158, (__int64)v25, v26, (__int128 *)si128.m128i_i8);
  v27 = sub_18001875C(v96, (__int64)&qword_1801F6538);
  sub_18004A3CC((__int64)v159, (__int64)v27, v28, (__int128 *)v79.m128i_i8);
  v29 = sub_18001875C(v97, (__int64)&qword_1801F6558);
  sub_18004A3CC((__int64)v160, (__int64)v29, v30, (__int128 *)v80.m128i_i8);
  v31 = sub_18001875C(v98, (__int64)&qword_1801F6578);
  sub_18004A3CC((__int64)v161, (__int64)v31, v32, (__int128 *)v81.m128i_i8);
  v33 = sub_18001875C(v99, (__int64)&qword_1801F6638);
  sub_18004A344((__int64)v162, (__int64)v33, 5);
  v34 = sub_18001875C(v100, (__int64)&qword_1801F6618);
  sub_18004A344((__int64)v163, (__int64)v34, 5);
  v35 = sub_18001875C(v101, (__int64)&qword_1801F65F8);
  sub_18004A344((__int64)v164, (__int64)v35, 5);
  v36 = sub_18001875C(v102, (__int64)&qword_1801F65D8);
  sub_18004A344((__int64)v165, (__int64)v36, 5);
  v82 = 0LL;
  v37 = sub_18001875C(v103, (__int64)&qword_1801F6458);
  sub_18004A498((__int64)v166, (__int64)v37, v38, &v82);
  v83 = _mm_load_si128((const __m128i *)&xmmword_1801BD9C0);
  v39 = sub_18001875C(v104, (__int64)&qword_1801F6698);
  sub_18004A3CC((__int64)v167, (__int64)v39, v40, (__int128 *)v83.m128i_i8);
  v84 = 0LL;
  v41 = sub_18001875C(v105, (__int64)&qword_1801F6678);
  sub_18004A3CC((__int64)v168, (__int64)v41, v42, &v84);
  v85[0] = 0LL;
  v43 = sub_18001875C(v106, (__int64)&qword_1801F6658);
  sub_18004A3CC((__int64)v169, (__int64)v43, v44, v85);
  sub_18008FB1C(v12, v152, 18LL, 0LL);
  sub_180090304(v12);
  v45 = *(_QWORD *)(a1 + 56);
  v73 = 0LL;
  if ( *((_QWORD *)&v68 + 1) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v68 + 1) + 8LL), 1u);
  v73 = v68;
  sub_180069D0C(v45, &v73);
  sub_18000B4C0((__int64)v152, 64LL, 18LL);
  sub_180010910((__int64)&v68);
  sub_180056524(a2, &v69, 6u);
  v46 = sub_18001875C(v107, (__int64)&qword_1801F5218);
  sub_18004A344((__int64)v148, (__int64)v46, 2);
  v47 = sub_18001875C(v108, (__int64)&qword_1801F5238);
  sub_18004A344((__int64)v149, (__int64)v47, 2);
  v48 = sub_18001875C(v109, (__int64)&qword_1801F5258);
  sub_18004A344((__int64)v150, (__int64)v48, 2);
  v49 = sub_18001875C(v110, (__int64)&qword_1801F52B8);
  sub_18004A344((__int64)v151, (__int64)v49, 2);
  v50 = v69;
  sub_18008FB1C(v69, v148, 4LL, 1LL);
  v51 = sub_18001875C(v111, (__int64)&qword_1801F5598);
  sub_18004A344((__int64)v128, (__int64)v51, 8);
  v52 = sub_18008FBE8(v50, v128, 1LL);
  if ( v130 )
  {
    sub_180010884(v130, (*((_QWORD *)&v131 + 1) - (_QWORD)v130) & 0xFFFFFFFFFFFFFFFCuLL);
    v130 = 0LL;
    v131 = 0LL;
  }
  if ( v129 >= 0x10 )
    sub_180010884(v128[0], v129 + 1);
  v53 = sub_18001875C(v112, (__int64)&qword_1801F55B8);
  sub_18004A344((__int64)v132, (__int64)v53, 8);
  v54 = sub_18008FBE8(v50, v132, 1LL);
  if ( v134 )
  {
    sub_180010884(v134, (*((_QWORD *)&v135 + 1) - (_QWORD)v134) & 0xFFFFFFFFFFFFFFFCuLL);
    v134 = 0LL;
    v135 = 0LL;
  }
  if ( v133 >= 0x10 )
    sub_180010884(v132[0], v133 + 1);
  v55 = sub_18001875C(v113, (__int64)&qword_1801F55D8);
  sub_18004A344((__int64)v136, (__int64)v55, 8);
  v56 = sub_18008FBE8(v50, v136, 1LL);
  if ( v138 )
  {
    sub_180010884(v138, (*((_QWORD *)&v139 + 1) - (_QWORD)v138) & 0xFFFFFFFFFFFFFFFCuLL);
    v138 = 0LL;
    v139 = 0LL;
  }
  if ( v137 >= 0x10 )
    sub_180010884(v136[0], v137 + 1);
  sub_180091194(v50, v52, 5LL);
  sub_180091194(v57, v54, 6LL);
  v59 = v58 + 1;
  sub_180091194(v60, v56, (unsigned int)(v58 + 1));
  sub_180090304(v61);
  v62 = *(_QWORD *)(a1 + 56);
  v74 = 0LL;
  if ( *((_QWORD *)&v69 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v69 + 1) + 8LL));
  v74 = v69;
  sub_180069D0C(v62, &v74);
  sub_18000B4C0((__int64)v148, 64LL, 4LL);
  sub_180010910((__int64)&v69);
  sub_180056524(a2, &v70, 9u);
  v63 = v70;
  sub_18008F6BC(v70, &qword_1801F4FD8, v59, 3LL);
  sub_18008F6BC(v63, &qword_1801F4FF8, 5LL, 3LL);
  sub_18008F6BC(v63, &qword_1801F5038, 5LL, 3LL);
  sub_18008F6BC(v63, &qword_1801F4F98, 5LL, 3LL);
  sub_18008F6BC(v63, &qword_1801F4FB8, 5LL, 3LL);
  sub_180090304(v63);
  v64 = *(_QWORD *)(a1 + 56);
  v75 = 0LL;
  if ( *((_QWORD *)&v70 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v70 + 1) + 8LL));
  v75 = v70;
  sub_180069D0C(v64, &v75);
  return sub_180010910((__int64)&v70);
}
