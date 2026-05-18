/*
 * XREFs of sub_1800C3064 @ 0x1800C3064
 * Callers:
 *     sub_1800C5950 @ 0x1800C5950 (sub_1800C5950.c)
 *     sub_1800C7560 @ 0x1800C7560 (sub_1800C7560.c)
 *     sub_1800C76B0 @ 0x1800C76B0 (sub_1800C76B0.c)
 *     sub_1800D9280 @ 0x1800D9280 (sub_1800D9280.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800C3064(__int64 (__fastcall ****a1)(_QWORD, void *, __int64 *), __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, void *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  sub_18000E72C(a2);
  return v4(v3, &unk_180199830, a2);
}
