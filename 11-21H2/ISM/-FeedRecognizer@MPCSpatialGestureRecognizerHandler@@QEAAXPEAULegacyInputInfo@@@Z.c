/*
 * XREFs of ?FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800A9D90
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800A39B0 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetMode@MPCSpatialGestureRecognizerHandler@@AEAAXW4MPC2DGestureMode@@@Z @ 0x1800ABC2C (-SetMode@MPCSpatialGestureRecognizerHandler@@AEAAXW4MPC2DGestureMode@@@Z.c)
 */

void __fastcall MPCSpatialGestureRecognizerHandler::FeedRecognizer(
        MPCSpatialGestureRecognizerHandler *this,
        struct LegacyInputInfo *a2)
{
  __int64 *v4; // rcx
  __int128 *v5; // r9
  __int128 v6; // xmm1
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int128 *v9; // rdx
  __int64 (__fastcall *v10)(__int64 *, __int128 *, _QWORD, __int128 *); // r11
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // rdx
  int v25; // eax
  __int64 *v26; // rcx
  __int128 *v27; // r9
  __int128 v28; // xmm1
  __int64 v29; // rax
  __int128 v30; // xmm0
  __int128 *v31; // rdx
  __int64 (__fastcall *v32)(__int64 *, __int128 *, _QWORD, __int128 *); // r11
  __int64 v33; // rax
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int64 v46; // rdx
  unsigned int v47; // eax
  __int64 *v48; // rcx
  __int128 *v49; // r9
  __int128 v50; // xmm1
  __int64 v51; // rax
  __int128 v52; // xmm0
  __int128 *v53; // rdx
  __int64 (__fastcall *v54)(__int64 *, __int128 *, _QWORD, __int128 *); // r11
  __int64 v55; // rax
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  __int64 v68; // rdx
  int v69; // eax
  __int64 v70; // rdx
  __int64 *v71; // rcx
  __int128 *v72; // rdx
  __int128 v73; // xmm1
  __int128 *v74; // r9
  __int64 v75; // rax
  __int128 v76; // xmm0
  __int64 (__fastcall *v77)(__int64 *, __int128 *, _QWORD, __int128 *); // r11
  __int64 v78; // rax
  __int128 v79; // xmm1
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  __int128 v84; // xmm0
  __int128 v85; // xmm1
  __int128 v86; // xmm1
  __int128 v87; // xmm0
  __int128 v88; // xmm1
  __int128 v89; // xmm0
  __int128 v90; // xmm1
  __int64 v91; // rdx
  int v92; // eax
  int v93; // eax
  __int64 *v94; // rcx
  __int128 v95; // xmm1
  __int128 v96; // xmm0
  __int64 v97; // rax
  __int128 v98; // xmm1
  __int128 v99; // xmm0
  __int128 v100; // xmm1
  __int128 v101; // xmm0
  __int128 v102; // xmm1
  __int128 v103; // xmm0
  __int128 v104; // xmm1
  __int128 v105; // xmm0
  __int128 v106; // xmm1
  __int128 v107; // xmm0
  __int128 v108; // xmm1
  __int128 v109; // xmm0
  __int128 v110; // xmm1
  __int128 v111; // xmm0
  __int64 v112; // rdx
  int v113; // eax
  __int64 *v114; // rcx
  __int128 v115; // xmm1
  __int128 v116; // xmm0
  __int64 v117; // rax
  __int128 v118; // xmm1
  __int128 v119; // xmm0
  __int128 v120; // xmm1
  __int128 v121; // xmm0
  __int128 v122; // xmm1
  __int128 v123; // xmm0
  __int128 v124; // xmm1
  __int128 v125; // xmm0
  __int128 v126; // xmm1
  __int128 v127; // xmm0
  __int128 v128; // xmm1
  __int128 v129; // xmm0
  __int128 v130; // xmm1
  __int128 v131; // xmm0
  __int64 v132; // rdx
  int v133; // eax
  __int64 *v134; // rcx
  __int128 v135; // xmm1
  __int128 v136; // xmm0
  __int64 v137; // rax
  __int128 v138; // xmm1
  __int128 v139; // xmm0
  __int128 v140; // xmm1
  __int128 v141; // xmm0
  __int128 v142; // xmm1
  __int128 v143; // xmm0
  __int128 v144; // xmm1
  __int128 v145; // xmm0
  __int128 v146; // xmm1
  __int128 v147; // xmm0
  __int128 v148; // xmm1
  __int128 v149; // xmm0
  __int128 v150; // xmm1
  __int128 v151; // xmm0
  __int64 v152; // rdx
  int v153; // eax
  __int64 v154; // rdx
  __int64 *v155; // rcx
  __int128 v156; // xmm1
  __int128 v157; // xmm0
  __int64 v158; // rax
  __int128 v159; // xmm1
  __int128 v160; // xmm0
  __int128 v161; // xmm1
  __int128 v162; // xmm0
  __int128 v163; // xmm1
  __int128 v164; // xmm0
  __int128 v165; // xmm1
  __int128 v166; // xmm0
  __int128 v167; // xmm1
  __int128 v168; // xmm0
  __int128 v169; // xmm1
  __int128 v170; // xmm0
  __int128 v171; // xmm1
  __int128 v172; // xmm0
  __int64 v173; // rdx
  int v174; // eax
  int v175; // [rsp+28h] [rbp-E0h]
  __int128 v176; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v177; // [rsp+48h] [rbp-C0h]
  __int128 v178; // [rsp+58h] [rbp-B0h]
  __int128 v179; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v180; // [rsp+78h] [rbp-90h]
  __int128 v181; // [rsp+88h] [rbp-80h]
  __int128 v182; // [rsp+98h] [rbp-70h]
  __int128 v183; // [rsp+A8h] [rbp-60h]
  __int128 v184; // [rsp+B8h] [rbp-50h]
  __int128 v185; // [rsp+C8h] [rbp-40h]
  __int128 v186; // [rsp+D8h] [rbp-30h]
  __int128 v187; // [rsp+E8h] [rbp-20h]
  __int128 v188; // [rsp+F8h] [rbp-10h]
  __int128 v189; // [rsp+108h] [rbp+0h]
  __int128 v190; // [rsp+118h] [rbp+10h]
  __int128 v191; // [rsp+128h] [rbp+20h]
  __int128 v192; // [rsp+138h] [rbp+30h]
  __int128 v193; // [rsp+148h] [rbp+40h]
  __int64 v194; // [rsp+158h] [rbp+50h]
  wil::details::in1diag3 *retaddr; // [rsp+560h] [rbp+458h]

  *((_QWORD *)this + 13) = a2;
  *((_DWORD *)this + 8) = (int)*((float *)a2 + 218);
  *((_DWORD *)this + 9) = (int)*((float *)a2 + 219);
  *((_QWORD *)this + 20) = *((_QWORD *)a2 + 2);
  switch ( *((_DWORD *)a2 + 16) )
  {
    case 2:
      if ( *((_BYTE *)a2 + 1204) )
        v70 = 0LL;
      else
        v70 = *((unsigned int *)a2 + 67);
      MPCSpatialGestureRecognizerHandler::SetMode(this, v70);
      v71 = (__int64 *)*((_QWORD *)this + 3);
      v72 = (__int128 *)((char *)a2 + 936);
      v73 = *(_OWORD *)((char *)a2 + 328);
      v74 = &v179;
      v176 = *(_OWORD *)((char *)a2 + 312);
      v75 = *v71;
      v76 = *(_OWORD *)((char *)a2 + 344);
      v177 = v73;
      v77 = *(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, __int128 *))(v75 + 48);
      v78 = 9LL;
      v178 = v76;
      do
      {
        v79 = v72[1];
        *v74 = *v72;
        v80 = v72[2];
        v74[1] = v79;
        v81 = v72[3];
        v74[2] = v80;
        v82 = v72[4];
        v74[3] = v81;
        v83 = v72[5];
        v74[4] = v82;
        v84 = v72[6];
        v74[5] = v83;
        v85 = v72[7];
        v72 += 8;
        v74[6] = v84;
        v74 += 8;
        *(v74 - 1) = v85;
        --v78;
      }
      while ( v78 );
      v86 = v72[1];
      *v74 = *v72;
      v87 = v72[2];
      v74[1] = v86;
      v88 = v72[3];
      v74[2] = v87;
      v89 = v72[4];
      v74[3] = v88;
      v90 = v72[5];
      v91 = *((_QWORD *)v72 + 12);
      v74[4] = v89;
      v74[5] = v90;
      *((_QWORD *)v74 + 12) = v91;
      v92 = v77(v71, &v179, *((_QWORD *)a2 + 2), &v176);
      if ( v92 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xCE,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v92,
          v175);
      break;
    case 3:
      v48 = (__int64 *)*((_QWORD *)this + 3);
      v49 = &v179;
      v50 = *(_OWORD *)((char *)a2 + 328);
      v176 = *(_OWORD *)((char *)a2 + 312);
      v51 = *v48;
      v52 = *(_OWORD *)((char *)a2 + 344);
      v53 = (__int128 *)((char *)a2 + 936);
      v177 = v50;
      v54 = *(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, __int128 *))(v51 + 64);
      v55 = 9LL;
      v178 = v52;
      do
      {
        v56 = v53[1];
        *v49 = *v53;
        v57 = v53[2];
        v49[1] = v56;
        v58 = v53[3];
        v49[2] = v57;
        v59 = v53[4];
        v49[3] = v58;
        v60 = v53[5];
        v49[4] = v59;
        v61 = v53[6];
        v49[5] = v60;
        v62 = v53[7];
        v53 += 8;
        v49[6] = v61;
        v49 += 8;
        *(v49 - 1) = v62;
        --v55;
      }
      while ( v55 );
      v63 = v53[1];
      *v49 = *v53;
      v64 = v53[2];
      v49[1] = v63;
      v65 = v53[3];
      v49[2] = v64;
      v66 = v53[4];
      v49[3] = v65;
      v67 = v53[5];
      v68 = *((_QWORD *)v53 + 12);
      v49[4] = v66;
      v49[5] = v67;
      *((_QWORD *)v49 + 12) = v68;
      v69 = v54(v48, &v179, *((_QWORD *)a2 + 2), &v176);
      if ( v69 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xE2,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v69,
          v175);
      break;
    case 4:
      v26 = (__int64 *)*((_QWORD *)this + 3);
      v27 = &v179;
      v28 = *(_OWORD *)((char *)a2 + 328);
      v176 = *(_OWORD *)((char *)a2 + 312);
      v29 = *v26;
      v30 = *(_OWORD *)((char *)a2 + 344);
      v31 = (__int128 *)((char *)a2 + 936);
      v177 = v28;
      v32 = *(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, __int128 *))(v29 + 72);
      v33 = 9LL;
      v178 = v30;
      do
      {
        v34 = v31[1];
        *v27 = *v31;
        v35 = v31[2];
        v27[1] = v34;
        v36 = v31[3];
        v27[2] = v35;
        v37 = v31[4];
        v27[3] = v36;
        v38 = v31[5];
        v27[4] = v37;
        v39 = v31[6];
        v27[5] = v38;
        v40 = v31[7];
        v31 += 8;
        v27[6] = v39;
        v27 += 8;
        *(v27 - 1) = v40;
        --v33;
      }
      while ( v33 );
      v41 = v31[1];
      *v27 = *v31;
      v42 = v31[2];
      v27[1] = v41;
      v43 = v31[3];
      v27[2] = v42;
      v44 = v31[4];
      v27[3] = v43;
      v45 = v31[5];
      v46 = *((_QWORD *)v31 + 12);
      v27[4] = v44;
      v27[5] = v45;
      *((_QWORD *)v27 + 12) = v46;
      v47 = v32(v26, &v179, *((_QWORD *)a2 + 2), &v176);
      if ( (int)(v47 + 0x80000000) >= 0 && v47 != -2147023728 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xF0,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)v47,
          v175);
      break;
    case 6:
    case 0xB:
      v4 = (__int64 *)*((_QWORD *)this + 3);
      v5 = &v179;
      v6 = *(_OWORD *)((char *)a2 + 328);
      v176 = *(_OWORD *)((char *)a2 + 312);
      v7 = *v4;
      v8 = *(_OWORD *)((char *)a2 + 344);
      v9 = (__int128 *)((char *)a2 + 936);
      v177 = v6;
      v10 = *(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, __int128 *))(v7 + 56);
      v11 = 9LL;
      v178 = v8;
      do
      {
        v12 = v9[1];
        *v5 = *v9;
        v13 = v9[2];
        v5[1] = v12;
        v14 = v9[3];
        v5[2] = v13;
        v15 = v9[4];
        v5[3] = v14;
        v16 = v9[5];
        v5[4] = v15;
        v17 = v9[6];
        v5[5] = v16;
        v18 = v9[7];
        v9 += 8;
        v5[6] = v17;
        v5 += 8;
        *(v5 - 1) = v18;
        --v11;
      }
      while ( v11 );
      v19 = v9[1];
      *v5 = *v9;
      v20 = v9[2];
      v5[1] = v19;
      v21 = v9[3];
      v5[2] = v20;
      v22 = v9[4];
      v5[3] = v21;
      v23 = v9[5];
      v24 = *((_QWORD *)v9 + 12);
      v5[4] = v22;
      v5[5] = v23;
      *((_QWORD *)v5 + 12) = v24;
      v25 = v10(v4, &v179, *((_QWORD *)a2 + 2), &v176);
      if ( v25 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xD9,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v25,
          v175);
      break;
  }
  if ( *((_DWORD *)a2 + 17) == 2 )
  {
    if ( *(_DWORD *)a2 == 0x2000 )
      v154 = 0LL;
    else
      v154 = *((unsigned int *)a2 + 67);
    MPCSpatialGestureRecognizerHandler::SetMode(this, v154);
    v155 = (__int64 *)*((_QWORD *)this + 3);
    v156 = *(_OWORD *)((char *)a2 + 328);
    v176 = *(_OWORD *)((char *)a2 + 312);
    v157 = *(_OWORD *)((char *)a2 + 344);
    v158 = *v155;
    v177 = v156;
    v159 = *((_OWORD *)a2 + 142);
    v178 = v157;
    v179 = *((_OWORD *)a2 + 141);
    v160 = *((_OWORD *)a2 + 143);
    v180 = v159;
    v161 = *((_OWORD *)a2 + 144);
    v181 = v160;
    v162 = *((_OWORD *)a2 + 145);
    v182 = v161;
    v163 = *((_OWORD *)a2 + 146);
    v183 = v162;
    v164 = *((_OWORD *)a2 + 147);
    v184 = v163;
    v165 = *((_OWORD *)a2 + 148);
    v185 = v164;
    v166 = *((_OWORD *)a2 + 149);
    v186 = v165;
    v167 = *((_OWORD *)a2 + 150);
    v187 = v166;
    v168 = *((_OWORD *)a2 + 151);
    v188 = v167;
    v169 = *((_OWORD *)a2 + 152);
    v189 = v168;
    v170 = *((_OWORD *)a2 + 153);
    v190 = v169;
    v171 = *((_OWORD *)a2 + 154);
    v191 = v170;
    v172 = *((_OWORD *)a2 + 155);
    v173 = *((_QWORD *)a2 + 312);
    v192 = v171;
    v193 = v172;
    v194 = v173;
    v174 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, __int128 *))(v158 + 80))(
             v155,
             &v179,
             *((_QWORD *)a2 + 2),
             &v176);
    if ( v174 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x10D,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v174,
        v175);
  }
  else
  {
    switch ( *((_DWORD *)a2 + 17) )
    {
      case 3:
LABEL_39:
        v134 = (__int64 *)*((_QWORD *)this + 3);
        v135 = *(_OWORD *)((char *)a2 + 328);
        v176 = *(_OWORD *)((char *)a2 + 312);
        v136 = *(_OWORD *)((char *)a2 + 344);
        v137 = *v134;
        v177 = v135;
        v138 = *((_OWORD *)a2 + 142);
        v178 = v136;
        v179 = *((_OWORD *)a2 + 141);
        v139 = *((_OWORD *)a2 + 143);
        v180 = v138;
        v140 = *((_OWORD *)a2 + 144);
        v181 = v139;
        v141 = *((_OWORD *)a2 + 145);
        v182 = v140;
        v142 = *((_OWORD *)a2 + 146);
        v183 = v141;
        v143 = *((_OWORD *)a2 + 147);
        v184 = v142;
        v144 = *((_OWORD *)a2 + 148);
        v185 = v143;
        v145 = *((_OWORD *)a2 + 149);
        v186 = v144;
        v146 = *((_OWORD *)a2 + 150);
        v187 = v145;
        v147 = *((_OWORD *)a2 + 151);
        v188 = v146;
        v148 = *((_OWORD *)a2 + 152);
        v189 = v147;
        v149 = *((_OWORD *)a2 + 153);
        v190 = v148;
        v150 = *((_OWORD *)a2 + 154);
        v191 = v149;
        v151 = *((_OWORD *)a2 + 155);
        v152 = *((_QWORD *)a2 + 312);
        v192 = v150;
        v193 = v151;
        v194 = v152;
        v153 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, __int128 *))(v137 + 88))(
                 v134,
                 &v179,
                 *((_QWORD *)a2 + 2),
                 &v176);
        if ( v153 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x117,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
            (const char *)(unsigned int)v153,
            v175);
        goto LABEL_31;
      case 4:
        v94 = (__int64 *)*((_QWORD *)this + 3);
        v95 = *(_OWORD *)((char *)a2 + 328);
        v176 = *(_OWORD *)((char *)a2 + 312);
        v96 = *(_OWORD *)((char *)a2 + 344);
        v97 = *v94;
        v177 = v95;
        v98 = *((_OWORD *)a2 + 142);
        v178 = v96;
        v179 = *((_OWORD *)a2 + 141);
        v99 = *((_OWORD *)a2 + 143);
        v180 = v98;
        v100 = *((_OWORD *)a2 + 144);
        v181 = v99;
        v101 = *((_OWORD *)a2 + 145);
        v182 = v100;
        v102 = *((_OWORD *)a2 + 146);
        v183 = v101;
        v103 = *((_OWORD *)a2 + 147);
        v184 = v102;
        v104 = *((_OWORD *)a2 + 148);
        v185 = v103;
        v105 = *((_OWORD *)a2 + 149);
        v186 = v104;
        v106 = *((_OWORD *)a2 + 150);
        v187 = v105;
        v107 = *((_OWORD *)a2 + 151);
        v188 = v106;
        v108 = *((_OWORD *)a2 + 152);
        v189 = v107;
        v109 = *((_OWORD *)a2 + 153);
        v190 = v108;
        v110 = *((_OWORD *)a2 + 154);
        v191 = v109;
        v111 = *((_OWORD *)a2 + 155);
        v112 = *((_QWORD *)a2 + 312);
        v192 = v110;
        v193 = v111;
        v194 = v112;
        v113 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, __int128 *))(v97 + 96))(
                 v94,
                 &v179,
                 *((_QWORD *)a2 + 2),
                 &v176);
        if ( v113 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x120,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
            (const char *)(unsigned int)v113,
            v175);
        break;
      case 5:
        break;
      case 6:
        goto LABEL_39;
      default:
        goto LABEL_31;
    }
    v114 = (__int64 *)*((_QWORD *)this + 3);
    v115 = *(_OWORD *)((char *)a2 + 328);
    v176 = *(_OWORD *)((char *)a2 + 312);
    v116 = *(_OWORD *)((char *)a2 + 344);
    v117 = *v114;
    v177 = v115;
    v118 = *((_OWORD *)a2 + 142);
    v178 = v116;
    v179 = *((_OWORD *)a2 + 141);
    v119 = *((_OWORD *)a2 + 143);
    v180 = v118;
    v120 = *((_OWORD *)a2 + 144);
    v181 = v119;
    v121 = *((_OWORD *)a2 + 145);
    v182 = v120;
    v122 = *((_OWORD *)a2 + 146);
    v183 = v121;
    v123 = *((_OWORD *)a2 + 147);
    v184 = v122;
    v124 = *((_OWORD *)a2 + 148);
    v185 = v123;
    v125 = *((_OWORD *)a2 + 149);
    v186 = v124;
    v126 = *((_OWORD *)a2 + 150);
    v187 = v125;
    v127 = *((_OWORD *)a2 + 151);
    v188 = v126;
    v128 = *((_OWORD *)a2 + 152);
    v189 = v127;
    v129 = *((_OWORD *)a2 + 153);
    v190 = v128;
    v130 = *((_OWORD *)a2 + 154);
    v191 = v129;
    v131 = *((_OWORD *)a2 + 155);
    v132 = *((_QWORD *)a2 + 312);
    v192 = v130;
    v193 = v131;
    v194 = v132;
    v133 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, __int128 *))(v117 + 104))(
             v114,
             &v179,
             *((_QWORD *)a2 + 2),
             &v176);
    if ( v133 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x128,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v133,
        v175);
  }
LABEL_31:
  if ( *((_BYTE *)this + 200) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 280LL))(*((_QWORD *)this + 2));
    *((_BYTE *)this + 200) = 0;
  }
  if ( *((_BYTE *)this + 172) )
    v93 = *((_DWORD *)this + 42);
  else
    v93 = 0;
  *((_DWORD *)a2 + 199) = v93;
  *((_DWORD *)a2 + 200) = *((_DWORD *)this + 44);
  *((_DWORD *)a2 + 201) = *((_DWORD *)this + 45);
  *((_QWORD *)this + 13) = 0LL;
}
