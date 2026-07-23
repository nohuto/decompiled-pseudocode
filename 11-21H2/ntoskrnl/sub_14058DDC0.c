/*
 * XREFs of sub_14058DDC0 @ 0x14058DDC0
 * Callers:
 *     sub_1403D981C @ 0x1403D981C (sub_1403D981C.c)
 *     sub_1409B3490 @ 0x1409B3490 (sub_1409B3490.c)
 * Callees:
 *     sub_1405BDFF8 @ 0x1405BDFF8 (sub_1405BDFF8.c)
 *     sub_1405BE340 @ 0x1405BE340 (sub_1405BE340.c)
 *     sub_14096C2FC @ 0x14096C2FC (sub_14096C2FC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14058DDC0(unsigned __int16 *P)
{
  unsigned __int16 v1; // bx

  v1 = *P;
  sub_1405BE340();
  sub_1405BDFF8(P);
  sub_14096C2FC(v1);
  ExFreePoolWithTag(P, 0);
}
