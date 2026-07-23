/*
 * XREFs of RtlLookupElementGenericTable @ 0x18006A440
 * Callers:
 *     <none>
 * Callees:
 *     RtlLookupElementGenericTableFull @ 0x18006A470 (RtlLookupElementGenericTableFull.c)
 */

PVOID __cdecl RtlLookupElementGenericTable(PRTL_GENERIC_TABLE Table, PVOID Buffer)
{
  TABLE_SEARCH_RESULT SearchResult; // [rsp+40h] [rbp+18h] BYREF
  PVOID NodeOrParent; // [rsp+48h] [rbp+20h] BYREF

  return RtlLookupElementGenericTableFull(Table, Buffer, &NodeOrParent, &SearchResult);
}
