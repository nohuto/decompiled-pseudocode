/*
 * XREFs of SepRmCapPoolExpand @ 0x1405F5CE4
 * Callers:
 *     SepReadAndPopulateCapes @ 0x14085D7FC (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x1409CF26C (SepReadAndInsertCaps.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall SepRmCapPoolExpand(void *a1, __int64 a2)
{
  ExFreePoolWithTag(a1, 0x70536553u);
  return ExAllocatePool2(256LL, a2, 1884513619LL);
}
