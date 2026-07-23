/*
 * XREFs of sub_1406D4EFC @ 0x1406D4EFC
 * Callers:
 *     sub_140678A28 @ 0x140678A28 (sub_140678A28.c)
 *     sub_1406D4808 @ 0x1406D4808 (sub_1406D4808.c)
 *     sub_1406D4DF0 @ 0x1406D4DF0 (sub_1406D4DF0.c)
 *     sub_1409B07D4 @ 0x1409B07D4 (sub_1409B07D4.c)
 * Callees:
 *     sub_14024F74C @ 0x14024F74C (sub_14024F74C.c)
 *     sub_14024FB60 @ 0x14024FB60 (sub_14024FB60.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     sub_140366814 @ 0x140366814 (sub_140366814.c)
 */

void __fastcall sub_1406D4EFC(struct _EX_RUNDOWN_REF *a1)
{
  _RTL_BALANCED_NODE *Count; // rcx

  ExWaitForRundownProtectionRelease(a1 + 4);
  sub_14024FB60(a1[5].Count);
  Count = (_RTL_BALANCED_NODE *)a1[6].Count;
  a1[5].Count = 0LL;
  if ( Count )
  {
    sub_14024F74C(Count);
    sub_140366814(a1[6].Count);
    a1[6].Count = 0LL;
  }
}
