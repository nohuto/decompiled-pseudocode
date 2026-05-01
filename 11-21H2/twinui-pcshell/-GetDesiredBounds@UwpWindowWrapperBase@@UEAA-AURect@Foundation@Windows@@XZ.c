/*
 * XREFs of ?GetDesiredBounds@UwpWindowWrapperBase@@UEAA?AURect@Foundation@Windows@@XZ @ 0x180414A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_OWORD *__fastcall UwpWindowWrapperBase::GetDesiredBounds(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 256) + 232LL))(*(_QWORD *)(a1 + 256));
  result = a2;
  *a2 = *(_OWORD *)(a1 + 464);
  return result;
}
