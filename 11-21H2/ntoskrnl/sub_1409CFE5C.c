/*
 * XREFs of sub_1409CFE5C @ 0x1409CFE5C
 * Callers:
 *     SeConvertStringSidToSid @ 0x1403CBD40 (SeConvertStringSidToSid.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409CFE5C(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
