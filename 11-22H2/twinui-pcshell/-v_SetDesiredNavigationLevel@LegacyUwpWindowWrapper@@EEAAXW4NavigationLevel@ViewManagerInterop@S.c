/*
 * XREFs of ?v_SetDesiredNavigationLevel@LegacyUwpWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804E1970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804EFAF4 (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAAXW4NavigationLevel@.c)
 */

int __fastcall LegacyUwpWindowWrapper::v_SetDesiredNavigationLevel(__int64 a1, unsigned int a2)
{
  HWND v4; // rsi
  int result; // eax

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 224LL))(*(_QWORD *)(a1 + 280));
  v4 = (HWND)*(int *)(a1 + 296);
  result = LegacyUwpWindowWrapper::NavigationLevelHelper::SetDesiredNavigationLevel(a1 + 640, a2);
  if ( !a2 )
  {
    if ( v4 )
      return PostMessageW(v4, 0x10u, 0LL, 0LL);
  }
  return result;
}
