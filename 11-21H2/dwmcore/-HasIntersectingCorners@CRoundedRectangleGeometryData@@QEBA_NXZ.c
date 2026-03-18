/*
 * XREFs of ?HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800865D4
 * Callers:
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18006C130 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetOutline@CRoundedRectangleShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x1800B8000 (-GetOutline@CRoundedRectangleShape@@UEBAJPEAUID2D1GeometrySink@@@Z.c)
 * Callees:
 *     ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800864D4 (-GetBaseRect@CRoundedRectangleGeometryData@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

char __fastcall CRoundedRectangleGeometryData::HasIntersectingCorners(CRoundedRectangleGeometryData *this)
{
  __int64 v1; // rcx
  char result; // al
  bool v3; // cc
  float v4; // [rsp+20h] [rbp-28h] BYREF
  float v5; // [rsp+24h] [rbp-24h]
  float v6; // [rsp+28h] [rbp-20h]
  float v7; // [rsp+2Ch] [rbp-1Ch]

  CRoundedRectangleGeometryData::GetBaseRect((__int64)this, (__int64)&v4);
  result = 0;
  if ( *(_BYTE *)(v1 + 52) )
  {
    if ( (float)(*(float *)(v1 + 16) + *(float *)(v1 + 16)) <= (float)(v6 - v4) )
    {
      v3 = (float)(*(float *)(v1 + 20) + *(float *)(v1 + 20)) <= (float)(v7 - v5);
LABEL_6:
      if ( v3 )
        return result;
    }
  }
  else if ( (float)(*(float *)(v1 + 24) + *(float *)(v1 + 16)) <= (float)(v6 - v4)
         && (float)(*(float *)(v1 + 40) + *(float *)(v1 + 32)) <= (float)(v6 - v4)
         && (float)(*(float *)(v1 + 44) + *(float *)(v1 + 20)) <= (float)(v7 - v5) )
  {
    v3 = (float)(*(float *)(v1 + 36) + *(float *)(v1 + 28)) <= (float)(v7 - v5);
    goto LABEL_6;
  }
  return 1;
}
