/*
 * XREFs of sub_1800DA7BC @ 0x1800DA7BC
 * Callers:
 *     sub_1800DAEE0 @ 0x1800DAEE0 (sub_1800DAEE0.c)
 *     sub_1800DC0E0 @ 0x1800DC0E0 (sub_1800DC0E0.c)
 *     sub_1800E1120 @ 0x1800E1120 (sub_1800E1120.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800DA7BC(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 4272);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
