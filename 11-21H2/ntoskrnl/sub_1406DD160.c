/*
 * XREFs of sub_1406DD160 @ 0x1406DD160
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall sub_1406DD160(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x6370726Bu);
}
