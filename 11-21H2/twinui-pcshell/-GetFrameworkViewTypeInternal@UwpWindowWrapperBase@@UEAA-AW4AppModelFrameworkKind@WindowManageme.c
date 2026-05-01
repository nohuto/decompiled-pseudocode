/*
 * XREFs of ?GetFrameworkViewTypeInternal@UwpWindowWrapperBase@@UEAA?AW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@XZ @ 0x180414B50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowWrapperBase::GetFrameworkViewTypeInternal(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 256) + 232LL))(*(_QWORD *)(a1 + 256));
  return *(unsigned int *)(a1 + 444);
}
