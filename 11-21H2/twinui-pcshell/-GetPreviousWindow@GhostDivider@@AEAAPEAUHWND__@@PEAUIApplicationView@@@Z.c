/*
 * XREFs of ?GetPreviousWindow@GhostDivider@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18052BEB8
 * Callers:
 *     ?RuntimeClassInitialize@GhostDivider@@QEAAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4GhostDividerPlacement@@W4GhostDividerSize@@@Z @ 0x18052C2A8 (-RuntimeClassInitialize@GhostDivider@@QEAAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4G.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 */

HWND __fastcall GhostDivider::GetPreviousWindow(
        GhostDivider *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64))
{
  __int64 v2; // rbx
  HWND WindowForView; // rax

  v2 = 0LL;
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
  if ( WindowForView )
    return GetWindow(WindowForView, 3u);
  return (HWND)v2;
}
