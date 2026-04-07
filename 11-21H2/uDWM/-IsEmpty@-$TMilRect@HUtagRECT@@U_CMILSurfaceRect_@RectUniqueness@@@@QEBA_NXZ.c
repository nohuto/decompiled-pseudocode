/*
 * XREFs of ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x180011D00
 * Callers:
 *     ?ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ @ 0x18003C674 (-ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800BBB94 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEmpty(_DWORD *a1)
{
  return a1[2] <= *a1 || a1[3] <= a1[1];
}
