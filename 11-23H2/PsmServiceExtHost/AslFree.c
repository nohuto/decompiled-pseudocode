/*
 * XREFs of AslFree @ 0x180098570
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x180051604 (SdbGetMergeRedirectPath.c)
 *     SdbGetMergeStubPath @ 0x180051A70 (SdbGetMergeStubPath.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x180051E70 (SdbpGetManifestedMergeStubAlloc.c)
 *     AslRegistryGetString @ 0x180052FD0 (AslRegistryGetString.c)
 *     SdbOpenDatabaseEx @ 0x180090084 (SdbOpenDatabaseEx.c)
 *     SdbInitDatabaseEx @ 0x180090A10 (SdbInitDatabaseEx.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall AslFree(void *a1, void *a2)
{
  BOOLEAN result; // al

  if ( a2 )
    return RtlFreeHeap(a1, 0, a2);
  return result;
}
