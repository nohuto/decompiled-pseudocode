/*
 * XREFs of sub_14096E3A4 @ 0x14096E3A4
 * Callers:
 *     sub_14096E06C @ 0x14096E06C (sub_14096E06C.c)
 *     sub_14096F074 @ 0x14096F074 (sub_14096F074.c)
 * Callees:
 *     sub_140213FA8 @ 0x140213FA8 (sub_140213FA8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14096E3A4(_QWORD *P)
{
  sub_140213FA8(P[4], (unsigned int)(*((_DWORD *)P + 7) - *((_DWORD *)P + 6) + 1));
  ExFreePoolWithTag(P, 0);
}
