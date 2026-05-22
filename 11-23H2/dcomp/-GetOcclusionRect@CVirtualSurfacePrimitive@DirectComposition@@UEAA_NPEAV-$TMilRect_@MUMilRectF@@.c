/*
 * XREFs of ?GetOcclusionRect@CVirtualSurfacePrimitive@DirectComposition@@UEAA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180089DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAxisAligned@DirectComposition@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18003170C (-IsAxisAligned@DirectComposition@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?InvertMatrix@DirectComposition@@YA_NPEAUD2D_MATRIX_3X2_F@@@Z @ 0x18003197C (-InvertMatrix@DirectComposition@@YA_NPEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$ComputeTransformedRectBounds@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@DirectComposition@@YA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV1@AEBUD2D_MATRIX_3X2_F@@PEAUD2D_POINT_2F@@@Z @ 0x18003BEF8 (--$ComputeTransformedRectBounds@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003C054 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18003C15C (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsInteriorBltOnly@CVirtualSurfacePrimitive@DirectComposition@@UEBA_NXZ @ 0x180089E50 (-IsInteriorBltOnly@CVirtualSurfacePrimitive@DirectComposition@@UEBA_NXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?GetOcclusionRect@CVirtualSurface@DirectComposition@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B58E4 (-GetOcclusionRect@CVirtualSurface@DirectComposition@@QEAA_NPEAV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 */

bool __fastcall DirectComposition::CVirtualSurfacePrimitive::GetOcclusionRect(__int64 a1, float *a2)
{
  char v4; // bl
  const struct D2D_MATRIX_3X2_F *v5; // rdx
  __int64 v7; // rcx
  struct D2D_MATRIX_3X2_F *v8; // rdx
  __int64 v9; // xmm1_8
  __int128 v10; // [rsp+20h] [rbp-50h] BYREF
  __int128 v11; // [rsp+30h] [rbp-40h] BYREF
  __m128 v12; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+50h] [rbp-20h]
  _BYTE v14[16]; // [rsp+58h] [rbp-18h] BYREF

  v4 = 0;
  if ( DirectComposition::CVirtualSurfacePrimitive::IsInteriorBltOnly((DirectComposition::CVirtualSurfacePrimitive *)a1)
    && DirectComposition::IsAxisAligned((DirectComposition *)(a1 + 232), v5) )
  {
    v7 = *(_QWORD *)(a1 + 256);
    v10 = 0LL;
    if ( (unsigned __int8)DirectComposition::CVirtualSurface::GetOcclusionRect(v7, &v10) )
    {
      v9 = *(_QWORD *)(a1 + 248);
      v12 = *(__m128 *)(a1 + 232);
      v13 = v9;
      if ( DirectComposition::InvertMatrix(&v12, v8) )
      {
        v11 = *(_OWORD *)(a1 + 136);
        v10 = *(_OWORD *)DirectComposition::ComputeTransformedRectBounds<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
                           (__int64)v14,
                           (__int64)&v10,
                           v12.m128_f32);
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe((__int64)&v10, (__int64)&v11);
        if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v10) )
        {
          *(_OWORD *)a2 = *(_OWORD *)DirectComposition::ComputeTransformedRectBounds<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
                                       (__int64)v14,
                                       (__int64)&v10,
                                       (float *)(a1 + 72));
          return !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a2);
        }
      }
    }
  }
  return v4;
}
