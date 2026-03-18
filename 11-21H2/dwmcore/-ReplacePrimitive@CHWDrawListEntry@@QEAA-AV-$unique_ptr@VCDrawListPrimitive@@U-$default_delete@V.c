/*
 * XREFs of ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@@Z @ 0x1801E8BF0
 * Callers:
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x18020E450 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 *     ?GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18022F2B0 (-GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLis.c)
 * Callees:
 *     ??$?4U?$default_delete@VCDrawListPrimitive@@@std@@$0A@@?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801E8BB8 (--$-4U-$default_delete@VCDrawListPrimitive@@@std@@$0A@@-$unique_ptr@VCDrawListPrimitive@@U-$defa.c)
 */

__int64 *__fastcall CHWDrawListEntry::ReplacePrimitive(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v3; // rcx
  __int64 v5; // rax

  v3 = (__int64 *)(a1 + 64);
  v5 = *v3;
  *v3 = 0LL;
  *a2 = v5;
  std::unique_ptr<CDrawListPrimitive>::operator=<std::default_delete<CDrawListPrimitive>,0>(v3, a3);
  return a2;
}
