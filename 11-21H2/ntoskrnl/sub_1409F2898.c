/*
 * XREFs of sub_1409F2898 @ 0x1409F2898
 * Callers:
 *     sub_1409EF4C4 @ 0x1409EF4C4 (sub_1409EF4C4.c)
 *     sub_1409F12F0 @ 0x1409F12F0 (sub_1409F12F0.c)
 *     sub_1409F26E8 @ 0x1409F26E8 (sub_1409F26E8.c)
 *     sub_1409F2984 @ 0x1409F2984 (sub_1409F2984.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409F2898(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[3];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x56777445u);
    P[3] = 0LL;
  }
  ExFreePoolWithTag(P, 0x56777445u);
}
