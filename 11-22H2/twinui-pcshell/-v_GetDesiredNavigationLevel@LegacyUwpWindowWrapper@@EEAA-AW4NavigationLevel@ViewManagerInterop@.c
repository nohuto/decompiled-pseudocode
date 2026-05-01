/*
 * XREFs of ?v_GetDesiredNavigationLevel@LegacyUwpWindowWrapper@@EEAA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x1804E1760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall LegacyUwpWindowWrapper::v_GetDesiredNavigationLevel(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 232LL))(*(_QWORD *)(a1 + 280));
  return *(unsigned int *)(a1 + 640);
}
