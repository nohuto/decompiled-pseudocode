/*
 * XREFs of ?IsEmptyRegionOnVirtualDesktop@MagnifierExperienceHelper@@AEBA_NUtagPOINT@@@Z @ 0x1800C8304
 * Callers:
 *     ?GetStillZoneFromOffset@MagnifierExperienceHelper@@AEBA?AUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1800C7F90 (-GetStillZoneFromOffset@MagnifierExperienceHelper@@AEBA-AUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall MagnifierExperienceHelper::IsEmptyRegionOnVirtualDesktop(RECT *lprc, POINT pt)
{
  return !MonitorFromPoint(pt, 0) && PtInRect(lprc, pt);
}
