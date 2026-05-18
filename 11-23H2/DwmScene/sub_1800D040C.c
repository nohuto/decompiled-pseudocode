/*
 * XREFs of sub_1800D040C @ 0x1800D040C
 * Callers:
 *     sub_1800D1500 @ 0x1800D1500 (sub_1800D1500.c)
 *     sub_1800D1A20 @ 0x1800D1A20 (sub_1800D1A20.c)
 *     sub_1800D2980 @ 0x1800D2980 (sub_1800D2980.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800D040C(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 120);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
