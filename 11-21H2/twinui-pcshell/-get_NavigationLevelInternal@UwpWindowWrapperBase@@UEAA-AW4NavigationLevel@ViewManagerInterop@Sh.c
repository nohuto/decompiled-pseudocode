/*
 * XREFs of ?get_NavigationLevelInternal@UwpWindowWrapperBase@@UEAA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x180419780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowWrapperBase::get_NavigationLevelInternal(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 256) + 232LL))(*(_QWORD *)(a1 + 256));
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 16) + 144LL))(a1 - 16);
}
