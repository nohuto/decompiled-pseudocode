/*
 * XREFs of ?MergeExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x1800FA818
 * Callers:
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x18003B94C (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180033B14 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 */

char __fastcall CMergedRectBase<4>::MergeExisting(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rbx
  char result; // al

  v4 = a3;
  result = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
             (float *)(16LL * a2 + a1 + 8),
             (float *)(16LL * a3 + a1 + 8));
  *(_BYTE *)(v4 + a1 + 72) = 0;
  --*(_DWORD *)(a1 + 80);
  return result;
}
