/*
 * XREFs of sub_1800CF088 @ 0x1800CF088
 * Callers:
 *     sub_1800D11F0 @ 0x1800D11F0 (sub_1800D11F0.c)
 *     sub_1800D2FD0 @ 0x1800D2FD0 (sub_1800D2FD0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800CF088(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 176);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
