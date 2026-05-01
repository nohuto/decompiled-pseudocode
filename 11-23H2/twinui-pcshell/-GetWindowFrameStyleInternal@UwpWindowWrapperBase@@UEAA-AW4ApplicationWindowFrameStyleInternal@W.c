/*
 * XREFs of ?GetWindowFrameStyleInternal@UwpWindowWrapperBase@@UEAA?AW4ApplicationWindowFrameStyleInternal@WindowManagement@ApplicationModel@Internal@Windows@@XZ @ 0x1801AA660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowWrapperBase::GetWindowFrameStyleInternal(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 264) + 232LL))(*(_QWORD *)(a1 + 264));
  return *(unsigned int *)(a1 + 456);
}
