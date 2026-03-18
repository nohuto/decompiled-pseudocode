/*
 * XREFs of ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180225DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Contains@?$DynArray@PEAVCVisual@@$0A@@@QEBA_NAEBQEAVCVisual@@@Z @ 0x180010E5C (-Contains@-$DynArray@PEAVCVisual@@$0A@@@QEBA_NAEBQEAVCVisual@@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180035140 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800713C4 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800AAB24 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800BEE70 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C543C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800F3388 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     tanf_0 @ 0x18011B644 (tanf_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1802106C8 (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 */

char __fastcall CCompositionSpotLight::AffectsVisual(
        CCompositionSpotLight *this,
        const struct CVisualTree *a2,
        struct CVisual *a3)
{
  char DoesIntersectUnsafe; // bl
  float v7; // xmm1_4
  float v8; // xmm7_4
  CVisual *v9; // rcx
  int WorldTransform; // eax
  __int64 v11; // rcx
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  CVisual *v15; // rcx
  float v16; // xmm3_4
  char *v17; // rdi
  char v18; // al
  __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // r8d
  int v22; // edi
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // [rsp+28h] [rbp-E0h]
  struct CVisual *v27; // [rsp+38h] [rbp-D0h] BYREF
  float v28; // [rsp+40h] [rbp-C8h] BYREF
  float v29; // [rsp+44h] [rbp-C4h] BYREF
  float v30[4]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v31[64]; // [rsp+58h] [rbp-B0h] BYREF
  int v32; // [rsp+98h] [rbp-70h]
  float v33; // [rsp+A8h] [rbp-60h] BYREF
  float v34; // [rsp+ACh] [rbp-5Ch]
  float v35; // [rsp+B0h] [rbp-58h]
  float v36; // [rsp+B4h] [rbp-54h]
  __int128 v37; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v38; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v39; // [rsp+D8h] [rbp-30h] BYREF

  v27 = a3;
  DoesIntersectUnsafe = 1;
  if ( !*((_BYTE *)this + 170) )
    return 0;
  if ( *((float *)this + 92) != 0.0 )
    return DoesIntersectUnsafe;
  if ( *((float *)this + 93) != 0.0 )
    return DoesIntersectUnsafe;
  if ( *((float *)this + 94) != -1.0 )
    return DoesIntersectUnsafe;
  v7 = *((float *)this + 96);
  if ( *((float *)this + 95) > v7 || v7 > 1.5707952 )
    return DoesIntersectUnsafe;
  CVisual::GetEffectiveOffset(a3, v30, &v29, &v28);
  v8 = *((float *)this + 91) - v28;
  v32 = 0;
  v39 = 0LL;
  v38 = 0LL;
  WorldTransform = CVisual::GetWorldTransform(v9, a2, 1, (struct CMILMatrix *)v31, 0LL, 0LL);
  if ( WorldTransform < 0 )
  {
    v26 = 597;
    goto LABEL_30;
  }
  if ( !CMILMatrix::Is2DAffine<1>((__int64)v31, 1) )
    return DoesIntersectUnsafe;
  if ( v8 > 0.0 && *((float *)this + 96) > 0.0 )
  {
    v37 = 0LL;
    WorldTransform = (*(__int64 (__fastcall **)(struct CVisual *, __int128 *))(*(_QWORD *)v27 + 224LL))(v27, &v37);
    if ( WorldTransform < 0 )
    {
      v26 = 613;
    }
    else
    {
      CMILMatrix::Transform2DBoundsHelper<1>((CMILMatrix *)v31, (struct MilRectF *)&v37, (float *)&v38);
      v12 = tanf_0(*((float *)this + 96));
      v13 = *((float *)this + 90);
      v14 = *((float *)this + 89);
      v15 = (CVisual *)*((_QWORD *)this + 32);
      v32 = 0;
      v16 = (float)(v12 * v8) + (float)(v12 * v8);
      v33 = v14 - (float)(v12 * v8);
      v34 = v13 - (float)(v12 * v8);
      v36 = v16 + v34;
      v35 = v16 + v33;
      WorldTransform = CVisual::GetWorldTransform(v15, a2, 1, (struct CMILMatrix *)v31, 0LL, 0LL);
      if ( WorldTransform >= 0 )
      {
        CMILMatrix::Transform2DBoundsHelper<1>((CMILMatrix *)v31, (struct MilRectF *)&v33, (float *)&v39);
        DoesIntersectUnsafe = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                (float *)&v39,
                                (float *)&v38);
        goto LABEL_18;
      }
      v26 = 632;
    }
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, WorldTransform, v26, 0LL);
    return DoesIntersectUnsafe;
  }
  DoesIntersectUnsafe = 0;
LABEL_18:
  v17 = (char *)this + 264;
  v18 = DynArray<CVisual *,0>::Contains((__int64)v17, &v27);
  if ( DoesIntersectUnsafe )
  {
    if ( v18 )
      DynArray<CVisual *,0>::Remove((__int64 *)v17, &v27);
    return DoesIntersectUnsafe;
  }
  DoesIntersectUnsafe = v18 ^ 1;
  if ( !v18 )
  {
    v20 = *((_DWORD *)v17 + 6);
    v21 = v20 + 1;
    if ( v20 + 1 < v20 )
    {
      v22 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_28:
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x298u, 0LL);
      return DoesIntersectUnsafe;
    }
    if ( v21 > *((_DWORD *)v17 + 5) )
    {
      v24 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v17, 8, 1, &v27);
      v22 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xC0u, 0LL);
        goto LABEL_28;
      }
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v17 + 8LL * *((unsigned int *)v17 + 6)) = v27;
      *((_DWORD *)v17 + 6) = v21;
    }
  }
  return DoesIntersectUnsafe;
}
