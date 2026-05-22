/*
 * XREFs of ?SetD2DStatesHelper@CPrimitive@DirectComposition@@IEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@PEAUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@@Z @ 0x180032A50
 * Callers:
 *     ?SetD2DStates@CTexturedRectanglePrimitive@DirectComposition@@UEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@PEAUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@@Z @ 0x180032890 (-SetD2DStates@CTexturedRectanglePrimitive@DirectComposition@@UEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_.c)
 *     ?SetD2DStates@CPrimitive@DirectComposition@@UEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@PEAUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@@Z @ 0x1800F9550 (-SetD2DStates@CPrimitive@DirectComposition@@UEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@PE.c)
 * Callees:
 *     ?GetTexCoordBounds@CAtlasSurface@DirectComposition@@QEAAX_N0PEAUD2D_RECT_F@@@Z @ 0x1800303B0 (-GetTexCoordBounds@CAtlasSurface@DirectComposition@@QEAAX_N0PEAUD2D_RECT_F@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetOpacityAtlasSurfaceNoRef@CPrimitive@DirectComposition@@IEBAPEAVCAtlasSurface@2@XZ @ 0x1800F925C (-GetOpacityAtlasSurfaceNoRef@CPrimitive@DirectComposition@@IEBAPEAVCAtlasSurface@2@XZ.c)
 *     ?SetD2DLayerStateTexCoordTransform@CPrimitive@DirectComposition@@KAXPEAVCAtlasSurface@2@PEAUD2D_MATRIX_3X2_F@@1@Z @ 0x1800F93F4 (-SetD2DLayerStateTexCoordTransform@CPrimitive@DirectComposition@@KAXPEAVCAtlasSurface@2@PEAUD2D_.c)
 */

void __fastcall DirectComposition::CPrimitive::SetD2DStatesHelper(
        DirectComposition::CPrimitive *this,
        struct D2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE *a2,
        struct D2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE *a3)
{
  char v3; // di
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  struct DirectComposition::CAtlasSurface *OpacityAtlasSurfaceNoRef; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  DirectComposition::CAtlasSurface *v12; // r14
  char v13; // al
  char v14; // al
  struct DirectComposition::CAtlasSurface *v15; // rax
  struct D2D_MATRIX_3X2_F *v16; // rdx

  v3 = 0;
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 136);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 72);
  *((_QWORD *)a2 + 4) = *((_QWORD *)this + 11);
  *((_DWORD *)a2 + 10) = 0;
  *((_DWORD *)a2 + 11) = *((_DWORD *)this + 45);
  v6 = *((_QWORD *)this + 13);
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 16);
  }
  else
  {
    v7 = *((_QWORD *)this + 28);
    if ( !v7 )
      return;
    v8 = *(_QWORD *)(v7 + 200);
  }
  if ( v8 )
  {
    OpacityAtlasSurfaceNoRef = DirectComposition::CPrimitive::GetOpacityAtlasSurfaceNoRef(this);
    v12 = OpacityAtlasSurfaceNoRef;
    if ( v10 )
      v3 = (*(_BYTE *)(v10 + 112) & 4) != 0;
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 168LL))(v11);
    DirectComposition::CAtlasSurface::GetTexCoordBounds(v12, v13, v3, (struct D2D_RECT_F *)a3 + 5);
    v14 = *((_BYTE *)this + 176);
    if ( (v14 & 1) == 0 )
    {
      *((_BYTE *)this + 176) = v14 | 1;
      v15 = DirectComposition::CPrimitive::GetOpacityAtlasSurfaceNoRef(this);
      DirectComposition::CPrimitive::SetD2DLayerStateTexCoordTransform(
        v15,
        v16,
        (struct D2D_MATRIX_3X2_F *)((char *)this + 152));
    }
    *(_OWORD *)((char *)a3 + 56) = *(_OWORD *)((char *)this + 152);
    *((_QWORD *)a3 + 9) = *((_QWORD *)this + 21);
  }
}
