/*
 * XREFs of ?HasComplementaryVerticalEdge@SnapLayoutHelpers@@YA_NW4SnapRegion@@0PEAW4Edge@1@@Z @ 0x1805A68C0
 * Callers:
 *     ?GetAdjacentHalfSnappedView@CShellSnapComponent@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z @ 0x1805928A0 (-GetAdjacentHalfSnappedView@CShellSnapComponent@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?IsLeftAlignedRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z @ 0x1805A6EC8 (-IsLeftAlignedRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z.c)
 *     ?IsRightAlignedRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z @ 0x1805A6F0C (-IsRightAlignedRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z.c)
 */

bool __fastcall SnapLayoutHelpers::HasComplementaryVerticalEdge(int a1, unsigned int a2, int *a3)
{
  int v5; // ebx

  if ( a3 )
    *a3 = 0;
  v5 = 0;
  if ( a1 != a2 )
  {
    if ( a1 == 1 )
    {
LABEL_9:
      if ( (unsigned __int8)SnapLayoutHelpers::IsRightAlignedRegion(a2)
        && !(unsigned __int8)SnapLayoutHelpers::IsLeftAlignedRegion(a2) )
      {
        v5 = 2;
      }
      goto LABEL_12;
    }
    if ( a1 <= 2 )
      goto LABEL_12;
    if ( a1 > 5 )
    {
      if ( a1 <= 6 || a1 > 8 )
        goto LABEL_12;
      goto LABEL_9;
    }
    if ( (unsigned __int8)SnapLayoutHelpers::IsLeftAlignedRegion(a2)
      && !(unsigned __int8)SnapLayoutHelpers::IsRightAlignedRegion(a2) )
    {
      v5 = 3;
    }
  }
LABEL_12:
  if ( a3 )
    *a3 = v5;
  return v5 != 0;
}
