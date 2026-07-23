/*
 * XREFs of sub_14040A64C @ 0x14040A64C
 * Callers:
 *     sub_140400210 @ 0x140400210 (sub_140400210.c)
 *     sub_140401470 @ 0x140401470 (sub_140401470.c)
 *     sub_140405BF0 @ 0x140405BF0 (sub_140405BF0.c)
 *     sub_140406130 @ 0x140406130 (sub_140406130.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14040A64C(__int64 a1)
{
  return ((__int64 (*)(void))qword_140006E00[12 * (*(_DWORD *)(a1 + 4) & 3)])();
}
