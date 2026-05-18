/*
 * XREFs of sub_18001895C @ 0x18001895C
 * Callers:
 *     sub_18001A2B0 @ 0x18001A2B0 (sub_18001A2B0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18001895C(_QWORD *a1)
{
  *a1 = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD *))(**(_QWORD **)(qword_1801F7498 + 40) + 1048LL))(
    *(_QWORD *)(qword_1801F7498 + 40),
    *(_QWORD *)(qword_1801F7498 + 48),
    a1);
  return a1;
}
