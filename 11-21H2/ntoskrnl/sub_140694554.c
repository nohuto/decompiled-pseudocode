/*
 * XREFs of sub_140694554 @ 0x140694554
 * Callers:
 *     sub_14021BBE4 @ 0x14021BBE4 (sub_14021BBE4.c)
 *     sub_1403D69E8 @ 0x1403D69E8 (sub_1403D69E8.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall sub_140694554(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6B534C46u);
}
