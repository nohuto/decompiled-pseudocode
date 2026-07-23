/*
 * XREFs of sub_1406EBA90 @ 0x1406EBA90
 * Callers:
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_14079D7A8 @ 0x14079D7A8 (sub_14079D7A8.c)
 *     sub_14097ECFC @ 0x14097ECFC (sub_14097ECFC.c)
 *     sub_1409800F4 @ 0x1409800F4 (sub_1409800F4.c)
 *     sub_140980B94 @ 0x140980B94 (sub_140980B94.c)
 * Callees:
 *     sub_14030E280 @ 0x14030E280 (sub_14030E280.c)
 *     sub_14097EFF0 @ 0x14097EFF0 (sub_14097EFF0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406EBA90(__int64 a1)
{
  unsigned __int64 v1; // rax
  void *v2; // rbx

  v1 = sub_14030E280(a1, 128);
  v2 = (void *)v1;
  if ( v1 )
  {
    sub_14097EFF0(v1);
    ExFreePoolWithTag(v2, 0);
  }
}
