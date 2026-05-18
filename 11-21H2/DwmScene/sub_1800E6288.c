/*
 * XREFs of sub_1800E6288 @ 0x1800E6288
 * Callers:
 *     sub_1800D9B40 @ 0x1800D9B40 (sub_1800D9B40.c)
 *     sub_1800D9F90 @ 0x1800D9F90 (sub_1800D9F90.c)
 *     sub_1800E2380 @ 0x1800E2380 (sub_1800E2380.c)
 *     sub_1800E7B30 @ 0x1800E7B30 (sub_1800E7B30.c)
 *     sub_1800E7FB0 @ 0x1800E7FB0 (sub_1800E7FB0.c)
 *     sub_1800E8560 @ 0x1800E8560 (sub_1800E8560.c)
 *     sub_1800EA210 @ 0x1800EA210 (sub_1800EA210.c)
 *     sub_1800EA840 @ 0x1800EA840 (sub_1800EA840.c)
 *     sub_1800EDBD0 @ 0x1800EDBD0 (sub_1800EDBD0.c)
 *     sub_1800EE7A4 @ 0x1800EE7A4 (sub_1800EE7A4.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800E6288(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 168);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
