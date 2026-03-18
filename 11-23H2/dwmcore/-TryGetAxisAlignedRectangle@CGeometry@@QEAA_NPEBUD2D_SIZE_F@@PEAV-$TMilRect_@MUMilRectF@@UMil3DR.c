/*
 * XREFs of ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180009460
 * Callers:
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x1800091D8 (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?IsRectangular@CProjectedShadowCaster@@QEBA_NXZ @ 0x180219684 (-IsRectangular@CProjectedShadowCaster@@QEBA_NXZ.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x1800094E0 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18002F378 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180059ED0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C3A4C (-Release@CShapePtr@@QEAAXXZ.c)
 */

char __fastcall CGeometry::TryGetAxisAlignedRectangle(CGeometry *a1, const struct D2D_SIZE_F *a2, _DWORD *a3)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  a3[3] = 0;
  a3[2] = 0;
  a3[1] = 0;
  *a3 = 0;
  v5 = 0LL;
  v6 = 0;
  if ( (int)CGeometry::GetShapeData(a1, a2, (struct CShapePtr *)&v5) >= 0
    && CShapePtr::IsAxisAlignedRectangle((CShapePtr *)&v5)
    && (int)CShapePtr::GetTightBounds(&v5, a3, 0LL) >= 0 )
  {
    CShapePtr::Release((CShapePtr *)&v5);
    return 1;
  }
  else
  {
    CShapePtr::Release((CShapePtr *)&v5);
    return 0;
  }
}
