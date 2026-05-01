/*
 * XREFs of sub_180602148 @ 0x180602148
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall sub_180602148(CVirtualDesktopManager *a1, struct IApplicationView *a2)
{
  char v2; // of

  if ( !v2 )
    JUMPOUT(0x180602174LL);
  return CVirtualDesktopManager::MoveViewFromHolographicDesktopInternal(a1, a2);
}
