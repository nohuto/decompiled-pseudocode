/*
 * XREFs of RtlIsGenericTableEmptyAvl @ 0x14031E890
 * Callers:
 *     PiLookupInDDBCache @ 0x140692D24 (PiLookupInDDBCache.c)
 *     PiPnpRtlEndOperation @ 0x1407887CC (PiPnpRtlEndOperation.c)
 *     PiDqQueryFreeActiveData @ 0x1407DFD48 (PiDqQueryFreeActiveData.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsGenericTableEmptyAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements == 0;
}
