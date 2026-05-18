/*
 * XREFs of sub_1800E61F4 @ 0x1800E61F4
 * Callers:
 *     sub_1800E9C20 @ 0x1800E9C20 (sub_1800E9C20.c)
 * Callees:
 *     sub_1800E502C @ 0x1800E502C (sub_1800E502C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800E61F4(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx

  sub_1800E502C(a1);
  v4 = *(_QWORD *)(a1 + 160);
  *a2 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a2;
}
