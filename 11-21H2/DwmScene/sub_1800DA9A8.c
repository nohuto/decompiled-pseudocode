/*
 * XREFs of sub_1800DA9A8 @ 0x1800DA9A8
 * Callers:
 *     sub_1800E51F0 @ 0x1800E51F0 (sub_1800E51F0.c)
 *     sub_1800F1278 @ 0x1800F1278 (sub_1800F1278.c)
 *     sub_1800F2230 @ 0x1800F2230 (sub_1800F2230.c)
 * Callees:
 *     sub_18002C7C4 @ 0x18002C7C4 (sub_18002C7C4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800DA9A8(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx

  sub_18002C7C4(a1 + 24);
  v4 = *(_QWORD *)(a1 + 4264);
  *a2 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a2;
}
