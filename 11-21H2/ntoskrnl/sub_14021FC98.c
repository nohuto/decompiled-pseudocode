/*
 * XREFs of sub_14021FC98 @ 0x14021FC98
 * Callers:
 *     RtlExpandHashTable @ 0x140206C60 (RtlExpandHashTable.c)
 *     sub_14021FB10 @ 0x14021FB10 (sub_14021FB10.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall sub_14021FC98(char a1)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(16 << (a1 + 7)), 0x62615448u);
}
