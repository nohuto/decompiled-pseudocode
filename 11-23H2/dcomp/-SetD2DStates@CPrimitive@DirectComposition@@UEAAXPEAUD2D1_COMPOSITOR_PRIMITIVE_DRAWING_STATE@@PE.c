/*
 * XREFs of ?SetD2DStates@CPrimitive@DirectComposition@@UEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@PEAUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@@Z @ 0x1800F9550
 * Callers:
 *     ?SetD2DStates@CDynamicColorRectanglePrimitive@DirectComposition@@UEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@PEAUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@@Z @ 0x1800F7D10 (-SetD2DStates@CDynamicColorRectanglePrimitive@DirectComposition@@UEAAXPEAUD2D1_COMPOSITOR_PRIMIT.c)
 *     ?SetD2DStates@CSolidColorRectanglePrimitive@DirectComposition@@UEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@PEAUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@@Z @ 0x1800FB680 (-SetD2DStates@CSolidColorRectanglePrimitive@DirectComposition@@UEAAXPEAUD2D1_COMPOSITOR_PRIMITIV.c)
 * Callees:
 *     ?GetTexCoordBounds@CAtlasSurface@DirectComposition@@QEAAX_N0PEAUD2D_RECT_F@@@Z @ 0x1800303B0 (-GetTexCoordBounds@CAtlasSurface@DirectComposition@@QEAAX_N0PEAUD2D_RECT_F@@@Z.c)
 *     ?SetD2DStatesHelper@CPrimitive@DirectComposition@@IEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@PEAUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@@Z @ 0x180032A50 (-SetD2DStatesHelper@CPrimitive@DirectComposition@@IEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CPrimitive::SetD2DStates(
        DirectComposition::CPrimitive *this,
        struct D2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE *a2,
        struct D2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE *a3)
{
  DirectComposition::CAtlasSurface *v5; // rbx
  char v6; // al

  DirectComposition::CPrimitive::SetD2DStatesHelper(this, a2, a3);
  if ( (*(__int64 (__fastcall **)(DirectComposition::CPrimitive *))(*(_QWORD *)this + 160LL))(this) )
  {
    v5 = (DirectComposition::CAtlasSurface *)(*(__int64 (__fastcall **)(DirectComposition::CPrimitive *))(*(_QWORD *)this + 160LL))(this);
    v6 = (*(__int64 (__fastcall **)(DirectComposition::CPrimitive *))(*(_QWORD *)this + 176LL))(this);
    DirectComposition::CAtlasSurface::GetTexCoordBounds(v5, v6, 0, (struct D2D_RECT_F *)((char *)a3 + 40));
    *((_OWORD *)a3 + 1) = 0LL;
    *((_QWORD *)a3 + 4) = 0LL;
  }
}
