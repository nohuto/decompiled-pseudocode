/*
 * XREFs of SepRmCapPoolExpand @ 0x1405B9884
 * Callers:
 *     SepReadAndPopulateCapes @ 0x14085D01C (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x1409D1D0C (SepReadAndInsertCaps.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepRmCapPoolExpand(void *a1, __int64 a2)
{
  ExFreePoolWithTag(a1, 0x70536553u);
  return ExAllocatePool2(256LL, a2, 1884513619LL);
}
