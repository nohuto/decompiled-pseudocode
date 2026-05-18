/*
 * XREFs of sub_1800C58DC @ 0x1800C58DC
 * Callers:
 *     sub_1800CE190 @ 0x1800CE190 (sub_1800CE190.c)
 *     sub_1800D875C @ 0x1800D875C (sub_1800D875C.c)
 *     sub_1800D94E0 @ 0x1800D94E0 (sub_1800D94E0.c)
 * Callees:
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800C58DC(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx

  sub_18002A404(a1 + 24);
  v4 = *(_QWORD *)(a1 + 4264);
  *a2 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a2;
}
