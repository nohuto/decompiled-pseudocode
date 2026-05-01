/*
 * XREFs of ?GetLastRequestedNavigationLevel@UwpWindowWrapperBase@@UEAA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x180414B90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowWrapperBase::GetLastRequestedNavigationLevel(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 256) + 232LL))(*(_QWORD *)(a1 + 256));
  return *(unsigned int *)(a1 + 460);
}
