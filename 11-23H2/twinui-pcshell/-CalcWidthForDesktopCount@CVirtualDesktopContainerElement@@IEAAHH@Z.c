/*
 * XREFs of ?CalcWidthForDesktopCount@CVirtualDesktopContainerElement@@IEAAHH@Z @ 0x18059171C
 * Callers:
 *     ?GetTotalRect@CVirtualDesktopContainerElement@@UEAA?AUCRect@Geometry@@XZ @ 0x180591B70 (-GetTotalRect@CVirtualDesktopContainerElement@@UEAA-AUCRect@Geometry@@XZ.c)
 *     ?GetVisibleRect@CVirtualDesktopContainerElement@@UEAA?AUCRect@Geometry@@XZ @ 0x180591C20 (-GetVisibleRect@CVirtualDesktopContainerElement@@UEAA-AUCRect@Geometry@@XZ.c)
 *     ?v_LayoutChildren@CVirtualDesktopContainerElement@@MEAAXXZ @ 0x180593060 (-v_LayoutChildren@CVirtualDesktopContainerElement@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopContainerElement::CalcWidthForDesktopCount(
        CVirtualDesktopContainerElement *this,
        int a2)
{
  return (unsigned int)(a2
                      * MulDiv(
                          *((_DWORD *)this + 82),
                          *((_DWORD *)this + 64) - *((_DWORD *)this + 62),
                          *((_DWORD *)this + 65) - *((_DWORD *)this + 63))
                      + *((_DWORD *)this + 83) * (a2 - 1)
                      + 2 * *((_DWORD *)this + 99));
}
