/*
 * XREFs of ?IntersectsWithErrorThreshold@SnapLayoutHelpers@@YA_NAEBUCRect@Geometry@@0H@Z @ 0x1805A6B04
 * Callers:
 *     ?DoSnapRegionsOverlap@AdvancedSmartFill@SnapLayoutHelpers@@YA_NW4RegionOverlapMode@12@AEBUCRect@Geometry@@1H@Z @ 0x1805A35FC (-DoSnapRegionsOverlap@AdvancedSmartFill@SnapLayoutHelpers@@YA_NW4RegionOverlapMode@12@AEBUCRect@.c)
 *     ?IsUnoccluded@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIObjectArray@@0PEA_N@Z @ 0x1805A6F8C (-IsUnoccluded@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIObjectArray@@0PEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

char __fastcall SnapLayoutHelpers::IntersectsWithErrorThreshold(
        RECT *lprcSrc1,
        RECT *lprcSrc2,
        const struct Geometry::CRect *a3)
{
  int v3; // ebx
  BOOL v4; // eax
  char v5; // cl
  struct tagRECT rcDst; // [rsp+20h] [rbp-28h] BYREF

  v3 = (int)a3;
  rcDst = 0LL;
  v4 = IntersectRect(&rcDst, lprcSrc1, lprcSrc2);
  v5 = 0;
  if ( v4 && rcDst.right - rcDst.left > v3 )
    return rcDst.bottom - rcDst.top > v3;
  return v5;
}
