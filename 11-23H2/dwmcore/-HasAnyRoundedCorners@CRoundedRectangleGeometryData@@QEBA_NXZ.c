/*
 * XREFs of ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x18003CF70
 * Callers:
 *     _lambda_130f3fd38fafab82521855fb46aefe92_::operator() @ 0x180013C24 (_lambda_130f3fd38fafab82521855fb46aefe92_--operator().c)
 *     ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x180035DC4 (-CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?ContainsOnlyPolygons@CRoundedRectangleShape@@UEBA_NXZ @ 0x180039280 (-ContainsOnlyPolygons@CRoundedRectangleShape@@UEBA_NXZ.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180039F90 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetBoundsForOcclusion@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003C160 (-GetBoundsForOcclusion@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 * Callees:
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z @ 0x1800CFBF4 (-IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z.c)
 */

char __fastcall CRoundedRectangleGeometryData::HasAnyRoundedCorners(CRoundedRectangleGeometryData *this)
{
  char v1; // r9
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( *((_BYTE *)this + 52) )
    return CRoundedRectangleGeometryData::IsRoundedCorner(this, 0LL);
  if ( *((float *)this + 4) > 0.0 && *((float *)this + 5) > 0.0
    || (unsigned __int8)CRoundedRectangleGeometryData::IsRoundedCorner(this, 1LL)
    || (unsigned __int8)CRoundedRectangleGeometryData::IsRoundedCorner(v3, 2LL)
    || (unsigned __int8)CRoundedRectangleGeometryData::IsRoundedCorner(v4, 3LL) )
  {
    return 1;
  }
  return v1;
}
