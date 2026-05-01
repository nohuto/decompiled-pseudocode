/*
 * XREFs of ?HasComplementaryHorizontalEdge@SnapLayoutHelpers@@YA_NW4SnapRegion@@0PEAW4Edge@1@@Z @ 0x1805A6740
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBottomAlignedRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z @ 0x1805A6E24 (-IsBottomAlignedRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z.c)
 *     ?IsTopAlignedRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z @ 0x1805A6F4C (-IsTopAlignedRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z.c)
 */

bool __fastcall SnapLayoutHelpers::HasComplementaryHorizontalEdge(int a1, unsigned int a2, int *a3)
{
  int v5; // ebx

  if ( a3 )
    *a3 = 0;
  v5 = 0;
  if ( a1 != a2 && a1 > 0 )
  {
    if ( a1 <= 3 )
    {
      if ( (unsigned __int8)SnapLayoutHelpers::IsBottomAlignedRegion(a2) )
        v5 = (unsigned __int8)SnapLayoutHelpers::IsTopAlignedRegion(a2) == 0;
    }
    else if ( a1 > 4
           && a1 <= 7
           && (unsigned __int8)SnapLayoutHelpers::IsTopAlignedRegion(a2)
           && !(unsigned __int8)SnapLayoutHelpers::IsBottomAlignedRegion(a2) )
    {
      v5 = 4;
    }
  }
  if ( a3 )
    *a3 = v5;
  return v5 != 0;
}
