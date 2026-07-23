/*
 * XREFs of MmAllocateMappingAddress @ 0x1407F9D30
 * Callers:
 *     sub_1403D735C @ 0x1403D735C (sub_1403D735C.c)
 *     sub_14054B14C @ 0x14054B14C (sub_14054B14C.c)
 *     sub_140AFD7A4 @ 0x140AFD7A4 (sub_140AFD7A4.c)
 *     sub_140B1DE58 @ 0x140B1DE58 (sub_140B1DE58.c)
 *     sub_140B1DEB4 @ 0x140B1DEB4 (sub_140B1DEB4.c)
 * Callees:
 *     MmAllocateMappingAddressEx @ 0x1407F9D50 (MmAllocateMappingAddressEx.c)
 */

PVOID __stdcall MmAllocateMappingAddress(SIZE_T NumberOfBytes, ULONG PoolTag)
{
  return (PVOID)MmAllocateMappingAddressEx(NumberOfBytes, PoolTag, 0LL);
}
