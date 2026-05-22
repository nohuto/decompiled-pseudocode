/*
 * XREFs of ?SetD2DLayerStateTexCoordTransform@CPrimitive@DirectComposition@@KAXPEAVCAtlasSurface@2@PEAUD2D_MATRIX_3X2_F@@1@Z @ 0x1800F93F4
 * Callers:
 *     ?SetD2DStatesHelper@CPrimitive@DirectComposition@@IEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@PEAUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@@Z @ 0x180032A50 (-SetD2DStatesHelper@CPrimitive@DirectComposition@@IEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STA.c)
 * Callees:
 *     ?GetTexCoordTransform@CAtlasSurface@DirectComposition@@QEAAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800541B0 (-GetTexCoordTransform@CAtlasSurface@DirectComposition@@QEAAXPEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

void __fastcall DirectComposition::CPrimitive::SetD2DLayerStateTexCoordTransform(
        struct DirectComposition::CAtlasSurface *a1,
        struct D2D_MATRIX_3X2_F *a2,
        struct D2D_MATRIX_3X2_F *a3)
{
  float m21; // xmm8_4
  FLOAT v6; // xmm10_4
  float m22; // xmm0_4
  FLOAT v8; // xmm9_4
  float dx; // xmm1_4
  FLOAT v10; // xmm8_4
  float dy; // xmm0_4
  FLOAT v12; // xmm3_4
  FLOAT v13; // xmm1_4
  struct D2D_MATRIX_3X2_F v14; // [rsp+20h] [rbp-78h] BYREF

  DirectComposition::CAtlasSurface::GetTexCoordTransform(a1, &v14);
  m21 = a2->m21;
  v6 = (float)(a2->m11 * v14.m12) + (float)(a2->m12 * v14.m22);
  m22 = a2->m22;
  v8 = (float)(m21 * v14.m12) + (float)(m22 * v14.m22);
  dx = a2->dx;
  v10 = (float)(m21 * v14.m11) + (float)(m22 * v14.m21);
  dy = a2->dy;
  v12 = (float)((float)(dx * v14.m12) + (float)(dy * v14.m22)) + v14.dy;
  v13 = (float)((float)(dx * v14.m11) + (float)(dy * v14.m21)) + v14.dx;
  a3->m11 = (float)(a2->m11 * v14.m11) + (float)(a2->m12 * v14.m21);
  a3->m12 = v6;
  a3->m21 = v10;
  a3->m22 = v8;
  a3->dx = v13;
  a3->dy = v12;
}
