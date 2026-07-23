/*
 * XREFs of sub_140A03F90 @ 0x140A03F90
 * Callers:
 *     sub_140654BB0 @ 0x140654BB0 (sub_140654BB0.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall sub_140A03F90(__int64 a1, int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x636D6650u);
}
