/*
 * XREFs of sub_180017818 @ 0x180017818
 * Callers:
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180017818(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  void (__fastcall *v4)(__int64, _QWORD, __int64 *); // rdi

  *a1 = 0LL;
  v2 = qword_1801D3390;
  v3 = *(_QWORD *)(qword_1801D3390 + 40);
  v4 = *(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 1048LL);
  sub_18000E72C(a1);
  v4(v3, *(_QWORD *)(v2 + 48), a1);
  return a1;
}
