/*
 * XREFs of ?DeflateToHalf@@YAMM@Z @ 0x1800A9A58
 * Callers:
 *     ?CreateSurfaceDrawListBrushForIntermediate@CRenderingTechnique@@QEAAJIAEBUEffectInput@@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1800A9858 (-CreateSurfaceDrawListBrushForIntermediate@CRenderingTechnique@@QEAAJIAEBUEffectInput@@PEAPEAVCS.c)
 * Callees:
 *     ceilf_0 @ 0x18011B56C (ceilf_0.c)
 */

float __fastcall DeflateToHalf(float a1)
{
  float v1; // xmm6_4
  float v2; // xmm0_4

  v1 = a1;
  v2 = ceilf_0(a1);
  if ( (float)(v2 - v1) < 0.5 )
    return v2 - 0.5;
  return v1;
}
