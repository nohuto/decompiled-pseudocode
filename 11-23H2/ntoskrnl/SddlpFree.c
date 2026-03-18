/*
 * XREFs of SddlpFree @ 0x1406834B8
 * Callers:
 *     SeConvertStringSidToSid @ 0x14020BA20 (SeConvertStringSidToSid.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
