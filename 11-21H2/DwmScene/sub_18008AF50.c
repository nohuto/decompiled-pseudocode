/*
 * XREFs of sub_18008AF50 @ 0x18008AF50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001CB90 @ 0x18001CB90 (sub_18001CB90.c)
 *     sub_18004A344 @ 0x18004A344 (sub_18004A344.c)
 *     sub_18004A3CC @ 0x18004A3CC (sub_18004A3CC.c)
 *     sub_18004A498 @ 0x18004A498 (sub_18004A498.c)
 *     sub_18004A564 @ 0x18004A564 (sub_18004A564.c)
 *     sub_180056524 @ 0x180056524 (sub_180056524.c)
 *     sub_180056668 @ 0x180056668 (sub_180056668.c)
 *     sub_180056BD0 @ 0x180056BD0 (sub_180056BD0.c)
 *     sub_180057684 @ 0x180057684 (sub_180057684.c)
 *     sub_1800680DC @ 0x1800680DC (sub_1800680DC.c)
 *     sub_180068338 @ 0x180068338 (sub_180068338.c)
 *     sub_180068694 @ 0x180068694 (sub_180068694.c)
 *     sub_1800688C8 @ 0x1800688C8 (sub_1800688C8.c)
 *     sub_180068E10 @ 0x180068E10 (sub_180068E10.c)
 *     sub_180069008 @ 0x180069008 (sub_180069008.c)
 *     sub_1800694C0 @ 0x1800694C0 (sub_1800694C0.c)
 *     sub_180069D0C @ 0x180069D0C (sub_180069D0C.c)
 *     sub_18008BCEC @ 0x18008BCEC (sub_18008BCEC.c)
 *     sub_18008F6BC @ 0x18008F6BC (sub_18008F6BC.c)
 *     sub_18008FB1C @ 0x18008FB1C (sub_18008FB1C.c)
 *     sub_18008FBE8 @ 0x18008FBE8 (sub_18008FBE8.c)
 *     sub_180090304 @ 0x180090304 (sub_180090304.c)
 *     sub_180090928 @ 0x180090928 (sub_180090928.c)
 *     sub_180091160 @ 0x180091160 (sub_180091160.c)
 *     sub_180091194 @ 0x180091194 (sub_180091194.c)
 *     sub_180095740 @ 0x180095740 (sub_180095740.c)
 *     sub_180095990 @ 0x180095990 (sub_180095990.c)
 *     sub_180095A64 @ 0x180095A64 (sub_180095A64.c)
 *     sub_180095F34 @ 0x180095F34 (sub_180095F34.c)
 *     sub_18009B410 @ 0x18009B410 (sub_18009B410.c)
 *     sub_18009B430 @ 0x18009B430 (sub_18009B430.c)
 */

// Hidden C++ exception states: #wind=27
__int64 __fastcall sub_18008AF50(__int64 a1, __int128 *a2, int **a3)
{
  __int128 *v4; // rsi
  __int64 v6; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // rcx
  int *v23; // r12
  __int64 v24; // rbx
  char *v25; // rbx
  __int64 v26; // rdi
  char v27; // al
  __int64 *v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rdi
  char v31; // al
  __int64 *v32; // rax
  __int64 v33; // rsi
  __int64 v34; // r14
  char v35; // al
  __int64 *v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rdi
  char v39; // al
  __int64 *v40; // rax
  __int64 v41; // rsi
  __int64 v42; // r14
  __int64 *v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rcx
  __int64 *v46; // rax
  __int64 *v47; // rax
  __int64 *v48; // rax
  __int64 v49; // r8
  __int64 v50; // rbx
  __int64 *v51; // rax
  __int64 *v52; // rax
  __int64 v53; // r8
  __int64 *v54; // rax
  __int64 *v55; // rax
  __int64 *v56; // rax
  __int64 *v57; // rax
  __int64 *v58; // rax
  __int64 *v59; // rax
  __int64 v60; // r8
  __int64 *v61; // rax
  __int64 v62; // r8
  __int64 *v63; // rax
  __int64 v64; // r8
  __int64 *v65; // rax
  __int64 v66; // r8
  __int64 *v67; // rax
  __int64 *v68; // rax
  __int64 *v69; // rax
  __int64 *v70; // rax
  __int64 v71; // r8
  __int64 *v72; // rax
  unsigned __int16 v73; // di
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 *v76; // rax
  __int128 v77; // rax
  __int64 v78; // rcx
  int v80; // [rsp+20h] [rbp-E0h]
  __int128 v81; // [rsp+50h] [rbp-B0h] BYREF
  int v82; // [rsp+60h] [rbp-A0h] BYREF
  char v83; // [rsp+64h] [rbp-9Ch] BYREF
  __int128 v84; // [rsp+68h] [rbp-98h] BYREF
  __int128 v85; // [rsp+80h] [rbp-80h] BYREF
  __int128 v86; // [rsp+90h] [rbp-70h] BYREF
  __m128i si128; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v88; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v89; // [rsp+C0h] [rbp-40h] BYREF
  char *v90; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v91; // [rsp+D8h] [rbp-28h]
  __int64 v92; // [rsp+E0h] [rbp-20h]
  __int128 v93; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v94; // [rsp+F8h] [rbp-8h] BYREF
  _DWORD *v95[2]; // [rsp+108h] [rbp+8h] BYREF
  _DWORD *v96[2]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v97[2]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v98[2]; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v99[2]; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v100[2]; // [rsp+158h] [rbp+58h] BYREF
  __int64 v101[2]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v102[4]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v103[4]; // [rsp+198h] [rbp+98h] BYREF
  __int64 v104[4]; // [rsp+1B8h] [rbp+B8h] BYREF
  _QWORD v105[2]; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v106[4]; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v107[4]; // [rsp+208h] [rbp+108h] BYREF
  __int64 v108[4]; // [rsp+228h] [rbp+128h] BYREF
  __int64 v109[4]; // [rsp+248h] [rbp+148h] BYREF
  __int64 v110[4]; // [rsp+268h] [rbp+168h] BYREF
  __int64 v111[4]; // [rsp+288h] [rbp+188h] BYREF
  int v112; // [rsp+2A8h] [rbp+1A8h] BYREF
  __int64 v113; // [rsp+2B0h] [rbp+1B0h]
  __int128 v114; // [rsp+2B8h] [rbp+1B8h]
  __int64 v115; // [rsp+2C8h] [rbp+1C8h]
  __int64 v116; // [rsp+2D0h] [rbp+1D0h]
  int v117; // [rsp+2D8h] [rbp+1D8h] BYREF
  __int64 v118; // [rsp+2E0h] [rbp+1E0h]
  __int128 v119; // [rsp+2E8h] [rbp+1E8h]
  __int64 v120; // [rsp+2F8h] [rbp+1F8h]
  __int64 v121; // [rsp+300h] [rbp+200h]
  int v122; // [rsp+308h] [rbp+208h] BYREF
  __int64 v123; // [rsp+310h] [rbp+210h]
  __int128 v124; // [rsp+318h] [rbp+218h]
  __int64 v125; // [rsp+328h] [rbp+228h]
  __int64 v126; // [rsp+330h] [rbp+230h]
  int v127; // [rsp+338h] [rbp+238h] BYREF
  __int64 v128; // [rsp+340h] [rbp+240h]
  __int128 v129; // [rsp+348h] [rbp+248h]
  __int64 v130; // [rsp+358h] [rbp+258h]
  __int64 v131; // [rsp+360h] [rbp+260h]
  int v132; // [rsp+368h] [rbp+268h] BYREF
  __int64 v133; // [rsp+370h] [rbp+270h]
  __int128 v134; // [rsp+378h] [rbp+278h]
  __int64 v135; // [rsp+388h] [rbp+288h]
  __int64 v136; // [rsp+390h] [rbp+290h]
  int v137; // [rsp+398h] [rbp+298h] BYREF
  __int64 v138; // [rsp+3A0h] [rbp+2A0h]
  __int128 v139; // [rsp+3A8h] [rbp+2A8h]
  __int64 v140; // [rsp+3B8h] [rbp+2B8h]
  __int64 v141; // [rsp+3C0h] [rbp+2C0h]
  __int64 v142[2]; // [rsp+3C8h] [rbp+2C8h] BYREF
  __int128 v143; // [rsp+3D8h] [rbp+2D8h] BYREF
  _QWORD v144[2]; // [rsp+3E8h] [rbp+2E8h] BYREF
  _QWORD v145[2]; // [rsp+3F8h] [rbp+2F8h] BYREF
  _QWORD v146[2]; // [rsp+408h] [rbp+308h] BYREF
  _QWORD v147[2]; // [rsp+418h] [rbp+318h] BYREF
  _QWORD v148[2]; // [rsp+428h] [rbp+328h] BYREF
  __int128 v149; // [rsp+438h] [rbp+338h] BYREF
  __int128 v150; // [rsp+448h] [rbp+348h] BYREF
  __int64 v151[4]; // [rsp+458h] [rbp+358h] BYREF
  __int64 v152[4]; // [rsp+478h] [rbp+378h] BYREF
  __int64 v153[4]; // [rsp+498h] [rbp+398h] BYREF
  __int64 v154[4]; // [rsp+4B8h] [rbp+3B8h] BYREF
  __int64 v155[4]; // [rsp+4D8h] [rbp+3D8h] BYREF
  __int64 v156[4]; // [rsp+4F8h] [rbp+3F8h] BYREF
  __int64 v157[4]; // [rsp+518h] [rbp+418h] BYREF
  __int64 v158[4]; // [rsp+538h] [rbp+438h] BYREF
  __int64 v159[4]; // [rsp+558h] [rbp+458h] BYREF
  __int64 v160[4]; // [rsp+578h] [rbp+478h] BYREF
  __int64 v161[4]; // [rsp+598h] [rbp+498h] BYREF
  __int64 v162[4]; // [rsp+5B8h] [rbp+4B8h] BYREF
  __int64 v163[4]; // [rsp+5D8h] [rbp+4D8h] BYREF
  __int64 v164[4]; // [rsp+5F8h] [rbp+4F8h] BYREF
  __int64 v165[4]; // [rsp+618h] [rbp+518h] BYREF
  __int64 v166[4]; // [rsp+638h] [rbp+538h] BYREF
  __int64 v167[4]; // [rsp+658h] [rbp+558h] BYREF
  __int64 v168[4]; // [rsp+678h] [rbp+578h] BYREF
  __int64 v169[4]; // [rsp+698h] [rbp+598h] BYREF
  __int64 v170[4]; // [rsp+6B8h] [rbp+5B8h] BYREF
  __int64 v171[4]; // [rsp+6D8h] [rbp+5D8h] BYREF
  _DWORD v172[6]; // [rsp+6F8h] [rbp+5F8h] BYREF
  char *v173[3]; // [rsp+710h] [rbp+610h] BYREF
  unsigned __int64 v174; // [rsp+728h] [rbp+628h]
  char *v175; // [rsp+738h] [rbp+638h]
  __int128 v176; // [rsp+740h] [rbp+640h]
  _BYTE v177[64]; // [rsp+750h] [rbp+650h] BYREF
  _BYTE v178[64]; // [rsp+790h] [rbp+690h] BYREF
  _BYTE v179[64]; // [rsp+7D0h] [rbp+6D0h] BYREF
  _BYTE v180[64]; // [rsp+810h] [rbp+710h] BYREF
  _BYTE v181[64]; // [rsp+850h] [rbp+750h] BYREF
  _BYTE v182[64]; // [rsp+890h] [rbp+790h] BYREF
  _BYTE v183[64]; // [rsp+8D0h] [rbp+7D0h] BYREF
  _BYTE v184[64]; // [rsp+910h] [rbp+810h] BYREF
  _BYTE v185[64]; // [rsp+950h] [rbp+850h] BYREF
  _BYTE v186[64]; // [rsp+990h] [rbp+890h] BYREF
  _BYTE v187[64]; // [rsp+9D0h] [rbp+8D0h] BYREF
  _BYTE v188[64]; // [rsp+A10h] [rbp+910h] BYREF
  _BYTE v189[64]; // [rsp+A50h] [rbp+950h] BYREF
  _BYTE v190[64]; // [rsp+A90h] [rbp+990h] BYREF
  _BYTE v191[64]; // [rsp+AD0h] [rbp+9D0h] BYREF
  _BYTE v192[64]; // [rsp+B10h] [rbp+A10h] BYREF
  _BYTE v193[64]; // [rsp+B50h] [rbp+A50h] BYREF
  _BYTE v194[64]; // [rsp+B90h] [rbp+A90h] BYREF

  v4 = a2;
  *(_QWORD *)&v85 = a2;
  *(_QWORD *)&v86 = &v88;
  v88 = 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  if ( !v6 )
LABEL_28:
    sub_1800120F4();
  v7 = *(_DWORD *)(v6 + 8);
  do
  {
    if ( !v7 )
      goto LABEL_28;
    v8 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7);
  }
  while ( v8 != v7 );
  v88 = *(_OWORD *)(a1 + 8);
  v9 = sub_18001875C(v167, (__int64)&qword_1801F5FF8);
  v10 = sub_180056668(v4, v142, (char **)v9, &v88);
  v11 = *v10;
  v12 = v10[1];
  *v10 = 0LL;
  v10[1] = 0LL;
  v105[0] = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = v11;
  v105[1] = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v12;
  sub_180010910((__int64)v105);
  sub_180010910((__int64)v142);
  v13 = *(_QWORD *)(a1 + 56);
  v106[2] = 0LL;
  v106[3] = 15LL;
  LOBYTE(v106[0]) = 0;
  sub_180012190(v106, "ImageProcessing", 0xFuLL);
  sub_18008BCEC(v13, v106);
  v14 = *(_QWORD *)(a1 + 56);
  if ( (int **)(v14 + 528) != a3 )
  {
    sub_18001CB90(v14 + 528, (__int64)a3);
    v14 = *(_QWORD *)(a1 + 56);
  }
  v15 = sub_18009B410(v14);
  v18 = sub_18009B430(v17, v16) | v15;
  v82 = sub_1800680DC(v19, &qword_1801F5FB8);
  v95[0] = &v82;
  v95[1] = &v83;
  v21 = sub_180056BD0(v20, v95);
  *(_QWORD *)&v86 = v21;
  v172[0] = sub_1800680DC(*(_QWORD *)(a1 + 56), &qword_1801F60B8);
  v172[1] = sub_1800680DC(*(_QWORD *)(a1 + 56), &qword_1801F60D8);
  v172[2] = sub_1800680DC(*(_QWORD *)(a1 + 56), &qword_1801F61F8);
  v172[3] = sub_1800680DC(*(_QWORD *)(a1 + 56), &qword_1801F60F8);
  v172[4] = sub_1800680DC(*(_QWORD *)(a1 + 56), &qword_1801F6118);
  v172[5] = sub_1800680DC(*(_QWORD *)(a1 + 56), &qword_1801F6098);
  v96[0] = v172;
  v96[1] = v173;
  *(_QWORD *)&v93 = sub_180056BD0(v22, v96);
  v23 = *a3;
  si128.m128i_i64[0] = (__int64)a3[1];
  if ( v23 != (int *)si128.m128i_i64[0] )
  {
    v143 = 0LL;
    do
    {
      sub_180068338(*(_QWORD *)(a1 + 56), *v23);
      v24 = *(_QWORD *)(a1 + 56);
      v107[2] = 0LL;
      v107[3] = 15LL;
      LOBYTE(v107[0]) = 0;
      sub_180012190(v107, "ImageProcessingCameraEffects", 0x1CuLL);
      sub_1800688C8(v24, (__int64 *)&v90, (__int64)v107, v21, v80, v93);
      v25 = v90;
      v26 = v91;
      while ( v25 != (char *)v26 )
      {
        v112 = 0;
        v113 = v18;
        v114 = 0LL;
        v115 = 0LL;
        v116 = 0LL;
        sub_180095F34(*(_QWORD *)v25, &v112);
        v25 += 16;
      }
      v84 = 0LL;
      v27 = sub_1800680DC(*(_QWORD *)(a1 + 56), &qword_1801F5F98);
      v28 = sub_180068694(*(_QWORD *)(a1 + 56), v144, 1LL << v27, 0LL, 0);
      v29 = *v28;
      v30 = v28[1];
      *v28 = 0LL;
      v28[1] = 0LL;
      *(_QWORD *)&v84 = v29;
      *((_QWORD *)&v84 + 1) = v30;
      sub_180010910((__int64)&v143);
      sub_180010910((__int64)v144);
      v108[2] = 0LL;
      v108[3] = 15LL;
      LOBYTE(v108[0]) = 0;
      sub_180012190(v108, "ImageProcessingBlur", 0x13uLL);
      sub_180095990(v29, v108);
      v117 = 0;
      v118 = v18;
      v119 = 0LL;
      v120 = 0LL;
      v121 = 0LL;
      sub_180095F34(v29, &v117);
      v31 = sub_1800680DC(*(_QWORD *)(a1 + 56), &qword_1801F5F78);
      v32 = sub_180068694(*(_QWORD *)(a1 + 56), v145, 1LL << v31, 0LL, 0);
      v33 = *v32;
      v34 = v32[1];
      *v32 = 0LL;
      v32[1] = 0LL;
      v97[0] = v29;
      *(_QWORD *)&v84 = v33;
      v97[1] = v30;
      *((_QWORD *)&v84 + 1) = v34;
      sub_180010910((__int64)v97);
      sub_180010910((__int64)v145);
      v103[2] = 0LL;
      v103[3] = 15LL;
      LOBYTE(v103[0]) = 0;
      sub_180012190(v103, "ImageProcessingBlur", 0x13uLL);
      sub_180095990(v33, v103);
      v122 = 0;
      v123 = v18;
      v124 = 0LL;
      v125 = 0LL;
      v126 = 0LL;
      sub_180095F34(v33, &v122);
      v35 = sub_1800680DC(*(_QWORD *)(a1 + 56), (__int64 *)&qword_1801F5F58);
      v36 = sub_180068694(*(_QWORD *)(a1 + 56), v146, 1LL << v35, 0LL, 0);
      v37 = *v36;
      v38 = v36[1];
      *v36 = 0LL;
      v36[1] = 0LL;
      v98[0] = v33;
      *(_QWORD *)&v84 = v37;
      v98[1] = v34;
      *((_QWORD *)&v84 + 1) = v38;
      sub_180010910((__int64)v98);
      sub_180010910((__int64)v146);
      v102[2] = 0LL;
      v102[3] = 15LL;
      LOBYTE(v102[0]) = 0;
      sub_180012190(v102, "ImageProcessingBlur", 0x13uLL);
      sub_180095990(v37, v102);
      v127 = 0;
      v128 = v18;
      v129 = 0LL;
      v130 = 0LL;
      v131 = 0LL;
      sub_180095F34(v37, &v127);
      v39 = sub_1800680DC(*(_QWORD *)(a1 + 56), &qword_1801F5F38);
      v40 = sub_180068694(*(_QWORD *)(a1 + 56), v147, 1LL << v39, 0LL, 0);
      v41 = *v40;
      v42 = v40[1];
      *v40 = 0LL;
      v40[1] = 0LL;
      v99[0] = v37;
      *(_QWORD *)&v84 = v41;
      v99[1] = v38;
      *((_QWORD *)&v84 + 1) = v42;
      sub_180010910((__int64)v99);
      sub_180010910((__int64)v147);
      *(_QWORD *)&v81 = v104;
      v104[2] = 0LL;
      v104[3] = 15LL;
      LOBYTE(v104[0]) = 0;
      sub_180012190(v104, byte_180128042, 0LL);
      v109[2] = 0LL;
      v109[3] = 15LL;
      LOBYTE(v109[0]) = 0;
      sub_180012190(v109, "ImageProcessingFullscreen", 0x19uLL);
      sub_180095A64(v41, v109, 0LL, v104);
      sub_180095740(v41, 14, 2, 3, 1);
      v132 = 0;
      v133 = v18;
      v134 = 0LL;
      v135 = 0LL;
      v136 = 0LL;
      sub_180095F34(v41, &v132);
      v43 = sub_180068694(*(_QWORD *)(a1 + 56), v148, 0LL, 0LL, 0);
      v44 = *v43;
      v45 = v43[1];
      *v43 = 0LL;
      v43[1] = 0LL;
      v100[0] = v41;
      *(_QWORD *)&v84 = v44;
      v100[1] = v42;
      *((_QWORD *)&v84 + 1) = v45;
      sub_180010910((__int64)v100);
      sub_180010910((__int64)v148);
      v110[2] = 0LL;
      v110[3] = 15LL;
      LOBYTE(v110[0]) = 0;
      sub_180012190(v110, byte_180128042, 0LL);
      v111[2] = 0LL;
      v111[3] = 15LL;
      LOBYTE(v111[0]) = 0;
      sub_180012190(v111, "ImageProcessingFullscreen", 0x19uLL);
      sub_180095A64(v44, v111, 0LL, v110);
      sub_180095740(v44, 0, 2, 0, 1);
      v137 = 0;
      v138 = v18;
      v139 = 0LL;
      v140 = 0LL;
      v141 = 0LL;
      sub_180095F34(v44, &v137);
      sub_180069008(*(_QWORD *)(a1 + 56));
      sub_180010910((__int64)&v84);
      if ( v90 )
      {
        sub_1800126E8((__int64)v90, v91);
        sub_180010884(v90, (v92 - (_QWORD)v90) & 0xFFFFFFFFFFFFFFF0uLL);
      }
      ++v23;
      v21 = v86;
    }
    while ( v23 != (int *)si128.m128i_i64[0] );
    v4 = (__int128 *)v85;
  }
  sub_180056524(v4, &v85, 6u);
  v46 = sub_18001875C(v168, (__int64)&qword_1801F5FD8);
  sub_18004A344((__int64)v177, (__int64)v46, 8);
  v47 = sub_18001875C(v169, (__int64)&qword_1801F5E78);
  sub_18004A344((__int64)v178, (__int64)v47, 8);
  v48 = sub_18001875C(v170, (__int64)&qword_1801F5E98);
  sub_18004A564((__int64)v179, (__int64)v48, v49, 1.0);
  v50 = v85;
  sub_18008FB1C(v85, v177, 3LL, 0LL);
  sub_180091160(v50, &qword_1801F5E78, 9LL);
  v51 = sub_18001875C(v171, (__int64)&qword_1801F5EF8);
  sub_18004A344((__int64)v180, (__int64)v51, 2);
  v52 = sub_18001875C(v151, (__int64)&qword_1801F5F18);
  sub_18004A564((__int64)v181, (__int64)v52, v53, 1.0);
  v54 = sub_18001875C(v152, (__int64)&qword_1801F6138);
  sub_18004A344((__int64)v182, (__int64)v54, 2);
  v55 = sub_18001875C(v153, (__int64)&qword_1801F6078);
  sub_18004A344((__int64)v183, (__int64)v55, 5);
  v56 = sub_18001875C(v154, (__int64)&qword_1801F6058);
  sub_18004A344((__int64)v184, (__int64)v56, 5);
  v57 = sub_18001875C(v155, (__int64)&qword_1801F6038);
  sub_18004A344((__int64)v185, (__int64)v57, 5);
  v58 = sub_18001875C(v156, (__int64)&qword_1801F6018);
  sub_18004A344((__int64)v186, (__int64)v58, 5);
  v86 = 0LL;
  v59 = sub_18001875C(v157, (__int64)&qword_1801F61D8);
  sub_18004A498((__int64)v187, (__int64)v59, v60, &v86);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801BD9C0);
  v61 = sub_18001875C(v158, (__int64)&qword_1801F6198);
  sub_18004A3CC((__int64)v188, (__int64)v61, v62, (__int128 *)si128.m128i_i8);
  v93 = 0LL;
  v63 = sub_18001875C(v166, (__int64)&qword_1801F6178);
  sub_18004A3CC((__int64)v189, (__int64)v63, v64, &v93);
  v150 = 0LL;
  v65 = sub_18001875C(v159, (__int64)&qword_1801F6158);
  sub_18004A3CC((__int64)v190, (__int64)v65, v66, &v150);
  v67 = sub_18001875C(v160, (__int64)&qword_1801F6218);
  sub_18004A344((__int64)v191, (__int64)v67, 5);
  v68 = sub_18001875C(v161, (__int64)&qword_1801F6238);
  sub_18004A344((__int64)v192, (__int64)v68, 5);
  v69 = sub_18001875C(v162, (__int64)&qword_1801F5058);
  sub_18004A344((__int64)v193, (__int64)v69, 5);
  v149 = xmmword_1801BD750;
  v70 = sub_18001875C(v163, (__int64)&qword_1801F5ED8);
  sub_18004A498((__int64)v194, (__int64)v70, v71, &v149);
  sub_18008FB1C(v50, v180, 15LL, 1LL);
  sub_180090928(v50, 16LL);
  sub_18008F6BC(v50, &qword_1801F5EB8, 5LL, *(unsigned int *)(a1 + 112));
  v72 = sub_18001875C(v164, (__int64)&qword_1801F61B8);
  sub_18004A344((__int64)v173, (__int64)v72, 8);
  v73 = sub_18008FBE8(v50, v173, 1LL);
  if ( v175 )
  {
    sub_180010884(v175, (*((_QWORD *)&v176 + 1) - (_QWORD)v175) & 0xFFFFFFFFFFFFFFFCuLL);
    v175 = 0LL;
    v176 = 0LL;
  }
  if ( v174 >= 0x10 )
    sub_180010884(v173[0], v174 + 1);
  sub_180091194(v50, v73, 12LL);
  sub_180090304(v74);
  v75 = *(_QWORD *)(a1 + 56);
  v81 = 0LL;
  if ( *((_QWORD *)&v85 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v85 + 1) + 8LL));
  v81 = v85;
  sub_180069D0C(v75, &v81);
  sub_18000B4C0((__int64)v180, 64LL, 15LL);
  sub_18000B4C0((__int64)v177, 64LL, 3LL);
  sub_180010910((__int64)&v85);
  v76 = sub_18001875C(v165, (__int64)&qword_1801F5E58);
  sub_180057684((__int64)v4, v101, (char **)v76);
  *(_QWORD *)&v77 = sub_1800694C0(v101[0], 4u);
  *((_QWORD *)&v77 + 1) = *(_QWORD *)(v77 + 8);
  if ( *((_QWORD *)&v77 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v77 + 1) + 8LL));
    *((_QWORD *)&v77 + 1) = *(_QWORD *)(v77 + 8);
  }
  *(_QWORD *)&v77 = *(_QWORD *)v77;
  v94 = v77;
  v78 = *(_QWORD *)(a1 + 56);
  v89 = 0LL;
  if ( *((_QWORD *)&v77 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v77 + 1) + 8LL));
    *(_QWORD *)&v77 = v94;
  }
  v89 = v77;
  sub_180069D0C(v78, &v89);
  sub_180068E10(*(_QWORD *)(a1 + 56));
  sub_180010910((__int64)&v94);
  return sub_180010910((__int64)v101);
}
