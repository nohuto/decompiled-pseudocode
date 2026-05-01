/*
 * XREFs of ?IsViewHalfSnappedRight@CShellSnapComponent@@UEAAHPEAUIApplicationView@@@Z @ 0x1805941B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DetermineSnapRegionForView@SnapLayoutHelpers@@YA?AW4SnapRegion@@PEAUIApplicationView@@@Z @ 0x1805A3108 (-DetermineSnapRegionForView@SnapLayoutHelpers@@YA-AW4SnapRegion@@PEAUIApplicationView@@@Z.c)
 */

_BOOL8 __fastcall CShellSnapComponent::IsViewHalfSnappedRight(CShellSnapComponent *this, struct IApplicationView *a2)
{
  return (unsigned int)SnapLayoutHelpers::DetermineSnapRegionForView(a2) == 4;
}
