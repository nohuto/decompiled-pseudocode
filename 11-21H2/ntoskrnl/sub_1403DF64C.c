/*
 * XREFs of sub_1403DF64C @ 0x1403DF64C
 * Callers:
 *     sub_1402A1124 @ 0x1402A1124 (sub_1402A1124.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall sub_1403DF64C(SIZE_T NumberOfBytes, ULONG *a2)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, *a2);
}
