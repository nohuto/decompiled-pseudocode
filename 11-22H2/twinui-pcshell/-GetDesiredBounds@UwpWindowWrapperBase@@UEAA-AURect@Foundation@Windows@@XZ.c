/*
 * XREFs of ?GetDesiredBounds@UwpWindowWrapperBase@@UEAA?AURect@Foundation@Windows@@XZ @ 0x1801B5920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_OWORD *__fastcall UwpWindowWrapperBase::GetDesiredBounds(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 264) + 232LL))(*(_QWORD *)(a1 + 264));
  result = a2;
  *a2 = *(_OWORD *)(a1 + 472);
  return result;
}
