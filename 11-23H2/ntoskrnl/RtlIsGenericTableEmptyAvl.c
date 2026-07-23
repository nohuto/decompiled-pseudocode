/*
 * XREFs of RtlIsGenericTableEmptyAvl @ 0x14031EB20
 * Callers:
 *     PiLookupInDDBCache @ 0x140692D24 (PiLookupInDDBCache.c)
 *     PiPnpRtlEndOperation @ 0x1407889BC (PiPnpRtlEndOperation.c)
 *     PiDqQueryFreeActiveData @ 0x1407E0018 (PiDqQueryFreeActiveData.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsGenericTableEmptyAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements == 0;
}
