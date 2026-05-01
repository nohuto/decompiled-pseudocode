/*
 * XREFs of ?IsViewHalfSnappedRight@CShellSnapComponent@@UEAAHPEAUIApplicationView@@@Z @ 0x180661A40
 * Callers:
 *     <none>
 * Callees:
 *     ?DetermineSnapRegionForView@SnapLayoutHelpers@@YA?AW4SnapRegion@@PEAUIApplicationView@@@Z @ 0x1802E93A4 (-DetermineSnapRegionForView@SnapLayoutHelpers@@YA-AW4SnapRegion@@PEAUIApplicationView@@@Z.c)
 */

_BOOL8 __fastcall CShellSnapComponent::IsViewHalfSnappedRight(CShellSnapComponent *this, struct IApplicationView *a2)
{
  return (unsigned int)SnapLayoutHelpers::DetermineSnapRegionForView((__int64)a2) == 4;
}
