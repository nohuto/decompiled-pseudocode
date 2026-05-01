/*
 * XREFs of ?GetTitleBarVisibilityModeInternal@UwpWindowWrapperBase@@UEAA?AW4ApplicationWindowTitleBarVisibilityInternal@WindowManagement@ApplicationModel@Internal@Windows@@XZ @ 0x180415030
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall UwpWindowWrapperBase::GetTitleBarVisibilityModeInternal(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 256) + 232LL))(*(_QWORD *)(a1 + 256));
  return *(_BYTE *)(a1 + 454) == 0;
}
