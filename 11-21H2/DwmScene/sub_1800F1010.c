/*
 * XREFs of sub_1800F1010 @ 0x1800F1010
 * Callers:
 *     sub_1800E83A0 @ 0x1800E83A0 (sub_1800E83A0.c)
 *     sub_1800E9F10 @ 0x1800E9F10 (sub_1800E9F10.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800F1010(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 104);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
