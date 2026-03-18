/*
 * XREFs of ?CanUseFastShadow@CProjectedShadow@@AEBA_NXZ @ 0x1801335A2
 * Callers:
 *     ?ComputeShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x1802493D8 (-ComputeShadowPath@CProjectedShadow@@AEBA-AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsRectangular@CProjectedShadowCaster@@QEBA_NXZ @ 0x180219B74 (-IsRectangular@CProjectedShadowCaster@@QEBA_NXZ.c)
 */

bool __fastcall CProjectedShadow::CanUseFastShadow(CProjectedShadowCaster **this)
{
  return CProjectedShadowCaster::IsRectangular(this[10])
      && (float)(*((float *)this + 98) * 0.5) >= *((float *)this + 24);
}
