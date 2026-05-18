/*
 * XREFs of sub_1800393DC @ 0x1800393DC
 * Callers:
 *     sub_180011560 @ 0x180011560 (sub_180011560.c)
 *     sub_1800A305C @ 0x1800A305C (sub_1800A305C.c)
 *     sub_1800C75C0 @ 0x1800C75C0 (sub_1800C75C0.c)
 *     sub_1800C76B0 @ 0x1800C76B0 (sub_1800C76B0.c)
 *     sub_1800D06A4 @ 0x1800D06A4 (sub_1800D06A4.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800393DC(_QWORD **a1)
{
  ((void (__fastcall *)(_QWORD **, _QWORD))(*a1)[29])(a1, 0LL);
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1[12] + 16LL))(a1[12]);
}
