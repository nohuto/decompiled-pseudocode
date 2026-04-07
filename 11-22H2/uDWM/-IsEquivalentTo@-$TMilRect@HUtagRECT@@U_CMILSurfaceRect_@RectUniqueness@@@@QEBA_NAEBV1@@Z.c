/*
 * XREFs of ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800BFA6C
 * Callers:
 *     ?ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ @ 0x18003DE40 (-ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x180056BB4 (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x1800BFB3C (-IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x1800574A4 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x1800BFC48 (-IsInfinite@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 */

char __fastcall TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(_DWORD *a1, _DWORD *a2)
{
  bool IsEmpty; // al
  _DWORD *v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8

  if ( *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3]
    || (IsEmpty = TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEmpty(a1), LOBYTE(v5) = 0, IsEmpty)
    && TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEmpty(v3)
    || (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(v4, v5)
    && (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(v7, v6) )
  {
    LOBYTE(v6) = 1;
  }
  return v6;
}
