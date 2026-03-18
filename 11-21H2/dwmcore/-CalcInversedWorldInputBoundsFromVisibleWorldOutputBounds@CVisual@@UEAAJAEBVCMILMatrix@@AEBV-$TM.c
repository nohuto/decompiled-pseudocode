/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800CBC90
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180222DB0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 * Callees:
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004D434 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A2C90 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x1800E8734 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x1800F3278 (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x18021374C (-GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ?GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ @ 0x1802236A0 (-GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x1802498C8 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAA_NAEBV-$TMil3DRect@MV.c)
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180260414 (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 */

__int64 __fastcall CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        CLayerVisual *this,
        __int64 a2,
        _OWORD *a3,
        __int64 a4,
        _OWORD *a5,
        _OWORD *a6)
{
  _DWORD *v6; // rax
  unsigned int v7; // r12d
  __int128 v11; // xmm1
  struct CEffect *EffectInternal; // r13
  int v14; // eax
  __int64 v15; // rcx
  char v16; // r9
  __int64 v17; // rax
  char FlatteningToLocalSpace; // al
  __int64 *v19; // r15
  __int64 v20; // rcx
  __int128 v21; // xmm6
  __int64 v22; // rax
  __int64 v23; // r9
  __int128 v24; // xmm0
  int v25; // xmm2_4
  int v26; // xmm3_4
  __int64 v27; // r9
  int v28; // eax
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int64 v32; // [rsp+28h] [rbp-E0h]
  float v33[2]; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v34[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v35; // [rsp+98h] [rbp-70h]
  __int128 v36; // [rsp+A8h] [rbp-60h] BYREF
  int v37; // [rsp+B8h] [rbp-50h]
  int v38; // [rsp+BCh] [rbp-4Ch]
  __int128 v39; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v40; // [rsp+D0h] [rbp-38h] BYREF
  int v41; // [rsp+E0h] [rbp-28h]
  int v42; // [rsp+E4h] [rbp-24h]
  __int128 v43; // [rsp+E8h] [rbp-20h] BYREF
  int v44; // [rsp+F8h] [rbp-10h]
  int v45; // [rsp+FCh] [rbp-Ch]
  __int128 v46; // [rsp+100h] [rbp-8h] BYREF
  int v47; // [rsp+110h] [rbp+8h]
  int v48; // [rsp+114h] [rbp+Ch]

  v6 = (_DWORD *)*((_QWORD *)this + 29);
  v7 = 0;
  *(_QWORD *)&v39 = a4;
  if ( (*v6 & 0x400000) == 0
    || (EffectInternal = CVisual::GetEffectInternal(this),
        !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
           EffectInternal,
           59LL)) )
  {
    if ( (*(__int64 (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 216LL))(this) )
    {
      CLayerVisual::GetAutomaticBoundsExpansion(this);
      if ( CVisual::GetEffectiveSize(this, v33, (float *)&v39) || v16 )
      {
        v17 = *(_QWORD *)this;
        LODWORD(v33[1]) = v39;
        *(_QWORD *)&v39 = (*(__int64 (**)(void))(v17 + 216))();
        FlatteningToLocalSpace = CLayerVisual::GetFlatteningToLocalSpace(this);
        v32 = (__int64)a3;
        v19 = (__int64 *)v39;
        if ( (unsigned __int8)CTreeEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
                                v39,
                                (int)this + 172,
                                (unsigned int)v33,
                                a2,
                                v32,
                                FlatteningToLocalSpace,
                                (__int64)a5,
                                (__int64)a6) )
          return v7;
        v20 = *v19;
        v21 = 0LL;
        v36 = 0LL;
        if ( v20 )
        {
          CEffectBrush::GetSourceInputBoundsUnion(v20, (char *)this + 172, v33, &v36);
          v21 = v36;
        }
        v22 = *(_QWORD *)this;
        v39 = *(_OWORD *)((char *)this + 172);
        (*(void (__fastcall **)(CLayerVisual *, __int128 *, __int128 *))(v22 + 304))(this, &v39, &v39);
        if ( CLayerVisual::GetFlatteningToLocalSpace(this) )
        {
          v24 = v39;
          *a5 = v21;
          goto LABEL_19;
        }
        v44 = 0;
        v25 = *((_DWORD *)this + 47);
        v26 = *((_DWORD *)this + 48);
        v45 = 0;
        v47 = 0;
        v48 = 0;
        v40 = v36;
        v41 = v25;
        v36 = v39;
        v42 = v26;
        v43 = 0LL;
        v37 = v25;
        v38 = v26;
        v46 = 0LL;
        CMILMatrix::Transform3DBoundsHelper<1>(a2, (float *)&v40, (float *)&v43, v23);
        CMILMatrix::Transform3DBoundsHelper<1>(a2, (float *)&v36, (float *)&v46, v27);
        v11 = v46;
        *a5 = v43;
      }
      else
      {
        *a5 = *(_OWORD *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v11 = *(_OWORD *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v36 = *(_OWORD *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      }
    }
    else
    {
      if ( (*(unsigned __int8 (__fastcall **)(CLayerVisual *, __int64))(*(_QWORD *)this + 56LL))(this, 91LL)
        && CLayerVisual::GetFlatteningToLocalSpace(this) )
      {
        v28 = *(_DWORD *)(a2 + 64);
        v29 = *(_OWORD *)(a2 + 16);
        v34[0] = *(_OWORD *)a2;
        v30 = *(_OWORD *)(a2 + 32);
        v35 = v28;
        v34[1] = v29;
        v31 = *(_OWORD *)(a2 + 48);
        v34[2] = v30;
        v36 = 0LL;
        v34[3] = v31;
        if ( !(unsigned __int8)CMILMatrix::Get2DBoundsUsing2DInverse(v34, a3, &v36) )
        {
          *a5 = *(_OWORD *)((char *)this + 172);
          v11 = *(_OWORD *)((char *)this + 148);
          goto LABEL_5;
        }
        v24 = v36;
        *a5 = v36;
LABEL_19:
        *a6 = v24;
        return v7;
      }
      *a5 = *a3;
      v11 = *a3;
    }
LABEL_5:
    *a6 = v11;
    return v7;
  }
  v14 = (*(__int64 (__fastcall **)(struct CEffect *, __int64, _OWORD *, _QWORD, _OWORD *, _OWORD *))(*(_QWORD *)EffectInternal + 232LL))(
          EffectInternal,
          a2,
          a3,
          v39,
          a5,
          a6);
  v7 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0xEA8u);
  return v7;
}
