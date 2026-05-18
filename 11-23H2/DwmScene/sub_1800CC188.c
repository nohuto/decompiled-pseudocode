/*
 * XREFs of sub_1800CC188 @ 0x1800CC188
 * Callers:
 *     sub_1800CFE40 @ 0x1800CFE40 (sub_1800CFE40.c)
 *     sub_1800D1500 @ 0x1800D1500 (sub_1800D1500.c)
 *     sub_1800D1660 @ 0x1800D1660 (sub_1800D1660.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800CC188(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 128);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
