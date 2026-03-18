/*
 * XREFs of ?HasNonEmptyContent@CCursorVisual@@UEBA_NXZ @ 0x1802285E0
 * Callers:
 *     <none>
 * Callees:
 *     ?HasNonEmptyContent@CVisual@@UEBA_NXZ @ 0x1800BE810 (-HasNonEmptyContent@CVisual@@UEBA_NXZ.c)
 *     ?IsVisible@CCursorVisual@@IEBA_NXZ @ 0x180228644 (-IsVisible@CCursorVisual@@IEBA_NXZ.c)
 */

char __fastcall CCursorVisual::HasNonEmptyContent(CCursorVisual *this)
{
  CVisual *v1; // rcx
  char v2; // bl

  v2 = 0;
  if ( CCursorVisual::IsVisible(this) || CVisual::HasNonEmptyContent(v1) )
    return 1;
  return v2;
}
