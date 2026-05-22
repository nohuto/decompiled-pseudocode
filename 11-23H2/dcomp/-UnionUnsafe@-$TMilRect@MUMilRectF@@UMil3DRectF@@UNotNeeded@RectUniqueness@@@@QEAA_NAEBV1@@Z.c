/*
 * XREFs of ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180033B14
 * Callers:
 *     ?RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ @ 0x180031010 (-RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ.c)
 *     ?BatchPrimitive@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOccluder@2@PEAPEAVCPrimitiveBatch@2@@Z @ 0x180032F84 (-BatchPrimitive@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOccluder@2@.c)
 *     ?Add@?$CMergedRectBase@$03@@UEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003B860 (-Add@-$CMergedRectBase@$03@@UEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?MergeExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x1800FA818 (-MergeExisting@-$CMergedRectBase@$03@@IEAAXII@Z.c)
 * Callees:
 *     ?HasValidValues@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180033BF0 (-HasValidValues@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

char __fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(float *a1, float *a2)
{
  float v2; // xmm2_4
  __int64 v3; // r10
  float *v4; // r8
  char v5; // r11
  int v6; // r9d
  float v7; // xmm1_4
  float *v8; // rcx
  int v9; // eax
  _OWORD *v10; // rdx
  char result; // al
  float v12; // xmm0_4
  float v13; // xmm0_4

  v2 = *a1;
  v3 = 0LL;
  v4 = a1;
  v5 = 1;
  if ( a1[2] <= *a1 || (v6 = 0, a1[3] <= a1[1]) )
    v6 = 1;
  v7 = *a2;
  v8 = a2 + 1;
  if ( a2[2] <= *a2 || (v9 = 0, a2[3] <= *v8) )
    v9 = 1;
  if ( !v6 )
  {
    if ( !v9 )
    {
      if ( v2 > v7 )
        *v4 = v7;
      if ( v4[1] > *v8 )
        v4[1] = *v8;
      v12 = a2[2];
      if ( v12 > v4[2] )
        v4[2] = v12;
      v13 = a2[3];
      if ( v13 > v4[3] )
        v4[3] = v13;
    }
    return v5;
  }
  if ( !v9 && (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::HasValidValues(a2) )
  {
    *(_OWORD *)v4 = *v10;
    return v5;
  }
  *((_QWORD *)v4 + 1) = v3;
  result = 0;
  *(_QWORD *)v4 = v3;
  return result;
}
