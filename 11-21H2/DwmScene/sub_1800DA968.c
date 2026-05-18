/*
 * XREFs of sub_1800DA968 @ 0x1800DA968
 * Callers:
 *     sub_180011740 @ 0x180011740 (sub_180011740.c)
 *     sub_1800D9A3C @ 0x1800D9A3C (sub_1800D9A3C.c)
 *     sub_1800DA800 @ 0x1800DA800 (sub_1800DA800.c)
 *     sub_1800DAA10 @ 0x1800DAA10 (sub_1800DAA10.c)
 *     sub_1800DD530 @ 0x1800DD530 (sub_1800DD530.c)
 *     sub_1800E1120 @ 0x1800E1120 (sub_1800E1120.c)
 *     sub_1800E1690 @ 0x1800E1690 (sub_1800E1690.c)
 *     sub_1800E2380 @ 0x1800E2380 (sub_1800E2380.c)
 *     sub_1800E2680 @ 0x1800E2680 (sub_1800E2680.c)
 *     sub_1800E3D8C @ 0x1800E3D8C (sub_1800E3D8C.c)
 *     sub_1800E4630 @ 0x1800E4630 (sub_1800E4630.c)
 *     sub_1800E4AE8 @ 0x1800E4AE8 (sub_1800E4AE8.c)
 *     sub_1800E4DA0 @ 0x1800E4DA0 (sub_1800E4DA0.c)
 *     sub_1800E51F0 @ 0x1800E51F0 (sub_1800E51F0.c)
 *     sub_1800E5DE4 @ 0x1800E5DE4 (sub_1800E5DE4.c)
 *     sub_1800E7220 @ 0x1800E7220 (sub_1800E7220.c)
 *     sub_1800E7878 @ 0x1800E7878 (sub_1800E7878.c)
 *     sub_1800EB468 @ 0x1800EB468 (sub_1800EB468.c)
 *     sub_1800EC130 @ 0x1800EC130 (sub_1800EC130.c)
 *     sub_1800EC480 @ 0x1800EC480 (sub_1800EC480.c)
 *     sub_1800EC9B0 @ 0x1800EC9B0 (sub_1800EC9B0.c)
 *     sub_1800ED330 @ 0x1800ED330 (sub_1800ED330.c)
 *     sub_1800EDBD0 @ 0x1800EDBD0 (sub_1800EDBD0.c)
 *     sub_1800EE3C8 @ 0x1800EE3C8 (sub_1800EE3C8.c)
 *     sub_1800EE7A4 @ 0x1800EE7A4 (sub_1800EE7A4.c)
 *     sub_1800EF960 @ 0x1800EF960 (sub_1800EF960.c)
 *     sub_1800EFC50 @ 0x1800EFC50 (sub_1800EFC50.c)
 *     sub_1800EFF90 @ 0x1800EFF90 (sub_1800EFF90.c)
 *     sub_1800F02D0 @ 0x1800F02D0 (sub_1800F02D0.c)
 *     sub_1800F0750 @ 0x1800F0750 (sub_1800F0750.c)
 *     sub_1800F110C @ 0x1800F110C (sub_1800F110C.c)
 *     sub_1800F1278 @ 0x1800F1278 (sub_1800F1278.c)
 *     sub_1800F1F50 @ 0x1800F1F50 (sub_1800F1F50.c)
 *     sub_1800F2C64 @ 0x1800F2C64 (sub_1800F2C64.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800DA968(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 4256);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
