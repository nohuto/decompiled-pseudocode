/*
 * XREFs of sub_14020B698 @ 0x14020B698
 * Callers:
 *     sub_14068DA14 @ 0x14068DA14 (sub_14068DA14.c)
 *     sub_1408575AC @ 0x1408575AC (sub_1408575AC.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall sub_14020B698(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, Tag);
}
