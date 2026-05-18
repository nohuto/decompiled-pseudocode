/*
 * XREFs of sub_180017A38 @ 0x180017A38
 * Callers:
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 *     sub_1800E46AF @ 0x1800E46AF (sub_1800E46AF.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180017A38(__int64 *a1)
{
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(qword_1801D3390 + 40) + 1048LL))(
    *(_QWORD *)(qword_1801D3390 + 40),
    *a1,
    0LL);
  return sub_18000E72C(a1);
}
