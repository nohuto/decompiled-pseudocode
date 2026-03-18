/*
 * XREFs of ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x180092FA0
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090300 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180049214 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004AFB8 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004D434 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800572F0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800934F0 (-CalcRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800D10DC (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x1800F3278 (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ConvertInnerToOuterBounds(
        CVisual *this,
        const struct CVisualTree *a2,
        struct CVisual *a3,
        char a4)
{
  unsigned int v4; // esi
  float v9; // xmm8_4
  float *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  _DWORD *v13; // r8
  __int64 v14; // rax
  float v15; // xmm0_4
  int v16; // ecx
  unsigned int v17; // eax
  char v18; // bl
  float v19; // xmm1_4
  CTransform3D *v20; // rcx
  const struct CMILMatrix *Matrix; // rax
  __int64 v23; // rcx
  _BYTE *v24; // rax
  unsigned int v25; // r9d
  __int64 *v26; // rax
  __int64 v27; // rax
  struct CEffect *EffectInternal; // rbx
  float v29; // edx
  float *v30; // rcx
  CVisual *v31; // rcx
  _OWORD v32[3]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v33; // [rsp+78h] [rbp-90h]
  int v34; // [rsp+88h] [rbp-80h]
  _BYTE v35[64]; // [rsp+98h] [rbp-70h] BYREF
  int v36; // [rsp+D8h] [rbp-30h]
  _BYTE v37[64]; // [rsp+E8h] [rbp-20h] BYREF
  int v38; // [rsp+128h] [rbp+20h]
  __int128 v39; // [rsp+138h] [rbp+30h] BYREF
  __int64 v40; // [rsp+148h] [rbp+40h]

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 56LL))(this, 91LL)
    && ((*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 216LL))(this) || *((_QWORD *)this + 91))
    && !CLayerVisual::GetAutomaticBoundsExpansion(this) )
  {
    *((_DWORD *)this + 45) = *((_DWORD *)this + 35);
    *((_DWORD *)this + 46) = *((_DWORD *)this + 36);
    *(_QWORD *)((char *)this + 172) = 0LL;
  }
  v9 = *(float *)&FLOAT_1_0;
  if ( (**((_DWORD **)this + 29) & 0x400000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
           EffectInternal,
           56LL) )
    {
      v9 = *((float *)EffectInternal + 20);
    }
  }
  v10 = (float *)((char *)this + 148);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(fminf(1.0, fmaxf(v9, 0.0))) & _xmm) < 0.0000011920929 )
  {
    *(_QWORD *)((char *)this + 164) = 0LL;
    *(_QWORD *)((char *)this + 156) = 0LL;
    *(_QWORD *)v10 = 0LL;
  }
  else
  {
    v11 = CVisual::CalcRootBounds(this);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x55Du);
      return v4;
    }
  }
  v13 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v13 & 0x4000000) != 0 )
  {
    v23 = (unsigned int)v13[1];
    v24 = v13 + 2;
    v25 = 0;
    if ( (_DWORD)v23 )
    {
      while ( *v24 != 6 )
      {
        ++v25;
        ++v24;
        if ( v25 >= (unsigned int)v23 )
          goto LABEL_36;
      }
    }
    else
    {
LABEL_36:
      if ( v25 >= (unsigned int)v23 )
      {
        v26 = 0LL;
LABEL_31:
        v27 = *v26;
        if ( v27 )
        {
          *(_OWORD *)(v27 + 72) = *(_OWORD *)((char *)this + 148);
          *(_QWORD *)(v27 + 88) = *(_QWORD *)((char *)this + 164);
        }
        goto LABEL_6;
      }
    }
    v26 = (__int64 *)((char *)v13 + v23 + 8LL * v25 - (((_BYTE)v23 + 15) & 7) + 15);
    goto LABEL_31;
  }
LABEL_6:
  v14 = *((_QWORD *)this + 28);
  if ( (*(_DWORD *)(v14 + 4) & 0x8000000) != 0 )
  {
    v29 = *(float *)(v14 + 12);
    v30 = (float *)(v14 + 12);
    if ( (LODWORD(v29) & 0x7F000000) != 0x5000000 )
    {
      do
      {
        v30 = (float *)((char *)v30 + (LODWORD(v29) & 0xFFFFFF) + 4);
        v29 = *v30;
      }
      while ( (*(_DWORD *)v30 & 0x7F000000) != 0x5000000 );
    }
    v15 = v30[1];
  }
  else
  {
    v15 = *(float *)&FLOAT_1_0;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(fminf(1.0, fmaxf(v15, 0.0))) & _xmm) < 0.0000011920929 )
  {
    *(_QWORD *)((char *)this + 164) = 0LL;
    *(_QWORD *)((char *)this + 156) = 0LL;
    *(_QWORD *)((char *)this + 148) = 0LL;
  }
  else
  {
    v16 = (*((float *)this + 42) <= *((float *)this + 41)) + 1;
    if ( *((float *)this + 39) > *v10 )
      v16 = *((float *)this + 42) <= *((float *)this + 41);
    v17 = v16 + 1;
    if ( *((float *)this + 40) > *((float *)this + 38) )
      v17 = v16;
    if ( v17 > 1 )
      goto LABEL_23;
    if ( !a4 )
    {
      v18 = 0;
      v34 = 0;
      v32[1] = _xmm;
      v33 = _xmm;
      v19 = *((float *)this + 31);
      LOBYTE(v34) = 85;
      *(_WORD *)((char *)&v34 + 1) = 23;
      v32[0] = _xmm;
      v32[2] = _xmm;
      if ( v19 != 0.0 || *((float *)this + 32) != 0.0 || *((float *)this + 30) != 0.0 )
      {
        v18 = 1;
        *(_QWORD *)&v33 = __PAIR64__(*((_DWORD *)this + 32), LODWORD(v19));
        DWORD2(v33) = *((_DWORD *)this + 30);
        LOBYTE(v34) = 84;
      }
      v20 = (CTransform3D *)*((_QWORD *)this + 30);
      if ( v20 )
      {
        Matrix = CTransform3D::GetMatrix(v20, (const struct D2D_SIZE_F *)((char *)this + 140));
        CMILMatrix::Multiply(Matrix, (const struct CMILMatrix *)v32, (struct CMILMatrix *)v32);
        v18 = 1;
      }
      if ( !a3 )
      {
        if ( v18 )
          CMILMatrix::Transform3DBoundsHelper<0>(v32, (char *)this + 148, (char *)this + 148);
        goto LABEL_23;
      }
      v31 = (CVisual *)*((_QWORD *)this + 11);
      v38 = 0;
      CVisual::GetWorldTransform(v31, a2, 1, (__int64)v37, 0LL, 0LL);
      if ( CMILMatrix::Invert((CMILMatrix *)v37) )
      {
        v36 = 0;
        CVisual::GetWorldTransform(a3, a2, 1, (__int64)v35, 0LL, 0LL);
        if ( v18 )
          CMILMatrix::Multiply((const struct CMILMatrix *)v32, (const struct CMILMatrix *)v35, (struct CMILMatrix *)v35);
        v40 = 0LL;
        v39 = 0LL;
        CMILMatrix::Transform3DBoundsHelper<0>(v35, (char *)this + 148, &v39);
        CMILMatrix::Transform3DBoundsHelper<0>(v37, &v39, (char *)this + 148);
        goto LABEL_23;
      }
    }
    *(_OWORD *)((char *)this + 148) = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    *(_QWORD *)((char *)this + 164) = qword_1803D26E8;
  }
LABEL_23:
  if ( *((float *)this + 39) < *((float *)this + 37)
    || *((float *)this + 40) < *((float *)this + 38)
    || *((float *)this + 42) < *((float *)this + 41) )
  {
    *(_OWORD *)((char *)this + 148) = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    *(_QWORD *)((char *)this + 164) = qword_1803D26E8;
  }
  return v4;
}
