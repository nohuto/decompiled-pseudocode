/*
 * XREFs of sub_1800D044C @ 0x1800D044C
 * Callers:
 *     sub_1800D1040 @ 0x1800D1040 (sub_1800D1040.c)
 *     sub_1800D2850 @ 0x1800D2850 (sub_1800D2850.c)
 *     sub_1800D32E0 @ 0x1800D32E0 (sub_1800D32E0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800D044C(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 104);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
