/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x1407573E8
 * Callers:
 *     SdbGetStringTagPtr @ 0x140757368 (SdbGetStringTagPtr.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpGetMappedTagData @ 0x14074098C (SdbpGetMappedTagData.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x140757CB4 (SdbpGetStringTableItemFromStringRef.c)
 */

__int64 __fastcall SdbpGetMappedStringFromTable(void *a1)
{
  SdbpGetStringTableItemFromStringRef(a1);
  AslLogCallPrintf(1LL);
  return 0LL;
}
