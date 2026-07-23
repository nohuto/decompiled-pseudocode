/*
 * XREFs of sub_140260C2C @ 0x140260C2C
 * Callers:
 *     sub_1406EC47C @ 0x1406EC47C (sub_1406EC47C.c)
 *     sub_1406ED260 @ 0x1406ED260 (sub_1406ED260.c)
 *     sub_1406ED450 @ 0x1406ED450 (sub_1406ED450.c)
 *     sub_1406ED528 @ 0x1406ED528 (sub_1406ED528.c)
 *     sub_1406ED88C @ 0x1406ED88C (sub_1406ED88C.c)
 *     sub_1409D3EC0 @ 0x1409D3EC0 (sub_1409D3EC0.c)
 *     sub_1409D43FC @ 0x1409D43FC (sub_1409D43FC.c)
 *     sub_1409D4BC0 @ 0x1409D4BC0 (sub_1409D4BC0.c)
 *     sub_1409D5860 @ 0x1409D5860 (sub_1409D5860.c)
 *     sub_1409D5FA4 @ 0x1409D5FA4 (sub_1409D5FA4.c)
 *     sub_1409D618C @ 0x1409D618C (sub_1409D618C.c)
 *     sub_1409D7390 @ 0x1409D7390 (sub_1409D7390.c)
 *     sub_1409D7654 @ 0x1409D7654 (sub_1409D7654.c)
 *     sub_1409D8074 @ 0x1409D8074 (sub_1409D8074.c)
 *     sub_1409D8588 @ 0x1409D8588 (sub_1409D8588.c)
 *     sub_1409D894C @ 0x1409D894C (sub_1409D894C.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall sub_140260C2C(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, Tag);
}
