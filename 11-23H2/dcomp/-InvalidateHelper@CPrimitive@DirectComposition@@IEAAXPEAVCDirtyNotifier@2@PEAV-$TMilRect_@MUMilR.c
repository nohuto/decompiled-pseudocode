/*
 * XREFs of ?InvalidateHelper@CPrimitive@DirectComposition@@IEAAXPEAVCDirtyNotifier@2@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18003BBC4
 * Callers:
 *     ?Invalidate@CTexturedRectanglePrimitive@DirectComposition@@UEAAXPEAVCDirtyNotifier@2@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C240 (-Invalidate@CTexturedRectanglePrimitive@DirectComposition@@UEAAXPEAVCDirtyNotifier@2@PEAV-$TMilR.c)
 *     ?Invalidate@CVirtualSurfacePrimitive@DirectComposition@@EEAAXPEAVCDirtyNotifier@2@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003B730 (-Invalidate@CVirtualSurfacePrimitive@DirectComposition@@EEAAXPEAVCDirtyNotifier@2@PEAV-$TMilRect.c)
 *     ?Invalidate@CPrimitive@DirectComposition@@UEAAXPEAVCDirtyNotifier@2@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F92D0 (-Invalidate@CPrimitive@DirectComposition@@UEAAXPEAVCDirtyNotifier@2@PEAV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     ?InvertMatrix@DirectComposition@@YA_NPEAUD2D_MATRIX_3X2_F@@@Z @ 0x18003197C (-InvertMatrix@DirectComposition@@YA_NPEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Invalidate@CPrimitiveGroup@DirectComposition@@IEAAXPEAVCPrimitive@2@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003BC88 (-Invalidate@CPrimitiveGroup@DirectComposition@@IEAAXPEAVCPrimitive@2@PEAV-$TMilRect_@MUMilRectF@.c)
 *     ??$ComputeTransformedRectBounds@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@DirectComposition@@YA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV1@AEBUD2D_MATRIX_3X2_F@@PEAUD2D_POINT_2F@@@Z @ 0x18003BEF8 (--$ComputeTransformedRectBounds@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

void __fastcall DirectComposition::CPrimitive::InvalidateHelper(
        __m128 *a1,
        struct D2D_MATRIX_3X2_F *a2,
        __int64 a3,
        __m128 *a4)
{
  __m128 *v4; // r10
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // xmm1_8
  __int64 v7; // r11
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  __m128 v9; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+40h] [rbp-18h]

  v4 = a1;
  if ( a1[4].m128_u64[0] )
  {
    v5 = a1[6].m128_u64[1];
    v8 = 0LL;
    if ( a2 == (struct D2D_MATRIX_3X2_F *)((v5 + 56) & -(__int64)(v5 != 0)) )
    {
      a1[11].m128_i8[0] &= ~1u;
      a4 = a1 + 7;
    }
    if ( a3 )
    {
      v6 = a4[1].m128_u64[0];
      v9 = *a4;
      v10 = v6;
      if ( DirectComposition::InvertMatrix(&v9, a2) )
        v8 = *(_OWORD *)DirectComposition::ComputeTransformedRectBounds<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
                          &v8,
                          v7,
                          &v9);
    }
    DirectComposition::CPrimitiveGroup::Invalidate((DirectComposition::CPrimitiveGroup *)v4[4].m128_u64[0]);
  }
}
