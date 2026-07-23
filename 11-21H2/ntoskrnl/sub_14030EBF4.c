/*
 * XREFs of sub_14030EBF4 @ 0x14030EBF4
 * Callers:
 *     sub_1407A4C90 @ 0x1407A4C90 (sub_1407A4C90.c)
 *     sub_1407B99C0 @ 0x1407B99C0 (sub_1407B99C0.c)
 *     sub_1407B9FA0 @ 0x1407B9FA0 (sub_1407B9FA0.c)
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 *     sub_1407BE3C0 @ 0x1407BE3C0 (sub_1407BE3C0.c)
 *     MmSetGraphicsPtes @ 0x14096B560 (MmSetGraphicsPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14030EBF4(__int64 a1)
{
  return qword_1400161D0[(*(_DWORD *)(a1 + 48) >> 19) & 3];
}
