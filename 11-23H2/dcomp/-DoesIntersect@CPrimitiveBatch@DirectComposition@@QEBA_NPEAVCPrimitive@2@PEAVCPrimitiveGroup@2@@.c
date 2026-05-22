/*
 * XREFs of ?DoesIntersect@CPrimitiveBatch@DirectComposition@@QEBA_NPEAVCPrimitive@2@PEAVCPrimitiveGroup@2@@Z @ 0x180007DE4
 * Callers:
 *     ?BatchPrimitive@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOccluder@2@PEAPEAVCPrimitiveBatch@2@@Z @ 0x180032F84 (-BatchPrimitive@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOccluder@2@.c)
 * Callees:
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18003C0FC (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 */

char __fastcall DirectComposition::CPrimitiveBatch::DoesIntersect(
        DirectComposition::CPrimitiveBatch *this,
        struct DirectComposition::CPrimitive *a2,
        struct DirectComposition::CPrimitiveGroup *a3)
{
  char *v3; // rbx
  char **v5; // r11
  char *v7; // r10
  __int64 v8; // r10
  int v9; // r11d
  struct DirectComposition::CPrimitiveGroup *v10; // rcx

  v3 = (char *)a2 + 184;
  if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                           (char *)a2 + 184,
                           (char *)this + 44) )
    return 0;
  v7 = *v5;
  if ( !*((_DWORD *)v5 + 2) )
    return 0;
  while ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                              v7 + 184,
                              v3) )
  {
    v10 = *(struct DirectComposition::CPrimitiveGroup **)(v8 + 32);
    v7 = (char *)v10 - 24;
    if ( v10 == (struct DirectComposition::CPrimitiveGroup *)((char *)a3 + 256) )
      v7 = 0LL;
    if ( v9 == 1 )
      return 0;
  }
  return 1;
}
