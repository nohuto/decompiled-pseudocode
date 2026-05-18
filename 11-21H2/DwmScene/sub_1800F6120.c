/*
 * XREFs of sub_1800F6120 @ 0x1800F6120
 * Callers:
 *     sub_1800F69A0 @ 0x1800F69A0 (sub_1800F69A0.c)
 * Callees:
 *     sub_18001FE44 @ 0x18001FE44 (sub_18001FE44.c)
 */

char __fastcall sub_1800F6120(char *a1, _QWORD *a2)
{
  return sub_18001FE44(a1, a2) ^ 1;
}
