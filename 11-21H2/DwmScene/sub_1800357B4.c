/*
 * XREFs of sub_1800357B4 @ 0x1800357B4
 * Callers:
 *     sub_180019B10 @ 0x180019B10 (sub_180019B10.c)
 *     sub_180038300 @ 0x180038300 (sub_180038300.c)
 * Callees:
 *     sub_180035720 @ 0x180035720 (sub_180035720.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800357B4(__int64 *a1, __int64 *a2)
{
  sub_180035720(a1, a2);
  (*(void (__fastcall **)(__int64 *, __int64 *))(*a1 + 80))(a1, a2);
  return a2;
}
