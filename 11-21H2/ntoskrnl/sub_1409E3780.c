/*
 * XREFs of sub_1409E3780 @ 0x1409E3780
 * Callers:
 *     <none>
 * Callees:
 *     sub_1409E2E90 @ 0x1409E2E90 (sub_1409E2E90.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409E3780(_QWORD *a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1[4];
  ExFreePoolWithTag(a1, 0);
  sub_1409E2E90(0LL, v1);
}
