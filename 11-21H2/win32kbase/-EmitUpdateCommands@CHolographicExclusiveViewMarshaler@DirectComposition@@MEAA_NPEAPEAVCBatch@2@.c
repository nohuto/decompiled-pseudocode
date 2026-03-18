/*
 * XREFs of ?EmitUpdateCommands@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022D3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitCreate@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022D224 (-EmitCreate@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSwapChain@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022D318 (-EmitSwapChain@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022D3FC (-EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CHolographicExclusiveViewMarshaler::EmitUpdateCommands(
        DirectComposition::CHolographicExclusiveViewMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CHolographicExclusiveViewMarshaler::EmitCreate(this, (struct DirectComposition::CBatch ***)a2)
    && DirectComposition::CHolographicExclusiveViewMarshaler::EmitSwapChain(
         this,
         (struct DirectComposition::CBatch ***)a2) )
  {
    return DirectComposition::CHolographicExclusiveViewMarshaler::EmitViewData(this, a2);
  }
  return v4;
}
