/*
 * XREFs of sub_14092BA34 @ 0x14092BA34
 * Callers:
 *     sub_140540798 @ 0x140540798 (sub_140540798.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall sub_14092BA34(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x57676244u);
}
