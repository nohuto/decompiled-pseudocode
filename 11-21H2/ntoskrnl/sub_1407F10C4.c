/*
 * XREFs of sub_1407F10C4 @ 0x1407F10C4
 * Callers:
 *     sub_1407F0070 @ 0x1407F0070 (sub_1407F0070.c)
 *     sub_1407F015C @ 0x1407F015C (sub_1407F015C.c)
 *     sub_1407F0C38 @ 0x1407F0C38 (sub_1407F0C38.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1407F10C4(PVOID *P)
{
  if ( (*(_DWORD *)P & 2) != 0 )
    ExFreePoolWithTag(P[2], 0x54515750u);
  ExFreePoolWithTag(P, 0x54515750u);
}
