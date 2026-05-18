/*
 * XREFs of sub_1800333A4 @ 0x1800333A4
 * Callers:
 *     sub_1800187B0 @ 0x1800187B0 (sub_1800187B0.c)
 *     sub_180035320 @ 0x180035320 (sub_180035320.c)
 * Callees:
 *     sub_180033324 @ 0x180033324 (sub_180033324.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800333A4(__int64 a1, __int64 *a2)
{
  sub_180033324(a1, a2);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 80LL))(a1, a2);
  return a2;
}
