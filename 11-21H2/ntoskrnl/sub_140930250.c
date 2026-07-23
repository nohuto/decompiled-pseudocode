/*
 * XREFs of sub_140930250 @ 0x140930250
 * Callers:
 *     sub_14064FB60 @ 0x14064FB60 (sub_14064FB60.c)
 *     sub_14064FD74 @ 0x14064FD74 (sub_14064FD74.c)
 *     sub_1406500D8 @ 0x1406500D8 (sub_1406500D8.c)
 *     sub_1406503B0 @ 0x1406503B0 (sub_1406503B0.c)
 *     sub_1406509F8 @ 0x1406509F8 (sub_1406509F8.c)
 *     sub_140650ED8 @ 0x140650ED8 (sub_140650ED8.c)
 *     sub_14065120C @ 0x14065120C (sub_14065120C.c)
 *     sub_14065193C @ 0x14065193C (sub_14065193C.c)
 *     sub_140652118 @ 0x140652118 (sub_140652118.c)
 *     sub_14065253C @ 0x14065253C (sub_14065253C.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall sub_140930250(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x54506F49u);
}
