/*
 * XREFs of sub_14022BA48 @ 0x14022BA48
 * Callers:
 *     sub_14020E464 @ 0x14020E464 (sub_14020E464.c)
 *     sub_14020EC24 @ 0x14020EC24 (sub_14020EC24.c)
 *     sub_14022B980 @ 0x14022B980 (sub_14022B980.c)
 *     sub_1402EE894 @ 0x1402EE894 (sub_1402EE894.c)
 *     sub_140344A30 @ 0x140344A30 (sub_140344A30.c)
 *     sub_14035CAD8 @ 0x14035CAD8 (sub_14035CAD8.c)
 *     sub_1403D30D0 @ 0x1403D30D0 (sub_1403D30D0.c)
 *     KeSetSelectedCpuSetsThread @ 0x140572A90 (KeSetSelectedCpuSetsThread.c)
 *     sub_140574FA4 @ 0x140574FA4 (sub_140574FA4.c)
 * Callees:
 *     HalSendSoftwareInterrupt @ 0x140342650 (HalSendSoftwareInterrupt.c)
 */

__int64 sub_14022BA48()
{
  struct _KPRCB *CurrentPrcb; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  ++*((_DWORD *)CurrentPrcb + 8757);
  return HalSendSoftwareInterrupt();
}
