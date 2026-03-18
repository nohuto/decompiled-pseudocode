/*
 * XREFs of ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801F9358
 * Callers:
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x180246EBC (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     ?Transpose@CMILMatrix@@QEAAXXZ @ 0x18000DE4C (-Transpose@CMILMatrix@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800572F0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x1801B4CD4 (--$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z.c)
 *     ?ClassifyPoint@D2DVectorHelper@@YA?AW4Relation@1@AEBUD2D_VECTOR_4F@@0@Z @ 0x1801F92F8 (-ClassifyPoint@D2DVectorHelper@@YA-AW4Relation@1@AEBUD2D_VECTOR_4F@@0@Z.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z @ 0x1801FA104 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z.c)
 *     ?PlaneVectorIntersection@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x1801FAAF0 (-PlaneVectorIntersection@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 *     ?D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z @ 0x18026F0D4 (-D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z.c)
 */

__int64 __fastcall CPolygon::CompareAndSplit(
        CPolygon *this,
        struct CPolygon *a2,
        enum D2DVectorHelper::Relation *a3,
        struct CPolygon **a4,
        struct CPolygon **a5)
{
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // r12d
  __int128 v13; // xmm0
  int v14; // r15d
  __int128 v15; // xmm1
  __int64 v16; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v17; // r8
  unsigned int v18; // edx
  unsigned int v19; // r9d
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  struct D2D_VECTOR_4F v22; // xmm0
  __int64 v23; // rdx
  int v24; // r8d
  __int128 v25; // xmm0
  int v26; // esi
  struct D2D_VECTOR_4F v27; // xmm6
  unsigned int v28; // r10d
  unsigned int v29; // edi
  __int64 v30; // rax
  int v31; // r8d
  __int64 v32; // rcx
  struct D2D_VECTOR_4F v33; // xmm7
  int v34; // eax
  _DWORD *v35; // rcx
  int v36; // r9d
  unsigned int v37; // r10d
  int v38; // r11d
  __int64 v39; // rcx
  unsigned int v40; // r10d
  __m128i v41; // xmm0
  _DWORD *v42; // rcx
  __int64 v43; // rdx
  int v44; // eax
  int v45; // edi
  unsigned int v46; // r8d
  __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rcx
  _DWORD *v50; // rcx
  __int64 v51; // rdx
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rcx
  unsigned int v55; // r10d
  __m128i v56; // xmm0
  _DWORD *v57; // rcx
  __int64 v58; // rdx
  int v59; // eax
  unsigned int v60; // r8d
  __int64 v61; // rdx
  int v62; // eax
  unsigned int v63; // r8d
  _DWORD *v64; // rcx
  __int64 v65; // rdx
  int v66; // eax
  __int64 v67; // rcx
  _DWORD *v68; // rcx
  __int64 v69; // rdx
  int v70; // eax
  __int64 v71; // rax
  unsigned int v72; // r8d
  _DWORD *v73; // rcx
  __int64 v74; // rdx
  int v75; // eax
  __int64 v76; // rcx
  _DWORD *v77; // rcx
  __int64 v78; // rdx
  int v79; // eax
  int v80; // eax
  __int64 v81; // rcx
  _DWORD *v82; // rcx
  __int64 v83; // rdx
  int v84; // eax
  unsigned int v85; // r8d
  _DWORD *v86; // rcx
  __int64 v87; // rdx
  int v88; // eax
  __int64 v89; // rcx
  __int64 v90; // r9
  int v91; // r9d
  int v92; // eax
  __int64 v93; // r9
  __int64 v94; // rax
  __int64 v95; // rax
  struct D2D_VECTOR_4F *v97; // [rsp+28h] [rbp-E0h]
  unsigned int v98; // [rsp+28h] [rbp-E0h]
  unsigned int v99; // [rsp+30h] [rbp-D8h]
  unsigned int v100; // [rsp+38h] [rbp-D0h]
  unsigned int v101; // [rsp+3Ch] [rbp-CCh]
  __int64 v102; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v103; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v104[3]; // [rsp+50h] [rbp-B8h] BYREF
  int v105; // [rsp+68h] [rbp-A0h]
  _QWORD v106[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v107; // [rsp+88h] [rbp-80h]
  __int128 v108; // [rsp+98h] [rbp-70h]
  __int128 v109; // [rsp+A8h] [rbp-60h]
  int v110; // [rsp+B8h] [rbp-50h]
  struct CPolygon **v111; // [rsp+C8h] [rbp-40h]
  struct CPolygon **v112; // [rsp+D0h] [rbp-38h]
  struct D2D_VECTOR_4F v113; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v114; // [rsp+E8h] [rbp-20h]
  __int128 v115; // [rsp+F8h] [rbp-10h]
  __int128 v116; // [rsp+108h] [rbp+0h]
  int v117; // [rsp+118h] [rbp+10h]
  struct D2D_VECTOR_4F v118; // [rsp+128h] [rbp+20h] BYREF
  __int128 v119; // [rsp+138h] [rbp+30h]
  __int128 v120; // [rsp+148h] [rbp+40h]
  __int128 v121; // [rsp+158h] [rbp+50h]
  int v122; // [rsp+168h] [rbp+60h]
  struct D2D_VECTOR_4F v123; // [rsp+170h] [rbp+68h] BYREF
  int v124; // [rsp+180h] [rbp+78h]
  _BYTE v125[16]; // [rsp+188h] [rbp+80h] BYREF
  struct D2D_VECTOR_4F v126; // [rsp+198h] [rbp+90h] BYREF
  __m128i v127; // [rsp+1A8h] [rbp+A0h] BYREF
  int v128; // [rsp+1B8h] [rbp+B0h]
  struct D2D_VECTOR_4F v129; // [rsp+1C0h] [rbp+B8h] BYREF
  int v130; // [rsp+1D0h] [rbp+C8h]
  struct D2D_VECTOR_4F v131; // [rsp+1D8h] [rbp+D0h] BYREF
  void *v132[2]; // [rsp+1E8h] [rbp+E0h] BYREF
  int v133; // [rsp+1F8h] [rbp+F0h]
  __int64 v134; // [rsp+1FCh] [rbp+F4h]
  _BYTE v135[128]; // [rsp+208h] [rbp+100h] BYREF
  void *v136[2]; // [rsp+288h] [rbp+180h] BYREF
  int v137; // [rsp+298h] [rbp+190h]
  __int64 v138; // [rsp+29Ch] [rbp+194h]
  _BYTE v139[128]; // [rsp+2A8h] [rbp+1A0h] BYREF

  v111 = a4;
  *a4 = 0LL;
  v132[0] = v135;
  v132[1] = v135;
  v112 = a5;
  v136[0] = v139;
  *a5 = 0LL;
  v8 = *((_OWORD *)a2 + 9);
  v136[1] = v139;
  v9 = *((_OWORD *)a2 + 10);
  v10 = *((_DWORD *)a2 + 52);
  v11 = 0;
  *(_OWORD *)&v106[1] = v8;
  v12 = 0;
  v13 = *((_OWORD *)a2 + 11);
  v14 = 0;
  v133 = 6;
  v107 = v9;
  v15 = *((_OWORD *)a2 + 12);
  v134 = 6LL;
  v137 = 6;
  v138 = 6LL;
  v108 = v13;
  v109 = v15;
  v110 = v10;
  v117 = 0;
  v102 = 0LL;
  v103 = 0LL;
  if ( CMILMatrix::Invert((CMILMatrix *)&v106[1], (__int64)a2, a3) )
  {
    CMILMatrix::Multiply(
      (CPolygon *)((char *)this + 144),
      (const struct CMILMatrix *)&v106[1],
      (struct CMILMatrix *)&v106[1]);
  }
  else
  {
    *(_OWORD *)&v106[1] = _xmm;
    v107 = _xmm;
    BYTE1(v110) = BYTE1(v110) & 0xC0 | 0x17;
    v108 = _xmm;
    v109 = _xmm;
    LOBYTE(v110) = 85;
  }
  if ( CMILMatrix::Invert((CMILMatrix *)&v106[1], v16, v17) )
  {
    v118 = *(struct D2D_VECTOR_4F *)&v106[1];
    v122 = v110;
    v119 = v107;
    v120 = v108;
    v121 = v109;
    CMILMatrix::Transpose((CMILMatrix *)&v118);
    v117 = v122;
    v113 = v118;
    v20 = v120;
    v114 = v119;
    v21 = v121;
  }
  else
  {
    v113 = (struct D2D_VECTOR_4F)_xmm;
    v20 = _xmm;
    v114 = _xmm;
    v21 = _xmm;
    BYTE1(v117) = BYTE1(v117) & 0xC0 | 0x17;
    LOBYTE(v117) = 85;
  }
  v115 = v20;
  v22 = (struct D2D_VECTOR_4F)*((_OWORD *)this + 8);
  v116 = v21;
  v126 = v22;
  v131 = v22;
  D3DXVec4TransformArray(
    (struct D2DVector4 *)&v126,
    v18,
    (const struct D2DVector4 *)&v131,
    v19,
    (const struct D2DMatrix *)&v113,
    v99);
  v23 = *((_QWORD *)a2 + 2);
  v24 = *((_DWORD *)a2 + 10);
  v131 = v126;
  v25 = *(_OWORD *)(v23 + 20LL * (unsigned int)(v24 - 2));
  v26 = *(_DWORD *)(v23 + 20LL * (unsigned int)(v24 - 2) + 16);
  v105 = v26;
  v27 = *(struct D2D_VECTOR_4F *)(v23 + 20LL * (unsigned int)(v24 - 1));
  *(_OWORD *)&v104[1] = v25;
  v129 = v27;
  v130 = *(_DWORD *)(v23 + 20LL * (unsigned int)(v24 - 1) + 16);
  D2DVectorHelper::ClassifyPoint(&v126.x, (float *)&v104[1]);
  v100 = D2DVectorHelper::ClassifyPoint(&v126.x, &v129.x);
  v29 = v100;
  v30 = v28;
  v101 = v28;
  if ( !v31 )
  {
LABEL_119:
    *(_DWORD *)a3 = v28;
    goto LABEL_120;
  }
  do
  {
    v32 = *((_QWORD *)a2 + 2);
    v33 = *(struct D2D_VECTOR_4F *)(v32 + 20 * v30);
    HIDWORD(v104[0]) = *(_DWORD *)(v32 + 20 * v30 + 16);
    v124 = HIDWORD(v104[0]);
    v123 = v33;
    v34 = D2DVectorHelper::ClassifyPoint(&v126.x, &v123.x);
    LODWORD(v104[0]) = v34;
    if ( v29 == 1 )
    {
      if ( v36 != 2 )
      {
LABEL_20:
        if ( v37 + 1 < v37 )
        {
          v11 = -2147024362;
          v45 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v35, 0LL, 0LL, -2147024362, 0xB5u);
        }
        else
        {
          if ( v37 + 1 <= (unsigned int)v134 )
          {
            v50 = v132[0];
            v11 = 0;
            v51 = 5LL * v37;
            *(struct D2D_VECTOR_4F *)((char *)v132[0] + 4 * v51) = v27;
            v50[v51 + 4] = v130;
            HIDWORD(v134) = v37 + 1;
LABEL_24:
            ++v12;
            goto LABEL_70;
          }
          v52 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)v132, 0x14u, 1, &v129);
          v45 = v52;
          v11 = v52;
          if ( v52 >= 0 )
            goto LABEL_24;
          MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0LL, v52, 0xC0u);
        }
        v98 = 279;
LABEL_79:
        v91 = v45;
        goto LABEL_80;
      }
      v41 = _mm_loadu_si128((const __m128i *)D2DVectorHelper::PlaneVectorIntersection(
                                               (D2DVectorHelper *)&v131,
                                               &v126,
                                               (const struct D2D_VECTOR_4F *)&v104[1],
                                               &v129,
                                               v97));
      v128 = v26;
      v127 = v41;
      if ( v40 + 1 < v40 )
      {
        v11 = -2147024362;
        v45 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0LL, -2147024362, 0xB5u);
      }
      else
      {
        if ( v40 + 1 <= (unsigned int)v134 )
        {
          v42 = v132[0];
          v43 = 5LL * v40;
          *(__m128i *)((char *)v132[0] + 4 * v43) = v41;
          v42[v43 + 4] = v128;
          HIDWORD(v134) = v40 + 1;
          goto LABEL_14;
        }
        v44 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)v132, 0x14u, 1, &v127);
        v45 = v44;
        v11 = v44;
        if ( v44 >= 0 )
        {
LABEL_14:
          v128 = 0;
          v46 = HIDWORD(v138) + 1;
          if ( (unsigned int)(HIDWORD(v138) + 1) < HIDWORD(v138) )
          {
            v11 = -2147024362;
            v45 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v42, 0LL, 0LL, -2147024362, 0xB5u);
          }
          else
          {
            if ( v46 <= (unsigned int)v138 )
            {
              v35 = v136[0];
              v47 = 5LL * HIDWORD(v138);
              *(__m128i *)((char *)v136[0] + 4 * v47) = v127;
              v35[v47 + 4] = v128;
              HIDWORD(v138) = v46;
LABEL_17:
              v37 = HIDWORD(v134);
              v27 = v129;
              goto LABEL_20;
            }
            v48 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)v136, 0x14u, 1, &v127);
            v45 = v48;
            v11 = v48;
            if ( v48 >= 0 )
              goto LABEL_17;
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v35, 0LL, 0LL, v48, 0xC0u);
          }
          v98 = 274;
          goto LABEL_79;
        }
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v42, 0LL, 0LL, v44, 0xC0u);
      }
      v98 = 271;
      goto LABEL_79;
    }
    if ( v29 == 2 )
    {
      if ( v36 != 1 )
        goto LABEL_36;
      v56 = _mm_loadu_si128((const __m128i *)D2DVectorHelper::PlaneVectorIntersection(
                                               (D2DVectorHelper *)v125,
                                               &v126,
                                               (const struct D2D_VECTOR_4F *)&v104[1],
                                               &v129,
                                               v97));
      v128 = 0;
      v127 = v56;
      if ( v55 + 1 < v55 )
      {
        v11 = -2147024362;
        v45 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0LL, -2147024362, 0xB5u);
      }
      else
      {
        if ( v55 + 1 <= (unsigned int)v134 )
        {
          v57 = v132[0];
          v58 = 5LL * v55;
          *(__m128i *)((char *)v132[0] + 4 * v58) = v56;
          v57[v58 + 4] = v128;
          HIDWORD(v134) = v55 + 1;
          goto LABEL_31;
        }
        v59 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)v132, 0x14u, 1, &v127);
        v45 = v59;
        v11 = v59;
        if ( v59 >= 0 )
        {
LABEL_31:
          v128 = v26;
          v60 = HIDWORD(v138) + 1;
          if ( (unsigned int)(HIDWORD(v138) + 1) < HIDWORD(v138) )
          {
            v11 = -2147024362;
            v45 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v57, 0LL, 0LL, -2147024362, 0xB5u);
          }
          else
          {
            if ( v60 <= (unsigned int)v138 )
            {
              v35 = v136[0];
              v61 = 5LL * HIDWORD(v138);
              *(__m128i *)((char *)v136[0] + 4 * v61) = v127;
              v35[v61 + 4] = v128;
              HIDWORD(v138) = v60;
LABEL_35:
              v27 = v129;
LABEL_36:
              v63 = HIDWORD(v138) + 1;
              if ( (unsigned int)(HIDWORD(v138) + 1) < HIDWORD(v138) )
              {
                v11 = -2147024362;
                v45 = -2147024362;
                MilInstrumentationCheckHR_MaybeFailFast((__int64)v35, 0LL, 0LL, -2147024362, 0xB5u);
              }
              else
              {
                if ( v63 <= (unsigned int)v138 )
                {
                  v64 = v136[0];
                  v65 = 5LL * HIDWORD(v138);
                  v11 = 0;
                  *(struct D2D_VECTOR_4F *)((char *)v136[0] + 4 * v65) = v27;
                  v64[v65 + 4] = v130;
                  HIDWORD(v138) = v63;
LABEL_40:
                  ++v14;
                  goto LABEL_70;
                }
                v66 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)v136, 0x14u, 1, &v129);
                v45 = v66;
                v11 = v66;
                if ( v66 >= 0 )
                  goto LABEL_40;
                MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0LL, v66, 0xC0u);
              }
              v98 = 305;
              goto LABEL_79;
            }
            v62 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)v136, 0x14u, 1, &v127);
            v45 = v62;
            v11 = v62;
            if ( v62 >= 0 )
              goto LABEL_35;
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v35, 0LL, 0LL, v62, 0xC0u);
          }
          v98 = 299;
          goto LABEL_79;
        }
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v57, 0LL, 0LL, v59, 0xC0u);
      }
      v98 = 296;
      goto LABEL_79;
    }
    v127 = (__m128i)v27;
    if ( v36 == 1 )
    {
      if ( v34 == 2 )
      {
        v128 = 0;
        if ( v37 + 1 < v37 )
        {
          v11 = -2147024362;
          v45 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v35, 0LL, 0LL, -2147024362, 0xB5u);
        }
        else
        {
          if ( v37 + 1 <= (unsigned int)v134 )
          {
            v68 = v132[0];
            v69 = 5LL * v37;
            *(struct D2D_VECTOR_4F *)((char *)v132[0] + 4 * v69) = v27;
            v68[v69 + 4] = v128;
            HIDWORD(v134) = v37 + 1;
LABEL_47:
            v128 = v130;
            v71 = HIDWORD(v138);
            v72 = HIDWORD(v138) + 1;
            if ( (unsigned int)(HIDWORD(v138) + 1) < HIDWORD(v138) )
            {
              v11 = -2147024362;
              v45 = -2147024362;
              MilInstrumentationCheckHR_MaybeFailFast((__int64)v68, 0LL, 0LL, -2147024362, 0xB5u);
              goto LABEL_94;
            }
            if ( v72 <= (unsigned int)v138 )
              goto LABEL_49;
            v75 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)v136, 0x14u, 1, &v127);
            v45 = v75;
            v11 = v75;
            if ( v75 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v76, 0LL, 0LL, v75, 0xC0u);
LABEL_94:
              v98 = 326;
              goto LABEL_79;
            }
            goto LABEL_70;
          }
          v70 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)v132, 0x14u, 1, &v127);
          v45 = v70;
          v11 = v70;
          if ( v70 >= 0 )
            goto LABEL_47;
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v68, 0LL, 0LL, v70, 0xC0u);
        }
        v98 = 323;
        goto LABEL_79;
      }
    }
    else if ( v36 == 2 && v34 == 1 )
    {
      v128 = v38;
      if ( v37 + 1 < v37 )
      {
        v11 = -2147024362;
        v45 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v35, 0LL, 0LL, -2147024362, 0xB5u);
      }
      else
      {
        if ( v37 + 1 <= (unsigned int)v134 )
        {
          v77 = v132[0];
          v78 = 5LL * v37;
          *(struct D2D_VECTOR_4F *)((char *)v132[0] + 4 * v78) = v27;
          v77[v78 + 4] = v128;
          HIDWORD(v134) = v37 + 1;
LABEL_58:
          v71 = HIDWORD(v138);
          v128 = 0;
          v72 = HIDWORD(v138) + 1;
          if ( (unsigned int)(HIDWORD(v138) + 1) < HIDWORD(v138) )
          {
            v11 = -2147024362;
            v45 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v77, 0LL, 0LL, -2147024362, 0xB5u);
            goto LABEL_99;
          }
          if ( v72 <= (unsigned int)v138 )
          {
LABEL_49:
            v73 = v136[0];
            v74 = 5 * v71;
            v11 = 0;
            *(__m128i *)((char *)v136[0] + 4 * v74) = v127;
            v73[v74 + 4] = v128;
            HIDWORD(v138) = v72;
            goto LABEL_70;
          }
          v80 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)v136, 0x14u, 1, &v127);
          v45 = v80;
          v11 = v80;
          if ( v80 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v81, 0LL, 0LL, v80, 0xC0u);
LABEL_99:
            v98 = 337;
            goto LABEL_79;
          }
          goto LABEL_70;
        }
        v79 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)v132, 0x14u, 1, &v127);
        v45 = v79;
        v11 = v79;
        if ( v79 >= 0 )
          goto LABEL_58;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v77, 0LL, 0LL, v79, 0xC0u);
      }
      v98 = 334;
      goto LABEL_79;
    }
    if ( v37 + 1 < v37 )
    {
      v11 = -2147024362;
      v45 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v35, 0LL, 0LL, -2147024362, 0xB5u);
      goto LABEL_118;
    }
    if ( v37 + 1 > (unsigned int)v134 )
    {
      v84 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)v132, 0x14u, 1, &v129);
      v45 = v84;
      v11 = v84;
      if ( v84 >= 0 )
        goto LABEL_66;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v82, 0LL, 0LL, v84, 0xC0u);
LABEL_118:
      v98 = 341;
      goto LABEL_79;
    }
    v82 = v132[0];
    v83 = 5LL * v37;
    *(struct D2D_VECTOR_4F *)((char *)v132[0] + 4 * v83) = v27;
    v82[v83 + 4] = v130;
    HIDWORD(v134) = v37 + 1;
LABEL_66:
    v85 = HIDWORD(v138) + 1;
    if ( (unsigned int)(HIDWORD(v138) + 1) < HIDWORD(v138) )
    {
      v11 = -2147024362;
      v45 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v82, 0LL, 0LL, -2147024362, 0xB5u);
      goto LABEL_115;
    }
    if ( v85 <= (unsigned int)v138 )
    {
      v86 = v136[0];
      v87 = 5LL * HIDWORD(v138);
      v11 = 0;
      *(struct D2D_VECTOR_4F *)((char *)v136[0] + 4 * v87) = v129;
      v86[v87 + 4] = v130;
      HIDWORD(v138) = v85;
      goto LABEL_70;
    }
    v88 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)v136, 0x14u, 1, &v129);
    v45 = v88;
    v11 = v88;
    if ( v88 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v89, 0LL, 0LL, v88, 0xC0u);
LABEL_115:
      v98 = 342;
      goto LABEL_79;
    }
LABEL_70:
    v27 = v33;
    v26 = v130;
    v30 = v101 + 1;
    v90 = v100;
    v29 = v104[0];
    v100 = v104[0];
    *(struct D2D_VECTOR_4F *)&v104[1] = v129;
    v105 = v130;
    v129 = v33;
    v130 = HIDWORD(v104[0]);
    v101 = v30;
  }
  while ( (unsigned int)v30 < *((_DWORD *)a2 + 10) );
  v28 = 0;
  if ( !v12 )
  {
    if ( v14 )
      goto LABEL_104;
    goto LABEL_119;
  }
  if ( !v14 )
  {
    *(_DWORD *)a3 = 1;
    goto LABEL_120;
  }
LABEL_104:
  if ( v12 )
  {
    *(_DWORD *)a3 = 3;
    v92 = CPolygon::Create(v132, a2, &v102, v90);
    v11 = v92;
    if ( v92 < 0 )
    {
      v98 = 376;
    }
    else
    {
      v92 = CPolygon::Create(v136, a2, &v103, v93);
      v11 = v92;
      if ( v92 >= 0 )
      {
        v94 = v102;
        v102 = 0LL;
        *v111 = (struct CPolygon *)v94;
        v95 = v103;
        v103 = 0LL;
        *v112 = (struct CPolygon *)v95;
        goto LABEL_120;
      }
      v98 = 377;
    }
    v91 = v92;
LABEL_80:
    MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0LL, v91, v98);
    goto LABEL_120;
  }
  *(_DWORD *)a3 = 2;
LABEL_120:
  ReleaseInterface<CPolygon>(&v102);
  ReleaseInterface<CPolygon>(&v103);
  DynArrayImpl<1>::~DynArrayImpl<1>(v136);
  DynArrayImpl<1>::~DynArrayImpl<1>(v132);
  return v11;
}
