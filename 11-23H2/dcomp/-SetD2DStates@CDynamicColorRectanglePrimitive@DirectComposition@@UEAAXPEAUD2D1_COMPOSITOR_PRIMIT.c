/*
 * XREFs of ?SetD2DStates@CDynamicColorRectanglePrimitive@DirectComposition@@UEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@PEAUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@@Z @ 0x1800F7D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CDynamicColorRectanglePrimitive::SetD2DStates(
        DirectComposition::CDynamicColorRectanglePrimitive *this,
        struct D2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE *a2,
        struct D2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE *a3)
{
  int v3; // xmm0_4

  v3 = *((_DWORD *)this + 24);
  *(_DWORD *)a3 = 1065353216;
  *((_DWORD *)a3 + 1) = 1065353216;
  *((_DWORD *)a3 + 2) = 1065353216;
  *((_DWORD *)a3 + 3) = v3;
  *((_DWORD *)a3 + 24) = 0;
  DirectComposition::CPrimitive::SetD2DStates(this, a2, a3);
}
