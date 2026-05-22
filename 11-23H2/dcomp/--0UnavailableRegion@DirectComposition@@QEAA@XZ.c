/*
 * XREFs of ??0UnavailableRegion@DirectComposition@@QEAA@XZ @ 0x180088728
 * Callers:
 *     ??0CTileClump@DirectComposition@@IEAA@PEAVCSurfaceFactory@1@PEAVCVirtualSurface@1@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180037330 (--0CTileClump@DirectComposition@@IEAA@PEAVCSurfaceFactory@1@PEAVCVirtualSurface@1@AEBV-$TMilRect.c)
 * Callees:
 *     <none>
 */

DirectComposition::UnavailableRegion *__fastcall DirectComposition::UnavailableRegion::UnavailableRegion(
        DirectComposition::UnavailableRegion *this)
{
  *(_QWORD *)this = (char *)this + 8;
  *((_DWORD *)this + 2) = 0;
  return this;
}
