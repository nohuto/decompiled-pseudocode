/*
 * XREFs of MmAllocateContiguousMemory @ 0x140585380
 * Callers:
 *     sub_1406167A0 @ 0x1406167A0 (sub_1406167A0.c)
 * Callees:
 *     sub_140214244 @ 0x140214244 (sub_140214244.c)
 */

PVOID __stdcall MmAllocateContiguousMemory(SIZE_T NumberOfBytes, PHYSICAL_ADDRESS HighestAcceptableAddress)
{
  unsigned __int64 v2; // rdx
  SIZE_T v4; // [rsp+60h] [rbp+8h] BYREF

  v4 = NumberOfBytes;
  v2 = (unsigned __int64)HighestAcceptableAddress.QuadPart >> 12;
  if ( v2 > qword_140C50840 )
    v2 = qword_140C50840;
  return (PVOID)sub_140214244(&v4, 0LL, v2, 0LL, 6u, 0x80000000, &StartContext, 0x546E6F43u, 0);
}
