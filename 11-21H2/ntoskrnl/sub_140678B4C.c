/*
 * XREFs of sub_140678B4C @ 0x140678B4C
 * Callers:
 *     sub_140678AEC @ 0x140678AEC (sub_140678AEC.c)
 *     sub_140679480 @ 0x140679480 (sub_140679480.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_1409B062C @ 0x1409B062C (sub_1409B062C.c)
 *     sub_1409B0A5C @ 0x1409B0A5C (sub_1409B0A5C.c)
 * Callees:
 *     sub_140678C2C @ 0x140678C2C (sub_140678C2C.c)
 *     sub_140724DC8 @ 0x140724DC8 (sub_140724DC8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140678B4C(PVOID *P, unsigned int a2)
{
  PVOID v3; // rcx

  sub_140678C2C(a2);
  sub_140724DC8(*P);
  v3 = P[3];
  if ( v3 )
    ExFreePoolWithTag(v3, 0x624A7350u);
  ExFreePoolWithTag(P, 0x624A7350u);
}
