/*
 * XREFs of ?EmitUpdateCommands@CSynchronousSuperWetInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0225460
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetInkLookupIdCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0221964 (-EmitSetInkLookupIdCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBat.c)
 *     ?EmitSetIsVailCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0221B2C (-EmitSetIsVailCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetLookupModeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0221C20 (-EmitSetLookupModeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitSetPerFrameDataAllocationOffsetCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0223074 (-EmitSetPerFrameDataAllocationOffsetCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@.c)
 *     ?EmitSetPerFrameDataAllocationSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02230E4 (-EmitSetPerFrameDataAllocationSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AE.c)
 *     ?EmitSetPerFrameDataSharedSectionCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0223154 (-EmitSetPerFrameDataSharedSectionCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEA.c)
 *     ?EmitSetPerFrameDataSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02231D8 (-EmitSetPerFrameDataSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEA.c)
 *     ?EmitSetReferenceSurfaceCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0223584 (-EmitSetReferenceSurfaceCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEA.c)
 *     ?EmitSetTipPointSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0224180 (-EmitSetTipPointSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 *     ?EmitSetTipPointsAllocationOffsetCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02241F0 (-EmitSetTipPointsAllocationOffsetCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEA.c)
 *     ?EmitSetTipPointsAllocationSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0224260 (-EmitSetTipPointsAllocationSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_.c)
 *     ?EmitSetTipPointsSharedSectionCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02242D0 (-EmitSetTipPointsSharedSectionCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_N.c)
 */

char __fastcall DirectComposition::CSynchronousSuperWetInkMarshaler::EmitUpdateCommands(
        DirectComposition::CSynchronousSuperWetInkMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetReferenceSurfaceCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetTipPointsSharedSectionCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetTipPointsAllocationOffsetCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetTipPointsAllocationSizeCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetTipPointSizeCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetPerFrameDataSharedSectionCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetPerFrameDataAllocationOffsetCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetPerFrameDataAllocationSizeCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetPerFrameDataSizeCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetIsVailCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetLookupModeCommand(this, a2) )
  {
    return DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetInkLookupIdCommand(this, a2) != 0;
  }
  return v4;
}
