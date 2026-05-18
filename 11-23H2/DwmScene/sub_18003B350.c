/*
 * XREFs of sub_18003B350 @ 0x18003B350
 * Callers:
 *     sub_1800E6453 @ 0x1800E6453 (sub_1800E6453.c)
 *     sub_1800E668E @ 0x1800E668E (sub_1800E668E.c)
 *     sub_1800F19C6 @ 0x1800F19C6 (sub_1800F19C6.c)
 *     sub_1800F19D8 @ 0x1800F19D8 (sub_1800F19D8.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18003B350(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
