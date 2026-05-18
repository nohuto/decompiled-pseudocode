/*
 * XREFs of sub_1800C570C @ 0x1800C570C
 * Callers:
 *     sub_1800C5D20 @ 0x1800C5D20 (sub_1800C5D20.c)
 *     sub_1800C6A20 @ 0x1800C6A20 (sub_1800C6A20.c)
 *     sub_1800CAB90 @ 0x1800CAB90 (sub_1800CAB90.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800C570C(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 4272);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
