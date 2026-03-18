/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x1402092D0
 * Callers:
 *     PiUpdateDriverDBCache @ 0x140693190 (PiUpdateDriverDBCache.c)
 *     PiDmGetObjectCount @ 0x14095AD10 (PiDmGetObjectCount.c)
 *     VfPtGenerateTraceInformation @ 0x140ADE808 (VfPtGenerateTraceInformation.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
