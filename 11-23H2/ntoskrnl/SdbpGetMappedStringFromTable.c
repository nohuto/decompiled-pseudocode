/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x1407575D8
 * Callers:
 *     SdbGetStringTagPtr @ 0x140757558 (SdbGetStringTagPtr.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpGetMappedTagData @ 0x140740B7C (SdbpGetMappedTagData.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x140757EA4 (SdbpGetStringTableItemFromStringRef.c)
 */

__int64 __fastcall SdbpGetMappedStringFromTable(void *a1)
{
  SdbpGetStringTableItemFromStringRef(a1);
  AslLogCallPrintf(1LL);
  return 0LL;
}
