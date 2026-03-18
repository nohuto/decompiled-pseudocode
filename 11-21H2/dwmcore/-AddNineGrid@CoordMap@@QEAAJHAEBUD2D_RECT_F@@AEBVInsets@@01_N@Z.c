/*
 * XREFs of ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z @ 0x180059E48
 * Callers:
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x180059A5C (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 * Callees:
 *     ?Clamp@Insets@@SA?AV1@AEBV1@MM@Z @ 0x18005A478 (-Clamp@Insets@@SA-AV1@AEBV1@MM@Z.c)
 *     ?AddEntry@CoordMap@@AEAAJAEAV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x18005A770 (-AddEntry@CoordMap@@AEAAJAEAV-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@Coor.c)
 *     ?IsEmpty@Insets@@SA_NAEBV1@@Z @ 0x18005C248 (-IsEmpty@Insets@@SA_NAEBV1@@Z.c)
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18005C2C0 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansio.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CoordMap::AddNineGrid(
        CoordMap *this,
        __int64 a2,
        const struct D2D_RECT_F *a3,
        const struct Insets *a4,
        const struct D2D_RECT_F *a5,
        const struct Insets *a6,
        bool a7)
{
  float bottom; // xmm0_4
  float top; // xmm2_4
  float v10; // xmm13_4
  float v11; // xmm14_4
  float v12; // xmm1_4
  float v13; // xmm15_4
  float v14; // xmm10_4
  float v15; // xmm11_4
  float v16; // xmm12_4
  unsigned int v17; // ecx
  float *v18; // r8
  float v19; // xmm9_4
  float v20; // xmm2_4
  float v21; // xmm8_4
  float v22; // xmm4_4
  bool v23; // al
  float v24; // xmm5_4
  float v25; // xmm13_4
  float v26; // xmm14_4
  bool v27; // al
  float v28; // xmm2_4
  float v29; // xmm0_4
  float v30; // xmm5_4
  bool v31; // r15
  bool v32; // r14
  float v33; // xmm6_4
  float v34; // xmm15_4
  float v35; // xmm10_4
  float v36; // xmm7_4
  int v37; // eax
  unsigned int v38; // ebx
  float v39; // xmm9_4
  int v40; // eax
  float v41; // xmm0_4
  int v42; // eax
  bool v43; // zf
  const struct D2D_RECT_F *v44; // r15
  float v45; // xmm1_4
  int v46; // eax
  float v47; // xmm1_4
  int v48; // eax
  float v49; // xmm8_4
  int v50; // eax
  float v51; // xmm0_4
  int v52; // eax
  unsigned int v53; // ecx
  int v54; // r8d
  float v55; // xmm1_4
  int v56; // eax
  unsigned int v57; // ecx
  __int64 v59; // rdx
  __int128 v60; // xmm6
  float v61; // [rsp+38h] [rbp-D0h] BYREF
  float left; // [rsp+3Ch] [rbp-CCh]
  float v63; // [rsp+40h] [rbp-C8h]
  float v64; // [rsp+44h] [rbp-C4h]
  bool v65; // [rsp+48h] [rbp-C0h]
  __int128 v66; // [rsp+50h] [rbp-B8h] BYREF
  float v67; // [rsp+60h] [rbp-A8h]
  float v68; // [rsp+64h] [rbp-A4h]
  float right; // [rsp+68h] [rbp-A0h]
  float v70; // [rsp+6Ch] [rbp-9Ch]
  __int64 v71; // [rsp+70h] [rbp-98h]
  const struct D2D_RECT_F *v72; // [rsp+78h] [rbp-90h]

  bottom = a3->bottom;
  top = a3->top;
  v10 = a5->right - a5->left;
  v11 = a5->bottom - a5->top;
  right = a3->right;
  v12 = right - a3->left;
  *(float *)&v71 = bottom;
  v70 = top;
  v72 = a3;
  v68 = v12;
  v67 = bottom - top;
  Insets::Clamp(&v66, a4);
  v13 = *(float *)&v66;
  if ( *(float *)&v66 < 0.0000011920929 )
  {
    v13 = 0.0;
    LODWORD(v66) = 0;
  }
  v14 = *((float *)&v66 + 2);
  if ( *((float *)&v66 + 2) < 0.0000011920929 )
  {
    v14 = 0.0;
    DWORD2(v66) = 0;
  }
  v15 = *((float *)&v66 + 1);
  if ( *((float *)&v66 + 1) < 0.0000011920929 )
  {
    v15 = 0.0;
    DWORD1(v66) = 0;
  }
  v16 = *((float *)&v66 + 3);
  if ( *((float *)&v66 + 3) < 0.0000011920929 )
  {
    v16 = 0.0;
    HIDWORD(v66) = 0;
  }
  Insets::Clamp(&v61, a6);
  v19 = v61;
  if ( v61 < 0.0000011920929 )
  {
    v19 = 0.0;
    v61 = 0.0;
  }
  v20 = v63;
  if ( v63 < 0.0000011920929 )
  {
    v20 = 0.0;
    v63 = 0.0;
  }
  v21 = left;
  if ( left < 0.0000011920929 )
  {
    v21 = 0.0;
    left = 0.0;
  }
  v22 = v64;
  if ( v64 < 0.0000011920929 )
  {
    v22 = 0.0;
    v64 = 0.0;
  }
  v23 = a7;
  v24 = v67;
  if ( a7 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v68 - (float)(v14 + v13)) & _xmm) > 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(v67 - (float)(v16 + v15)) & _xmm) > 0.0000011920929 )
    {
      v25 = v63;
      v26 = v64;
      goto LABEL_24;
    }
    v23 = 0;
    a7 = 0;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v10 - v19) - v20) - (float)((float)(v68 - v13) - v14)) & _xmm) > 0.0000011920929 )
    goto LABEL_19;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 - v13) & _xmm) <= 0.0000011920929 )
  {
    v13 = 0.0;
    v19 = 0.0;
    LODWORD(v66) = 0;
    v61 = 0.0;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v20 - v14) & _xmm) > 0.0000011920929 )
  {
LABEL_19:
    v25 = v63;
  }
  else
  {
    v14 = 0.0;
    v25 = 0.0;
    DWORD2(v66) = 0;
    v63 = 0.0;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v11 - v21) - v22) - (float)((float)(v67 - v15) - v16)) & _xmm) > 0.0000011920929 )
    goto LABEL_21;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 - v15) & _xmm) <= 0.0000011920929 )
  {
    v15 = 0.0;
    v21 = 0.0;
    DWORD1(v66) = 0;
    left = 0.0;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v22 - v16) & _xmm) > 0.0000011920929 )
  {
LABEL_21:
    v26 = v64;
  }
  else
  {
    v16 = 0.0;
    v26 = 0.0;
    HIDWORD(v66) = 0;
    v64 = 0.0;
  }
  if ( v23 || !Insets::IsEmpty((const struct Insets *)&v66) || !Insets::IsEmpty((const struct Insets *)&v61) )
  {
LABEL_24:
    v27 = v13 > 0.0;
    LODWORD(v28) = COERCE_UNSIGNED_INT(v68 - (float)(v14 + v13)) & _xmm;
    v29 = *v18;
    LODWORD(v30) = COERCE_UNSIGNED_INT(v24 - (float)(v16 + v15)) & _xmm;
    v31 = v14 > 0.0;
    v65 = v15 > 0.0;
    v32 = v30 <= 0.0000011920929;
    v33 = v29 + v13;
    if ( v28 <= 0.0000011920929 )
      v34 = v29 + v13;
    else
      v34 = right - v14;
    v35 = v70 + v15;
    if ( v30 <= 0.0000011920929 )
      v36 = v70 + v15;
    else
      v36 = *(float *)&v71 - v16;
    if ( v27 )
    {
      v61 = v29;
      left = a5->left;
      v63 = left;
      v37 = CoordMap::AddEntry(v17, (_DWORD)this, (_DWORD)v18, (unsigned int)&v61, 0);
      v38 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v37, 0x15Cu, 0LL);
        return v38;
      }
    }
    else if ( v28 <= 0.0000011920929 )
    {
      goto LABEL_31;
    }
    v39 = v19 + a5->left;
    v61 = v33;
    left = v39;
    v63 = v39;
    v40 = CoordMap::AddEntry(v17, (_DWORD)this, (_DWORD)v18, (unsigned int)&v61, 2);
    v38 = v40;
    if ( v40 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v40, 0x163u, 0LL);
      return v38;
    }
LABEL_31:
    if ( v31 || v28 > 0.0000011920929 )
    {
      v41 = a5->right - v25;
      v61 = v34;
      left = v41;
      v63 = v41;
      v42 = CoordMap::AddEntry(v17, (_DWORD)this, (_DWORD)v18, (unsigned int)&v61, 2);
      v38 = v42;
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v42, 0x16Au, 0LL);
        return v38;
      }
      v43 = !v31;
      v44 = v72;
      if ( !v43 )
      {
        v45 = a5->right;
        v61 = v72->right;
        left = v45;
        v63 = v45;
        v46 = CoordMap::AddEntry(v17, (_DWORD)this, (_DWORD)v18, (unsigned int)&v61, 0);
        v38 = v46;
        if ( v46 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v46, 0x16Fu, 0LL);
          return v38;
        }
      }
    }
    else
    {
      v44 = v72;
    }
    if ( v65 )
    {
      v47 = a5->top;
      v61 = v44->top;
      left = v47;
      v63 = v47;
      v48 = CoordMap::AddEntry(v17, (int)this + 184, (_DWORD)v18, (unsigned int)&v61, 0);
      v38 = v48;
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v48, 0x174u, 0LL);
        return v38;
      }
    }
    else if ( v32 )
    {
LABEL_38:
      if ( v16 > 0.0 || !v32 )
      {
        v51 = a5->bottom - v26;
        v61 = v36;
        left = v51;
        v63 = v51;
        v52 = CoordMap::AddEntry(v17, (int)this + 184, (_DWORD)v18, (unsigned int)&v61, 2);
        v38 = v52;
        if ( v52 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0x182u, 0LL);
          return v38;
        }
        if ( v16 > 0.0 )
        {
          v55 = a5->bottom;
          v61 = v44->bottom;
          left = v55;
          v63 = v55;
          v56 = CoordMap::AddEntry(v53, (int)this + 184, v54, (unsigned int)&v61, 0);
          v38 = v56;
          if ( v56 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v56, 0x187u, 0LL);
            return v38;
          }
        }
      }
      if ( a7 )
      {
        *(_QWORD *)&v66 = __PAIR64__(LODWORD(v35), LODWORD(v33));
        v59 = (__int64)(*((_QWORD *)this + 47) - *((_QWORD *)this + 46)) >> 4;
        *((_QWORD *)&v66 + 1) = __PAIR64__(LODWORD(v36), LODWORD(v34));
        v60 = v66;
        *(_OWORD *)detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>>::reserve_region(
                     (char *)this + 368,
                     v59) = v60;
      }
      return 0;
    }
    v49 = v21 + a5->top;
    v61 = v35;
    left = v49;
    v63 = v49;
    v50 = CoordMap::AddEntry(v17, (int)this + 184, (_DWORD)v18, (unsigned int)&v61, 2);
    v38 = v50;
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v50, 0x17Bu, 0LL);
      return v38;
    }
    goto LABEL_38;
  }
  return 0;
}
