/*
 * XREFs of ?IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z @ 0x18006C09C
 * Callers:
 *     ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x18006B960 (-CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?TryClipWithRect@CRoundedRectangleGeometryData@@SA_NAEBU1@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAU1@@Z @ 0x1800846CC (-TryClipWithRect@CRoundedRectangleGeometryData@@SA_NAEBU1@AEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 *     ??0SharedData@CRoundedRectangleShape@@IEAA@AEBUCRoundedRectangleGeometryData@@@Z @ 0x1800862A0 (--0SharedData@CRoundedRectangleShape@@IEAA@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x1800B6188 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 *     ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAVCMilPoint2F@@@Z @ 0x1800B7D2C (-CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAVCMilPoint2F@@@Z.c)
 *     ?GetBoundsForOcclusion@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800CAB30 (-GetBoundsForOcclusion@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?IsRectangles@CRoundedRectangleShape@@UEBA_NPEAI@Z @ 0x1800CBDC0 (-IsRectangles@CRoundedRectangleShape@@UEBA_NPEAI@Z.c)
 *     ?ContainsOnlyPolygons@CRoundedRectangleShape@@UEBA_NXZ @ 0x1800D0820 (-ContainsOnlyPolygons@CRoundedRectangleShape@@UEBA_NXZ.c)
 *     ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800D960C (-HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     _lambda_130f3fd38fafab82521855fb46aefe92_::operator() @ 0x180191350 (_lambda_130f3fd38fafab82521855fb46aefe92_--operator().c)
 * Callees:
 *     <none>
 */

char __fastcall CRoundedRectangleGeometryData::IsRoundedCorner(__int64 a1, unsigned int a2)
{
  char v2; // r8
  __int64 v3; // rax

  v2 = 0;
  if ( *(_BYTE *)(a1 + 52) )
    v3 = 16LL;
  else
    v3 = 8LL * a2 + 16;
  if ( *(float *)(v3 + a1) > 0.0 && *(float *)(v3 + a1 + 4) > 0.0 )
    return 1;
  return v2;
}
