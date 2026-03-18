/*
 * XREFs of ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C5D30
 * Callers:
 *     ?IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C5D00 (-IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CSuperWetInkVisualGeneratedT@VCSuperWetInkVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A0F90 (-IsOfType@-$CSuperWetInkVisualGeneratedT@VCSuperWetInkVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_T.c)
 *     ?IsOfType@CRedirectVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A1580 (-IsOfType@CRedirectVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1802025E0 (-IsOfType@-$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180211CA0 (-IsOfType@-$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18022FB50 (-IsOfType@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@UEBA_NW4MIL_RE.c)
 *     ?IsOfType@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1802429B0 (-IsOfType@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::IsOfType(__int64 a1, int a2)
{
  return a2 == 195 || a2 == 112 || a2 == 132;
}
