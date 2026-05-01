/*
 * XREFs of ?NavDirFromFocusNavigationDirection@VirtualDesktopController@@AEAAIW4FocusNavigationDirection@Input@Xaml@UI@Windows@@@Z @ 0x180542DB4
 * Callers:
 *     ?GetAdjacentDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4FocusNavigationDirection@Input@Xaml@UI@6@PEAPEAU23456@@Z @ 0x180541BA0 (-GetAdjacentDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableSh.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopController::NavDirFromFocusNavigationDirection(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx

  if ( !a2 )
    return 5LL;
  v2 = a2 - 1;
  if ( !v2 )
    return 6LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 1LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 2LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 3LL;
  if ( v5 == 1 )
    return 4LL;
  return 0LL;
}
