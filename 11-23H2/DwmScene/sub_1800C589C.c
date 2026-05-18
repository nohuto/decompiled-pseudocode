/*
 * XREFs of sub_1800C589C @ 0x1800C589C
 * Callers:
 *     sub_1800111B0 @ 0x1800111B0 (sub_1800111B0.c)
 *     sub_1800C4C7C @ 0x1800C4C7C (sub_1800C4C7C.c)
 *     sub_1800C5750 @ 0x1800C5750 (sub_1800C5750.c)
 *     sub_1800C5950 @ 0x1800C5950 (sub_1800C5950.c)
 *     sub_1800C76B0 @ 0x1800C76B0 (sub_1800C76B0.c)
 *     sub_1800C9E00 @ 0x1800C9E00 (sub_1800C9E00.c)
 *     sub_1800CB9B0 @ 0x1800CB9B0 (sub_1800CB9B0.c)
 *     sub_1800CBBFC @ 0x1800CBBFC (sub_1800CBBFC.c)
 *     sub_1800CD298 @ 0x1800CD298 (sub_1800CD298.c)
 *     sub_1800CD8AC @ 0x1800CD8AC (sub_1800CD8AC.c)
 *     sub_1800CDC58 @ 0x1800CDC58 (sub_1800CDC58.c)
 *     sub_1800CDE90 @ 0x1800CDE90 (sub_1800CDE90.c)
 *     sub_1800CE190 @ 0x1800CE190 (sub_1800CE190.c)
 *     sub_1800CECC0 @ 0x1800CECC0 (sub_1800CECC0.c)
 *     sub_1800CFF50 @ 0x1800CFF50 (sub_1800CFF50.c)
 *     sub_1800D06A4 @ 0x1800D06A4 (sub_1800D06A4.c)
 *     sub_1800D3ACC @ 0x1800D3ACC (sub_1800D3ACC.c)
 *     sub_1800D4730 @ 0x1800D4730 (sub_1800D4730.c)
 *     sub_1800D49D0 @ 0x1800D49D0 (sub_1800D49D0.c)
 *     sub_1800D4DD0 @ 0x1800D4DD0 (sub_1800D4DD0.c)
 *     sub_1800D55C0 @ 0x1800D55C0 (sub_1800D55C0.c)
 *     sub_1800D5EA0 @ 0x1800D5EA0 (sub_1800D5EA0.c)
 *     sub_1800D635C @ 0x1800D635C (sub_1800D635C.c)
 *     sub_1800D665C @ 0x1800D665C (sub_1800D665C.c)
 *     sub_1800D71F0 @ 0x1800D71F0 (sub_1800D71F0.c)
 *     sub_1800D7480 @ 0x1800D7480 (sub_1800D7480.c)
 *     sub_1800D7720 @ 0x1800D7720 (sub_1800D7720.c)
 *     sub_1800D79D0 @ 0x1800D79D0 (sub_1800D79D0.c)
 *     sub_1800D7DB0 @ 0x1800D7DB0 (sub_1800D7DB0.c)
 *     sub_1800D85E8 @ 0x1800D85E8 (sub_1800D85E8.c)
 *     sub_1800D875C @ 0x1800D875C (sub_1800D875C.c)
 *     sub_1800D9280 @ 0x1800D9280 (sub_1800D9280.c)
 *     sub_1800D9AF0 @ 0x1800D9AF0 (sub_1800D9AF0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800C589C(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 4256);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
