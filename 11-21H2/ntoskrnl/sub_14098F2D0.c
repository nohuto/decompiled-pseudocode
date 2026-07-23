/*
 * XREFs of sub_14098F2D0 @ 0x14098F2D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14098F3B8 @ 0x14098F3B8 (sub_14098F3B8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14098F2D0(PVOID P)
{
  sub_14098F3B8();
  ExFreePoolWithTag(P, 0x206D654Du);
}
