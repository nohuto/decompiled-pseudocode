/*
 * XREFs of sub_180093530 @ 0x180093530
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800919F4 @ 0x1800919F4 (sub_1800919F4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_180093530(__int64 a1, __int64 a2, double (__fastcall ***a3)(_QWORD))
{
  double v4; // xmm0_8
  float v5; // xmm0_4

  v4 = (**a3)(a3);
  LODWORD(v5) = sub_1800919F4(*(float *)(a1 + 40), *(float *)(a1 + 44), v4).m128_u32[0];
  return sub_180092EF0(a1, v5);
}
