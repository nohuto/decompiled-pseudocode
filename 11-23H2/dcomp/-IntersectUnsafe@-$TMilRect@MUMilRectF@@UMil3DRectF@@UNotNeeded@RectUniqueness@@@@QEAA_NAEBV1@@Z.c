/*
 * XREFs of ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003C054
 * Callers:
 *     ?Invalidate@CPrimitiveGroup@DirectComposition@@IEAAXPEAVCPrimitive@2@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003BC88 (-Invalidate@CPrimitiveGroup@DirectComposition@@IEAAXPEAVCPrimitive@2@PEAV-$TMilRect_@MUMilRectF@.c)
 *     ?GetOcclusionRect@CVirtualSurfacePrimitive@DirectComposition@@UEAA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180089DE0 (-GetOcclusionRect@CVirtualSurfacePrimitive@DirectComposition@@UEAA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 *     ?EtwLogPrimitives@CPrimitiveGroup@DirectComposition@@AEAAXPEBUBatchedOccluder@2@@Z @ 0x1800F9BC4 (-EtwLogPrimitives@CPrimitiveGroup@DirectComposition@@AEAAXPEBUBatchedOccluder@2@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18003C15C (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

char __fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(__int64 a1, __int64 a2)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm1_4
  _QWORD *v5; // rcx
  char result; // al

  if ( *(float *)a2 > *(float *)a1 )
    *(_DWORD *)a1 = *(_DWORD *)a2;
  v2 = *(float *)(a2 + 4);
  if ( v2 > *(float *)(a1 + 4) )
    *(float *)(a1 + 4) = v2;
  v3 = *(float *)(a2 + 8);
  if ( *(float *)(a1 + 8) > v3 )
    *(float *)(a1 + 8) = v3;
  v4 = *(float *)(a2 + 12);
  if ( *(float *)(a1 + 12) > v4 )
    *(float *)(a1 + 12) = v4;
  if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a1) )
    return 1;
  v5[1] = 0LL;
  result = 0;
  *v5 = 0LL;
  return result;
}
