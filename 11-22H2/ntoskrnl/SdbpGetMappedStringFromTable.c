/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x1407578F8
 * Callers:
 *     SdbGetStringTagPtr @ 0x140757878 (SdbGetStringTagPtr.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpGetMappedTagData @ 0x140740E9C (SdbpGetMappedTagData.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x1407581C4 (SdbpGetStringTableItemFromStringRef.c)
 */

__int64 __fastcall SdbpGetMappedStringFromTable(void *a1)
{
  SdbpGetStringTableItemFromStringRef(a1);
  AslLogCallPrintf(1LL);
  return 0LL;
}
