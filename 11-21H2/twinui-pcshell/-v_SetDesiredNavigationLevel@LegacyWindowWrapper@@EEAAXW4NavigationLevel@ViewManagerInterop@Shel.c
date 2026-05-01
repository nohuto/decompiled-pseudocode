/*
 * XREFs of ?v_SetDesiredNavigationLevel@LegacyWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803FBDA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180407A08 (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEAAXW4NavigationLevel@Vie.c)
 */

int __fastcall LegacyWindowWrapper::v_SetDesiredNavigationLevel(__int64 a1, unsigned int a2)
{
  HWND v4; // rsi
  int result; // eax

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 216LL))(*(_QWORD *)(a1 + 280));
  v4 = (HWND)*(int *)(a1 + 296);
  result = LegacyWindowWrapper::NavigationLevelHelper::SetDesiredNavigationLevel(a1 + 648, a2);
  if ( !a2 )
  {
    if ( v4 )
      return PostMessageW(v4, 0x10u, 0LL, 0LL);
  }
  return result;
}
