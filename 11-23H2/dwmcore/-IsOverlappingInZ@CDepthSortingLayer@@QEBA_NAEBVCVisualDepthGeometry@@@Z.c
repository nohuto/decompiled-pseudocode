/*
 * XREFs of ?IsOverlappingInZ@CDepthSortingLayer@@QEBA_NAEBVCVisualDepthGeometry@@@Z @ 0x18026C75C
 * Callers:
 *     ?AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x180259AA0 (-AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDepthSortingLayer::IsOverlappingInZ(CDepthSortingLayer *this, const struct CVisualDepthGeometry *a2)
{
  return *((float *)this + 7) >= *((float *)a2 + 4) && *((float *)a2 + 7) >= *((float *)this + 6);
}
