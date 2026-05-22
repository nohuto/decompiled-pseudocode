/*
 * XREFs of ?SetD2DStates@CTexturedRectanglePrimitive@DirectComposition@@UEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@PEAUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@@Z @ 0x180032890
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTexCoordBounds@CAtlasSurface@DirectComposition@@QEAAX_N0PEAUD2D_RECT_F@@@Z @ 0x1800303B0 (-GetTexCoordBounds@CAtlasSurface@DirectComposition@@QEAAX_N0PEAUD2D_RECT_F@@@Z.c)
 *     ?SetD2DStatesHelper@CPrimitive@DirectComposition@@IEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@PEAUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@@Z @ 0x180032A50 (-SetD2DStatesHelper@CPrimitive@DirectComposition@@IEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STA.c)
 *     ?GetTexCoordTransform@CAtlasSurface@DirectComposition@@QEAAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800541B0 (-GetTexCoordTransform@CAtlasSurface@DirectComposition@@QEAAXPEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CTexturedRectanglePrimitive::SetD2DStates(
        DirectComposition::CTexturedRectanglePrimitive *this,
        struct D2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE *a2,
        struct D2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE *a3)
{
  int v5; // xmm0_4
  __int64 v6; // rax
  DirectComposition::CAtlasSurface *v7; // rdi
  char v8; // bl
  char v9; // al
  char v10; // al
  _OWORD *v11; // rbx
  __int64 v12; // rcx
  float v13; // xmm0_4
  __m128 v14; // xmm4
  float v15; // xmm3_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm3_4
  __m128 v19; // xmm2
  float v20; // xmm0_4
  float v21[6]; // [rsp+20h] [rbp-40h]
  D2D_MATRIX_3X2_F v22; // [rsp+38h] [rbp-28h] BYREF

  DirectComposition::CPrimitive::SetD2DStatesHelper(this, a2, a3);
  v5 = *((_DWORD *)this + 24);
  *(_DWORD *)a3 = 1065353216;
  *((_DWORD *)a3 + 1) = 1065353216;
  *((_DWORD *)a3 + 2) = 1065353216;
  *((_DWORD *)a3 + 3) = v5;
  *((_DWORD *)a3 + 24) = -1;
  v6 = *((_QWORD *)this + 29);
  if ( v6 )
  {
    v7 = *(DirectComposition::CAtlasSurface **)(v6 + 16);
    v8 = (*(_BYTE *)(v6 + 112) & 4) != 0;
    v9 = (*(__int64 (__fastcall **)(DirectComposition::CTexturedRectanglePrimitive *))(*(_QWORD *)this + 176LL))(this);
    DirectComposition::CAtlasSurface::GetTexCoordBounds(v7, v9, v8, (struct D2D_RECT_F *)((char *)a3 + 40));
    v10 = *((_BYTE *)this + 288);
    v11 = (_OWORD *)((char *)this + 264);
    if ( (v10 & 1) == 0 )
    {
      v12 = *((_QWORD *)this + 29);
      *((_BYTE *)this + 288) = v10 | 1;
      DirectComposition::CAtlasSurface::GetTexCoordTransform(*(DirectComposition::CAtlasSurface **)(v12 + 16), &v22);
      v13 = *((float *)this + 61);
      v14 = (__m128)*((unsigned int *)this + 64);
      v15 = (float)(*((float *)this + 60) * v22.m12) + (float)(v13 * v22.m22);
      v16 = (float)(*((float *)this + 60) * v22.m11) + (float)(v13 * v22.m21);
      v17 = *((float *)this + 63);
      v21[1] = v15;
      v18 = *((float *)this + 62);
      v21[0] = v16;
      v19 = v14;
      v21[3] = (float)(v18 * v22.m12) + (float)(v17 * v22.m22);
      v21[2] = (float)(v18 * v22.m11) + (float)(v17 * v22.m21);
      v20 = *((float *)this + 65);
      v19.m128_f32[0] = (float)(v14.m128_f32[0] * v22.m11) + (float)(v20 * v22.m21);
      v14.m128_f32[0] = (float)((float)(v14.m128_f32[0] * v22.m12) + (float)(v20 * v22.m22)) + v22.dy;
      *v11 = *(_OWORD *)v21;
      v19.m128_f32[0] = v19.m128_f32[0] + v22.dx;
      *((_QWORD *)this + 35) = _mm_unpacklo_ps(v19, v14).m128_u64[0];
    }
    *((_OWORD *)a3 + 1) = *v11;
    *((_QWORD *)a3 + 4) = *((_QWORD *)this + 35);
  }
}
