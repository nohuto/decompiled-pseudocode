/*
 * XREFs of ?GetTexCoordTransform@CAtlasSurface@DirectComposition@@QEAAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800541B0
 * Callers:
 *     ?SetD2DStates@CTexturedRectanglePrimitive@DirectComposition@@UEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@PEAUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@@Z @ 0x180032890 (-SetD2DStates@CTexturedRectanglePrimitive@DirectComposition@@UEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_.c)
 *     ?SetD2DLayerStateTexCoordTransform@CPrimitive@DirectComposition@@KAXPEAVCAtlasSurface@2@PEAUD2D_MATRIX_3X2_F@@1@Z @ 0x1800F93F4 (-SetD2DLayerStateTexCoordTransform@CPrimitive@DirectComposition@@KAXPEAVCAtlasSurface@2@PEAUD2D_.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CAtlasSurface::GetTexCoordTransform(
        DirectComposition::CAtlasSurface *this,
        struct D2D_MATRIX_3X2_F *a2)
{
  unsigned int v3; // esi
  int v4; // ebx
  int v5; // edi
  float v6; // xmm10_4
  float v7; // xmm7_4
  float v8; // xmm9_4
  float v9; // xmm11_4
  _DWORD v10[12]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = *((_DWORD *)this + 22);
  v4 = *((_DWORD *)this + 18);
  v5 = *((_DWORD *)this + 19);
  (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(*((_QWORD *)this + 8) + 32LL) + 80LL))(
    *(_QWORD *)(*((_QWORD *)this + 8) + 32LL),
    v10);
  v6 = (float)(int)(v4 + (v3 & 1));
  v7 = (float)(int)(v5 + ((v3 >> 2) & 1));
  v8 = 1.0 / (float)v10[0];
  v9 = 1.0 / (float)v10[1];
  a2->m11 = v8 + 0.0;
  a2->m12 = (float)(v9 * 0.0) + 0.0;
  a2->m21 = (float)(v8 * 0.0) + 0.0;
  a2->m22 = v9 + 0.0;
  a2->dx = (float)((float)(v8 * v6) + (float)(v7 * 0.0)) + (float)(0.0 - (float)(v8 * 0.0));
  a2->dy = (float)((float)(v9 * v7) + (float)(v6 * 0.0)) + (float)(0.0 - (float)(v9 * 0.0));
}
