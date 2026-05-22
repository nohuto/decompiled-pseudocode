/*
 * XREFs of ?GetTexCoordBounds@CAtlasSurface@DirectComposition@@QEAAX_N0PEAUD2D_RECT_F@@@Z @ 0x1800303B0
 * Callers:
 *     ?SetD2DStates@CTexturedRectanglePrimitive@DirectComposition@@UEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@PEAUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@@Z @ 0x180032890 (-SetD2DStates@CTexturedRectanglePrimitive@DirectComposition@@UEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_.c)
 *     ?SetD2DStatesHelper@CPrimitive@DirectComposition@@IEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@PEAUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@@Z @ 0x180032A50 (-SetD2DStatesHelper@CPrimitive@DirectComposition@@IEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STA.c)
 *     ?SetD2DStates@CPrimitive@DirectComposition@@UEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@PEAUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@@Z @ 0x1800F9550 (-SetD2DStates@CPrimitive@DirectComposition@@UEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@PE.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CAtlasSurface::GetTexCoordBounds(
        DirectComposition::CAtlasSurface *this,
        char a2,
        char a3,
        struct D2D_RECT_F *a4)
{
  int v5; // r14d
  int v8; // r15d
  int v9; // esi
  int v10; // r12d
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm4_4
  float v16; // xmm5_4
  _DWORD v17[12]; // [rsp+20h] [rbp-68h] BYREF

  v5 = *((_DWORD *)this + 18) + (*((_DWORD *)this + 22) & 1);
  v8 = v5 + *((_DWORD *)this + 20);
  v9 = ((*((_DWORD *)this + 22) >> 2) & 1) + *((_DWORD *)this + 19);
  v10 = v9 + *((_DWORD *)this + 21);
  (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(*((_QWORD *)this + 8) + 32LL) + 80LL))(
    *(_QWORD *)(*((_QWORD *)this + 8) + 32LL),
    v17);
  v11 = 1.0 / (float)v17[0];
  v12 = 1.0 / (float)v17[1];
  if ( a2 )
  {
    if ( a3 )
    {
      v14 = *(float *)&_xmm;
      LODWORD(v13) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_u32[0];
      v15 = (double)v9 + 0.5;
      v16 = v15;
    }
    else
    {
      v13 = (float)v8 * v11;
      v14 = (float)v5 * v11;
      v15 = (float)v9;
      v16 = (float)v10;
    }
    a4->top = v12 * v15;
    a4->bottom = v12 * v16;
    a4->left = v14;
    a4->right = v13;
  }
  else
  {
    a4->left = -3.4028235e38;
    a4->top = -3.4028235e38;
    a4->right = 3.4028235e38;
    a4->bottom = 3.4028235e38;
  }
}
