/*
 * XREFs of ?GetOpacityAtlasSurfaceNoRef@CPrimitive@DirectComposition@@IEBAPEAVCAtlasSurface@2@XZ @ 0x1800F925C
 * Callers:
 *     ?SetD2DStatesHelper@CPrimitive@DirectComposition@@IEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@PEAUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@@Z @ 0x180032A50 (-SetD2DStatesHelper@CPrimitive@DirectComposition@@IEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STA.c)
 * Callees:
 *     <none>
 */

struct DirectComposition::CAtlasSurface *__fastcall DirectComposition::CPrimitive::GetOpacityAtlasSurfaceNoRef(
        DirectComposition::CPrimitive *this)
{
  __int64 v1; // rax
  struct DirectComposition::CAtlasSurface *result; // rax

  v1 = *((_QWORD *)this + 13);
  if ( v1 )
    return *(struct DirectComposition::CAtlasSurface **)(v1 + 16);
  result = (struct DirectComposition::CAtlasSurface *)*((_QWORD *)this + 28);
  if ( result )
    return (struct DirectComposition::CAtlasSurface *)*((_QWORD *)result + 25);
  return result;
}
