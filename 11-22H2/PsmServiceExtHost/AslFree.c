/*
 * XREFs of AslFree @ 0x1800988D0
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x180051804 (SdbGetMergeRedirectPath.c)
 *     SdbGetMergeStubPath @ 0x180051C70 (SdbGetMergeStubPath.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x180052070 (SdbpGetManifestedMergeStubAlloc.c)
 *     AslRegistryGetString @ 0x1800531D0 (AslRegistryGetString.c)
 *     SdbOpenDatabaseEx @ 0x1800903E4 (SdbOpenDatabaseEx.c)
 *     SdbInitDatabaseEx @ 0x180090D70 (SdbInitDatabaseEx.c)
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
