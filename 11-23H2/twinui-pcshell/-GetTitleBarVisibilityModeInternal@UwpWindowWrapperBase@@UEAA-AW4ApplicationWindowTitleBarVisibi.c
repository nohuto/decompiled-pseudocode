/*
 * XREFs of ?GetTitleBarVisibilityModeInternal@UwpWindowWrapperBase@@UEAA?AW4ApplicationWindowTitleBarVisibilityInternal@WindowManagement@ApplicationModel@Internal@Windows@@XZ @ 0x1801A0420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall UwpWindowWrapperBase::GetTitleBarVisibilityModeInternal(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 264) + 232LL))(*(_QWORD *)(a1 + 264));
  return *(_BYTE *)(a1 + 462) == 0;
}
