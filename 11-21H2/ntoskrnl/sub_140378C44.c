/*
 * XREFs of sub_140378C44 @ 0x140378C44
 * Callers:
 *     sub_1407F8FE0 @ 0x1407F8FE0 (sub_1407F8FE0.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x140263730 (KeQueryNodeActiveAffinity.c)
 */

void __fastcall sub_140378C44(USHORT a1, _GROUP_AFFINITY *a2, USHORT *a3)
{
  KeQueryNodeActiveAffinity(a1, a2, a3);
}
