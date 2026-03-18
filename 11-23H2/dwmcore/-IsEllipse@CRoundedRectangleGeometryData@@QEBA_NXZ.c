/*
 * XREFs of ?IsEllipse@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x180035D28
 * Callers:
 *     ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x180035DC4 (-CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?AreAllCornerRadiiEqual@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x180039230 (-AreAllCornerRadiiEqual@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18003CF20 (-GetBaseRect@CRoundedRectangleGeometryData@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 */

char __fastcall CRoundedRectangleGeometryData::IsEllipse(
        CRoundedRectangleGeometryData *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  CRoundedRectangleGeometryData *v4; // rcx
  bool v5; // al
  __int64 v6; // rcx
  char v7; // dl
  float v9[4]; // [rsp+20h] [rbp-28h] BYREF

  CRoundedRectangleGeometryData::GetBaseRect(this, v9, a3, a4);
  v5 = CRoundedRectangleGeometryData::AreAllCornerRadiiEqual(v4);
  v7 = 0;
  if ( v5
    && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v9[2] - v9[0]) - (float)(*(float *)(v6 + 16) + *(float *)(v6 + 16))) & _xmm) <= 0.0000011920929 )
  {
    return COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v9[3] - v9[1]) - (float)(*(float *)(v6 + 20) + *(float *)(v6 + 20))) & _xmm) <= 0.0000011920929;
  }
  return v7;
}
