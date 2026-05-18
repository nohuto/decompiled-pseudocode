/*
 * XREFs of sub_1800E2DA0 @ 0x1800E2DA0
 * Callers:
 *     sub_1800E70E0 @ 0x1800E70E0 (sub_1800E70E0.c)
 *     sub_1800E8960 @ 0x1800E8960 (sub_1800E8960.c)
 *     sub_1800E8B70 @ 0x1800E8B70 (sub_1800E8B70.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800E2DA0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 128);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
