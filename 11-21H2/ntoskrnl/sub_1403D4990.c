/*
 * XREFs of sub_1403D4990 @ 0x1403D4990
 * Callers:
 *     sub_140851878 @ 0x140851878 (sub_140851878.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall sub_1403D4990(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x74687244u);
}
