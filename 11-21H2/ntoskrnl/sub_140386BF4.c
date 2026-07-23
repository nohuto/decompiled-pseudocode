/*
 * XREFs of sub_140386BF4 @ 0x140386BF4
 * Callers:
 *     sub_1407FAAB8 @ 0x1407FAAB8 (sub_1407FAAB8.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140386BF4(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
