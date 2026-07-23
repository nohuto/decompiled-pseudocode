/*
 * XREFs of sub_1405F5CE4 @ 0x1405F5CE4
 * Callers:
 *     sub_14085D7FC @ 0x14085D7FC (sub_14085D7FC.c)
 *     sub_1409CF26C @ 0x1409CF26C (sub_1409CF26C.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1405F5CE4(void *a1, __int64 a2)
{
  ExFreePoolWithTag(a1, 0x70536553u);
  return ExAllocatePool2(256LL, a2, 1884513619LL);
}
