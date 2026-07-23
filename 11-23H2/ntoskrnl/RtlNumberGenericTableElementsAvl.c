/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x1402092D0
 * Callers:
 *     PiUpdateDriverDBCache @ 0x140693190 (PiUpdateDriverDBCache.c)
 *     PiDmGetObjectCount @ 0x14095AF10 (PiDmGetObjectCount.c)
 *     VfPtGenerateTraceInformation @ 0x140ADE7F8 (VfPtGenerateTraceInformation.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
