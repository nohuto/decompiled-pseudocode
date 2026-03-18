/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x140842AA4
 * Callers:
 *     SdbGetStringTagPtr @ 0x140842A24 (SdbGetStringTagPtr.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     SdbpGetMappedTagData @ 0x14075B988 (SdbpGetMappedTagData.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x140842AF4 (SdbpGetStringTableItemFromStringRef.c)
 */

__int64 __fastcall SdbpGetMappedStringFromTable(void *a1)
{
  SdbpGetStringTableItemFromStringRef(a1);
  AslLogCallPrintf(1LL);
  return 0LL;
}
