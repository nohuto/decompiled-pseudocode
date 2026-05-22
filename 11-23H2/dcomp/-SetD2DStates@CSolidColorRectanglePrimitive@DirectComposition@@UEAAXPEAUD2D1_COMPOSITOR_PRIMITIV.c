/*
 * XREFs of ?SetD2DStates@CSolidColorRectanglePrimitive@DirectComposition@@UEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@PEAUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@@Z @ 0x1800FB680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CSolidColorRectanglePrimitive::SetD2DStates(
        DirectComposition::CSolidColorRectanglePrimitive *this,
        struct D2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE *a2,
        struct D2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE *a3)
{
  float v3; // xmm1_4

  *(_OWORD *)a3 = *(_OWORD *)((char *)this + 232);
  v3 = *((float *)this + 24) * *((float *)a3 + 3);
  *((_DWORD *)a3 + 24) = -1;
  *((float *)a3 + 3) = v3;
  DirectComposition::CPrimitive::SetD2DStates(this, a2, a3);
}
