/*
 * XREFs of ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18003C0FC
 * Callers:
 *     ?DoesIntersect@CPrimitiveBatch@DirectComposition@@QEBA_NPEAVCPrimitive@2@PEAVCPrimitiveGroup@2@@Z @ 0x180007DE4 (-DoesIntersect@CPrimitiveBatch@DirectComposition@@QEBA_NPEAVCPrimitive@2@PEAVCPrimitiveGroup@2@@.c)
 *     ?RealizeAndRebuild@CVirtualSurfacePrimitive@DirectComposition@@AEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z @ 0x180031A74 (-RealizeAndRebuild@CVirtualSurfacePrimitive@DirectComposition@@AEAAJPEAVCPrimitiveGroup@2@PEAUBa.c)
 *     ?Add@?$CMergedRectBase@$03@@UEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003B860 (-Add@-$CMergedRectBase@$03@@UEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x18003B94C (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18003C15C (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

char __fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(__int64 a1)
{
  char IsEmpty; // al
  __int64 v2; // rdx
  char v3; // r9
  float *v4; // rdx
  float *v5; // r8

  IsEmpty = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a1);
  v3 = 0;
  if ( !IsEmpty
    && !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v2)
    && v5[2] > *v4
    && v4[2] > *v5
    && v5[3] > v4[1]
    && v4[3] > v5[1] )
  {
    return 1;
  }
  return v3;
}
