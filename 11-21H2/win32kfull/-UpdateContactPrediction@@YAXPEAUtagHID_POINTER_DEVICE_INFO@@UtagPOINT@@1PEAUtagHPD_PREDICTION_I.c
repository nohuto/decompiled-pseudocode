/*
 * XREFs of ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01E7BC0
 * Callers:
 *     DoPrediction @ 0x1C01E8CB0 (DoPrediction.c)
 * Callees:
 *     ?DeltaOvershootCompensation@Prediction@@YA_J_J0@Z @ 0x1C016C0E0 (-DeltaOvershootCompensation@Prediction@@YA_J_J0@Z.c)
 *     ?Div128by64@@YA_J_J_K0AEA_J@Z @ 0x1C016C12C (-Div128by64@@YA_J_J_K0AEA_J@Z.c)
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01E6A88 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 *     ?Smooth@tagExpoSmoother@Prediction@@QEAA?AVCFixPred@2@V32@@Z @ 0x1C01E7A30 (-Smooth@tagExpoSmoother@Prediction@@QEAA-AVCFixPred@2@V32@@Z.c)
 */

void __fastcall UpdateContactPrediction(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagHPD_PREDICTION_INFO *a4,
        struct tagPOINT *a5,
        struct tagPOINT *a6)
{
  struct tagHPD_PREDICTION_INFO *v6; // r15
  int Lock; // r9d
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rcx
  unsigned __int64 v15; // r15
  signed __int64 v16; // rbx
  __int64 v17; // rax
  signed __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  struct tagHPD_PREDICTION_INFO *v22; // rcx
  __int64 v23; // rcx
  signed __int64 v24; // r14
  unsigned __int64 v25; // r15
  signed __int64 v26; // rbx
  __int64 v27; // rax
  signed __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  struct tagHPD_PREDICTION_INFO *v32; // rcx
  __int64 v33; // rcx
  signed __int64 v34; // r13
  __int64 v35; // rbx
  __int64 v36; // r15
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned __int64 v39; // r15
  __int64 v40; // r9
  unsigned __int64 v41; // r11
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // r15
  __int64 v48; // r9
  unsigned __int64 v49; // r10
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  __int64 *v52; // rax
  __int64 *v53; // rax
  __int64 v54; // rax
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rbx
  __int64 v61; // rbx
  __int64 v62; // r15
  unsigned __int64 v63; // rcx
  __int64 v64; // rdx
  unsigned __int64 v65; // r15
  __int64 v66; // r9
  unsigned __int64 v67; // r11
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rdx
  __int64 v70; // rax
  bool v71; // zf
  __int64 v72; // rcx
  __int64 v73; // rdx
  unsigned __int64 v74; // r14
  unsigned __int64 v75; // r8
  unsigned __int64 v76; // rcx
  unsigned __int64 v77; // rdx
  __int64 *v78; // rax
  __int64 *v79; // r14
  __int64 *v80; // rax
  __int64 v81; // rax
  __int64 v82; // r9
  __int64 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rbx
  __int64 v88; // rbx
  __int64 v89; // r14
  unsigned __int64 v90; // rcx
  __int64 v91; // rdx
  unsigned __int64 v92; // r14
  __int64 v93; // r9
  unsigned __int64 v94; // r11
  unsigned __int64 v95; // rcx
  unsigned __int64 v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rdx
  unsigned __int64 v100; // r14
  unsigned __int64 v101; // r8
  unsigned __int64 v102; // rcx
  unsigned __int64 v103; // rdx
  __int64 *v104; // rax
  __int64 *v105; // r14
  __int64 *v106; // rax
  __int64 v107; // rax
  __int64 v108; // r9
  __int64 v109; // rdx
  __int64 v110; // rdx
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rbx
  __int64 v114; // rbx
  signed __int64 v115; // rax
  unsigned __int64 v116; // rcx
  signed __int64 v117; // rdx
  __int64 v118; // r12
  unsigned __int64 v119; // r14
  unsigned __int64 v120; // r8
  unsigned __int64 v121; // rcx
  unsigned __int64 v122; // rdx
  __int64 v123; // rax
  __int64 v124; // rdx
  unsigned __int64 v125; // rcx
  __int64 v126; // r12
  unsigned __int64 v127; // r14
  __int64 v128; // r9
  unsigned __int64 v129; // r10
  unsigned __int64 v130; // rcx
  unsigned __int64 v131; // rdx
  __int64 *v132; // rax
  __int64 *v133; // r14
  __int64 *v134; // rax
  __int64 v135; // rax
  __int64 v136; // r9
  __int64 v137; // rdx
  __int64 v138; // rdx
  __int64 v139; // rax
  __int64 v140; // rax
  LONG x; // edx
  LONG v142; // eax
  LONG v143; // eax
  LONG y; // edx
  LONG v145; // eax
  LONG v146; // eax
  LONG v147; // eax
  LONG v148; // edx
  LONG v149; // edx
  LONG v150; // eax
  LONG v151; // edx
  LONG v152; // edx
  __int64 v153; // [rsp+30h] [rbp-50h] BYREF
  __int64 v154; // [rsp+38h] [rbp-48h] BYREF
  __int64 v155; // [rsp+40h] [rbp-40h] BYREF
  int v156; // [rsp+48h] [rbp-38h] BYREF
  __int64 v157; // [rsp+50h] [rbp-30h] BYREF
  __int64 v158; // [rsp+58h] [rbp-28h]
  __int64 v159; // [rsp+60h] [rbp-20h]
  __int64 v160; // [rsp+68h] [rbp-18h]
  __int64 v161; // [rsp+70h] [rbp-10h]

  v6 = a4;
  if ( LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) != 1
    || (Lock = *((_DWORD *)a1 + 209) - *((_DWORD *)a1 + 210)) == 0 )
  {
    Lock = WPP_MAIN_CB.DeviceQueue.Lock;
    if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
    {
      *a5 = a2;
      *a6 = a3;
      return;
    }
  }
  v8 = 0LL;
  v156 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v157 = (__int64)SHIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) << 32;
  v11 = 0LL;
  v159 = (__int64)a3.x << 32;
  v160 = (__int64)a3.y << 32;
  v12 = (__int64)a2.y << 32;
  v13 = (__int64)Lock << 32;
  v161 = (__int64)a2.x << 32;
  v158 = v12;
  v14 = v161 - *((_QWORD *)v6 + 270);
  if ( v14 )
  {
    v15 = (Div128by64(v14 >> 32, v14 << 32, v13, &v153) + 0x80000000) & 0xFFFFFFFF00000000uLL;
    v16 = Div128by64((__int64)(v15 - *((_QWORD *)a4 + 262)) >> 32, (v15 - *((_QWORD *)a4 + 262)) << 32, v13, &v153);
    v17 = -v16;
    v154 = -v16;
    if ( v16 >= 0 )
    {
      v18 = v16;
      v154 = -v16;
    }
    else
    {
      v18 = -v16;
    }
    v19 = *((_QWORD *)a4 + 266);
    if ( v18 > v19 )
    {
      v19 = v16;
      if ( v16 < 0 )
        v19 = -v16;
      *((_QWORD *)a4 + 266) = v19;
    }
    if ( v19 )
    {
      v20 = v16;
      if ( v16 < 0 )
        v20 = -v16;
      v21 = Div128by64(v20 >> 32, v20 << 32, v19, &v153);
      v22 = (struct tagHPD_PREDICTION_INFO *)((char *)a4 + 1888);
      if ( (__int64 *)((char *)a4 + 1888) != &v153 )
        *(_QWORD *)v22 = v21;
      if ( (struct tagHPD_PREDICTION_INFO *)((char *)a4 + 1856) != v22 )
        *((_QWORD *)a4 + 232) = *(_QWORD *)v22;
      v17 = v154;
    }
    v23 = *((_QWORD *)a4 + 264);
    v24 = v16;
    if ( v16 < 0 )
      v24 = v17;
    if ( v23 < 0 )
      v23 = -v23;
    v12 = v158;
    v10 = v24 - v23;
    *((_QWORD *)a4 + 262) = v15;
    v6 = a4;
    *((_QWORD *)a4 + 264) = v16;
  }
  if ( v12 != *((_QWORD *)v6 + 271) )
  {
    v25 = (Div128by64((v12 - *((_QWORD *)v6 + 271)) >> 32, (v12 - *((_QWORD *)v6 + 271)) << 32, v13, &v153) + 0x80000000) & 0xFFFFFFFF00000000uLL;
    v26 = Div128by64((__int64)(v25 - *((_QWORD *)a4 + 263)) >> 32, (v25 - *((_QWORD *)a4 + 263)) << 32, v13, &v153);
    v27 = -v26;
    v154 = -v26;
    if ( v26 >= 0 )
    {
      v28 = v26;
      v154 = -v26;
    }
    else
    {
      v28 = -v26;
    }
    v29 = *((_QWORD *)a4 + 267);
    if ( v28 > v29 )
    {
      v29 = v26;
      if ( v26 < 0 )
        v29 = -v26;
      *((_QWORD *)a4 + 267) = v29;
    }
    if ( v29 )
    {
      v30 = v26;
      if ( v26 < 0 )
        v30 = -v26;
      v31 = Div128by64(v30 >> 32, v30 << 32, v29, &v153);
      v32 = (struct tagHPD_PREDICTION_INFO *)((char *)a4 + 1904);
      if ( (__int64 *)((char *)a4 + 1904) != &v153 )
        *(_QWORD *)v32 = v31;
      if ( (struct tagHPD_PREDICTION_INFO *)((char *)a4 + 1872) != v32 )
        *((_QWORD *)a4 + 234) = *(_QWORD *)v32;
      v27 = v154;
    }
    v33 = *((_QWORD *)a4 + 265);
    v34 = v26;
    if ( v26 < 0 )
      v34 = v27;
    if ( v33 < 0 )
      v33 = -v33;
    v11 = v34 - v33;
    *((_QWORD *)a4 + 263) = v25;
    v6 = a4;
    *((_QWORD *)a4 + 265) = v26;
  }
  v35 = v159 - *((_QWORD *)v6 + 268);
  if ( v159 == *((_QWORD *)v6 + 268) )
  {
    v57 = *((_QWORD *)v6 + 272);
  }
  else
  {
    v36 = v157;
    v154 = v157;
    v37 = Div128by64(v35 >> 32, v35 << 32, v13, &v153);
    v153 = (__int64)(v36 ^ v37) >> 63;
    if ( (v37 & 0x8000000000000000uLL) != 0LL )
      v37 = -(__int64)v37;
    if ( v36 >= 0 )
      v38 = v154;
    else
      v38 = -v36;
    v39 = (unsigned int)v38 * (unsigned __int64)(unsigned int)v37;
    v40 = (unsigned int)v37;
    v41 = HIDWORD(v37);
    v42 = HIDWORD(v39) + (unsigned int)v38 * HIDWORD(v37);
    v43 = v153 ^ ((unsigned int)(v42 + v40 * HIDWORD(v38)) | ((unsigned __int64)(unsigned int)((((unsigned int)v42
                                                                                               + v40
                                                                                               * (unsigned __int64)HIDWORD(v38)) >> 32)
                                                                                             + v41 * HIDWORD(v38)
                                                                                             + HIDWORD(v42)) << 32));
    v44 = v43 - v153;
    if ( (_DWORD)v39 )
      v44 = v43;
    if ( v10 < 0 )
    {
      v45 = 0x100000000LL - *((_QWORD *)a4 + 232);
      v153 = (v44 ^ v45) >> 63;
      v46 = -v44;
      if ( v44 >= 0 )
        v46 = v44;
      if ( v45 < 0 )
        v45 = -v45;
      v47 = (unsigned int)v45 * (unsigned __int64)(unsigned int)v46;
      v48 = (unsigned int)v46;
      v49 = HIDWORD(v46);
      v50 = HIDWORD(v47) + (unsigned int)v45 * HIDWORD(v46);
      v51 = v153 ^ ((unsigned int)(v50 + v48 * HIDWORD(v45)) | ((unsigned __int64)(unsigned int)((((unsigned int)v50
                                                                                                 + v48
                                                                                                 * (unsigned __int64)HIDWORD(v45)) >> 32)
                                                                                               + v49 * HIDWORD(v45)
                                                                                               + HIDWORD(v50)) << 32));
      v44 = v51 - v153;
      if ( (_DWORD)v47 )
        v44 = v51;
    }
    v6 = a4;
    v153 = v44;
    v154 = v35;
    v52 = Prediction::tagRlsFilter::Filter(a4, &v155, (__int64)&v154, (__int64)&v153, &v156);
    if ( &v154 != v52 )
      v8 = *v52;
    v153 = v8;
    v53 = Prediction::tagExpoSmoother::Smooth((_QWORD *)a4 + 232, &v155, &v153);
    if ( v156 )
    {
      if ( &v154 != v53 )
        v9 = *v53;
      *((_QWORD *)a4 + 276) += v9;
      v57 = v159 + *((_QWORD *)a4 + 276);
      v58 = gPredictorRLSExpoSmoothAlpha;
      *((_QWORD *)a4 + 272) = v57;
      if ( (__int64 *)((char *)a4 + 1856) != &v155 )
        *((_QWORD *)a4 + 232) = v58;
      if ( (__int64 *)((char *)a4 + 1864) != &v155 )
        *((_QWORD *)a4 + 233) = 0LL;
    }
    else
    {
      if ( &v154 != v53 )
        v9 = *v53;
      v54 = Prediction::DeltaOvershootCompensation(*((_QWORD *)a4 + 276), v35);
      v56 = v54 + v55 + v159;
      *((_QWORD *)a4 + 276) = v54 + v55;
      v57 = v9 + v56;
    }
    v59 = *((_QWORD *)a4 + 272);
    if ( v35 < 0 )
    {
      if ( v57 < v59 )
        goto LABEL_80;
    }
    else if ( v57 > v59 )
    {
      v59 = v57;
    }
    v57 = v59;
  }
LABEL_80:
  v60 = v161;
  *((_QWORD *)v6 + 272) = v57;
  a6->x = (unsigned __int64)(v57 + 0x80000000LL) >> 32;
  v61 = v60 - *((_QWORD *)v6 + 270);
  if ( v61 )
  {
    v62 = v157;
    v153 = v157;
    v63 = Div128by64(v61 >> 32, v61 << 32, v13, &v155);
    v154 = (__int64)(v62 ^ v63) >> 63;
    if ( (v63 & 0x8000000000000000uLL) != 0LL )
      v63 = -(__int64)v63;
    if ( v62 >= 0 )
      v64 = v153;
    else
      v64 = -v62;
    v65 = (unsigned int)v64 * (unsigned __int64)(unsigned int)v63;
    v66 = (unsigned int)v63;
    v67 = HIDWORD(v63);
    v68 = HIDWORD(v65) + (unsigned int)v64 * HIDWORD(v63);
    v69 = v154 ^ ((unsigned int)(v68 + v66 * HIDWORD(v64)) | ((unsigned __int64)(unsigned int)((((unsigned int)v68
                                                                                               + v66
                                                                                               * (unsigned __int64)HIDWORD(v64)) >> 32)
                                                                                             + v67 * HIDWORD(v64)
                                                                                             + HIDWORD(v68)) << 32));
    v70 = v69 - v154;
    v71 = (_DWORD)v65 == 0;
    v6 = a4;
    if ( !v71 )
      v70 = v69;
    if ( v10 < 0 )
    {
      v72 = 0x100000000LL - *((_QWORD *)a4 + 236);
      v153 = (v70 ^ v72) >> 63;
      v73 = -v70;
      if ( v70 >= 0 )
        v73 = v70;
      if ( v72 < 0 )
        v72 = -v72;
      v74 = (unsigned int)v72 * (unsigned __int64)(unsigned int)v73;
      v75 = HIDWORD(v72);
      v76 = HIDWORD(v74) + (unsigned int)v72 * (unsigned __int64)HIDWORD(v73);
      v77 = v153 ^ ((unsigned int)(v76 + v73 * v75) | ((unsigned __int64)(unsigned int)((((unsigned int)v76
                                                                                        + (unsigned int)v73 * v75) >> 32)
                                                                                      + HIDWORD(v73) * v75
                                                                                      + HIDWORD(v76)) << 32));
      v70 = v77 - v153;
      if ( (_DWORD)v74 )
        v70 = v77;
    }
    v153 = v70;
    v154 = v61;
    v78 = Prediction::tagRlsFilter::Filter((_QWORD *)a4 + 108, &v155, (__int64)&v154, (__int64)&v153, &v156);
    if ( &v154 != v78 )
      v8 = *v78;
    v79 = (__int64 *)((char *)a4 + 1888);
    v153 = v8;
    v80 = Prediction::tagExpoSmoother::Smooth((_QWORD *)a4 + 236, &v155, &v153);
    if ( v156 )
    {
      if ( &v154 != v80 )
        v9 = *v80;
      *((_QWORD *)a4 + 278) += v9;
      v84 = v161 + *((_QWORD *)a4 + 278);
      v85 = gPredictorRLSExpoSmoothAlpha;
      *((_QWORD *)a4 + 274) = v84;
      if ( v79 != &v155 )
        *v79 = v85;
      if ( (__int64 *)((char *)a4 + 1896) != &v155 )
        *((_QWORD *)a4 + 237) = 0LL;
    }
    else
    {
      if ( &v154 != v80 )
        v9 = *v80;
      v81 = Prediction::DeltaOvershootCompensation(*((_QWORD *)a4 + 278), v61);
      v83 = v81 + v82 + v161;
      *((_QWORD *)a4 + 278) = v81 + v82;
      v84 = v9 + v83;
    }
    v86 = *((_QWORD *)a4 + 274);
    if ( v61 < 0 )
    {
      if ( v84 < v86 )
        goto LABEL_114;
    }
    else if ( v84 > v86 )
    {
      v86 = v84;
    }
    v84 = v86;
  }
  else
  {
    v84 = *((_QWORD *)v6 + 274);
  }
LABEL_114:
  v87 = v160;
  *((_QWORD *)v6 + 274) = v84;
  a5->x = (unsigned __int64)(v84 + 0x80000000LL) >> 32;
  v88 = v87 - *((_QWORD *)v6 + 269);
  if ( v88 )
  {
    v89 = v157;
    v153 = v157;
    v90 = Div128by64(v88 >> 32, v88 << 32, v13, &v155);
    v154 = (__int64)(v89 ^ v90) >> 63;
    if ( (v90 & 0x8000000000000000uLL) != 0LL )
      v90 = -(__int64)v90;
    if ( v89 >= 0 )
      v91 = v153;
    else
      v91 = -v89;
    v92 = (unsigned int)v91 * (unsigned __int64)(unsigned int)v90;
    v93 = (unsigned int)v90;
    v94 = HIDWORD(v90);
    v95 = HIDWORD(v92) + (unsigned int)v91 * HIDWORD(v90);
    v96 = v154 ^ ((unsigned int)(v95 + v93 * HIDWORD(v91)) | ((unsigned __int64)(unsigned int)((((unsigned int)v95
                                                                                               + v93
                                                                                               * (unsigned __int64)HIDWORD(v91)) >> 32)
                                                                                             + v94 * HIDWORD(v91)
                                                                                             + HIDWORD(v95)) << 32));
    v97 = v96 - v154;
    if ( (_DWORD)v92 )
      v97 = v96;
    if ( v11 < 0 )
    {
      v98 = 0x100000000LL - *((_QWORD *)v6 + 234);
      v153 = (v97 ^ v98) >> 63;
      v99 = -v97;
      if ( v97 >= 0 )
        v99 = v97;
      if ( v98 < 0 )
        v98 = -v98;
      v100 = (unsigned int)v98 * (unsigned __int64)(unsigned int)v99;
      v101 = HIDWORD(v98);
      v102 = HIDWORD(v100) + (unsigned int)v98 * (unsigned __int64)HIDWORD(v99);
      v103 = v153 ^ ((unsigned int)(v102 + v99 * v101) | ((unsigned __int64)(unsigned int)((((unsigned int)v102
                                                                                           + (unsigned int)v99 * v101) >> 32)
                                                                                         + HIDWORD(v99) * v101
                                                                                         + HIDWORD(v102)) << 32));
      v97 = v103 - v153;
      if ( (_DWORD)v100 )
        v97 = v103;
    }
    v153 = v97;
    v154 = v88;
    v104 = Prediction::tagRlsFilter::Filter((_QWORD *)v6 + 54, &v155, (__int64)&v154, (__int64)&v153, &v156);
    if ( &v154 != v104 )
      v8 = *v104;
    v105 = (__int64 *)((char *)v6 + 1872);
    v153 = v8;
    v106 = Prediction::tagExpoSmoother::Smooth((_QWORD *)v6 + 234, &v155, &v153);
    if ( v156 )
    {
      if ( &v154 != v106 )
        v9 = *v106;
      *((_QWORD *)v6 + 277) += v9;
      v110 = *((_QWORD *)v6 + 277) + v160;
      v111 = gPredictorRLSExpoSmoothAlpha;
      *((_QWORD *)v6 + 273) = v110;
      if ( v105 != &v155 )
        *v105 = v111;
      if ( (__int64 *)((char *)v6 + 1880) != &v155 )
        *((_QWORD *)v6 + 235) = 0LL;
    }
    else
    {
      if ( &v154 != v106 )
        v9 = *v106;
      v107 = Prediction::DeltaOvershootCompensation(*((_QWORD *)v6 + 277), v88);
      v109 = v107 + v108 + v160;
      *((_QWORD *)v6 + 277) = v107 + v108;
      v110 = v9 + v109;
    }
    v112 = *((_QWORD *)v6 + 273);
    if ( v88 < 0 )
    {
      if ( v110 < v112 )
        goto LABEL_148;
    }
    else if ( v110 > v112 )
    {
      v112 = v110;
    }
    v110 = v112;
  }
  else
  {
    v110 = *((_QWORD *)v6 + 273);
  }
LABEL_148:
  v113 = v158;
  *((_QWORD *)v6 + 273) = v110;
  a6->y = (unsigned __int64)(v110 + 0x80000000LL) >> 32;
  v114 = v113 - *((_QWORD *)v6 + 271);
  if ( !v114 )
  {
    v138 = *((_QWORD *)v6 + 275);
    goto LABEL_181;
  }
  v115 = Div128by64(v114 >> 32, v114 << 32, v13, &v155);
  v116 = v157;
  v117 = v115;
  v118 = (v157 ^ v115) >> 63;
  if ( v115 < 0 )
    v117 = -v115;
  if ( v157 < 0 )
    v116 = -v157;
  v119 = (unsigned int)v116 * (unsigned __int64)(unsigned int)v117;
  v120 = HIDWORD(v116);
  v121 = HIDWORD(v119) + (unsigned int)v116 * (unsigned __int64)HIDWORD(v117);
  v122 = v118 ^ ((unsigned int)(v121 + v117 * v120) | ((unsigned __int64)(unsigned int)((((unsigned int)v121
                                                                                        + (unsigned int)v117 * v120) >> 32)
                                                                                      + HIDWORD(v117) * v120
                                                                                      + HIDWORD(v121)) << 32));
  v123 = v122 - v118;
  if ( (_DWORD)v119 )
    v123 = v122;
  if ( v11 < 0 )
  {
    v124 = 0x100000000LL - *((_QWORD *)v6 + 238);
    v125 = -v123;
    v126 = (v123 ^ v124) >> 63;
    if ( v123 >= 0 )
      v125 = v123;
    if ( v124 < 0 )
      v124 = *((_QWORD *)v6 + 238) - 0x100000000LL;
    v127 = (unsigned int)v124 * (unsigned __int64)(unsigned int)v125;
    v128 = (unsigned int)v125;
    v129 = HIDWORD(v125);
    v130 = HIDWORD(v127) + (unsigned int)v124 * HIDWORD(v125);
    v131 = v126 ^ ((unsigned int)(v130 + v128 * HIDWORD(v124)) | ((unsigned __int64)(unsigned int)((((unsigned int)v130 + v128 * (unsigned __int64)HIDWORD(v124)) >> 32)
                                                                                                 + v129 * HIDWORD(v124)
                                                                                                 + HIDWORD(v130)) << 32));
    v123 = v131 - v126;
    if ( (_DWORD)v127 )
      v123 = v131;
  }
  v153 = v123;
  v157 = v114;
  v132 = Prediction::tagRlsFilter::Filter((_QWORD *)v6 + 162, &v155, (__int64)&v157, (__int64)&v153, &v156);
  if ( &v154 != v132 )
    v8 = *v132;
  v133 = (__int64 *)((char *)v6 + 1904);
  v153 = v8;
  v134 = Prediction::tagExpoSmoother::Smooth((_QWORD *)v6 + 238, &v155, &v153);
  if ( v156 )
  {
    if ( &v154 != v134 )
      v9 = *v134;
    *((_QWORD *)v6 + 279) += v9;
    v138 = *((_QWORD *)v6 + 279) + v158;
    v139 = gPredictorRLSExpoSmoothAlpha;
    *((_QWORD *)v6 + 275) = v138;
    if ( v133 != &v155 )
      *v133 = v139;
    if ( (__int64 *)((char *)v6 + 1912) != &v155 )
      *((_QWORD *)v6 + 239) = 0LL;
  }
  else
  {
    if ( &v154 != v134 )
      v9 = *v134;
    v135 = Prediction::DeltaOvershootCompensation(*((_QWORD *)v6 + 279), v114);
    v137 = v135 + v136 + v158;
    *((_QWORD *)v6 + 279) = v135 + v136;
    v138 = v9 + v137;
  }
  v140 = *((_QWORD *)v6 + 275);
  if ( v114 >= 0 )
  {
    if ( v138 > v140 )
      v140 = v138;
    goto LABEL_179;
  }
  if ( v138 >= v140 )
LABEL_179:
    v138 = v140;
LABEL_181:
  *((_QWORD *)v6 + 275) = v138;
  a5->y = (unsigned __int64)(v138 + 0x80000000LL) >> 32;
  *((_QWORD *)v6 + 268) = v159;
  *((_QWORD *)v6 + 269) = v160;
  *((_QWORD *)v6 + 270) = v161;
  *((_QWORD *)v6 + 271) = v158;
  x = a6->x;
  v142 = *((_DWORD *)a1 + 40);
  if ( a6->x < v142 )
  {
    a6->x = v142;
    x = v142;
  }
  v143 = *((_DWORD *)a1 + 42) - 1;
  if ( x > v143 )
    a6->x = v143;
  y = a6->y;
  v145 = *((_DWORD *)a1 + 41);
  if ( y < v145 )
  {
    a6->y = v145;
    y = v145;
  }
  v146 = *((_DWORD *)a1 + 43) - 1;
  if ( y > v146 )
    a6->y = v146;
  v147 = a5->x;
  v148 = *((_DWORD *)a1 + 44);
  if ( a5->x < v148 )
  {
    a5->x = v148;
    v147 = v148;
  }
  v149 = *((_DWORD *)a1 + 46);
  if ( v147 > v149 )
    a5->x = v149;
  v150 = a5->y;
  v151 = *((_DWORD *)a1 + 45);
  if ( v150 < v151 )
  {
    a5->y = v151;
    v150 = v151;
  }
  v152 = *((_DWORD *)a1 + 47);
  if ( v150 > v152 )
    a5->y = v152;
}
