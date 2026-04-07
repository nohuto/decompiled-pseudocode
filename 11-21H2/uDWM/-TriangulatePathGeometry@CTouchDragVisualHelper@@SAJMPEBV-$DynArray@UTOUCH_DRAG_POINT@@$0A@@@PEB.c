/*
 * XREFs of ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UMilPoint3F@@$0A@@@PEAV?$DynArray@UMilPoint2D@@$0A@@@PEAV?$DynArray@I$0A@@@PEAV?$DynArray@K$0A@@@@Z @ 0x1800E7580
 * Callers:
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x1800E70F8 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18000A060 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _o_sqrtf_0 @ 0x180060F04 (_o_sqrtf_0.c)
 *     ?AddAndSet@?$DynArray@K$0A@@@QEAAJIAEBK@Z @ 0x1800E1F38 (-AddAndSet@-$DynArray@K$0A@@@QEAAJIAEBK@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z @ 0x1800E2010 (-AddMultipleAndSet@-$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z @ 0x1800E20B4 (-AddMultipleAndSet@-$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTouchDragVisualHelper::TriangulatePathGeometry(
        float a1,
        __int64 a2,
        int *a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int *v7; // rcx
  __int64 *v8; // r10
  float v9; // xmm1_4
  unsigned int v10; // ebx
  float v11; // xmm12_4
  int v12; // eax
  int v13; // r15d
  int v14; // r14d
  unsigned int v15; // edi
  __int64 v16; // r12
  float v17; // xmm13_4
  __int64 v18; // rax
  __int64 v19; // r13
  float v20; // xmm4_4
  float v21; // xmm5_4
  float v22; // xmm6_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  float v25; // xmm1_4
  float v26; // xmm2_4
  int v27; // eax
  int v28; // edx
  __int64 v29; // r8
  __int64 v30; // rdx
  float v31; // xmm4_4
  float v32; // xmm5_4
  float v33; // xmm7_4
  float v34; // xmm2_4
  float v35; // xmm3_4
  float v36; // xmm4_4
  float v37; // xmm3_4
  float v38; // xmm2_4
  float *v39; // rax
  __int64 v40; // rcx
  float v41; // xmm1_4
  unsigned int v42; // r14d
  int v43; // ecx
  __int64 v44; // r8
  float v45; // xmm13_4
  __m128 v46; // xmm7
  float v47; // xmm14_4
  __m128 v48; // xmm8
  float v49; // xmm15_4
  float v50; // xmm9_4
  __m128 v51; // xmm11
  __m128 v52; // xmm12
  float v53; // xmm10_4
  float v54; // xmm6_4
  float v55; // xmm0_4
  float v56; // xmm6_4
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  float v60; // eax
  _QWORD *v61; // r15
  __int64 v62; // r10
  unsigned int v63; // eax
  unsigned int v64; // edx
  int v65; // eax
  int v66; // eax
  int v67; // ecx
  __int64 v68; // r15
  _DWORD *v69; // r9
  unsigned int v70; // eax
  unsigned int v71; // r8d
  int v72; // eax
  int v73; // ecx
  int v74; // ecx
  __int64 v75; // r15
  _DWORD *v76; // r9
  unsigned int v77; // eax
  unsigned int v78; // r8d
  int v79; // eax
  int v80; // r9d
  unsigned int v81; // eax
  int v82; // r9d
  int v83; // r9d
  unsigned int v84; // eax
  int v85; // r9d
  unsigned int v86; // eax
  unsigned int v88; // [rsp+28h] [rbp-E0h]
  char v89; // [rsp+38h] [rbp-D0h]
  char v90; // [rsp+39h] [rbp-CFh]
  int v91; // [rsp+3Ch] [rbp-CCh] BYREF
  int v92; // [rsp+40h] [rbp-C8h]
  int v93; // [rsp+44h] [rbp-C4h]
  __int64 v94; // [rsp+48h] [rbp-C0h]
  _QWORD *v95; // [rsp+50h] [rbp-B8h]
  unsigned int v96; // [rsp+58h] [rbp-B0h]
  int v97; // [rsp+5Ch] [rbp-ACh]
  int v98; // [rsp+60h] [rbp-A8h]
  unsigned int v99; // [rsp+64h] [rbp-A4h]
  __int64 v100; // [rsp+68h] [rbp-A0h]
  __int64 v101; // [rsp+70h] [rbp-98h]
  __int64 v102; // [rsp+78h] [rbp-90h]
  __int64 v103; // [rsp+80h] [rbp-88h]
  __int64 v104; // [rsp+88h] [rbp-80h]
  __int64 v105; // [rsp+90h] [rbp-78h]
  int *v106; // [rsp+98h] [rbp-70h]
  __int128 v107; // [rsp+A0h] [rbp-68h] BYREF
  int v108; // [rsp+B0h] [rbp-58h]
  int v109; // [rsp+B4h] [rbp-54h]
  int v110; // [rsp+B8h] [rbp-50h]
  __int64 v111; // [rsp+C0h] [rbp-48h]
  __int64 *v112; // [rsp+D0h] [rbp-38h]
  float v113; // [rsp+E0h] [rbp-28h]
  float v114; // [rsp+F0h] [rbp-18h]
  unsigned __int64 v115; // [rsp+F8h] [rbp-10h] BYREF
  float v116; // [rsp+100h] [rbp-8h]
  __int64 v117; // [rsp+108h] [rbp+0h]
  float v118; // [rsp+110h] [rbp+8h]
  __int64 v119; // [rsp+118h] [rbp+10h]
  float v120; // [rsp+120h] [rbp+18h]
  __int64 v121; // [rsp+128h] [rbp+20h]
  __int64 v122; // [rsp+138h] [rbp+30h]
  float v123; // [rsp+140h] [rbp+38h]
  float v124[4]; // [rsp+148h] [rbp+40h] BYREF
  double v125[2]; // [rsp+158h] [rbp+50h] BYREF
  float v126[6]; // [rsp+168h] [rbp+60h] BYREF
  _DWORD v127[6]; // [rsp+180h] [rbp+78h] BYREF
  _DWORD v128[6]; // [rsp+198h] [rbp+90h] BYREF
  double v129; // [rsp+1B0h] [rbp+A8h] BYREF
  double v130; // [rsp+1B8h] [rbp+B0h]
  double v131; // [rsp+1C0h] [rbp+B8h]
  double v132; // [rsp+1C8h] [rbp+C0h]

  v95 = a4;
  v7 = a3;
  v106 = a3;
  v8 = (__int64 *)a2;
  v112 = (__int64 *)a2;
  v9 = a1;
  *(float *)&v100 = a1;
  v104 = a5;
  v105 = a7;
  v10 = 0;
  v99 = *(_DWORD *)(a2 + 24);
  v96 = v99 - 1;
  v11 = (float)(v106[3] - v106[1]) / (float)(int)(v99 - 1);
  *(float *)&v94 = v11;
  v12 = -1;
  *(float *)&v13 = NAN;
  v92 = -1;
  v107 = 0LL;
  v108 = 0;
  v109 = 0;
  v14 = 0;
  v110 = 0;
  v93 = -1;
  v15 = 0;
  if ( !v99 )
    goto LABEL_78;
  v16 = 0LL;
  v17 = FLOAT_1_1920929eN7;
  while ( 1 )
  {
    v98 = v12;
    v18 = *v8;
    v19 = *((unsigned int *)a4 + 6);
    v20 = v9 * *(float *)(v16 + *v8 + 16);
    v21 = v9 * *(float *)(v16 + *v8 + 20);
    v22 = v9 * *(float *)(v16 + *v8 + 24);
    v23 = *(float *)(v16 + *v8 + 8);
    v24 = *(float *)(v16 + *v8 + 12);
    v126[0] = v20 + *(float *)(v16 + *v8 + 4);
    v126[1] = v21 + v23;
    v126[2] = v22 + v24;
    v25 = *(float *)(v16 + v18 + 8);
    v26 = *(float *)(v16 + v18 + 12);
    v126[3] = *(float *)(v16 + v18 + 4) - v20;
    v126[4] = v25 - v21;
    v126[5] = v26 - v22;
    v129 = (double)*v7;
    v130 = (float)((float)((float)(int)v15 * v11) + (float)v7[1]);
    v131 = (double)v7[2];
    v132 = v130;
    v27 = DynArray<MilPoint3F,0>::AddMultipleAndSet((__int64)a4, v126, 2u);
    v10 = v27;
    if ( v27 < 0 )
    {
      v88 = 237;
      goto LABEL_76;
    }
    v27 = DynArray<MilPoint2D,0>::AddMultipleAndSet(v104, &v129, 2u);
    v10 = v27;
    if ( v27 < 0 )
    {
      v88 = 238;
      goto LABEL_76;
    }
    v91 = 255;
    v27 = DynArray<unsigned long,0>::AddAndSet(v105, 2u, &v91);
    v10 = v27;
    if ( v27 < 0 )
    {
      v88 = 239;
      goto LABEL_76;
    }
    if ( v15 )
    {
      v28 = v15 - 1;
      if ( v13 >= 0 )
        v28 = v13;
      v91 = v28;
      v29 = *v95;
      v121 = *(_QWORD *)(*v95 + 12 * v19);
      v111 = *(_QWORD *)(v29 + 12LL * (unsigned int)(v19 + 1));
      v90 = 0;
      v30 = (unsigned int)v19 + 2 * (v28 - v15);
      v119 = *(_QWORD *)(v29 + 12 * v30);
      v120 = *(float *)(v29 + 12 * v30 + 8);
      v101 = *(_QWORD *)(v29 + 12LL * (unsigned int)(v30 + 1));
      LODWORD(v102) = *(_DWORD *)(v29 + 12LL * (unsigned int)(v30 + 1) + 8);
      v31 = *(float *)&v101 - *(float *)&v119;
      v32 = *((float *)&v101 + 1) - *((float *)&v119 + 1);
      v33 = (float)((float)(*(float *)&v101 - *(float *)&v119) * (float)(*((float *)&v111 + 1) - *((float *)&v121 + 1)))
          - (float)((float)(*((float *)&v101 + 1) - *((float *)&v119 + 1)) * (float)(*(float *)&v111 - *(float *)&v121));
      if ( COERCE_FLOAT(LODWORD(v33) & _xmm) <= v17 )
        break;
      v34 = (float)((float)((float)(*((float *)&v119 + 1) - *((float *)&v121 + 1))
                          * (float)(*(float *)&v111 - *(float *)&v121))
                  - (float)((float)(*(float *)&v119 - *(float *)&v121)
                          * (float)(*((float *)&v111 + 1) - *((float *)&v121 + 1))))
          / v33;
      v35 = (float)((float)((float)(*((float *)&v119 + 1) - *((float *)&v121 + 1)) * v31)
                  - (float)((float)(*(float *)&v119 - *(float *)&v121) * v32))
          / v33;
      if ( v34 <= v17 )
        break;
      if ( v34 >= 0.99999988 )
        break;
      if ( v35 <= v17 )
        break;
      if ( v35 >= 0.99999988 )
        break;
      v124[0] = (float)(v31 * v34) + *(float *)&v119;
      v124[1] = (float)(v32 * v34) + *((float *)&v119 + 1);
      v124[2] = (float)((float)(*(float *)&v102 - v120) * v34) + v120;
      DynArray<MilPoint3F,0>::AddMultipleAndSet((__int64)&v107, v124, 1u);
      v90 = 1;
      v13 = v91;
      v92 = v91;
      v14 = v110;
      if ( v15 == v96 )
        break;
    }
LABEL_59:
    ++v15;
    v16 += 28LL;
    if ( v15 >= v99 )
      goto LABEL_78;
    v9 = *(float *)&v100;
    v13 = v92;
    v12 = v93;
    v7 = v106;
    a4 = v95;
    v8 = v112;
  }
  if ( v13 < 0 )
  {
LABEL_45:
    if ( !v90 )
    {
      v73 = v93;
      if ( v93 > 0 )
        v73 = -1;
      v93 = v73;
      v74 = v98;
      if ( v98 <= 0 )
        v74 = v19 - 2;
      if ( v13 >= 0 )
      {
        v93 = v19;
        v92 = -1;
      }
      v128[0] = v19;
      v128[1] = v74;
      v128[2] = v74 + 1;
      v128[3] = v74 + 1;
      v128[4] = v19 + 1;
      v128[5] = v19;
      v75 = 0LL;
      while ( 1 )
      {
        v76 = &v128[v75];
        v77 = *(_DWORD *)(a6 + 24);
        v78 = v77 + 1;
        if ( v77 + 1 < v77 )
          break;
        if ( v78 > *(_DWORD *)(a6 + 20) )
        {
          v79 = DynArrayImpl<0>::AddMultipleAndSet(a6, 4u, 1, v76);
          v10 = v79;
          if ( v79 < 0 )
          {
            v85 = v79;
            v86 = 192;
            goto LABEL_72;
          }
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)a6 + 4LL * v77) = *v76;
          *(_DWORD *)(a6 + 24) = v78;
          v10 = 0;
        }
        v75 = (unsigned int)(v75 + 1);
        if ( (unsigned int)v75 >= 6 )
          goto LABEL_59;
      }
      v85 = -2147024362;
      v10 = -2147024362;
      v86 = 181;
LABEL_72:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v85, v86);
      v88 = 381;
      goto LABEL_64;
    }
    goto LABEL_59;
  }
  v115 = 0LL;
  v116 = 0.0;
  v89 = 0;
  v36 = 0.0;
  v37 = 0.0;
  v38 = 0.0;
  if ( v14 )
  {
    v39 = (float *)(v107 + 8);
    v40 = (unsigned int)v14;
    v36 = v116;
    do
    {
      v38 = v38 + *(v39 - 2);
      v37 = v37 + *(v39 - 1);
      v36 = v36 + *v39;
      v115 = __PAIR64__(LODWORD(v37), LODWORD(v38));
      v116 = v36;
      v39 += 3;
      --v40;
    }
    while ( v40 );
  }
  v41 = 1.0 / (float)v14;
  *(float *)&v115 = v38 * v41;
  *((float *)&v115 + 1) = v37 * v41;
  v116 = v36 * v41;
  v110 = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)&v107, 0xCu);
  v42 = v13;
  if ( v13 >= v15 )
  {
LABEL_44:
    v14 = v110;
    goto LABEL_45;
  }
  v43 = 2 * v15;
  while ( 1 )
  {
    v44 = (unsigned int)v19 + 2 * v42 - v43;
    v97 = v19 + 2 * v42 - v43;
    v103 = *v95;
    v122 = *(_QWORD *)(v103 + 12 * v44);
    v123 = *(float *)(v103 + 12 * v44 + 8);
    v117 = *(_QWORD *)(v103 + 12LL * (unsigned int)(v44 + 1));
    v118 = *(float *)(v103 + 12LL * (unsigned int)(v44 + 1) + 8);
    v51 = (__m128)(unsigned int)v115;
    v46 = (__m128)(unsigned int)v115;
    v45 = *(float *)&v122;
    v46.m128_f32[0] = *(float *)&v115 - *(float *)&v122;
    v52 = (__m128)HIDWORD(v115);
    v48 = (__m128)HIDWORD(v115);
    v47 = *((float *)&v122 + 1);
    v48.m128_f32[0] = *((float *)&v115 + 1) - *((float *)&v122 + 1);
    v49 = v123;
    v50 = v116 - v123;
    v51.m128_f32[0] = *(float *)&v115 - *(float *)&v117;
    v52.m128_f32[0] = *((float *)&v115 + 1) - *((float *)&v117 + 1);
    v53 = v116 - v118;
    *(float *)&v91 = o_sqrtf_0(
                       (float)((float)((float)(*((float *)&v117 + 1) - *((float *)&v122 + 1))
                                     * (float)(*((float *)&v117 + 1) - *((float *)&v122 + 1)))
                             + (float)((float)(*(float *)&v117 - *(float *)&v122)
                                     * (float)(*(float *)&v117 - *(float *)&v122)))
                     + (float)((float)(v118 - v123) * (float)(v118 - v123)));
    v54 = *(float *)&v91
        / o_sqrtf_0(
            (float)((float)(v48.m128_f32[0] * v48.m128_f32[0]) + (float)(v46.m128_f32[0] * v46.m128_f32[0]))
          + (float)(v50 * v50));
    if ( v42 == v13 )
    {
      if ( v54 > 2.0 )
      {
        v89 = 0;
LABEL_25:
        v55 = o_sqrtf_0(
                (float)((float)(v52.m128_f32[0] * v52.m128_f32[0]) + (float)(v51.m128_f32[0] * v51.m128_f32[0]))
              + (float)(v53 * v53));
        v56 = *(float *)&v91 / v55;
        v51.m128_f32[0] = (float)(v51.m128_f32[0] * (float)(*(float *)&v91 / v55)) + *(float *)&v117;
        v52.m128_f32[0] = (float)(v52.m128_f32[0] * (float)(*(float *)&v91 / v55)) + *((float *)&v117 + 1);
        v114 = (float)(v53 * (float)(*(float *)&v91 / v55)) + v118;
        v57 = 2 * (v42 - v15);
        v58 = 3LL * (unsigned int)(v19 + v57);
        v59 = v103;
        *(_QWORD *)(v103 + 12LL * (unsigned int)(v19 + v57)) = _mm_unpacklo_ps(v51, v52).m128_u64[0];
        v60 = v114;
        v54 = v56 / (float)(v56 - 1.0);
        goto LABEL_26;
      }
      v89 = 1;
    }
    else if ( !v89 )
    {
      goto LABEL_25;
    }
    v46.m128_f32[0] = (float)(v46.m128_f32[0] * v54) + v45;
    v48.m128_f32[0] = (float)(v48.m128_f32[0] * v54) + v47;
    v113 = (float)(v50 * v54) + v49;
    v65 = 2 * (v42 - v15) + 1;
    v58 = 3LL * (unsigned int)(v19 + v65);
    v59 = v103;
    *(_QWORD *)(v103 + 12LL * (unsigned int)(v19 + v65)) = _mm_unpacklo_ps(v46, v48).m128_u64[0];
    v60 = v113;
LABEL_26:
    *(float *)(v59 + 4 * v58 + 8) = v60;
    if ( v42 < v15 - 1 )
      break;
    v11 = *(float *)&v94;
LABEL_42:
    ++v42;
    v43 = 2 * v15;
    if ( v42 >= v15 )
    {
      v17 = FLOAT_1_1920929eN7;
      goto LABEL_44;
    }
  }
  v61 = v95;
  v27 = DynArray<MilPoint3F,0>::AddMultipleAndSet((__int64)v95, &v115, 1u);
  v10 = v27;
  if ( v27 < 0 )
  {
    v88 = 337;
    goto LABEL_76;
  }
  v125[0] = (float)((float)((float)(v106[2] - *v106) / v54) + (float)*v106);
  v11 = *(float *)&v94;
  v125[1] = (float)((float)((float)((float)(int)v42 * *(float *)&v94) + (float)v106[1]) + (float)(*(float *)&v94 * 0.5));
  v27 = DynArray<MilPoint2D,0>::AddMultipleAndSet(v104, v125, 1u);
  v10 = v27;
  if ( v27 < 0 )
  {
    v88 = 340;
LABEL_76:
    v82 = v27;
    goto LABEL_77;
  }
  v91 = 255;
  v62 = v105;
  v63 = *(_DWORD *)(v105 + 24);
  v64 = v63 + 1;
  if ( v63 + 1 < v63 )
  {
    v83 = -2147024362;
    v10 = -2147024362;
    v84 = 181;
LABEL_67:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v83, v84);
    v88 = 341;
    goto LABEL_64;
  }
  if ( v64 > *(_DWORD *)(v105 + 20) )
  {
    v66 = DynArrayImpl<0>::AddMultipleAndSet(v105, 4u, 1, &v91);
    v10 = v66;
    if ( v66 >= 0 )
      goto LABEL_35;
    v83 = v66;
    v84 = 192;
    goto LABEL_67;
  }
  *(_DWORD *)(*(_QWORD *)v105 + 4LL * v63) = 255;
  *(_DWORD *)(v62 + 24) = v64;
LABEL_35:
  v67 = *((_DWORD *)v61 + 6) - 1;
  v127[0] = v97;
  v127[1] = v97 + 2;
  v127[2] = v67;
  v127[3] = v97 + 1;
  v127[4] = v97 + 3;
  v127[5] = v67;
  v68 = 0LL;
  while ( 1 )
  {
    v69 = &v127[v68];
    v70 = *(_DWORD *)(a6 + 24);
    v71 = v70 + 1;
    if ( v70 + 1 < v70 )
      break;
    if ( v71 > *(_DWORD *)(a6 + 20) )
    {
      v72 = DynArrayImpl<0>::AddMultipleAndSet(a6, 4u, 1, v69);
      v10 = v72;
      if ( v72 < 0 )
      {
        v80 = v72;
        v81 = 192;
        goto LABEL_63;
      }
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)a6 + 4LL * v70) = *v69;
      *(_DWORD *)(a6 + 24) = v71;
      v10 = 0;
    }
    v68 = (unsigned int)(v68 + 1);
    if ( (unsigned int)v68 >= 6 )
    {
      v13 = v92;
      goto LABEL_42;
    }
  }
  v80 = -2147024362;
  v10 = -2147024362;
  v81 = 181;
LABEL_63:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v80, v81);
  v88 = 353;
LABEL_64:
  v82 = v10;
LABEL_77:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v82, v88);
LABEL_78:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v107);
  return v10;
}
