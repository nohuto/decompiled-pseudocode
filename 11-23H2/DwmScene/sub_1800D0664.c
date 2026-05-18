/*
 * XREFs of sub_1800D0664 @ 0x1800D0664
 * Callers:
 *     sub_1800CFC70 @ 0x1800CFC70 (sub_1800CFC70.c)
 *     sub_1800D1500 @ 0x1800D1500 (sub_1800D1500.c)
 *     sub_1800D1660 @ 0x1800D1660 (sub_1800D1660.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800D0664(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 112);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
